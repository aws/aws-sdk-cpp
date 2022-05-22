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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Panorama");
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

void PanoramaClient::CreateApplicationInstanceAsync(const CreateApplicationInstanceRequest& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationInstanceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::CreateApplicationInstanceAsyncHelper(const CreateApplicationInstanceRequest& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplicationInstance(request), context);
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

void PanoramaClient::CreateJobForDevicesAsync(const CreateJobForDevicesRequest& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobForDevicesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::CreateJobForDevicesAsyncHelper(const CreateJobForDevicesRequest& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJobForDevices(request), context);
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

void PanoramaClient::CreateNodeFromTemplateJobAsync(const CreateNodeFromTemplateJobRequest& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNodeFromTemplateJobAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::CreateNodeFromTemplateJobAsyncHelper(const CreateNodeFromTemplateJobRequest& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNodeFromTemplateJob(request), context);
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

void PanoramaClient::CreatePackageAsync(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePackageAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::CreatePackageAsyncHelper(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePackage(request), context);
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

void PanoramaClient::CreatePackageImportJobAsync(const CreatePackageImportJobRequest& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePackageImportJobAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::CreatePackageImportJobAsyncHelper(const CreatePackageImportJobRequest& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePackageImportJob(request), context);
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

void PanoramaClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeviceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DeleteDeviceAsyncHelper(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDevice(request), context);
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

void PanoramaClient::DeletePackageAsync(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePackageAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DeletePackageAsyncHelper(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePackage(request), context);
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

void PanoramaClient::DeregisterPackageVersionAsync(const DeregisterPackageVersionRequest& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterPackageVersionAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DeregisterPackageVersionAsyncHelper(const DeregisterPackageVersionRequest& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterPackageVersion(request), context);
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

void PanoramaClient::DescribeApplicationInstanceAsync(const DescribeApplicationInstanceRequest& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationInstanceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeApplicationInstanceAsyncHelper(const DescribeApplicationInstanceRequest& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationInstance(request), context);
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

void PanoramaClient::DescribeApplicationInstanceDetailsAsync(const DescribeApplicationInstanceDetailsRequest& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationInstanceDetailsAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeApplicationInstanceDetailsAsyncHelper(const DescribeApplicationInstanceDetailsRequest& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationInstanceDetails(request), context);
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

void PanoramaClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeDeviceAsyncHelper(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDevice(request), context);
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

void PanoramaClient::DescribeDeviceJobAsync(const DescribeDeviceJobRequest& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceJobAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeDeviceJobAsyncHelper(const DescribeDeviceJobRequest& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeviceJob(request), context);
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

void PanoramaClient::DescribeNodeAsync(const DescribeNodeRequest& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNodeAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeNodeAsyncHelper(const DescribeNodeRequest& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNode(request), context);
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

void PanoramaClient::DescribeNodeFromTemplateJobAsync(const DescribeNodeFromTemplateJobRequest& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNodeFromTemplateJobAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribeNodeFromTemplateJobAsyncHelper(const DescribeNodeFromTemplateJobRequest& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNodeFromTemplateJob(request), context);
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

void PanoramaClient::DescribePackageAsync(const DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackageAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribePackageAsyncHelper(const DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackage(request), context);
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

void PanoramaClient::DescribePackageImportJobAsync(const DescribePackageImportJobRequest& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackageImportJobAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribePackageImportJobAsyncHelper(const DescribePackageImportJobRequest& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackageImportJob(request), context);
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

void PanoramaClient::DescribePackageVersionAsync(const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackageVersionAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::DescribePackageVersionAsyncHelper(const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackageVersion(request), context);
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

void PanoramaClient::ListApplicationInstanceDependenciesAsync(const ListApplicationInstanceDependenciesRequest& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationInstanceDependenciesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListApplicationInstanceDependenciesAsyncHelper(const ListApplicationInstanceDependenciesRequest& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationInstanceDependencies(request), context);
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

void PanoramaClient::ListApplicationInstanceNodeInstancesAsync(const ListApplicationInstanceNodeInstancesRequest& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationInstanceNodeInstancesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListApplicationInstanceNodeInstancesAsyncHelper(const ListApplicationInstanceNodeInstancesRequest& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationInstanceNodeInstances(request), context);
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

void PanoramaClient::ListApplicationInstancesAsync(const ListApplicationInstancesRequest& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationInstancesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListApplicationInstancesAsyncHelper(const ListApplicationInstancesRequest& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationInstances(request), context);
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

void PanoramaClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
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

void PanoramaClient::ListDevicesJobsAsync(const ListDevicesJobsRequest& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesJobsAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListDevicesJobsAsyncHelper(const ListDevicesJobsRequest& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevicesJobs(request), context);
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

void PanoramaClient::ListNodeFromTemplateJobsAsync(const ListNodeFromTemplateJobsRequest& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNodeFromTemplateJobsAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListNodeFromTemplateJobsAsyncHelper(const ListNodeFromTemplateJobsRequest& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNodeFromTemplateJobs(request), context);
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

void PanoramaClient::ListNodesAsync(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNodesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListNodesAsyncHelper(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNodes(request), context);
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

void PanoramaClient::ListPackageImportJobsAsync(const ListPackageImportJobsRequest& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackageImportJobsAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListPackageImportJobsAsyncHelper(const ListPackageImportJobsRequest& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackageImportJobs(request), context);
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

void PanoramaClient::ListPackagesAsync(const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackagesAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListPackagesAsyncHelper(const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackages(request), context);
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

void PanoramaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void PanoramaClient::ProvisionDeviceAsync(const ProvisionDeviceRequest& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionDeviceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::ProvisionDeviceAsyncHelper(const ProvisionDeviceRequest& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionDevice(request), context);
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

void PanoramaClient::RegisterPackageVersionAsync(const RegisterPackageVersionRequest& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterPackageVersionAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::RegisterPackageVersionAsyncHelper(const RegisterPackageVersionRequest& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterPackageVersion(request), context);
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

void PanoramaClient::RemoveApplicationInstanceAsync(const RemoveApplicationInstanceRequest& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveApplicationInstanceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::RemoveApplicationInstanceAsyncHelper(const RemoveApplicationInstanceRequest& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveApplicationInstance(request), context);
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

void PanoramaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void PanoramaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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

void PanoramaClient::UpdateDeviceMetadataAsync(const UpdateDeviceMetadataRequest& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceMetadataAsyncHelper( request, handler, context ); } );
}

void PanoramaClient::UpdateDeviceMetadataAsyncHelper(const UpdateDeviceMetadataRequest& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeviceMetadata(request), context);
}

