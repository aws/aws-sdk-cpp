/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/devicefarm/DeviceFarmClient.h>
#include <aws/devicefarm/DeviceFarmEndpoint.h>
#include <aws/devicefarm/DeviceFarmErrorMarshaller.h>
#include <aws/devicefarm/model/CreateDevicePoolRequest.h>
#include <aws/devicefarm/model/CreateInstanceProfileRequest.h>
#include <aws/devicefarm/model/CreateNetworkProfileRequest.h>
#include <aws/devicefarm/model/CreateProjectRequest.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/CreateTestGridProjectRequest.h>
#include <aws/devicefarm/model/CreateTestGridUrlRequest.h>
#include <aws/devicefarm/model/CreateUploadRequest.h>
#include <aws/devicefarm/model/CreateVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/DeleteDevicePoolRequest.h>
#include <aws/devicefarm/model/DeleteInstanceProfileRequest.h>
#include <aws/devicefarm/model/DeleteNetworkProfileRequest.h>
#include <aws/devicefarm/model/DeleteProjectRequest.h>
#include <aws/devicefarm/model/DeleteRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/DeleteRunRequest.h>
#include <aws/devicefarm/model/DeleteTestGridProjectRequest.h>
#include <aws/devicefarm/model/DeleteUploadRequest.h>
#include <aws/devicefarm/model/DeleteVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/GetAccountSettingsRequest.h>
#include <aws/devicefarm/model/GetDeviceRequest.h>
#include <aws/devicefarm/model/GetDeviceInstanceRequest.h>
#include <aws/devicefarm/model/GetDevicePoolRequest.h>
#include <aws/devicefarm/model/GetDevicePoolCompatibilityRequest.h>
#include <aws/devicefarm/model/GetInstanceProfileRequest.h>
#include <aws/devicefarm/model/GetJobRequest.h>
#include <aws/devicefarm/model/GetNetworkProfileRequest.h>
#include <aws/devicefarm/model/GetOfferingStatusRequest.h>
#include <aws/devicefarm/model/GetProjectRequest.h>
#include <aws/devicefarm/model/GetRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/GetRunRequest.h>
#include <aws/devicefarm/model/GetSuiteRequest.h>
#include <aws/devicefarm/model/GetTestRequest.h>
#include <aws/devicefarm/model/GetTestGridProjectRequest.h>
#include <aws/devicefarm/model/GetTestGridSessionRequest.h>
#include <aws/devicefarm/model/GetUploadRequest.h>
#include <aws/devicefarm/model/GetVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/InstallToRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/ListArtifactsRequest.h>
#include <aws/devicefarm/model/ListDeviceInstancesRequest.h>
#include <aws/devicefarm/model/ListDevicePoolsRequest.h>
#include <aws/devicefarm/model/ListDevicesRequest.h>
#include <aws/devicefarm/model/ListInstanceProfilesRequest.h>
#include <aws/devicefarm/model/ListJobsRequest.h>
#include <aws/devicefarm/model/ListNetworkProfilesRequest.h>
#include <aws/devicefarm/model/ListOfferingPromotionsRequest.h>
#include <aws/devicefarm/model/ListOfferingTransactionsRequest.h>
#include <aws/devicefarm/model/ListOfferingsRequest.h>
#include <aws/devicefarm/model/ListProjectsRequest.h>
#include <aws/devicefarm/model/ListRemoteAccessSessionsRequest.h>
#include <aws/devicefarm/model/ListRunsRequest.h>
#include <aws/devicefarm/model/ListSamplesRequest.h>
#include <aws/devicefarm/model/ListSuitesRequest.h>
#include <aws/devicefarm/model/ListTagsForResourceRequest.h>
#include <aws/devicefarm/model/ListTestGridProjectsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionArtifactsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionsRequest.h>
#include <aws/devicefarm/model/ListTestsRequest.h>
#include <aws/devicefarm/model/ListUniqueProblemsRequest.h>
#include <aws/devicefarm/model/ListUploadsRequest.h>
#include <aws/devicefarm/model/ListVPCEConfigurationsRequest.h>
#include <aws/devicefarm/model/PurchaseOfferingRequest.h>
#include <aws/devicefarm/model/RenewOfferingRequest.h>
#include <aws/devicefarm/model/ScheduleRunRequest.h>
#include <aws/devicefarm/model/StopJobRequest.h>
#include <aws/devicefarm/model/StopRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/StopRunRequest.h>
#include <aws/devicefarm/model/TagResourceRequest.h>
#include <aws/devicefarm/model/UntagResourceRequest.h>
#include <aws/devicefarm/model/UpdateDeviceInstanceRequest.h>
#include <aws/devicefarm/model/UpdateDevicePoolRequest.h>
#include <aws/devicefarm/model/UpdateInstanceProfileRequest.h>
#include <aws/devicefarm/model/UpdateNetworkProfileRequest.h>
#include <aws/devicefarm/model/UpdateProjectRequest.h>
#include <aws/devicefarm/model/UpdateTestGridProjectRequest.h>
#include <aws/devicefarm/model/UpdateUploadRequest.h>
#include <aws/devicefarm/model/UpdateVPCEConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DeviceFarm;
using namespace Aws::DeviceFarm::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "devicefarm";
static const char* ALLOCATION_TAG = "DeviceFarmClient";

DeviceFarmClient::DeviceFarmClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::~DeviceFarmClient()
{
}

void DeviceFarmClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Device Farm");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DeviceFarmEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DeviceFarmClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateDevicePoolOutcome DeviceFarmClient::CreateDevicePool(const CreateDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDevicePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDevicePoolOutcomeCallable DeviceFarmClient::CreateDevicePoolCallable(const CreateDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateDevicePoolAsyncHelper(DeviceFarmClient const * const clientThis, const CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDevicePool(request), context);
}

void DeviceFarmClient::CreateDevicePoolAsync(const CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateDevicePoolAsyncHelper( this, request, handler, context ); } );
}

CreateInstanceProfileOutcome DeviceFarmClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceProfileOutcomeCallable DeviceFarmClient::CreateInstanceProfileCallable(const CreateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateInstanceProfileAsyncHelper(DeviceFarmClient const * const clientThis, const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstanceProfile(request), context);
}

void DeviceFarmClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

CreateNetworkProfileOutcome DeviceFarmClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkProfileOutcomeCallable DeviceFarmClient::CreateNetworkProfileCallable(const CreateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateNetworkProfileAsyncHelper(DeviceFarmClient const * const clientThis, const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNetworkProfile(request), context);
}

void DeviceFarmClient::CreateNetworkProfileAsync(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome DeviceFarmClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable DeviceFarmClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateProjectAsyncHelper(DeviceFarmClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void DeviceFarmClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateRemoteAccessSessionOutcome DeviceFarmClient::CreateRemoteAccessSession(const CreateRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRemoteAccessSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRemoteAccessSessionOutcomeCallable DeviceFarmClient::CreateRemoteAccessSessionCallable(const CreateRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateRemoteAccessSessionAsyncHelper(DeviceFarmClient const * const clientThis, const CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRemoteAccessSession(request), context);
}

void DeviceFarmClient::CreateRemoteAccessSessionAsync(const CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateRemoteAccessSessionAsyncHelper( this, request, handler, context ); } );
}

CreateTestGridProjectOutcome DeviceFarmClient::CreateTestGridProject(const CreateTestGridProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTestGridProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTestGridProjectOutcomeCallable DeviceFarmClient::CreateTestGridProjectCallable(const CreateTestGridProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTestGridProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTestGridProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateTestGridProjectAsyncHelper(DeviceFarmClient const * const clientThis, const CreateTestGridProjectRequest& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTestGridProject(request), context);
}

void DeviceFarmClient::CreateTestGridProjectAsync(const CreateTestGridProjectRequest& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateTestGridProjectAsyncHelper( this, request, handler, context ); } );
}

CreateTestGridUrlOutcome DeviceFarmClient::CreateTestGridUrl(const CreateTestGridUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTestGridUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTestGridUrlOutcomeCallable DeviceFarmClient::CreateTestGridUrlCallable(const CreateTestGridUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTestGridUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTestGridUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateTestGridUrlAsyncHelper(DeviceFarmClient const * const clientThis, const CreateTestGridUrlRequest& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTestGridUrl(request), context);
}

void DeviceFarmClient::CreateTestGridUrlAsync(const CreateTestGridUrlRequest& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateTestGridUrlAsyncHelper( this, request, handler, context ); } );
}

CreateUploadOutcome DeviceFarmClient::CreateUpload(const CreateUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUploadOutcomeCallable DeviceFarmClient::CreateUploadCallable(const CreateUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateUploadAsyncHelper(DeviceFarmClient const * const clientThis, const CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUpload(request), context);
}

void DeviceFarmClient::CreateUploadAsync(const CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateUploadAsyncHelper( this, request, handler, context ); } );
}

CreateVPCEConfigurationOutcome DeviceFarmClient::CreateVPCEConfiguration(const CreateVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVPCEConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVPCEConfigurationOutcomeCallable DeviceFarmClient::CreateVPCEConfigurationCallable(const CreateVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientCreateVPCEConfigurationAsyncHelper(DeviceFarmClient const * const clientThis, const CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVPCEConfiguration(request), context);
}

void DeviceFarmClient::CreateVPCEConfigurationAsync(const CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientCreateVPCEConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteDevicePoolOutcome DeviceFarmClient::DeleteDevicePool(const DeleteDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDevicePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDevicePoolOutcomeCallable DeviceFarmClient::DeleteDevicePoolCallable(const DeleteDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteDevicePoolAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDevicePool(request), context);
}

void DeviceFarmClient::DeleteDevicePoolAsync(const DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteDevicePoolAsyncHelper( this, request, handler, context ); } );
}

DeleteInstanceProfileOutcome DeviceFarmClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceProfileOutcomeCallable DeviceFarmClient::DeleteInstanceProfileCallable(const DeleteInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteInstanceProfileAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstanceProfile(request), context);
}

void DeviceFarmClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteNetworkProfileOutcome DeviceFarmClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkProfileOutcomeCallable DeviceFarmClient::DeleteNetworkProfileCallable(const DeleteNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteNetworkProfileAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNetworkProfile(request), context);
}

void DeviceFarmClient::DeleteNetworkProfileAsync(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome DeviceFarmClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable DeviceFarmClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteProjectAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void DeviceFarmClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteRemoteAccessSessionOutcome DeviceFarmClient::DeleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRemoteAccessSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRemoteAccessSessionOutcomeCallable DeviceFarmClient::DeleteRemoteAccessSessionCallable(const DeleteRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteRemoteAccessSessionAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRemoteAccessSession(request), context);
}

void DeviceFarmClient::DeleteRemoteAccessSessionAsync(const DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteRemoteAccessSessionAsyncHelper( this, request, handler, context ); } );
}

DeleteRunOutcome DeviceFarmClient::DeleteRun(const DeleteRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRunOutcomeCallable DeviceFarmClient::DeleteRunCallable(const DeleteRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteRunAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRun(request), context);
}

void DeviceFarmClient::DeleteRunAsync(const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteRunAsyncHelper( this, request, handler, context ); } );
}

DeleteTestGridProjectOutcome DeviceFarmClient::DeleteTestGridProject(const DeleteTestGridProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTestGridProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTestGridProjectOutcomeCallable DeviceFarmClient::DeleteTestGridProjectCallable(const DeleteTestGridProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTestGridProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTestGridProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteTestGridProjectAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteTestGridProjectRequest& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTestGridProject(request), context);
}

void DeviceFarmClient::DeleteTestGridProjectAsync(const DeleteTestGridProjectRequest& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteTestGridProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteUploadOutcome DeviceFarmClient::DeleteUpload(const DeleteUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUploadOutcomeCallable DeviceFarmClient::DeleteUploadCallable(const DeleteUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteUploadAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUpload(request), context);
}

void DeviceFarmClient::DeleteUploadAsync(const DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteUploadAsyncHelper( this, request, handler, context ); } );
}

DeleteVPCEConfigurationOutcome DeviceFarmClient::DeleteVPCEConfiguration(const DeleteVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVPCEConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVPCEConfigurationOutcomeCallable DeviceFarmClient::DeleteVPCEConfigurationCallable(const DeleteVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientDeleteVPCEConfigurationAsyncHelper(DeviceFarmClient const * const clientThis, const DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVPCEConfiguration(request), context);
}

void DeviceFarmClient::DeleteVPCEConfigurationAsync(const DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientDeleteVPCEConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetAccountSettingsOutcome DeviceFarmClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountSettingsOutcomeCallable DeviceFarmClient::GetAccountSettingsCallable(const GetAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetAccountSettingsAsyncHelper(DeviceFarmClient const * const clientThis, const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountSettings(request), context);
}

void DeviceFarmClient::GetAccountSettingsAsync(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetAccountSettingsAsyncHelper( this, request, handler, context ); } );
}

GetDeviceOutcome DeviceFarmClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcomeCallable DeviceFarmClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetDeviceAsyncHelper(DeviceFarmClient const * const clientThis, const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevice(request), context);
}

void DeviceFarmClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetDeviceAsyncHelper( this, request, handler, context ); } );
}

GetDeviceInstanceOutcome DeviceFarmClient::GetDeviceInstance(const GetDeviceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeviceInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceInstanceOutcomeCallable DeviceFarmClient::GetDeviceInstanceCallable(const GetDeviceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetDeviceInstanceAsyncHelper(DeviceFarmClient const * const clientThis, const GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeviceInstance(request), context);
}

void DeviceFarmClient::GetDeviceInstanceAsync(const GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetDeviceInstanceAsyncHelper( this, request, handler, context ); } );
}

GetDevicePoolOutcome DeviceFarmClient::GetDevicePool(const GetDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDevicePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePoolOutcomeCallable DeviceFarmClient::GetDevicePoolCallable(const GetDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetDevicePoolAsyncHelper(DeviceFarmClient const * const clientThis, const GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevicePool(request), context);
}

void DeviceFarmClient::GetDevicePoolAsync(const GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetDevicePoolAsyncHelper( this, request, handler, context ); } );
}

GetDevicePoolCompatibilityOutcome DeviceFarmClient::GetDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDevicePoolCompatibilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePoolCompatibilityOutcomeCallable DeviceFarmClient::GetDevicePoolCompatibilityCallable(const GetDevicePoolCompatibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePoolCompatibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePoolCompatibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetDevicePoolCompatibilityAsyncHelper(DeviceFarmClient const * const clientThis, const GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevicePoolCompatibility(request), context);
}

void DeviceFarmClient::GetDevicePoolCompatibilityAsync(const GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetDevicePoolCompatibilityAsyncHelper( this, request, handler, context ); } );
}

GetInstanceProfileOutcome DeviceFarmClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceProfileOutcomeCallable DeviceFarmClient::GetInstanceProfileCallable(const GetInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetInstanceProfileAsyncHelper(DeviceFarmClient const * const clientThis, const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceProfile(request), context);
}

void DeviceFarmClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

GetJobOutcome DeviceFarmClient::GetJob(const GetJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable DeviceFarmClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetJobAsyncHelper(DeviceFarmClient const * const clientThis, const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJob(request), context);
}

void DeviceFarmClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetJobAsyncHelper( this, request, handler, context ); } );
}

GetNetworkProfileOutcome DeviceFarmClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkProfileOutcomeCallable DeviceFarmClient::GetNetworkProfileCallable(const GetNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetNetworkProfileAsyncHelper(DeviceFarmClient const * const clientThis, const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkProfile(request), context);
}

void DeviceFarmClient::GetNetworkProfileAsync(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

GetOfferingStatusOutcome DeviceFarmClient::GetOfferingStatus(const GetOfferingStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOfferingStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOfferingStatusOutcomeCallable DeviceFarmClient::GetOfferingStatusCallable(const GetOfferingStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOfferingStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOfferingStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetOfferingStatusAsyncHelper(DeviceFarmClient const * const clientThis, const GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOfferingStatus(request), context);
}

void DeviceFarmClient::GetOfferingStatusAsync(const GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetOfferingStatusAsyncHelper( this, request, handler, context ); } );
}

GetProjectOutcome DeviceFarmClient::GetProject(const GetProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProjectOutcomeCallable DeviceFarmClient::GetProjectCallable(const GetProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetProjectAsyncHelper(DeviceFarmClient const * const clientThis, const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProject(request), context);
}

void DeviceFarmClient::GetProjectAsync(const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetProjectAsyncHelper( this, request, handler, context ); } );
}

GetRemoteAccessSessionOutcome DeviceFarmClient::GetRemoteAccessSession(const GetRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRemoteAccessSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRemoteAccessSessionOutcomeCallable DeviceFarmClient::GetRemoteAccessSessionCallable(const GetRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetRemoteAccessSessionAsyncHelper(DeviceFarmClient const * const clientThis, const GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRemoteAccessSession(request), context);
}

void DeviceFarmClient::GetRemoteAccessSessionAsync(const GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetRemoteAccessSessionAsyncHelper( this, request, handler, context ); } );
}

GetRunOutcome DeviceFarmClient::GetRun(const GetRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRunOutcomeCallable DeviceFarmClient::GetRunCallable(const GetRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetRunAsyncHelper(DeviceFarmClient const * const clientThis, const GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRun(request), context);
}

void DeviceFarmClient::GetRunAsync(const GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetRunAsyncHelper( this, request, handler, context ); } );
}

GetSuiteOutcome DeviceFarmClient::GetSuite(const GetSuiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSuiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSuiteOutcomeCallable DeviceFarmClient::GetSuiteCallable(const GetSuiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetSuiteAsyncHelper(DeviceFarmClient const * const clientThis, const GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSuite(request), context);
}

void DeviceFarmClient::GetSuiteAsync(const GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetSuiteAsyncHelper( this, request, handler, context ); } );
}

GetTestOutcome DeviceFarmClient::GetTest(const GetTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestOutcomeCallable DeviceFarmClient::GetTestCallable(const GetTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetTestAsyncHelper(DeviceFarmClient const * const clientThis, const GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTest(request), context);
}

void DeviceFarmClient::GetTestAsync(const GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetTestAsyncHelper( this, request, handler, context ); } );
}

GetTestGridProjectOutcome DeviceFarmClient::GetTestGridProject(const GetTestGridProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTestGridProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestGridProjectOutcomeCallable DeviceFarmClient::GetTestGridProjectCallable(const GetTestGridProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTestGridProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTestGridProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetTestGridProjectAsyncHelper(DeviceFarmClient const * const clientThis, const GetTestGridProjectRequest& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTestGridProject(request), context);
}

void DeviceFarmClient::GetTestGridProjectAsync(const GetTestGridProjectRequest& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetTestGridProjectAsyncHelper( this, request, handler, context ); } );
}

GetTestGridSessionOutcome DeviceFarmClient::GetTestGridSession(const GetTestGridSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTestGridSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestGridSessionOutcomeCallable DeviceFarmClient::GetTestGridSessionCallable(const GetTestGridSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTestGridSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTestGridSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetTestGridSessionAsyncHelper(DeviceFarmClient const * const clientThis, const GetTestGridSessionRequest& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTestGridSession(request), context);
}

void DeviceFarmClient::GetTestGridSessionAsync(const GetTestGridSessionRequest& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetTestGridSessionAsyncHelper( this, request, handler, context ); } );
}

GetUploadOutcome DeviceFarmClient::GetUpload(const GetUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUploadOutcomeCallable DeviceFarmClient::GetUploadCallable(const GetUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetUploadAsyncHelper(DeviceFarmClient const * const clientThis, const GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUpload(request), context);
}

void DeviceFarmClient::GetUploadAsync(const GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetUploadAsyncHelper( this, request, handler, context ); } );
}

GetVPCEConfigurationOutcome DeviceFarmClient::GetVPCEConfiguration(const GetVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetVPCEConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVPCEConfigurationOutcomeCallable DeviceFarmClient::GetVPCEConfigurationCallable(const GetVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientGetVPCEConfigurationAsyncHelper(DeviceFarmClient const * const clientThis, const GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVPCEConfiguration(request), context);
}

void DeviceFarmClient::GetVPCEConfigurationAsync(const GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientGetVPCEConfigurationAsyncHelper( this, request, handler, context ); } );
}

InstallToRemoteAccessSessionOutcome DeviceFarmClient::InstallToRemoteAccessSession(const InstallToRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InstallToRemoteAccessSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InstallToRemoteAccessSessionOutcomeCallable DeviceFarmClient::InstallToRemoteAccessSessionCallable(const InstallToRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InstallToRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InstallToRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientInstallToRemoteAccessSessionAsyncHelper(DeviceFarmClient const * const clientThis, const InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InstallToRemoteAccessSession(request), context);
}

void DeviceFarmClient::InstallToRemoteAccessSessionAsync(const InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientInstallToRemoteAccessSessionAsyncHelper( this, request, handler, context ); } );
}

ListArtifactsOutcome DeviceFarmClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcomeCallable DeviceFarmClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListArtifactsAsyncHelper(DeviceFarmClient const * const clientThis, const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListArtifacts(request), context);
}

void DeviceFarmClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListArtifactsAsyncHelper( this, request, handler, context ); } );
}

ListDeviceInstancesOutcome DeviceFarmClient::ListDeviceInstances(const ListDeviceInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeviceInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceInstancesOutcomeCallable DeviceFarmClient::ListDeviceInstancesCallable(const ListDeviceInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListDeviceInstancesAsyncHelper(DeviceFarmClient const * const clientThis, const ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeviceInstances(request), context);
}

void DeviceFarmClient::ListDeviceInstancesAsync(const ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListDeviceInstancesAsyncHelper( this, request, handler, context ); } );
}

ListDevicePoolsOutcome DeviceFarmClient::ListDevicePools(const ListDevicePoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDevicePoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicePoolsOutcomeCallable DeviceFarmClient::ListDevicePoolsCallable(const ListDevicePoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicePoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevicePools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListDevicePoolsAsyncHelper(DeviceFarmClient const * const clientThis, const ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevicePools(request), context);
}

void DeviceFarmClient::ListDevicePoolsAsync(const ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListDevicePoolsAsyncHelper( this, request, handler, context ); } );
}

ListDevicesOutcome DeviceFarmClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable DeviceFarmClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListDevicesAsyncHelper(DeviceFarmClient const * const clientThis, const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevices(request), context);
}

void DeviceFarmClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListDevicesAsyncHelper( this, request, handler, context ); } );
}

ListInstanceProfilesOutcome DeviceFarmClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceProfilesOutcomeCallable DeviceFarmClient::ListInstanceProfilesCallable(const ListInstanceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListInstanceProfilesAsyncHelper(DeviceFarmClient const * const clientThis, const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceProfiles(request), context);
}

void DeviceFarmClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListInstanceProfilesAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome DeviceFarmClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable DeviceFarmClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListJobsAsyncHelper(DeviceFarmClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void DeviceFarmClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListNetworkProfilesOutcome DeviceFarmClient::ListNetworkProfiles(const ListNetworkProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNetworkProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkProfilesOutcomeCallable DeviceFarmClient::ListNetworkProfilesCallable(const ListNetworkProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListNetworkProfilesAsyncHelper(DeviceFarmClient const * const clientThis, const ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNetworkProfiles(request), context);
}

void DeviceFarmClient::ListNetworkProfilesAsync(const ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListNetworkProfilesAsyncHelper( this, request, handler, context ); } );
}

ListOfferingPromotionsOutcome DeviceFarmClient::ListOfferingPromotions(const ListOfferingPromotionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOfferingPromotionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingPromotionsOutcomeCallable DeviceFarmClient::ListOfferingPromotionsCallable(const ListOfferingPromotionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingPromotionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferingPromotions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListOfferingPromotionsAsyncHelper(DeviceFarmClient const * const clientThis, const ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOfferingPromotions(request), context);
}

void DeviceFarmClient::ListOfferingPromotionsAsync(const ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListOfferingPromotionsAsyncHelper( this, request, handler, context ); } );
}

ListOfferingTransactionsOutcome DeviceFarmClient::ListOfferingTransactions(const ListOfferingTransactionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOfferingTransactionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingTransactionsOutcomeCallable DeviceFarmClient::ListOfferingTransactionsCallable(const ListOfferingTransactionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingTransactionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferingTransactions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListOfferingTransactionsAsyncHelper(DeviceFarmClient const * const clientThis, const ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOfferingTransactions(request), context);
}

void DeviceFarmClient::ListOfferingTransactionsAsync(const ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListOfferingTransactionsAsyncHelper( this, request, handler, context ); } );
}

ListOfferingsOutcome DeviceFarmClient::ListOfferings(const ListOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingsOutcomeCallable DeviceFarmClient::ListOfferingsCallable(const ListOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListOfferingsAsyncHelper(DeviceFarmClient const * const clientThis, const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOfferings(request), context);
}

void DeviceFarmClient::ListOfferingsAsync(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListOfferingsAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome DeviceFarmClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable DeviceFarmClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListProjectsAsyncHelper(DeviceFarmClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void DeviceFarmClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListRemoteAccessSessionsOutcome DeviceFarmClient::ListRemoteAccessSessions(const ListRemoteAccessSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRemoteAccessSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRemoteAccessSessionsOutcomeCallable DeviceFarmClient::ListRemoteAccessSessionsCallable(const ListRemoteAccessSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRemoteAccessSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRemoteAccessSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListRemoteAccessSessionsAsyncHelper(DeviceFarmClient const * const clientThis, const ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRemoteAccessSessions(request), context);
}

void DeviceFarmClient::ListRemoteAccessSessionsAsync(const ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListRemoteAccessSessionsAsyncHelper( this, request, handler, context ); } );
}

ListRunsOutcome DeviceFarmClient::ListRuns(const ListRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRunsOutcomeCallable DeviceFarmClient::ListRunsCallable(const ListRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListRunsAsyncHelper(DeviceFarmClient const * const clientThis, const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuns(request), context);
}

void DeviceFarmClient::ListRunsAsync(const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListRunsAsyncHelper( this, request, handler, context ); } );
}

ListSamplesOutcome DeviceFarmClient::ListSamples(const ListSamplesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSamplesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSamplesOutcomeCallable DeviceFarmClient::ListSamplesCallable(const ListSamplesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSamplesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSamples(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListSamplesAsyncHelper(DeviceFarmClient const * const clientThis, const ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSamples(request), context);
}

void DeviceFarmClient::ListSamplesAsync(const ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListSamplesAsyncHelper( this, request, handler, context ); } );
}

ListSuitesOutcome DeviceFarmClient::ListSuites(const ListSuitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSuitesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSuitesOutcomeCallable DeviceFarmClient::ListSuitesCallable(const ListSuitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListSuitesAsyncHelper(DeviceFarmClient const * const clientThis, const ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSuites(request), context);
}

void DeviceFarmClient::ListSuitesAsync(const ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListSuitesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome DeviceFarmClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DeviceFarmClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTagsForResourceAsyncHelper(DeviceFarmClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void DeviceFarmClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTestGridProjectsOutcome DeviceFarmClient::ListTestGridProjects(const ListTestGridProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTestGridProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridProjectsOutcomeCallable DeviceFarmClient::ListTestGridProjectsCallable(const ListTestGridProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestGridProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTestGridProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTestGridProjectsAsyncHelper(DeviceFarmClient const * const clientThis, const ListTestGridProjectsRequest& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTestGridProjects(request), context);
}

void DeviceFarmClient::ListTestGridProjectsAsync(const ListTestGridProjectsRequest& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTestGridProjectsAsyncHelper( this, request, handler, context ); } );
}

ListTestGridSessionActionsOutcome DeviceFarmClient::ListTestGridSessionActions(const ListTestGridSessionActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTestGridSessionActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionActionsOutcomeCallable DeviceFarmClient::ListTestGridSessionActionsCallable(const ListTestGridSessionActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestGridSessionActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTestGridSessionActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTestGridSessionActionsAsyncHelper(DeviceFarmClient const * const clientThis, const ListTestGridSessionActionsRequest& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTestGridSessionActions(request), context);
}

void DeviceFarmClient::ListTestGridSessionActionsAsync(const ListTestGridSessionActionsRequest& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTestGridSessionActionsAsyncHelper( this, request, handler, context ); } );
}

ListTestGridSessionArtifactsOutcome DeviceFarmClient::ListTestGridSessionArtifacts(const ListTestGridSessionArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTestGridSessionArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionArtifactsOutcomeCallable DeviceFarmClient::ListTestGridSessionArtifactsCallable(const ListTestGridSessionArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestGridSessionArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTestGridSessionArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTestGridSessionArtifactsAsyncHelper(DeviceFarmClient const * const clientThis, const ListTestGridSessionArtifactsRequest& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTestGridSessionArtifacts(request), context);
}

void DeviceFarmClient::ListTestGridSessionArtifactsAsync(const ListTestGridSessionArtifactsRequest& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTestGridSessionArtifactsAsyncHelper( this, request, handler, context ); } );
}

ListTestGridSessionsOutcome DeviceFarmClient::ListTestGridSessions(const ListTestGridSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTestGridSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionsOutcomeCallable DeviceFarmClient::ListTestGridSessionsCallable(const ListTestGridSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestGridSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTestGridSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTestGridSessionsAsyncHelper(DeviceFarmClient const * const clientThis, const ListTestGridSessionsRequest& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTestGridSessions(request), context);
}

void DeviceFarmClient::ListTestGridSessionsAsync(const ListTestGridSessionsRequest& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTestGridSessionsAsyncHelper( this, request, handler, context ); } );
}

ListTestsOutcome DeviceFarmClient::ListTests(const ListTestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestsOutcomeCallable DeviceFarmClient::ListTestsCallable(const ListTestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListTestsAsyncHelper(DeviceFarmClient const * const clientThis, const ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTests(request), context);
}

void DeviceFarmClient::ListTestsAsync(const ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListTestsAsyncHelper( this, request, handler, context ); } );
}

ListUniqueProblemsOutcome DeviceFarmClient::ListUniqueProblems(const ListUniqueProblemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUniqueProblemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUniqueProblemsOutcomeCallable DeviceFarmClient::ListUniqueProblemsCallable(const ListUniqueProblemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUniqueProblemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUniqueProblems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListUniqueProblemsAsyncHelper(DeviceFarmClient const * const clientThis, const ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUniqueProblems(request), context);
}

void DeviceFarmClient::ListUniqueProblemsAsync(const ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListUniqueProblemsAsyncHelper( this, request, handler, context ); } );
}

ListUploadsOutcome DeviceFarmClient::ListUploads(const ListUploadsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUploadsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUploadsOutcomeCallable DeviceFarmClient::ListUploadsCallable(const ListUploadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUploadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUploads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListUploadsAsyncHelper(DeviceFarmClient const * const clientThis, const ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUploads(request), context);
}

void DeviceFarmClient::ListUploadsAsync(const ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListUploadsAsyncHelper( this, request, handler, context ); } );
}

ListVPCEConfigurationsOutcome DeviceFarmClient::ListVPCEConfigurations(const ListVPCEConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVPCEConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVPCEConfigurationsOutcomeCallable DeviceFarmClient::ListVPCEConfigurationsCallable(const ListVPCEConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVPCEConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVPCEConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientListVPCEConfigurationsAsyncHelper(DeviceFarmClient const * const clientThis, const ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVPCEConfigurations(request), context);
}

void DeviceFarmClient::ListVPCEConfigurationsAsync(const ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientListVPCEConfigurationsAsyncHelper( this, request, handler, context ); } );
}

PurchaseOfferingOutcome DeviceFarmClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PurchaseOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseOfferingOutcomeCallable DeviceFarmClient::PurchaseOfferingCallable(const PurchaseOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientPurchaseOfferingAsyncHelper(DeviceFarmClient const * const clientThis, const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurchaseOffering(request), context);
}

void DeviceFarmClient::PurchaseOfferingAsync(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientPurchaseOfferingAsyncHelper( this, request, handler, context ); } );
}

RenewOfferingOutcome DeviceFarmClient::RenewOffering(const RenewOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RenewOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenewOfferingOutcomeCallable DeviceFarmClient::RenewOfferingCallable(const RenewOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenewOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenewOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientRenewOfferingAsyncHelper(DeviceFarmClient const * const clientThis, const RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RenewOffering(request), context);
}

void DeviceFarmClient::RenewOfferingAsync(const RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientRenewOfferingAsyncHelper( this, request, handler, context ); } );
}

ScheduleRunOutcome DeviceFarmClient::ScheduleRun(const ScheduleRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ScheduleRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScheduleRunOutcomeCallable DeviceFarmClient::ScheduleRunCallable(const ScheduleRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScheduleRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScheduleRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientScheduleRunAsyncHelper(DeviceFarmClient const * const clientThis, const ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ScheduleRun(request), context);
}

void DeviceFarmClient::ScheduleRunAsync(const ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientScheduleRunAsyncHelper( this, request, handler, context ); } );
}

StopJobOutcome DeviceFarmClient::StopJob(const StopJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopJobOutcomeCallable DeviceFarmClient::StopJobCallable(const StopJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientStopJobAsyncHelper(DeviceFarmClient const * const clientThis, const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopJob(request), context);
}

void DeviceFarmClient::StopJobAsync(const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientStopJobAsyncHelper( this, request, handler, context ); } );
}

StopRemoteAccessSessionOutcome DeviceFarmClient::StopRemoteAccessSession(const StopRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopRemoteAccessSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRemoteAccessSessionOutcomeCallable DeviceFarmClient::StopRemoteAccessSessionCallable(const StopRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientStopRemoteAccessSessionAsyncHelper(DeviceFarmClient const * const clientThis, const StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopRemoteAccessSession(request), context);
}

void DeviceFarmClient::StopRemoteAccessSessionAsync(const StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientStopRemoteAccessSessionAsyncHelper( this, request, handler, context ); } );
}

StopRunOutcome DeviceFarmClient::StopRun(const StopRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRunOutcomeCallable DeviceFarmClient::StopRunCallable(const StopRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientStopRunAsyncHelper(DeviceFarmClient const * const clientThis, const StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopRun(request), context);
}

void DeviceFarmClient::StopRunAsync(const StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientStopRunAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome DeviceFarmClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DeviceFarmClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientTagResourceAsyncHelper(DeviceFarmClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void DeviceFarmClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome DeviceFarmClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DeviceFarmClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUntagResourceAsyncHelper(DeviceFarmClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void DeviceFarmClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDeviceInstanceOutcome DeviceFarmClient::UpdateDeviceInstance(const UpdateDeviceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDeviceInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceInstanceOutcomeCallable DeviceFarmClient::UpdateDeviceInstanceCallable(const UpdateDeviceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateDeviceInstanceAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeviceInstance(request), context);
}

void DeviceFarmClient::UpdateDeviceInstanceAsync(const UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateDeviceInstanceAsyncHelper( this, request, handler, context ); } );
}

UpdateDevicePoolOutcome DeviceFarmClient::UpdateDevicePool(const UpdateDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDevicePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDevicePoolOutcomeCallable DeviceFarmClient::UpdateDevicePoolCallable(const UpdateDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateDevicePoolAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDevicePool(request), context);
}

void DeviceFarmClient::UpdateDevicePoolAsync(const UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateDevicePoolAsyncHelper( this, request, handler, context ); } );
}

UpdateInstanceProfileOutcome DeviceFarmClient::UpdateInstanceProfile(const UpdateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceProfileOutcomeCallable DeviceFarmClient::UpdateInstanceProfileCallable(const UpdateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateInstanceProfileAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstanceProfile(request), context);
}

void DeviceFarmClient::UpdateInstanceProfileAsync(const UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateNetworkProfileOutcome DeviceFarmClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkProfileOutcomeCallable DeviceFarmClient::UpdateNetworkProfileCallable(const UpdateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateNetworkProfileAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNetworkProfile(request), context);
}

void DeviceFarmClient::UpdateNetworkProfileAsync(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome DeviceFarmClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable DeviceFarmClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateProjectAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void DeviceFarmClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateTestGridProjectOutcome DeviceFarmClient::UpdateTestGridProject(const UpdateTestGridProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTestGridProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTestGridProjectOutcomeCallable DeviceFarmClient::UpdateTestGridProjectCallable(const UpdateTestGridProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTestGridProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTestGridProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateTestGridProjectAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateTestGridProjectRequest& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTestGridProject(request), context);
}

void DeviceFarmClient::UpdateTestGridProjectAsync(const UpdateTestGridProjectRequest& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateTestGridProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateUploadOutcome DeviceFarmClient::UpdateUpload(const UpdateUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUploadOutcomeCallable DeviceFarmClient::UpdateUploadCallable(const UpdateUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateUploadAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUpload(request), context);
}

void DeviceFarmClient::UpdateUploadAsync(const UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateUploadAsyncHelper( this, request, handler, context ); } );
}

UpdateVPCEConfigurationOutcome DeviceFarmClient::UpdateVPCEConfiguration(const UpdateVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVPCEConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVPCEConfigurationOutcomeCallable DeviceFarmClient::UpdateVPCEConfigurationCallable(const UpdateVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClientUpdateVPCEConfigurationAsyncHelper(DeviceFarmClient const * const clientThis, const UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVPCEConfiguration(request), context);
}

void DeviceFarmClient::UpdateVPCEConfigurationAsync(const UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DeviceFarmClientUpdateVPCEConfigurationAsyncHelper( this, request, handler, context ); } );
}

