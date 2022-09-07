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

#include <aws/customer-profiles/CustomerProfilesClient.h>
#include <aws/customer-profiles/CustomerProfilesEndpoint.h>
#include <aws/customer-profiles/CustomerProfilesErrorMarshaller.h>
#include <aws/customer-profiles/model/AddProfileKeyRequest.h>
#include <aws/customer-profiles/model/CreateDomainRequest.h>
#include <aws/customer-profiles/model/CreateIntegrationWorkflowRequest.h>
#include <aws/customer-profiles/model/CreateProfileRequest.h>
#include <aws/customer-profiles/model/DeleteDomainRequest.h>
#include <aws/customer-profiles/model/DeleteIntegrationRequest.h>
#include <aws/customer-profiles/model/DeleteProfileRequest.h>
#include <aws/customer-profiles/model/DeleteProfileKeyRequest.h>
#include <aws/customer-profiles/model/DeleteProfileObjectRequest.h>
#include <aws/customer-profiles/model/DeleteProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/DeleteWorkflowRequest.h>
#include <aws/customer-profiles/model/GetAutoMergingPreviewRequest.h>
#include <aws/customer-profiles/model/GetDomainRequest.h>
#include <aws/customer-profiles/model/GetIdentityResolutionJobRequest.h>
#include <aws/customer-profiles/model/GetIntegrationRequest.h>
#include <aws/customer-profiles/model/GetMatchesRequest.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeTemplateRequest.h>
#include <aws/customer-profiles/model/GetWorkflowRequest.h>
#include <aws/customer-profiles/model/GetWorkflowStepsRequest.h>
#include <aws/customer-profiles/model/ListAccountIntegrationsRequest.h>
#include <aws/customer-profiles/model/ListDomainsRequest.h>
#include <aws/customer-profiles/model/ListIdentityResolutionJobsRequest.h>
#include <aws/customer-profiles/model/ListIntegrationsRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectTypesRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectsRequest.h>
#include <aws/customer-profiles/model/ListTagsForResourceRequest.h>
#include <aws/customer-profiles/model/ListWorkflowsRequest.h>
#include <aws/customer-profiles/model/MergeProfilesRequest.h>
#include <aws/customer-profiles/model/PutIntegrationRequest.h>
#include <aws/customer-profiles/model/PutProfileObjectRequest.h>
#include <aws/customer-profiles/model/PutProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/SearchProfilesRequest.h>
#include <aws/customer-profiles/model/TagResourceRequest.h>
#include <aws/customer-profiles/model/UntagResourceRequest.h>
#include <aws/customer-profiles/model/UpdateDomainRequest.h>
#include <aws/customer-profiles/model/UpdateProfileRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CustomerProfiles;
using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "profile";
static const char* ALLOCATION_TAG = "CustomerProfilesClient";

CustomerProfilesClient::CustomerProfilesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CustomerProfilesClient::~CustomerProfilesClient()
{
}

void CustomerProfilesClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Customer Profiles");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CustomerProfilesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CustomerProfilesClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddProfileKeyOutcome CustomerProfilesClient::AddProfileKey(const AddProfileKeyRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddProfileKey", "Required field: DomainName, is not set");
    return AddProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/keys");
  return AddProfileKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddProfileKeyOutcomeCallable CustomerProfilesClient::AddProfileKeyCallable(const AddProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientAddProfileKeyAsyncHelper(CustomerProfilesClient const * const clientThis, const AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddProfileKey(request), context);
}

void CustomerProfilesClient::AddProfileKeyAsync(const AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientAddProfileKeyAsyncHelper( this, request, handler, context ); } );
}

CreateDomainOutcome CustomerProfilesClient::CreateDomain(const CreateDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: DomainName, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable CustomerProfilesClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientCreateDomainAsyncHelper(CustomerProfilesClient const * const clientThis, const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomain(request), context);
}

void CustomerProfilesClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientCreateDomainAsyncHelper( this, request, handler, context ); } );
}

CreateIntegrationWorkflowOutcome CustomerProfilesClient::CreateIntegrationWorkflow(const CreateIntegrationWorkflowRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationWorkflow", "Required field: DomainName, is not set");
    return CreateIntegrationWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/workflows/integrations");
  return CreateIntegrationWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationWorkflowOutcomeCallable CustomerProfilesClient::CreateIntegrationWorkflowCallable(const CreateIntegrationWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntegrationWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntegrationWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientCreateIntegrationWorkflowAsyncHelper(CustomerProfilesClient const * const clientThis, const CreateIntegrationWorkflowRequest& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIntegrationWorkflow(request), context);
}

void CustomerProfilesClient::CreateIntegrationWorkflowAsync(const CreateIntegrationWorkflowRequest& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientCreateIntegrationWorkflowAsyncHelper( this, request, handler, context ); } );
}

CreateProfileOutcome CustomerProfilesClient::CreateProfile(const CreateProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProfile", "Required field: DomainName, is not set");
    return CreateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles");
  return CreateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable CustomerProfilesClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientCreateProfileAsyncHelper(CustomerProfilesClient const * const clientThis, const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProfile(request), context);
}

void CustomerProfilesClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientCreateProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainOutcome CustomerProfilesClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable CustomerProfilesClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteDomainAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomain(request), context);
}

void CustomerProfilesClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteDomainAsyncHelper( this, request, handler, context ); } );
}

DeleteIntegrationOutcome CustomerProfilesClient::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: DomainName, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/integrations/delete");
  return DeleteIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationOutcomeCallable CustomerProfilesClient::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteIntegrationAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIntegration(request), context);
}

void CustomerProfilesClient::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteIntegrationAsyncHelper( this, request, handler, context ); } );
}

DeleteProfileOutcome CustomerProfilesClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: DomainName, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/delete");
  return DeleteProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable CustomerProfilesClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteProfileAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProfile(request), context);
}

void CustomerProfilesClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteProfileKeyOutcome CustomerProfilesClient::DeleteProfileKey(const DeleteProfileKeyRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileKey", "Required field: DomainName, is not set");
    return DeleteProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/keys/delete");
  return DeleteProfileKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileKeyOutcomeCallable CustomerProfilesClient::DeleteProfileKeyCallable(const DeleteProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteProfileKeyAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProfileKey(request), context);
}

void CustomerProfilesClient::DeleteProfileKeyAsync(const DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteProfileKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteProfileObjectOutcome CustomerProfilesClient::DeleteProfileObject(const DeleteProfileObjectRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObject", "Required field: DomainName, is not set");
    return DeleteProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/objects/delete");
  return DeleteProfileObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectOutcomeCallable CustomerProfilesClient::DeleteProfileObjectCallable(const DeleteProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteProfileObjectAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProfileObject(request), context);
}

void CustomerProfilesClient::DeleteProfileObjectAsync(const DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteProfileObjectAsyncHelper( this, request, handler, context ); } );
}

DeleteProfileObjectTypeOutcome CustomerProfilesClient::DeleteProfileObjectType(const DeleteProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: DomainName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: ObjectTypeName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/object-types/");
  uri.AddPathSegment(request.GetObjectTypeName());
  return DeleteProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectTypeOutcomeCallable CustomerProfilesClient::DeleteProfileObjectTypeCallable(const DeleteProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteProfileObjectTypeAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProfileObjectType(request), context);
}

void CustomerProfilesClient::DeleteProfileObjectTypeAsync(const DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteProfileObjectTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkflowOutcome CustomerProfilesClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: DomainName, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: WorkflowId, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/workflows/");
  uri.AddPathSegment(request.GetWorkflowId());
  return DeleteWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable CustomerProfilesClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientDeleteWorkflowAsyncHelper(CustomerProfilesClient const * const clientThis, const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkflow(request), context);
}

void CustomerProfilesClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientDeleteWorkflowAsyncHelper( this, request, handler, context ); } );
}

GetAutoMergingPreviewOutcome CustomerProfilesClient::GetAutoMergingPreview(const GetAutoMergingPreviewRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAutoMergingPreview", "Required field: DomainName, is not set");
    return GetAutoMergingPreviewOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/identity-resolution-jobs/auto-merging-preview");
  return GetAutoMergingPreviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoMergingPreviewOutcomeCallable CustomerProfilesClient::GetAutoMergingPreviewCallable(const GetAutoMergingPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoMergingPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoMergingPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetAutoMergingPreviewAsyncHelper(CustomerProfilesClient const * const clientThis, const GetAutoMergingPreviewRequest& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAutoMergingPreview(request), context);
}

void CustomerProfilesClient::GetAutoMergingPreviewAsync(const GetAutoMergingPreviewRequest& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetAutoMergingPreviewAsyncHelper( this, request, handler, context ); } );
}

GetDomainOutcome CustomerProfilesClient::GetDomain(const GetDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainName, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return GetDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcomeCallable CustomerProfilesClient::GetDomainCallable(const GetDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetDomainAsyncHelper(CustomerProfilesClient const * const clientThis, const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomain(request), context);
}

void CustomerProfilesClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetDomainAsyncHelper( this, request, handler, context ); } );
}

GetIdentityResolutionJobOutcome CustomerProfilesClient::GetIdentityResolutionJob(const GetIdentityResolutionJobRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityResolutionJob", "Required field: DomainName, is not set");
    return GetIdentityResolutionJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityResolutionJob", "Required field: JobId, is not set");
    return GetIdentityResolutionJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/identity-resolution-jobs/");
  uri.AddPathSegment(request.GetJobId());
  return GetIdentityResolutionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityResolutionJobOutcomeCallable CustomerProfilesClient::GetIdentityResolutionJobCallable(const GetIdentityResolutionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityResolutionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityResolutionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetIdentityResolutionJobAsyncHelper(CustomerProfilesClient const * const clientThis, const GetIdentityResolutionJobRequest& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityResolutionJob(request), context);
}

void CustomerProfilesClient::GetIdentityResolutionJobAsync(const GetIdentityResolutionJobRequest& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetIdentityResolutionJobAsyncHelper( this, request, handler, context ); } );
}

GetIntegrationOutcome CustomerProfilesClient::GetIntegration(const GetIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: DomainName, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/integrations");
  return GetIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationOutcomeCallable CustomerProfilesClient::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetIntegrationAsyncHelper(CustomerProfilesClient const * const clientThis, const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIntegration(request), context);
}

void CustomerProfilesClient::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetIntegrationAsyncHelper( this, request, handler, context ); } );
}

GetMatchesOutcome CustomerProfilesClient::GetMatches(const GetMatchesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMatches", "Required field: DomainName, is not set");
    return GetMatchesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/matches");
  return GetMatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMatchesOutcomeCallable CustomerProfilesClient::GetMatchesCallable(const GetMatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetMatchesAsyncHelper(CustomerProfilesClient const * const clientThis, const GetMatchesRequest& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMatches(request), context);
}

void CustomerProfilesClient::GetMatchesAsync(const GetMatchesRequest& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetMatchesAsyncHelper( this, request, handler, context ); } );
}

GetProfileObjectTypeOutcome CustomerProfilesClient::GetProfileObjectType(const GetProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: DomainName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: ObjectTypeName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/object-types/");
  uri.AddPathSegment(request.GetObjectTypeName());
  return GetProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeOutcomeCallable CustomerProfilesClient::GetProfileObjectTypeCallable(const GetProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetProfileObjectTypeAsyncHelper(CustomerProfilesClient const * const clientThis, const GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProfileObjectType(request), context);
}

void CustomerProfilesClient::GetProfileObjectTypeAsync(const GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetProfileObjectTypeAsyncHelper( this, request, handler, context ); } );
}

GetProfileObjectTypeTemplateOutcome CustomerProfilesClient::GetProfileObjectTypeTemplate(const GetProfileObjectTypeTemplateRequest& request) const
{
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectTypeTemplate", "Required field: TemplateId, is not set");
    return GetProfileObjectTypeTemplateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return GetProfileObjectTypeTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeTemplateOutcomeCallable CustomerProfilesClient::GetProfileObjectTypeTemplateCallable(const GetProfileObjectTypeTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectTypeTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetProfileObjectTypeTemplateAsyncHelper(CustomerProfilesClient const * const clientThis, const GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProfileObjectTypeTemplate(request), context);
}

void CustomerProfilesClient::GetProfileObjectTypeTemplateAsync(const GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetProfileObjectTypeTemplateAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowOutcome CustomerProfilesClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: DomainName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: WorkflowId, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/workflows/");
  uri.AddPathSegment(request.GetWorkflowId());
  return GetWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcomeCallable CustomerProfilesClient::GetWorkflowCallable(const GetWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetWorkflowAsyncHelper(CustomerProfilesClient const * const clientThis, const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflow(request), context);
}

void CustomerProfilesClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetWorkflowAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowStepsOutcome CustomerProfilesClient::GetWorkflowSteps(const GetWorkflowStepsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowSteps", "Required field: DomainName, is not set");
    return GetWorkflowStepsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowSteps", "Required field: WorkflowId, is not set");
    return GetWorkflowStepsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/workflows/");
  uri.AddPathSegment(request.GetWorkflowId());
  uri.AddPathSegments("/steps");
  return GetWorkflowStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepsOutcomeCallable CustomerProfilesClient::GetWorkflowStepsCallable(const GetWorkflowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientGetWorkflowStepsAsyncHelper(CustomerProfilesClient const * const clientThis, const GetWorkflowStepsRequest& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflowSteps(request), context);
}

void CustomerProfilesClient::GetWorkflowStepsAsync(const GetWorkflowStepsRequest& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientGetWorkflowStepsAsyncHelper( this, request, handler, context ); } );
}

ListAccountIntegrationsOutcome CustomerProfilesClient::ListAccountIntegrations(const ListAccountIntegrationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/integrations");
  return ListAccountIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountIntegrationsOutcomeCallable CustomerProfilesClient::ListAccountIntegrationsCallable(const ListAccountIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListAccountIntegrationsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountIntegrations(request), context);
}

void CustomerProfilesClient::ListAccountIntegrationsAsync(const ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListAccountIntegrationsAsyncHelper( this, request, handler, context ); } );
}

ListDomainsOutcome CustomerProfilesClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains");
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable CustomerProfilesClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListDomainsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomains(request), context);
}

void CustomerProfilesClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListDomainsAsyncHelper( this, request, handler, context ); } );
}

ListIdentityResolutionJobsOutcome CustomerProfilesClient::ListIdentityResolutionJobs(const ListIdentityResolutionJobsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityResolutionJobs", "Required field: DomainName, is not set");
    return ListIdentityResolutionJobsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/identity-resolution-jobs");
  return ListIdentityResolutionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityResolutionJobsOutcomeCallable CustomerProfilesClient::ListIdentityResolutionJobsCallable(const ListIdentityResolutionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityResolutionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityResolutionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListIdentityResolutionJobsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListIdentityResolutionJobsRequest& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentityResolutionJobs(request), context);
}

void CustomerProfilesClient::ListIdentityResolutionJobsAsync(const ListIdentityResolutionJobsRequest& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListIdentityResolutionJobsAsyncHelper( this, request, handler, context ); } );
}

ListIntegrationsOutcome CustomerProfilesClient::ListIntegrations(const ListIntegrationsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntegrations", "Required field: DomainName, is not set");
    return ListIntegrationsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/integrations");
  return ListIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIntegrationsOutcomeCallable CustomerProfilesClient::ListIntegrationsCallable(const ListIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListIntegrationsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIntegrations(request), context);
}

void CustomerProfilesClient::ListIntegrationsAsync(const ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListIntegrationsAsyncHelper( this, request, handler, context ); } );
}

ListProfileObjectTypeTemplatesOutcome CustomerProfilesClient::ListProfileObjectTypeTemplates(const ListProfileObjectTypeTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templates");
  return ListProfileObjectTypeTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypeTemplatesOutcomeCallable CustomerProfilesClient::ListProfileObjectTypeTemplatesCallable(const ListProfileObjectTypeTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypeTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypeTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListProfileObjectTypeTemplatesAsyncHelper(CustomerProfilesClient const * const clientThis, const ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProfileObjectTypeTemplates(request), context);
}

void CustomerProfilesClient::ListProfileObjectTypeTemplatesAsync(const ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListProfileObjectTypeTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListProfileObjectTypesOutcome CustomerProfilesClient::ListProfileObjectTypes(const ListProfileObjectTypesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjectTypes", "Required field: DomainName, is not set");
    return ListProfileObjectTypesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/object-types");
  return ListProfileObjectTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypesOutcomeCallable CustomerProfilesClient::ListProfileObjectTypesCallable(const ListProfileObjectTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListProfileObjectTypesAsyncHelper(CustomerProfilesClient const * const clientThis, const ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProfileObjectTypes(request), context);
}

void CustomerProfilesClient::ListProfileObjectTypesAsync(const ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListProfileObjectTypesAsyncHelper( this, request, handler, context ); } );
}

ListProfileObjectsOutcome CustomerProfilesClient::ListProfileObjects(const ListProfileObjectsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjects", "Required field: DomainName, is not set");
    return ListProfileObjectsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/objects");
  return ListProfileObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectsOutcomeCallable CustomerProfilesClient::ListProfileObjectsCallable(const ListProfileObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListProfileObjectsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProfileObjects(request), context);
}

void CustomerProfilesClient::ListProfileObjectsAsync(const ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListProfileObjectsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CustomerProfilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CustomerProfilesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListTagsForResourceAsyncHelper(CustomerProfilesClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CustomerProfilesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWorkflowsOutcome CustomerProfilesClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: DomainName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/workflows");
  return ListWorkflowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable CustomerProfilesClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientListWorkflowsAsyncHelper(CustomerProfilesClient const * const clientThis, const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkflows(request), context);
}

void CustomerProfilesClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientListWorkflowsAsyncHelper( this, request, handler, context ); } );
}

MergeProfilesOutcome CustomerProfilesClient::MergeProfiles(const MergeProfilesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("MergeProfiles", "Required field: DomainName, is not set");
    return MergeProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/objects/merge");
  return MergeProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeProfilesOutcomeCallable CustomerProfilesClient::MergeProfilesCallable(const MergeProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientMergeProfilesAsyncHelper(CustomerProfilesClient const * const clientThis, const MergeProfilesRequest& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeProfiles(request), context);
}

void CustomerProfilesClient::MergeProfilesAsync(const MergeProfilesRequest& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientMergeProfilesAsyncHelper( this, request, handler, context ); } );
}

PutIntegrationOutcome CustomerProfilesClient::PutIntegration(const PutIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: DomainName, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/integrations");
  return PutIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntegrationOutcomeCallable CustomerProfilesClient::PutIntegrationCallable(const PutIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientPutIntegrationAsyncHelper(CustomerProfilesClient const * const clientThis, const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutIntegration(request), context);
}

void CustomerProfilesClient::PutIntegrationAsync(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientPutIntegrationAsyncHelper( this, request, handler, context ); } );
}

PutProfileObjectOutcome CustomerProfilesClient::PutProfileObject(const PutProfileObjectRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObject", "Required field: DomainName, is not set");
    return PutProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/objects");
  return PutProfileObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectOutcomeCallable CustomerProfilesClient::PutProfileObjectCallable(const PutProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientPutProfileObjectAsyncHelper(CustomerProfilesClient const * const clientThis, const PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProfileObject(request), context);
}

void CustomerProfilesClient::PutProfileObjectAsync(const PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientPutProfileObjectAsyncHelper( this, request, handler, context ); } );
}

PutProfileObjectTypeOutcome CustomerProfilesClient::PutProfileObjectType(const PutProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: DomainName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: ObjectTypeName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/object-types/");
  uri.AddPathSegment(request.GetObjectTypeName());
  return PutProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectTypeOutcomeCallable CustomerProfilesClient::PutProfileObjectTypeCallable(const PutProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientPutProfileObjectTypeAsyncHelper(CustomerProfilesClient const * const clientThis, const PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProfileObjectType(request), context);
}

void CustomerProfilesClient::PutProfileObjectTypeAsync(const PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientPutProfileObjectTypeAsyncHelper( this, request, handler, context ); } );
}

SearchProfilesOutcome CustomerProfilesClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchProfiles", "Required field: DomainName, is not set");
    return SearchProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles/search");
  return SearchProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProfilesOutcomeCallable CustomerProfilesClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientSearchProfilesAsyncHelper(CustomerProfilesClient const * const clientThis, const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchProfiles(request), context);
}

void CustomerProfilesClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientSearchProfilesAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CustomerProfilesClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CustomerProfilesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientTagResourceAsyncHelper(CustomerProfilesClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CustomerProfilesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CustomerProfilesClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CustomerProfilesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientUntagResourceAsyncHelper(CustomerProfilesClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CustomerProfilesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainOutcome CustomerProfilesClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: DomainName, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return UpdateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable CustomerProfilesClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientUpdateDomainAsyncHelper(CustomerProfilesClient const * const clientThis, const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomain(request), context);
}

void CustomerProfilesClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientUpdateDomainAsyncHelper( this, request, handler, context ); } );
}

UpdateProfileOutcome CustomerProfilesClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: DomainName, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/profiles");
  return UpdateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable CustomerProfilesClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClientUpdateProfileAsyncHelper(CustomerProfilesClient const * const clientThis, const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProfile(request), context);
}

void CustomerProfilesClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CustomerProfilesClientUpdateProfileAsyncHelper( this, request, handler, context ); } );
}

