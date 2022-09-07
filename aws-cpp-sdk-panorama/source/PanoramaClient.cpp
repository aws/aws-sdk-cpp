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

#include <aws/panorama/PanoramaClient.h>
#include <aws/panorama/PanoramaEndpoint.h>
#include <aws/panorama/PanoramaErrorMarshaller.h>
#include <aws/panorama/model/CreateApplicationInstanceRequest.h>
#include <aws/panorama/model/CreateJobForDevicesRequest.h>
#include <aws/panorama/model/CreateNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/CreatePackageRequest.h>
#include <aws/panorama/model/CreatePackageImportJobRequest.h>
#include <aws/panorama/model/DeleteDeviceRequest.h>
#include <aws/panorama/model/DeletePackageRequest.h>
#include <aws/panorama/model/DeregisterPackageVersionRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceDetailsRequest.h>
#include <aws/panorama/model/DescribeDeviceRequest.h>
#include <aws/panorama/model/DescribeDeviceJobRequest.h>
#include <aws/panorama/model/DescribeNodeRequest.h>
#include <aws/panorama/model/DescribeNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/DescribePackageRequest.h>
#include <aws/panorama/model/DescribePackageImportJobRequest.h>
#include <aws/panorama/model/DescribePackageVersionRequest.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesRequest.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesRequest.h>
#include <aws/panorama/model/ListApplicationInstancesRequest.h>
#include <aws/panorama/model/ListDevicesRequest.h>
#include <aws/panorama/model/ListDevicesJobsRequest.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsRequest.h>
#include <aws/panorama/model/ListNodesRequest.h>
#include <aws/panorama/model/ListPackageImportJobsRequest.h>
#include <aws/panorama/model/ListPackagesRequest.h>
#include <aws/panorama/model/ListTagsForResourceRequest.h>
#include <aws/panorama/model/ProvisionDeviceRequest.h>
#include <aws/panorama/model/RegisterPackageVersionRequest.h>
#include <aws/panorama/model/RemoveApplicationInstanceRequest.h>
#include <aws/panorama/model/TagResourceRequest.h>
#include <aws/panorama/model/UntagResourceRequest.h>
#include <aws/panorama/model/UpdateDeviceMetadataRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Panorama;
using namespace Aws::Panorama::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "panorama";
static const char* ALLOCATION_TAG = "PanoramaClient";

PanoramaClient::PanoramaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PanoramaClient::~PanoramaClient()
{
}

void PanoramaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Panorama");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PanoramaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PanoramaClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApplicationInstanceOutcome PanoramaClient::CreateApplicationInstance(const CreateApplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances");
  return CreateApplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationInstanceOutcomeCallable PanoramaClient::CreateApplicationInstanceCallable(const CreateApplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientCreateApplicationInstanceAsyncHelper(PanoramaClient const * const clientThis, const CreateApplicationInstanceRequest& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplicationInstance(request), context);
}

void PanoramaClient::CreateApplicationInstanceAsync(const CreateApplicationInstanceRequest& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientCreateApplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateJobForDevicesOutcome PanoramaClient::CreateJobForDevices(const CreateJobForDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return CreateJobForDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobForDevicesOutcomeCallable PanoramaClient::CreateJobForDevicesCallable(const CreateJobForDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobForDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJobForDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientCreateJobForDevicesAsyncHelper(PanoramaClient const * const clientThis, const CreateJobForDevicesRequest& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJobForDevices(request), context);
}

void PanoramaClient::CreateJobForDevicesAsync(const CreateJobForDevicesRequest& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientCreateJobForDevicesAsyncHelper( this, request, handler, context ); } );
}

CreateNodeFromTemplateJobOutcome PanoramaClient::CreateNodeFromTemplateJob(const CreateNodeFromTemplateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/template-job");
  return CreateNodeFromTemplateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNodeFromTemplateJobOutcomeCallable PanoramaClient::CreateNodeFromTemplateJobCallable(const CreateNodeFromTemplateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNodeFromTemplateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNodeFromTemplateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientCreateNodeFromTemplateJobAsyncHelper(PanoramaClient const * const clientThis, const CreateNodeFromTemplateJobRequest& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNodeFromTemplateJob(request), context);
}

void PanoramaClient::CreateNodeFromTemplateJobAsync(const CreateNodeFromTemplateJobRequest& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientCreateNodeFromTemplateJobAsyncHelper( this, request, handler, context ); } );
}

CreatePackageOutcome PanoramaClient::CreatePackage(const CreatePackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages");
  return CreatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageOutcomeCallable PanoramaClient::CreatePackageCallable(const CreatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientCreatePackageAsyncHelper(PanoramaClient const * const clientThis, const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePackage(request), context);
}

void PanoramaClient::CreatePackageAsync(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientCreatePackageAsyncHelper( this, request, handler, context ); } );
}

CreatePackageImportJobOutcome PanoramaClient::CreatePackageImportJob(const CreatePackageImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/import-jobs");
  return CreatePackageImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageImportJobOutcomeCallable PanoramaClient::CreatePackageImportJobCallable(const CreatePackageImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackageImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackageImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientCreatePackageImportJobAsyncHelper(PanoramaClient const * const clientThis, const CreatePackageImportJobRequest& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePackageImportJob(request), context);
}

void PanoramaClient::CreatePackageImportJobAsync(const CreatePackageImportJobRequest& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientCreatePackageImportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteDeviceOutcome PanoramaClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: DeviceId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  return DeleteDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceOutcomeCallable PanoramaClient::DeleteDeviceCallable(const DeleteDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDeleteDeviceAsyncHelper(PanoramaClient const * const clientThis, const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDevice(request), context);
}

void PanoramaClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDeleteDeviceAsyncHelper( this, request, handler, context ); } );
}

DeletePackageOutcome PanoramaClient::DeletePackage(const DeletePackageRequest& request) const
{
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageId, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/");
  uri.AddPathSegment(request.GetPackageId());
  return DeletePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackageOutcomeCallable PanoramaClient::DeletePackageCallable(const DeletePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDeletePackageAsyncHelper(PanoramaClient const * const clientThis, const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePackage(request), context);
}

void PanoramaClient::DeletePackageAsync(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDeletePackageAsyncHelper( this, request, handler, context ); } );
}

DeregisterPackageVersionOutcome PanoramaClient::DeregisterPackageVersion(const DeregisterPackageVersionRequest& request) const
{
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageId, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PatchVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PatchVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/");
  uri.AddPathSegment(request.GetPackageId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetPackageVersion());
  uri.AddPathSegments("/patch/");
  uri.AddPathSegment(request.GetPatchVersion());
  return DeregisterPackageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterPackageVersionOutcomeCallable PanoramaClient::DeregisterPackageVersionCallable(const DeregisterPackageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterPackageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterPackageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDeregisterPackageVersionAsyncHelper(PanoramaClient const * const clientThis, const DeregisterPackageVersionRequest& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterPackageVersion(request), context);
}

void PanoramaClient::DeregisterPackageVersionAsync(const DeregisterPackageVersionRequest& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDeregisterPackageVersionAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationInstanceOutcome PanoramaClient::DescribeApplicationInstance(const DescribeApplicationInstanceRequest& request) const
{
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances/");
  uri.AddPathSegment(request.GetApplicationInstanceId());
  return DescribeApplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationInstanceOutcomeCallable PanoramaClient::DescribeApplicationInstanceCallable(const DescribeApplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeApplicationInstanceAsyncHelper(PanoramaClient const * const clientThis, const DescribeApplicationInstanceRequest& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationInstance(request), context);
}

void PanoramaClient::DescribeApplicationInstanceAsync(const DescribeApplicationInstanceRequest& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeApplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationInstanceDetailsOutcome PanoramaClient::DescribeApplicationInstanceDetails(const DescribeApplicationInstanceDetailsRequest& request) const
{
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstanceDetails", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceDetailsOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances/");
  uri.AddPathSegment(request.GetApplicationInstanceId());
  uri.AddPathSegments("/details");
  return DescribeApplicationInstanceDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationInstanceDetailsOutcomeCallable PanoramaClient::DescribeApplicationInstanceDetailsCallable(const DescribeApplicationInstanceDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationInstanceDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationInstanceDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeApplicationInstanceDetailsAsyncHelper(PanoramaClient const * const clientThis, const DescribeApplicationInstanceDetailsRequest& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationInstanceDetails(request), context);
}

void PanoramaClient::DescribeApplicationInstanceDetailsAsync(const DescribeApplicationInstanceDetailsRequest& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeApplicationInstanceDetailsAsyncHelper( this, request, handler, context ); } );
}

DescribeDeviceOutcome PanoramaClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: DeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  return DescribeDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcomeCallable PanoramaClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeDeviceAsyncHelper(PanoramaClient const * const clientThis, const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDevice(request), context);
}

void PanoramaClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeDeviceAsyncHelper( this, request, handler, context ); } );
}

DescribeDeviceJobOutcome PanoramaClient::DescribeDeviceJob(const DescribeDeviceJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDeviceJob", "Required field: JobId, is not set");
    return DescribeDeviceJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeDeviceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceJobOutcomeCallable PanoramaClient::DescribeDeviceJobCallable(const DescribeDeviceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeviceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeDeviceJobAsyncHelper(PanoramaClient const * const clientThis, const DescribeDeviceJobRequest& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeviceJob(request), context);
}

void PanoramaClient::DescribeDeviceJobAsync(const DescribeDeviceJobRequest& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeDeviceJobAsyncHelper( this, request, handler, context ); } );
}

DescribeNodeOutcome PanoramaClient::DescribeNode(const DescribeNodeRequest& request) const
{
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: NodeId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/nodes/");
  uri.AddPathSegment(request.GetNodeId());
  return DescribeNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodeOutcomeCallable PanoramaClient::DescribeNodeCallable(const DescribeNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeNodeAsyncHelper(PanoramaClient const * const clientThis, const DescribeNodeRequest& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNode(request), context);
}

void PanoramaClient::DescribeNodeAsync(const DescribeNodeRequest& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeNodeAsyncHelper( this, request, handler, context ); } );
}

DescribeNodeFromTemplateJobOutcome PanoramaClient::DescribeNodeFromTemplateJob(const DescribeNodeFromTemplateJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodeFromTemplateJob", "Required field: JobId, is not set");
    return DescribeNodeFromTemplateJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/template-job/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeNodeFromTemplateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodeFromTemplateJobOutcomeCallable PanoramaClient::DescribeNodeFromTemplateJobCallable(const DescribeNodeFromTemplateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodeFromTemplateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNodeFromTemplateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribeNodeFromTemplateJobAsyncHelper(PanoramaClient const * const clientThis, const DescribeNodeFromTemplateJobRequest& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNodeFromTemplateJob(request), context);
}

void PanoramaClient::DescribeNodeFromTemplateJobAsync(const DescribeNodeFromTemplateJobRequest& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribeNodeFromTemplateJobAsyncHelper( this, request, handler, context ); } );
}

DescribePackageOutcome PanoramaClient::DescribePackage(const DescribePackageRequest& request) const
{
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: PackageId, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/metadata/");
  uri.AddPathSegment(request.GetPackageId());
  return DescribePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageOutcomeCallable PanoramaClient::DescribePackageCallable(const DescribePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribePackageAsyncHelper(PanoramaClient const * const clientThis, const DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePackage(request), context);
}

void PanoramaClient::DescribePackageAsync(const DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribePackageAsyncHelper( this, request, handler, context ); } );
}

DescribePackageImportJobOutcome PanoramaClient::DescribePackageImportJob(const DescribePackageImportJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageImportJob", "Required field: JobId, is not set");
    return DescribePackageImportJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/import-jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribePackageImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageImportJobOutcomeCallable PanoramaClient::DescribePackageImportJobCallable(const DescribePackageImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackageImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackageImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribePackageImportJobAsyncHelper(PanoramaClient const * const clientThis, const DescribePackageImportJobRequest& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePackageImportJob(request), context);
}

void PanoramaClient::DescribePackageImportJobAsync(const DescribePackageImportJobRequest& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribePackageImportJobAsyncHelper( this, request, handler, context ); } );
}

DescribePackageVersionOutcome PanoramaClient::DescribePackageVersion(const DescribePackageVersionRequest& request) const
{
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageId, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageVersion, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/metadata/");
  uri.AddPathSegment(request.GetPackageId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetPackageVersion());
  return DescribePackageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageVersionOutcomeCallable PanoramaClient::DescribePackageVersionCallable(const DescribePackageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientDescribePackageVersionAsyncHelper(PanoramaClient const * const clientThis, const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePackageVersion(request), context);
}

void PanoramaClient::DescribePackageVersionAsync(const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientDescribePackageVersionAsyncHelper( this, request, handler, context ); } );
}

ListApplicationInstanceDependenciesOutcome PanoramaClient::ListApplicationInstanceDependencies(const ListApplicationInstanceDependenciesRequest& request) const
{
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceDependencies", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceDependenciesOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances/");
  uri.AddPathSegment(request.GetApplicationInstanceId());
  uri.AddPathSegments("/package-dependencies");
  return ListApplicationInstanceDependenciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstanceDependenciesOutcomeCallable PanoramaClient::ListApplicationInstanceDependenciesCallable(const ListApplicationInstanceDependenciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationInstanceDependenciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationInstanceDependencies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListApplicationInstanceDependenciesAsyncHelper(PanoramaClient const * const clientThis, const ListApplicationInstanceDependenciesRequest& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationInstanceDependencies(request), context);
}

void PanoramaClient::ListApplicationInstanceDependenciesAsync(const ListApplicationInstanceDependenciesRequest& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListApplicationInstanceDependenciesAsyncHelper( this, request, handler, context ); } );
}

ListApplicationInstanceNodeInstancesOutcome PanoramaClient::ListApplicationInstanceNodeInstances(const ListApplicationInstanceNodeInstancesRequest& request) const
{
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceNodeInstances", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceNodeInstancesOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances/");
  uri.AddPathSegment(request.GetApplicationInstanceId());
  uri.AddPathSegments("/node-instances");
  return ListApplicationInstanceNodeInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstanceNodeInstancesOutcomeCallable PanoramaClient::ListApplicationInstanceNodeInstancesCallable(const ListApplicationInstanceNodeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationInstanceNodeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationInstanceNodeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListApplicationInstanceNodeInstancesAsyncHelper(PanoramaClient const * const clientThis, const ListApplicationInstanceNodeInstancesRequest& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationInstanceNodeInstances(request), context);
}

void PanoramaClient::ListApplicationInstanceNodeInstancesAsync(const ListApplicationInstanceNodeInstancesRequest& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListApplicationInstanceNodeInstancesAsyncHelper( this, request, handler, context ); } );
}

ListApplicationInstancesOutcome PanoramaClient::ListApplicationInstances(const ListApplicationInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances");
  return ListApplicationInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstancesOutcomeCallable PanoramaClient::ListApplicationInstancesCallable(const ListApplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListApplicationInstancesAsyncHelper(PanoramaClient const * const clientThis, const ListApplicationInstancesRequest& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationInstances(request), context);
}

void PanoramaClient::ListApplicationInstancesAsync(const ListApplicationInstancesRequest& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListApplicationInstancesAsyncHelper( this, request, handler, context ); } );
}

ListDevicesOutcome PanoramaClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices");
  return ListDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable PanoramaClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListDevicesAsyncHelper(PanoramaClient const * const clientThis, const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevices(request), context);
}

void PanoramaClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListDevicesAsyncHelper( this, request, handler, context ); } );
}

ListDevicesJobsOutcome PanoramaClient::ListDevicesJobs(const ListDevicesJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return ListDevicesJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesJobsOutcomeCallable PanoramaClient::ListDevicesJobsCallable(const ListDevicesJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevicesJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListDevicesJobsAsyncHelper(PanoramaClient const * const clientThis, const ListDevicesJobsRequest& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevicesJobs(request), context);
}

void PanoramaClient::ListDevicesJobsAsync(const ListDevicesJobsRequest& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListDevicesJobsAsyncHelper( this, request, handler, context ); } );
}

ListNodeFromTemplateJobsOutcome PanoramaClient::ListNodeFromTemplateJobs(const ListNodeFromTemplateJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/template-job");
  return ListNodeFromTemplateJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodeFromTemplateJobsOutcomeCallable PanoramaClient::ListNodeFromTemplateJobsCallable(const ListNodeFromTemplateJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodeFromTemplateJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodeFromTemplateJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListNodeFromTemplateJobsAsyncHelper(PanoramaClient const * const clientThis, const ListNodeFromTemplateJobsRequest& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNodeFromTemplateJobs(request), context);
}

void PanoramaClient::ListNodeFromTemplateJobsAsync(const ListNodeFromTemplateJobsRequest& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListNodeFromTemplateJobsAsyncHelper( this, request, handler, context ); } );
}

ListNodesOutcome PanoramaClient::ListNodes(const ListNodesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/nodes");
  return ListNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodesOutcomeCallable PanoramaClient::ListNodesCallable(const ListNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListNodesAsyncHelper(PanoramaClient const * const clientThis, const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNodes(request), context);
}

void PanoramaClient::ListNodesAsync(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListNodesAsyncHelper( this, request, handler, context ); } );
}

ListPackageImportJobsOutcome PanoramaClient::ListPackageImportJobs(const ListPackageImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/import-jobs");
  return ListPackageImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackageImportJobsOutcomeCallable PanoramaClient::ListPackageImportJobsCallable(const ListPackageImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackageImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackageImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListPackageImportJobsAsyncHelper(PanoramaClient const * const clientThis, const ListPackageImportJobsRequest& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPackageImportJobs(request), context);
}

void PanoramaClient::ListPackageImportJobsAsync(const ListPackageImportJobsRequest& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListPackageImportJobsAsyncHelper( this, request, handler, context ); } );
}

ListPackagesOutcome PanoramaClient::ListPackages(const ListPackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages");
  return ListPackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagesOutcomeCallable PanoramaClient::ListPackagesCallable(const ListPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListPackagesAsyncHelper(PanoramaClient const * const clientThis, const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPackages(request), context);
}

void PanoramaClient::ListPackagesAsync(const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListPackagesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome PanoramaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PanoramaClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientListTagsForResourceAsyncHelper(PanoramaClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void PanoramaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ProvisionDeviceOutcome PanoramaClient::ProvisionDevice(const ProvisionDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices");
  return ProvisionDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionDeviceOutcomeCallable PanoramaClient::ProvisionDeviceCallable(const ProvisionDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientProvisionDeviceAsyncHelper(PanoramaClient const * const clientThis, const ProvisionDeviceRequest& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ProvisionDevice(request), context);
}

void PanoramaClient::ProvisionDeviceAsync(const ProvisionDeviceRequest& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientProvisionDeviceAsyncHelper( this, request, handler, context ); } );
}

RegisterPackageVersionOutcome PanoramaClient::RegisterPackageVersion(const RegisterPackageVersionRequest& request) const
{
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageId, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PatchVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PatchVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/packages/");
  uri.AddPathSegment(request.GetPackageId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetPackageVersion());
  uri.AddPathSegments("/patch/");
  uri.AddPathSegment(request.GetPatchVersion());
  return RegisterPackageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RegisterPackageVersionOutcomeCallable PanoramaClient::RegisterPackageVersionCallable(const RegisterPackageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterPackageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterPackageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientRegisterPackageVersionAsyncHelper(PanoramaClient const * const clientThis, const RegisterPackageVersionRequest& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterPackageVersion(request), context);
}

void PanoramaClient::RegisterPackageVersionAsync(const RegisterPackageVersionRequest& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientRegisterPackageVersionAsyncHelper( this, request, handler, context ); } );
}

RemoveApplicationInstanceOutcome PanoramaClient::RemoveApplicationInstance(const RemoveApplicationInstanceRequest& request) const
{
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return RemoveApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/application-instances/");
  uri.AddPathSegment(request.GetApplicationInstanceId());
  return RemoveApplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveApplicationInstanceOutcomeCallable PanoramaClient::RemoveApplicationInstanceCallable(const RemoveApplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveApplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveApplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientRemoveApplicationInstanceAsyncHelper(PanoramaClient const * const clientThis, const RemoveApplicationInstanceRequest& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveApplicationInstance(request), context);
}

void PanoramaClient::RemoveApplicationInstanceAsync(const RemoveApplicationInstanceRequest& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientRemoveApplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome PanoramaClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PanoramaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientTagResourceAsyncHelper(PanoramaClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void PanoramaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome PanoramaClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PanoramaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientUntagResourceAsyncHelper(PanoramaClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void PanoramaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDeviceMetadataOutcome PanoramaClient::UpdateDeviceMetadata(const UpdateDeviceMetadataRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeviceMetadata", "Required field: DeviceId, is not set");
    return UpdateDeviceMetadataOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  return UpdateDeviceMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceMetadataOutcomeCallable PanoramaClient::UpdateDeviceMetadataCallable(const UpdateDeviceMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PanoramaClientUpdateDeviceMetadataAsyncHelper(PanoramaClient const * const clientThis, const UpdateDeviceMetadataRequest& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeviceMetadata(request), context);
}

void PanoramaClient::UpdateDeviceMetadataAsync(const UpdateDeviceMetadataRequest& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PanoramaClientUpdateDeviceMetadataAsyncHelper( this, request, handler, context ); } );
}

