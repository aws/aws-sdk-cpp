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

#include <aws/greengrassv2/GreengrassV2Client.h>
#include <aws/greengrassv2/GreengrassV2Endpoint.h>
#include <aws/greengrassv2/GreengrassV2ErrorMarshaller.h>
#include <aws/greengrassv2/model/AssociateServiceRoleToAccountRequest.h>
#include <aws/greengrassv2/model/BatchAssociateClientDeviceWithCoreDeviceRequest.h>
#include <aws/greengrassv2/model/BatchDisassociateClientDeviceFromCoreDeviceRequest.h>
#include <aws/greengrassv2/model/CancelDeploymentRequest.h>
#include <aws/greengrassv2/model/CreateComponentVersionRequest.h>
#include <aws/greengrassv2/model/CreateDeploymentRequest.h>
#include <aws/greengrassv2/model/DeleteComponentRequest.h>
#include <aws/greengrassv2/model/DeleteCoreDeviceRequest.h>
#include <aws/greengrassv2/model/DeleteDeploymentRequest.h>
#include <aws/greengrassv2/model/DescribeComponentRequest.h>
#include <aws/greengrassv2/model/DisassociateServiceRoleFromAccountRequest.h>
#include <aws/greengrassv2/model/GetComponentRequest.h>
#include <aws/greengrassv2/model/GetComponentVersionArtifactRequest.h>
#include <aws/greengrassv2/model/GetConnectivityInfoRequest.h>
#include <aws/greengrassv2/model/GetCoreDeviceRequest.h>
#include <aws/greengrassv2/model/GetDeploymentRequest.h>
#include <aws/greengrassv2/model/GetServiceRoleForAccountRequest.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDeviceRequest.h>
#include <aws/greengrassv2/model/ListComponentVersionsRequest.h>
#include <aws/greengrassv2/model/ListComponentsRequest.h>
#include <aws/greengrassv2/model/ListCoreDevicesRequest.h>
#include <aws/greengrassv2/model/ListDeploymentsRequest.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsRequest.h>
#include <aws/greengrassv2/model/ListInstalledComponentsRequest.h>
#include <aws/greengrassv2/model/ListTagsForResourceRequest.h>
#include <aws/greengrassv2/model/ResolveComponentCandidatesRequest.h>
#include <aws/greengrassv2/model/TagResourceRequest.h>
#include <aws/greengrassv2/model/UntagResourceRequest.h>
#include <aws/greengrassv2/model/UpdateConnectivityInfoRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GreengrassV2;
using namespace Aws::GreengrassV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "greengrass";
static const char* ALLOCATION_TAG = "GreengrassV2Client";

GreengrassV2Client::GreengrassV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassV2Client::~GreengrassV2Client()
{
}

void GreengrassV2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GreengrassV2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GreengrassV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GreengrassV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateServiceRoleToAccountOutcome GreengrassV2Client::AssociateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/servicerole");
  return AssociateServiceRoleToAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceRoleToAccountOutcomeCallable GreengrassV2Client::AssociateServiceRoleToAccountCallable(const AssociateServiceRoleToAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceRoleToAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceRoleToAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientAssociateServiceRoleToAccountAsyncHelper(GreengrassV2Client const * const clientThis, const AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateServiceRoleToAccount(request), context);
}

void GreengrassV2Client::AssociateServiceRoleToAccountAsync(const AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientAssociateServiceRoleToAccountAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateClientDeviceWithCoreDeviceOutcome GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice(const BatchAssociateClientDeviceWithCoreDeviceRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateClientDeviceWithCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return BatchAssociateClientDeviceWithCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  uri.AddPathSegments("/associateClientDevices");
  return BatchAssociateClientDeviceWithCoreDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateClientDeviceWithCoreDeviceOutcomeCallable GreengrassV2Client::BatchAssociateClientDeviceWithCoreDeviceCallable(const BatchAssociateClientDeviceWithCoreDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateClientDeviceWithCoreDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateClientDeviceWithCoreDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientBatchAssociateClientDeviceWithCoreDeviceAsyncHelper(GreengrassV2Client const * const clientThis, const BatchAssociateClientDeviceWithCoreDeviceRequest& request, const BatchAssociateClientDeviceWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateClientDeviceWithCoreDevice(request), context);
}

void GreengrassV2Client::BatchAssociateClientDeviceWithCoreDeviceAsync(const BatchAssociateClientDeviceWithCoreDeviceRequest& request, const BatchAssociateClientDeviceWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientBatchAssociateClientDeviceWithCoreDeviceAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateClientDeviceFromCoreDeviceOutcome GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice(const BatchDisassociateClientDeviceFromCoreDeviceRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateClientDeviceFromCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return BatchDisassociateClientDeviceFromCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  uri.AddPathSegments("/disassociateClientDevices");
  return BatchDisassociateClientDeviceFromCoreDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateClientDeviceFromCoreDeviceOutcomeCallable GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDeviceCallable(const BatchDisassociateClientDeviceFromCoreDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateClientDeviceFromCoreDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateClientDeviceFromCoreDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientBatchDisassociateClientDeviceFromCoreDeviceAsyncHelper(GreengrassV2Client const * const clientThis, const BatchDisassociateClientDeviceFromCoreDeviceRequest& request, const BatchDisassociateClientDeviceFromCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateClientDeviceFromCoreDevice(request), context);
}

void GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDeviceAsync(const BatchDisassociateClientDeviceFromCoreDeviceRequest& request, const BatchDisassociateClientDeviceFromCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientBatchDisassociateClientDeviceFromCoreDeviceAsyncHelper( this, request, handler, context ); } );
}

CancelDeploymentOutcome GreengrassV2Client::CancelDeployment(const CancelDeploymentRequest& request) const
{
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelDeployment", "Required field: DeploymentId, is not set");
    return CancelDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  uri.AddPathSegments("/cancel");
  return CancelDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelDeploymentOutcomeCallable GreengrassV2Client::CancelDeploymentCallable(const CancelDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientCancelDeploymentAsyncHelper(GreengrassV2Client const * const clientThis, const CancelDeploymentRequest& request, const CancelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelDeployment(request), context);
}

void GreengrassV2Client::CancelDeploymentAsync(const CancelDeploymentRequest& request, const CancelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientCancelDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateComponentVersionOutcome GreengrassV2Client::CreateComponentVersion(const CreateComponentVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/createComponentVersion");
  return CreateComponentVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentVersionOutcomeCallable GreengrassV2Client::CreateComponentVersionCallable(const CreateComponentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientCreateComponentVersionAsyncHelper(GreengrassV2Client const * const clientThis, const CreateComponentVersionRequest& request, const CreateComponentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateComponentVersion(request), context);
}

void GreengrassV2Client::CreateComponentVersionAsync(const CreateComponentVersionRequest& request, const CreateComponentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientCreateComponentVersionAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome GreengrassV2Client::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/deployments");
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable GreengrassV2Client::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientCreateDeploymentAsyncHelper(GreengrassV2Client const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void GreengrassV2Client::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

DeleteComponentOutcome GreengrassV2Client::DeleteComponent(const DeleteComponentRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: Arn, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components/");
  uri.AddPathSegment(request.GetArn());
  return DeleteComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable GreengrassV2Client::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientDeleteComponentAsyncHelper(GreengrassV2Client const * const clientThis, const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteComponent(request), context);
}

void GreengrassV2Client::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientDeleteComponentAsyncHelper( this, request, handler, context ); } );
}

DeleteCoreDeviceOutcome GreengrassV2Client::DeleteCoreDevice(const DeleteCoreDeviceRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return DeleteCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  return DeleteCoreDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCoreDeviceOutcomeCallable GreengrassV2Client::DeleteCoreDeviceCallable(const DeleteCoreDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoreDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCoreDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientDeleteCoreDeviceAsyncHelper(GreengrassV2Client const * const clientThis, const DeleteCoreDeviceRequest& request, const DeleteCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCoreDevice(request), context);
}

void GreengrassV2Client::DeleteCoreDeviceAsync(const DeleteCoreDeviceRequest& request, const DeleteCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientDeleteCoreDeviceAsyncHelper( this, request, handler, context ); } );
}

DeleteDeploymentOutcome GreengrassV2Client::DeleteDeployment(const DeleteDeploymentRequest& request) const
{
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return DeleteDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentOutcomeCallable GreengrassV2Client::DeleteDeploymentCallable(const DeleteDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientDeleteDeploymentAsyncHelper(GreengrassV2Client const * const clientThis, const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeployment(request), context);
}

void GreengrassV2Client::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientDeleteDeploymentAsyncHelper( this, request, handler, context ); } );
}

DescribeComponentOutcome GreengrassV2Client::DescribeComponent(const DescribeComponentRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeComponent", "Required field: Arn, is not set");
    return DescribeComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/metadata");
  return DescribeComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeComponentOutcomeCallable GreengrassV2Client::DescribeComponentCallable(const DescribeComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientDescribeComponentAsyncHelper(GreengrassV2Client const * const clientThis, const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComponent(request), context);
}

void GreengrassV2Client::DescribeComponentAsync(const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientDescribeComponentAsyncHelper( this, request, handler, context ); } );
}

DisassociateServiceRoleFromAccountOutcome GreengrassV2Client::DisassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/servicerole");
  return DisassociateServiceRoleFromAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceRoleFromAccountOutcomeCallable GreengrassV2Client::DisassociateServiceRoleFromAccountCallable(const DisassociateServiceRoleFromAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceRoleFromAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceRoleFromAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientDisassociateServiceRoleFromAccountAsyncHelper(GreengrassV2Client const * const clientThis, const DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateServiceRoleFromAccount(request), context);
}

void GreengrassV2Client::DisassociateServiceRoleFromAccountAsync(const DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientDisassociateServiceRoleFromAccountAsyncHelper( this, request, handler, context ); } );
}

GetComponentOutcome GreengrassV2Client::GetComponent(const GetComponentRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: Arn, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components/");
  uri.AddPathSegment(request.GetArn());
  return GetComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentOutcomeCallable GreengrassV2Client::GetComponentCallable(const GetComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetComponentAsyncHelper(GreengrassV2Client const * const clientThis, const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComponent(request), context);
}

void GreengrassV2Client::GetComponentAsync(const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetComponentAsyncHelper( this, request, handler, context ); } );
}

GetComponentVersionArtifactOutcome GreengrassV2Client::GetComponentVersionArtifact(const GetComponentVersionArtifactRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentVersionArtifact", "Required field: Arn, is not set");
    return GetComponentVersionArtifactOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.ArtifactNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentVersionArtifact", "Required field: ArtifactName, is not set");
    return GetComponentVersionArtifactOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArtifactName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/artifacts/");
  uri.AddPathSegments(request.GetArtifactName());
  return GetComponentVersionArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentVersionArtifactOutcomeCallable GreengrassV2Client::GetComponentVersionArtifactCallable(const GetComponentVersionArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentVersionArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponentVersionArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetComponentVersionArtifactAsyncHelper(GreengrassV2Client const * const clientThis, const GetComponentVersionArtifactRequest& request, const GetComponentVersionArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComponentVersionArtifact(request), context);
}

void GreengrassV2Client::GetComponentVersionArtifactAsync(const GetComponentVersionArtifactRequest& request, const GetComponentVersionArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetComponentVersionArtifactAsyncHelper( this, request, handler, context ); } );
}

GetConnectivityInfoOutcome GreengrassV2Client::GetConnectivityInfo(const GetConnectivityInfoRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectivityInfo", "Required field: ThingName, is not set");
    return GetConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/connectivityInfo");
  return GetConnectivityInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectivityInfoOutcomeCallable GreengrassV2Client::GetConnectivityInfoCallable(const GetConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetConnectivityInfoAsyncHelper(GreengrassV2Client const * const clientThis, const GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnectivityInfo(request), context);
}

void GreengrassV2Client::GetConnectivityInfoAsync(const GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetConnectivityInfoAsyncHelper( this, request, handler, context ); } );
}

GetCoreDeviceOutcome GreengrassV2Client::GetCoreDevice(const GetCoreDeviceRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return GetCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  return GetCoreDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreDeviceOutcomeCallable GreengrassV2Client::GetCoreDeviceCallable(const GetCoreDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetCoreDeviceAsyncHelper(GreengrassV2Client const * const clientThis, const GetCoreDeviceRequest& request, const GetCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCoreDevice(request), context);
}

void GreengrassV2Client::GetCoreDeviceAsync(const GetCoreDeviceRequest& request, const GetCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetCoreDeviceAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentOutcome GreengrassV2Client::GetDeployment(const GetDeploymentRequest& request) const
{
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable GreengrassV2Client::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetDeploymentAsyncHelper(GreengrassV2Client const * const clientThis, const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployment(request), context);
}

void GreengrassV2Client::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetDeploymentAsyncHelper( this, request, handler, context ); } );
}

GetServiceRoleForAccountOutcome GreengrassV2Client::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/servicerole");
  return GetServiceRoleForAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceRoleForAccountOutcomeCallable GreengrassV2Client::GetServiceRoleForAccountCallable(const GetServiceRoleForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceRoleForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceRoleForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientGetServiceRoleForAccountAsyncHelper(GreengrassV2Client const * const clientThis, const GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceRoleForAccount(request), context);
}

void GreengrassV2Client::GetServiceRoleForAccountAsync(const GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientGetServiceRoleForAccountAsyncHelper( this, request, handler, context ); } );
}

ListClientDevicesAssociatedWithCoreDeviceOutcome GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice(const ListClientDevicesAssociatedWithCoreDeviceRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListClientDevicesAssociatedWithCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return ListClientDevicesAssociatedWithCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  uri.AddPathSegments("/associatedClientDevices");
  return ListClientDevicesAssociatedWithCoreDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClientDevicesAssociatedWithCoreDeviceOutcomeCallable GreengrassV2Client::ListClientDevicesAssociatedWithCoreDeviceCallable(const ListClientDevicesAssociatedWithCoreDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClientDevicesAssociatedWithCoreDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClientDevicesAssociatedWithCoreDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListClientDevicesAssociatedWithCoreDeviceAsyncHelper(GreengrassV2Client const * const clientThis, const ListClientDevicesAssociatedWithCoreDeviceRequest& request, const ListClientDevicesAssociatedWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClientDevicesAssociatedWithCoreDevice(request), context);
}

void GreengrassV2Client::ListClientDevicesAssociatedWithCoreDeviceAsync(const ListClientDevicesAssociatedWithCoreDeviceRequest& request, const ListClientDevicesAssociatedWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListClientDevicesAssociatedWithCoreDeviceAsyncHelper( this, request, handler, context ); } );
}

ListComponentVersionsOutcome GreengrassV2Client::ListComponentVersions(const ListComponentVersionsRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComponentVersions", "Required field: Arn, is not set");
    return ListComponentVersionsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/versions");
  return ListComponentVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListComponentVersionsOutcomeCallable GreengrassV2Client::ListComponentVersionsCallable(const ListComponentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListComponentVersionsAsyncHelper(GreengrassV2Client const * const clientThis, const ListComponentVersionsRequest& request, const ListComponentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComponentVersions(request), context);
}

void GreengrassV2Client::ListComponentVersionsAsync(const ListComponentVersionsRequest& request, const ListComponentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListComponentVersionsAsyncHelper( this, request, handler, context ); } );
}

ListComponentsOutcome GreengrassV2Client::ListComponents(const ListComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/components");
  return ListComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable GreengrassV2Client::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListComponentsAsyncHelper(GreengrassV2Client const * const clientThis, const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComponents(request), context);
}

void GreengrassV2Client::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListComponentsAsyncHelper( this, request, handler, context ); } );
}

ListCoreDevicesOutcome GreengrassV2Client::ListCoreDevices(const ListCoreDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices");
  return ListCoreDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreDevicesOutcomeCallable GreengrassV2Client::ListCoreDevicesCallable(const ListCoreDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListCoreDevicesAsyncHelper(GreengrassV2Client const * const clientThis, const ListCoreDevicesRequest& request, const ListCoreDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCoreDevices(request), context);
}

void GreengrassV2Client::ListCoreDevicesAsync(const ListCoreDevicesRequest& request, const ListCoreDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListCoreDevicesAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentsOutcome GreengrassV2Client::ListDeployments(const ListDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/deployments");
  return ListDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcomeCallable GreengrassV2Client::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListDeploymentsAsyncHelper(GreengrassV2Client const * const clientThis, const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeployments(request), context);
}

void GreengrassV2Client::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListDeploymentsAsyncHelper( this, request, handler, context ); } );
}

ListEffectiveDeploymentsOutcome GreengrassV2Client::ListEffectiveDeployments(const ListEffectiveDeploymentsRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEffectiveDeployments", "Required field: CoreDeviceThingName, is not set");
    return ListEffectiveDeploymentsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  uri.AddPathSegments("/effectiveDeployments");
  return ListEffectiveDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEffectiveDeploymentsOutcomeCallable GreengrassV2Client::ListEffectiveDeploymentsCallable(const ListEffectiveDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEffectiveDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEffectiveDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListEffectiveDeploymentsAsyncHelper(GreengrassV2Client const * const clientThis, const ListEffectiveDeploymentsRequest& request, const ListEffectiveDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEffectiveDeployments(request), context);
}

void GreengrassV2Client::ListEffectiveDeploymentsAsync(const ListEffectiveDeploymentsRequest& request, const ListEffectiveDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListEffectiveDeploymentsAsyncHelper( this, request, handler, context ); } );
}

ListInstalledComponentsOutcome GreengrassV2Client::ListInstalledComponents(const ListInstalledComponentsRequest& request) const
{
  if (!request.CoreDeviceThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstalledComponents", "Required field: CoreDeviceThingName, is not set");
    return ListInstalledComponentsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/coreDevices/");
  uri.AddPathSegment(request.GetCoreDeviceThingName());
  uri.AddPathSegments("/installedComponents");
  return ListInstalledComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstalledComponentsOutcomeCallable GreengrassV2Client::ListInstalledComponentsCallable(const ListInstalledComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstalledComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstalledComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListInstalledComponentsAsyncHelper(GreengrassV2Client const * const clientThis, const ListInstalledComponentsRequest& request, const ListInstalledComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstalledComponents(request), context);
}

void GreengrassV2Client::ListInstalledComponentsAsync(const ListInstalledComponentsRequest& request, const ListInstalledComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListInstalledComponentsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome GreengrassV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GreengrassV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientListTagsForResourceAsyncHelper(GreengrassV2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void GreengrassV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ResolveComponentCandidatesOutcome GreengrassV2Client::ResolveComponentCandidates(const ResolveComponentCandidatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/v2/resolveComponentCandidates");
  return ResolveComponentCandidatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveComponentCandidatesOutcomeCallable GreengrassV2Client::ResolveComponentCandidatesCallable(const ResolveComponentCandidatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveComponentCandidatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveComponentCandidates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientResolveComponentCandidatesAsyncHelper(GreengrassV2Client const * const clientThis, const ResolveComponentCandidatesRequest& request, const ResolveComponentCandidatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResolveComponentCandidates(request), context);
}

void GreengrassV2Client::ResolveComponentCandidatesAsync(const ResolveComponentCandidatesRequest& request, const ResolveComponentCandidatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientResolveComponentCandidatesAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GreengrassV2Client::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GreengrassV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientTagResourceAsyncHelper(GreengrassV2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GreengrassV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GreengrassV2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GreengrassV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientUntagResourceAsyncHelper(GreengrassV2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GreengrassV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectivityInfoOutcome GreengrassV2Client::UpdateConnectivityInfo(const UpdateConnectivityInfoRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnectivityInfo", "Required field: ThingName, is not set");
    return UpdateConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/greengrass/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/connectivityInfo");
  return UpdateConnectivityInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectivityInfoOutcomeCallable GreengrassV2Client::UpdateConnectivityInfoCallable(const UpdateConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassV2ClientUpdateConnectivityInfoAsyncHelper(GreengrassV2Client const * const clientThis, const UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnectivityInfo(request), context);
}

void GreengrassV2Client::UpdateConnectivityInfoAsync(const UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GreengrassV2ClientUpdateConnectivityInfoAsyncHelper( this, request, handler, context ); } );
}

