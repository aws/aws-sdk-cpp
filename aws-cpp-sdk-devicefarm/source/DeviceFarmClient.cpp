/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/devicefarm/model/CreateUploadRequest.h>
#include <aws/devicefarm/model/CreateVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/DeleteDevicePoolRequest.h>
#include <aws/devicefarm/model/DeleteInstanceProfileRequest.h>
#include <aws/devicefarm/model/DeleteNetworkProfileRequest.h>
#include <aws/devicefarm/model/DeleteProjectRequest.h>
#include <aws/devicefarm/model/DeleteRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/DeleteRunRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DeviceFarmClient::~DeviceFarmClient()
{
}

void DeviceFarmClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDevicePoolOutcome(CreateDevicePoolResult(outcome.GetResult()));
  }
  else
  {
    return CreateDevicePoolOutcome(outcome.GetError());
  }
}

CreateDevicePoolOutcomeCallable DeviceFarmClient::CreateDevicePoolCallable(const CreateDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateDevicePoolAsync(const CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDevicePoolAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateDevicePoolAsyncHelper(const CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDevicePool(request), context);
}

CreateInstanceProfileOutcome DeviceFarmClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInstanceProfileOutcome(CreateInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceProfileOutcome(outcome.GetError());
  }
}

CreateInstanceProfileOutcomeCallable DeviceFarmClient::CreateInstanceProfileCallable(const CreateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateInstanceProfileAsyncHelper(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceProfile(request), context);
}

CreateNetworkProfileOutcome DeviceFarmClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNetworkProfileOutcome(CreateNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkProfileOutcome(outcome.GetError());
  }
}

CreateNetworkProfileOutcomeCallable DeviceFarmClient::CreateNetworkProfileCallable(const CreateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateNetworkProfileAsync(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateNetworkProfileAsyncHelper(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkProfile(request), context);
}

CreateProjectOutcome DeviceFarmClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProjectOutcome(CreateProjectResult(outcome.GetResult()));
  }
  else
  {
    return CreateProjectOutcome(outcome.GetError());
  }
}

CreateProjectOutcomeCallable DeviceFarmClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProjectAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateProjectAsyncHelper(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProject(request), context);
}

CreateRemoteAccessSessionOutcome DeviceFarmClient::CreateRemoteAccessSession(const CreateRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRemoteAccessSessionOutcome(CreateRemoteAccessSessionResult(outcome.GetResult()));
  }
  else
  {
    return CreateRemoteAccessSessionOutcome(outcome.GetError());
  }
}

CreateRemoteAccessSessionOutcomeCallable DeviceFarmClient::CreateRemoteAccessSessionCallable(const CreateRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateRemoteAccessSessionAsync(const CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRemoteAccessSessionAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateRemoteAccessSessionAsyncHelper(const CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRemoteAccessSession(request), context);
}

CreateUploadOutcome DeviceFarmClient::CreateUpload(const CreateUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUploadOutcome(CreateUploadResult(outcome.GetResult()));
  }
  else
  {
    return CreateUploadOutcome(outcome.GetError());
  }
}

CreateUploadOutcomeCallable DeviceFarmClient::CreateUploadCallable(const CreateUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateUploadAsync(const CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUploadAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateUploadAsyncHelper(const CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUpload(request), context);
}

CreateVPCEConfigurationOutcome DeviceFarmClient::CreateVPCEConfiguration(const CreateVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVPCEConfigurationOutcome(CreateVPCEConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateVPCEConfigurationOutcome(outcome.GetError());
  }
}

CreateVPCEConfigurationOutcomeCallable DeviceFarmClient::CreateVPCEConfigurationCallable(const CreateVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::CreateVPCEConfigurationAsync(const CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVPCEConfigurationAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::CreateVPCEConfigurationAsyncHelper(const CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVPCEConfiguration(request), context);
}

DeleteDevicePoolOutcome DeviceFarmClient::DeleteDevicePool(const DeleteDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDevicePoolOutcome(DeleteDevicePoolResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDevicePoolOutcome(outcome.GetError());
  }
}

DeleteDevicePoolOutcomeCallable DeviceFarmClient::DeleteDevicePoolCallable(const DeleteDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteDevicePoolAsync(const DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDevicePoolAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteDevicePoolAsyncHelper(const DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDevicePool(request), context);
}

DeleteInstanceProfileOutcome DeviceFarmClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceProfileOutcome(DeleteInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInstanceProfileOutcome(outcome.GetError());
  }
}

DeleteInstanceProfileOutcomeCallable DeviceFarmClient::DeleteInstanceProfileCallable(const DeleteInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteInstanceProfileAsyncHelper(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceProfile(request), context);
}

DeleteNetworkProfileOutcome DeviceFarmClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkProfileOutcome(DeleteNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNetworkProfileOutcome(outcome.GetError());
  }
}

DeleteNetworkProfileOutcomeCallable DeviceFarmClient::DeleteNetworkProfileCallable(const DeleteNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteNetworkProfileAsync(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteNetworkProfileAsyncHelper(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkProfile(request), context);
}

DeleteProjectOutcome DeviceFarmClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProjectOutcome(DeleteProjectResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProjectOutcome(outcome.GetError());
  }
}

DeleteProjectOutcomeCallable DeviceFarmClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProjectAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteProjectAsyncHelper(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProject(request), context);
}

DeleteRemoteAccessSessionOutcome DeviceFarmClient::DeleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRemoteAccessSessionOutcome(DeleteRemoteAccessSessionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRemoteAccessSessionOutcome(outcome.GetError());
  }
}

DeleteRemoteAccessSessionOutcomeCallable DeviceFarmClient::DeleteRemoteAccessSessionCallable(const DeleteRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteRemoteAccessSessionAsync(const DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRemoteAccessSessionAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteRemoteAccessSessionAsyncHelper(const DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRemoteAccessSession(request), context);
}

DeleteRunOutcome DeviceFarmClient::DeleteRun(const DeleteRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRunOutcome(DeleteRunResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRunOutcome(outcome.GetError());
  }
}

DeleteRunOutcomeCallable DeviceFarmClient::DeleteRunCallable(const DeleteRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteRunAsync(const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRunAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteRunAsyncHelper(const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRun(request), context);
}

DeleteUploadOutcome DeviceFarmClient::DeleteUpload(const DeleteUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUploadOutcome(DeleteUploadResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUploadOutcome(outcome.GetError());
  }
}

DeleteUploadOutcomeCallable DeviceFarmClient::DeleteUploadCallable(const DeleteUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteUploadAsync(const DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUploadAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteUploadAsyncHelper(const DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUpload(request), context);
}

DeleteVPCEConfigurationOutcome DeviceFarmClient::DeleteVPCEConfiguration(const DeleteVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVPCEConfigurationOutcome(DeleteVPCEConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVPCEConfigurationOutcome(outcome.GetError());
  }
}

DeleteVPCEConfigurationOutcomeCallable DeviceFarmClient::DeleteVPCEConfigurationCallable(const DeleteVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::DeleteVPCEConfigurationAsync(const DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVPCEConfigurationAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::DeleteVPCEConfigurationAsyncHelper(const DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVPCEConfiguration(request), context);
}

GetAccountSettingsOutcome DeviceFarmClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountSettingsOutcome(GetAccountSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountSettingsOutcome(outcome.GetError());
  }
}

GetAccountSettingsOutcomeCallable DeviceFarmClient::GetAccountSettingsCallable(const GetAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetAccountSettingsAsync(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountSettingsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetAccountSettingsAsyncHelper(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountSettings(request), context);
}

GetDeviceOutcome DeviceFarmClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceOutcome(GetDeviceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceOutcome(outcome.GetError());
  }
}

GetDeviceOutcomeCallable DeviceFarmClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetDeviceAsyncHelper(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevice(request), context);
}

GetDeviceInstanceOutcome DeviceFarmClient::GetDeviceInstance(const GetDeviceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceInstanceOutcome(GetDeviceInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceInstanceOutcome(outcome.GetError());
  }
}

GetDeviceInstanceOutcomeCallable DeviceFarmClient::GetDeviceInstanceCallable(const GetDeviceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetDeviceInstanceAsync(const GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceInstanceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetDeviceInstanceAsyncHelper(const GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeviceInstance(request), context);
}

GetDevicePoolOutcome DeviceFarmClient::GetDevicePool(const GetDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDevicePoolOutcome(GetDevicePoolResult(outcome.GetResult()));
  }
  else
  {
    return GetDevicePoolOutcome(outcome.GetError());
  }
}

GetDevicePoolOutcomeCallable DeviceFarmClient::GetDevicePoolCallable(const GetDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetDevicePoolAsync(const GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevicePoolAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetDevicePoolAsyncHelper(const GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevicePool(request), context);
}

GetDevicePoolCompatibilityOutcome DeviceFarmClient::GetDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDevicePoolCompatibilityOutcome(GetDevicePoolCompatibilityResult(outcome.GetResult()));
  }
  else
  {
    return GetDevicePoolCompatibilityOutcome(outcome.GetError());
  }
}

GetDevicePoolCompatibilityOutcomeCallable DeviceFarmClient::GetDevicePoolCompatibilityCallable(const GetDevicePoolCompatibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePoolCompatibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePoolCompatibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetDevicePoolCompatibilityAsync(const GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevicePoolCompatibilityAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetDevicePoolCompatibilityAsyncHelper(const GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevicePoolCompatibility(request), context);
}

GetInstanceProfileOutcome DeviceFarmClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceProfileOutcome(GetInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceProfileOutcome(outcome.GetError());
  }
}

GetInstanceProfileOutcomeCallable DeviceFarmClient::GetInstanceProfileCallable(const GetInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetInstanceProfileAsyncHelper(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceProfile(request), context);
}

GetJobOutcome DeviceFarmClient::GetJob(const GetJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobOutcome(GetJobResult(outcome.GetResult()));
  }
  else
  {
    return GetJobOutcome(outcome.GetError());
  }
}

GetJobOutcomeCallable DeviceFarmClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetJobAsyncHelper(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJob(request), context);
}

GetNetworkProfileOutcome DeviceFarmClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNetworkProfileOutcome(GetNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetNetworkProfileOutcome(outcome.GetError());
  }
}

GetNetworkProfileOutcomeCallable DeviceFarmClient::GetNetworkProfileCallable(const GetNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetNetworkProfileAsync(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetNetworkProfileAsyncHelper(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkProfile(request), context);
}

GetOfferingStatusOutcome DeviceFarmClient::GetOfferingStatus(const GetOfferingStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOfferingStatusOutcome(GetOfferingStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetOfferingStatusOutcome(outcome.GetError());
  }
}

GetOfferingStatusOutcomeCallable DeviceFarmClient::GetOfferingStatusCallable(const GetOfferingStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOfferingStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOfferingStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetOfferingStatusAsync(const GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOfferingStatusAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetOfferingStatusAsyncHelper(const GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOfferingStatus(request), context);
}

GetProjectOutcome DeviceFarmClient::GetProject(const GetProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetProjectOutcome(GetProjectResult(outcome.GetResult()));
  }
  else
  {
    return GetProjectOutcome(outcome.GetError());
  }
}

GetProjectOutcomeCallable DeviceFarmClient::GetProjectCallable(const GetProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetProjectAsync(const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProjectAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetProjectAsyncHelper(const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProject(request), context);
}

GetRemoteAccessSessionOutcome DeviceFarmClient::GetRemoteAccessSession(const GetRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRemoteAccessSessionOutcome(GetRemoteAccessSessionResult(outcome.GetResult()));
  }
  else
  {
    return GetRemoteAccessSessionOutcome(outcome.GetError());
  }
}

GetRemoteAccessSessionOutcomeCallable DeviceFarmClient::GetRemoteAccessSessionCallable(const GetRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetRemoteAccessSessionAsync(const GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRemoteAccessSessionAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetRemoteAccessSessionAsyncHelper(const GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRemoteAccessSession(request), context);
}

GetRunOutcome DeviceFarmClient::GetRun(const GetRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRunOutcome(GetRunResult(outcome.GetResult()));
  }
  else
  {
    return GetRunOutcome(outcome.GetError());
  }
}

GetRunOutcomeCallable DeviceFarmClient::GetRunCallable(const GetRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetRunAsync(const GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRunAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetRunAsyncHelper(const GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRun(request), context);
}

GetSuiteOutcome DeviceFarmClient::GetSuite(const GetSuiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSuiteOutcome(GetSuiteResult(outcome.GetResult()));
  }
  else
  {
    return GetSuiteOutcome(outcome.GetError());
  }
}

GetSuiteOutcomeCallable DeviceFarmClient::GetSuiteCallable(const GetSuiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetSuiteAsync(const GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSuiteAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetSuiteAsyncHelper(const GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSuite(request), context);
}

GetTestOutcome DeviceFarmClient::GetTest(const GetTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTestOutcome(GetTestResult(outcome.GetResult()));
  }
  else
  {
    return GetTestOutcome(outcome.GetError());
  }
}

GetTestOutcomeCallable DeviceFarmClient::GetTestCallable(const GetTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetTestAsync(const GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTestAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetTestAsyncHelper(const GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTest(request), context);
}

GetUploadOutcome DeviceFarmClient::GetUpload(const GetUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUploadOutcome(GetUploadResult(outcome.GetResult()));
  }
  else
  {
    return GetUploadOutcome(outcome.GetError());
  }
}

GetUploadOutcomeCallable DeviceFarmClient::GetUploadCallable(const GetUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetUploadAsync(const GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUploadAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetUploadAsyncHelper(const GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUpload(request), context);
}

GetVPCEConfigurationOutcome DeviceFarmClient::GetVPCEConfiguration(const GetVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVPCEConfigurationOutcome(GetVPCEConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetVPCEConfigurationOutcome(outcome.GetError());
  }
}

GetVPCEConfigurationOutcomeCallable DeviceFarmClient::GetVPCEConfigurationCallable(const GetVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::GetVPCEConfigurationAsync(const GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVPCEConfigurationAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::GetVPCEConfigurationAsyncHelper(const GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVPCEConfiguration(request), context);
}

InstallToRemoteAccessSessionOutcome DeviceFarmClient::InstallToRemoteAccessSession(const InstallToRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InstallToRemoteAccessSessionOutcome(InstallToRemoteAccessSessionResult(outcome.GetResult()));
  }
  else
  {
    return InstallToRemoteAccessSessionOutcome(outcome.GetError());
  }
}

InstallToRemoteAccessSessionOutcomeCallable DeviceFarmClient::InstallToRemoteAccessSessionCallable(const InstallToRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InstallToRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InstallToRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::InstallToRemoteAccessSessionAsync(const InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InstallToRemoteAccessSessionAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::InstallToRemoteAccessSessionAsyncHelper(const InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InstallToRemoteAccessSession(request), context);
}

ListArtifactsOutcome DeviceFarmClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListArtifactsOutcome(ListArtifactsResult(outcome.GetResult()));
  }
  else
  {
    return ListArtifactsOutcome(outcome.GetError());
  }
}

ListArtifactsOutcomeCallable DeviceFarmClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListArtifactsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListArtifactsAsyncHelper(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListArtifacts(request), context);
}

ListDeviceInstancesOutcome DeviceFarmClient::ListDeviceInstances(const ListDeviceInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceInstancesOutcome(ListDeviceInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceInstancesOutcome(outcome.GetError());
  }
}

ListDeviceInstancesOutcomeCallable DeviceFarmClient::ListDeviceInstancesCallable(const ListDeviceInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListDeviceInstancesAsync(const ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceInstancesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListDeviceInstancesAsyncHelper(const ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceInstances(request), context);
}

ListDevicePoolsOutcome DeviceFarmClient::ListDevicePools(const ListDevicePoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDevicePoolsOutcome(ListDevicePoolsResult(outcome.GetResult()));
  }
  else
  {
    return ListDevicePoolsOutcome(outcome.GetError());
  }
}

ListDevicePoolsOutcomeCallable DeviceFarmClient::ListDevicePoolsCallable(const ListDevicePoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicePoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevicePools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListDevicePoolsAsync(const ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicePoolsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListDevicePoolsAsyncHelper(const ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevicePools(request), context);
}

ListDevicesOutcome DeviceFarmClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDevicesOutcome(ListDevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListDevicesOutcome(outcome.GetError());
  }
}

ListDevicesOutcomeCallable DeviceFarmClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
}

ListInstanceProfilesOutcome DeviceFarmClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInstanceProfilesOutcome(ListInstanceProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceProfilesOutcome(outcome.GetError());
  }
}

ListInstanceProfilesOutcomeCallable DeviceFarmClient::ListInstanceProfilesCallable(const ListInstanceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceProfilesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListInstanceProfilesAsyncHelper(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceProfiles(request), context);
}

ListJobsOutcome DeviceFarmClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
}

ListJobsOutcomeCallable DeviceFarmClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListJobsAsyncHelper(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobs(request), context);
}

ListNetworkProfilesOutcome DeviceFarmClient::ListNetworkProfiles(const ListNetworkProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNetworkProfilesOutcome(ListNetworkProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListNetworkProfilesOutcome(outcome.GetError());
  }
}

ListNetworkProfilesOutcomeCallable DeviceFarmClient::ListNetworkProfilesCallable(const ListNetworkProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListNetworkProfilesAsync(const ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNetworkProfilesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListNetworkProfilesAsyncHelper(const ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNetworkProfiles(request), context);
}

ListOfferingPromotionsOutcome DeviceFarmClient::ListOfferingPromotions(const ListOfferingPromotionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOfferingPromotionsOutcome(ListOfferingPromotionsResult(outcome.GetResult()));
  }
  else
  {
    return ListOfferingPromotionsOutcome(outcome.GetError());
  }
}

ListOfferingPromotionsOutcomeCallable DeviceFarmClient::ListOfferingPromotionsCallable(const ListOfferingPromotionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingPromotionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferingPromotions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListOfferingPromotionsAsync(const ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOfferingPromotionsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListOfferingPromotionsAsyncHelper(const ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOfferingPromotions(request), context);
}

ListOfferingTransactionsOutcome DeviceFarmClient::ListOfferingTransactions(const ListOfferingTransactionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOfferingTransactionsOutcome(ListOfferingTransactionsResult(outcome.GetResult()));
  }
  else
  {
    return ListOfferingTransactionsOutcome(outcome.GetError());
  }
}

ListOfferingTransactionsOutcomeCallable DeviceFarmClient::ListOfferingTransactionsCallable(const ListOfferingTransactionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingTransactionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferingTransactions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListOfferingTransactionsAsync(const ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOfferingTransactionsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListOfferingTransactionsAsyncHelper(const ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOfferingTransactions(request), context);
}

ListOfferingsOutcome DeviceFarmClient::ListOfferings(const ListOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOfferingsOutcome(ListOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return ListOfferingsOutcome(outcome.GetError());
  }
}

ListOfferingsOutcomeCallable DeviceFarmClient::ListOfferingsCallable(const ListOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListOfferingsAsync(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOfferingsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListOfferingsAsyncHelper(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOfferings(request), context);
}

ListProjectsOutcome DeviceFarmClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProjectsOutcome(ListProjectsResult(outcome.GetResult()));
  }
  else
  {
    return ListProjectsOutcome(outcome.GetError());
  }
}

ListProjectsOutcomeCallable DeviceFarmClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProjectsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListProjectsAsyncHelper(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProjects(request), context);
}

ListRemoteAccessSessionsOutcome DeviceFarmClient::ListRemoteAccessSessions(const ListRemoteAccessSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRemoteAccessSessionsOutcome(ListRemoteAccessSessionsResult(outcome.GetResult()));
  }
  else
  {
    return ListRemoteAccessSessionsOutcome(outcome.GetError());
  }
}

ListRemoteAccessSessionsOutcomeCallable DeviceFarmClient::ListRemoteAccessSessionsCallable(const ListRemoteAccessSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRemoteAccessSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRemoteAccessSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListRemoteAccessSessionsAsync(const ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRemoteAccessSessionsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListRemoteAccessSessionsAsyncHelper(const ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRemoteAccessSessions(request), context);
}

ListRunsOutcome DeviceFarmClient::ListRuns(const ListRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRunsOutcome(ListRunsResult(outcome.GetResult()));
  }
  else
  {
    return ListRunsOutcome(outcome.GetError());
  }
}

ListRunsOutcomeCallable DeviceFarmClient::ListRunsCallable(const ListRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListRunsAsync(const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRunsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListRunsAsyncHelper(const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuns(request), context);
}

ListSamplesOutcome DeviceFarmClient::ListSamples(const ListSamplesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSamplesOutcome(ListSamplesResult(outcome.GetResult()));
  }
  else
  {
    return ListSamplesOutcome(outcome.GetError());
  }
}

ListSamplesOutcomeCallable DeviceFarmClient::ListSamplesCallable(const ListSamplesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSamplesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSamples(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListSamplesAsync(const ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSamplesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListSamplesAsyncHelper(const ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSamples(request), context);
}

ListSuitesOutcome DeviceFarmClient::ListSuites(const ListSuitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSuitesOutcome(ListSuitesResult(outcome.GetResult()));
  }
  else
  {
    return ListSuitesOutcome(outcome.GetError());
  }
}

ListSuitesOutcomeCallable DeviceFarmClient::ListSuitesCallable(const ListSuitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListSuitesAsync(const ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSuitesAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListSuitesAsyncHelper(const ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSuites(request), context);
}

ListTagsForResourceOutcome DeviceFarmClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable DeviceFarmClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTestsOutcome DeviceFarmClient::ListTests(const ListTestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTestsOutcome(ListTestsResult(outcome.GetResult()));
  }
  else
  {
    return ListTestsOutcome(outcome.GetError());
  }
}

ListTestsOutcomeCallable DeviceFarmClient::ListTestsCallable(const ListTestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListTestsAsync(const ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTestsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListTestsAsyncHelper(const ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTests(request), context);
}

ListUniqueProblemsOutcome DeviceFarmClient::ListUniqueProblems(const ListUniqueProblemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUniqueProblemsOutcome(ListUniqueProblemsResult(outcome.GetResult()));
  }
  else
  {
    return ListUniqueProblemsOutcome(outcome.GetError());
  }
}

ListUniqueProblemsOutcomeCallable DeviceFarmClient::ListUniqueProblemsCallable(const ListUniqueProblemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUniqueProblemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUniqueProblems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListUniqueProblemsAsync(const ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUniqueProblemsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListUniqueProblemsAsyncHelper(const ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUniqueProblems(request), context);
}

ListUploadsOutcome DeviceFarmClient::ListUploads(const ListUploadsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUploadsOutcome(ListUploadsResult(outcome.GetResult()));
  }
  else
  {
    return ListUploadsOutcome(outcome.GetError());
  }
}

ListUploadsOutcomeCallable DeviceFarmClient::ListUploadsCallable(const ListUploadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUploadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUploads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListUploadsAsync(const ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUploadsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListUploadsAsyncHelper(const ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUploads(request), context);
}

ListVPCEConfigurationsOutcome DeviceFarmClient::ListVPCEConfigurations(const ListVPCEConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVPCEConfigurationsOutcome(ListVPCEConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListVPCEConfigurationsOutcome(outcome.GetError());
  }
}

ListVPCEConfigurationsOutcomeCallable DeviceFarmClient::ListVPCEConfigurationsCallable(const ListVPCEConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVPCEConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVPCEConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ListVPCEConfigurationsAsync(const ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVPCEConfigurationsAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ListVPCEConfigurationsAsyncHelper(const ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVPCEConfigurations(request), context);
}

PurchaseOfferingOutcome DeviceFarmClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PurchaseOfferingOutcome(PurchaseOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseOfferingOutcome(outcome.GetError());
  }
}

PurchaseOfferingOutcomeCallable DeviceFarmClient::PurchaseOfferingCallable(const PurchaseOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::PurchaseOfferingAsync(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseOfferingAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::PurchaseOfferingAsyncHelper(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseOffering(request), context);
}

RenewOfferingOutcome DeviceFarmClient::RenewOffering(const RenewOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RenewOfferingOutcome(RenewOfferingResult(outcome.GetResult()));
  }
  else
  {
    return RenewOfferingOutcome(outcome.GetError());
  }
}

RenewOfferingOutcomeCallable DeviceFarmClient::RenewOfferingCallable(const RenewOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenewOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenewOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::RenewOfferingAsync(const RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RenewOfferingAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::RenewOfferingAsyncHelper(const RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RenewOffering(request), context);
}

ScheduleRunOutcome DeviceFarmClient::ScheduleRun(const ScheduleRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ScheduleRunOutcome(ScheduleRunResult(outcome.GetResult()));
  }
  else
  {
    return ScheduleRunOutcome(outcome.GetError());
  }
}

ScheduleRunOutcomeCallable DeviceFarmClient::ScheduleRunCallable(const ScheduleRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScheduleRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScheduleRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::ScheduleRunAsync(const ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScheduleRunAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::ScheduleRunAsyncHelper(const ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScheduleRun(request), context);
}

StopJobOutcome DeviceFarmClient::StopJob(const StopJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopJobOutcome(StopJobResult(outcome.GetResult()));
  }
  else
  {
    return StopJobOutcome(outcome.GetError());
  }
}

StopJobOutcomeCallable DeviceFarmClient::StopJobCallable(const StopJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::StopJobAsync(const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopJobAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::StopJobAsyncHelper(const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopJob(request), context);
}

StopRemoteAccessSessionOutcome DeviceFarmClient::StopRemoteAccessSession(const StopRemoteAccessSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopRemoteAccessSessionOutcome(StopRemoteAccessSessionResult(outcome.GetResult()));
  }
  else
  {
    return StopRemoteAccessSessionOutcome(outcome.GetError());
  }
}

StopRemoteAccessSessionOutcomeCallable DeviceFarmClient::StopRemoteAccessSessionCallable(const StopRemoteAccessSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRemoteAccessSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRemoteAccessSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::StopRemoteAccessSessionAsync(const StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopRemoteAccessSessionAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::StopRemoteAccessSessionAsyncHelper(const StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopRemoteAccessSession(request), context);
}

StopRunOutcome DeviceFarmClient::StopRun(const StopRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopRunOutcome(StopRunResult(outcome.GetResult()));
  }
  else
  {
    return StopRunOutcome(outcome.GetError());
  }
}

StopRunOutcomeCallable DeviceFarmClient::StopRunCallable(const StopRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::StopRunAsync(const StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopRunAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::StopRunAsyncHelper(const StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopRun(request), context);
}

TagResourceOutcome DeviceFarmClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable DeviceFarmClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome DeviceFarmClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable DeviceFarmClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDeviceInstanceOutcome DeviceFarmClient::UpdateDeviceInstance(const UpdateDeviceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceInstanceOutcome(UpdateDeviceInstanceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceInstanceOutcome(outcome.GetError());
  }
}

UpdateDeviceInstanceOutcomeCallable DeviceFarmClient::UpdateDeviceInstanceCallable(const UpdateDeviceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateDeviceInstanceAsync(const UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceInstanceAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateDeviceInstanceAsyncHelper(const UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeviceInstance(request), context);
}

UpdateDevicePoolOutcome DeviceFarmClient::UpdateDevicePool(const UpdateDevicePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDevicePoolOutcome(UpdateDevicePoolResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDevicePoolOutcome(outcome.GetError());
  }
}

UpdateDevicePoolOutcomeCallable DeviceFarmClient::UpdateDevicePoolCallable(const UpdateDevicePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevicePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevicePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateDevicePoolAsync(const UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDevicePoolAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateDevicePoolAsyncHelper(const UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevicePool(request), context);
}

UpdateInstanceProfileOutcome DeviceFarmClient::UpdateInstanceProfile(const UpdateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInstanceProfileOutcome(UpdateInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateInstanceProfileOutcome(outcome.GetError());
  }
}

UpdateInstanceProfileOutcomeCallable DeviceFarmClient::UpdateInstanceProfileCallable(const UpdateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateInstanceProfileAsync(const UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateInstanceProfileAsyncHelper(const UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstanceProfile(request), context);
}

UpdateNetworkProfileOutcome DeviceFarmClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNetworkProfileOutcome(UpdateNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNetworkProfileOutcome(outcome.GetError());
  }
}

UpdateNetworkProfileOutcomeCallable DeviceFarmClient::UpdateNetworkProfileCallable(const UpdateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateNetworkProfileAsync(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNetworkProfileAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateNetworkProfileAsyncHelper(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNetworkProfile(request), context);
}

UpdateProjectOutcome DeviceFarmClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProjectOutcome(UpdateProjectResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProjectOutcome(outcome.GetError());
  }
}

UpdateProjectOutcomeCallable DeviceFarmClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProjectAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateProjectAsyncHelper(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProject(request), context);
}

UpdateUploadOutcome DeviceFarmClient::UpdateUpload(const UpdateUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUploadOutcome(UpdateUploadResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUploadOutcome(outcome.GetError());
  }
}

UpdateUploadOutcomeCallable DeviceFarmClient::UpdateUploadCallable(const UpdateUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateUploadAsync(const UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUploadAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateUploadAsyncHelper(const UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUpload(request), context);
}

UpdateVPCEConfigurationOutcome DeviceFarmClient::UpdateVPCEConfiguration(const UpdateVPCEConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVPCEConfigurationOutcome(UpdateVPCEConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVPCEConfigurationOutcome(outcome.GetError());
  }
}

UpdateVPCEConfigurationOutcomeCallable DeviceFarmClient::UpdateVPCEConfigurationCallable(const UpdateVPCEConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVPCEConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVPCEConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DeviceFarmClient::UpdateVPCEConfigurationAsync(const UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVPCEConfigurationAsyncHelper( request, handler, context ); } );
}

void DeviceFarmClient::UpdateVPCEConfigurationAsyncHelper(const UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVPCEConfiguration(request), context);
}

