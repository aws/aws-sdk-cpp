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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/customer-profiles/CustomerProfilesClient.h>
#include <aws/customer-profiles/CustomerProfilesErrorMarshaller.h>
#include <aws/customer-profiles/CustomerProfilesEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CustomerProfilesClient::SERVICE_NAME = "profile";
const char* CustomerProfilesClient::ALLOCATION_TAG = "CustomerProfilesClient";

CustomerProfilesClient::CustomerProfilesClient(const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider,
                                               const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider,
                                               const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CustomerProfilesClient::CustomerProfilesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CustomerProfilesClient::~CustomerProfilesClient()
{
}

std::shared_ptr<CustomerProfilesEndpointProviderBase>& CustomerProfilesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CustomerProfilesClient::init(const CustomerProfiles::CustomerProfilesClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Customer Profiles");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CustomerProfilesClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddProfileKeyOutcome CustomerProfilesClient::AddProfileKey(const AddProfileKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddProfileKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddProfileKey", "Required field: DomainName, is not set");
    return AddProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddProfileKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/keys");
  return AddProfileKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddProfileKeyOutcomeCallable CustomerProfilesClient::AddProfileKeyCallable(const AddProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::AddProfileKeyAsync(const AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddProfileKey(request), context);
    } );
}

CreateDomainOutcome CustomerProfilesClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: DomainName, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable CustomerProfilesClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

CreateIntegrationWorkflowOutcome CustomerProfilesClient::CreateIntegrationWorkflow(const CreateIntegrationWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIntegrationWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationWorkflow", "Required field: DomainName, is not set");
    return CreateIntegrationWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIntegrationWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/integrations");
  return CreateIntegrationWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationWorkflowOutcomeCallable CustomerProfilesClient::CreateIntegrationWorkflowCallable(const CreateIntegrationWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntegrationWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntegrationWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::CreateIntegrationWorkflowAsync(const CreateIntegrationWorkflowRequest& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIntegrationWorkflow(request), context);
    } );
}

CreateProfileOutcome CustomerProfilesClient::CreateProfile(const CreateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProfile", "Required field: DomainName, is not set");
    return CreateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  return CreateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable CustomerProfilesClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProfile(request), context);
    } );
}

DeleteDomainOutcome CustomerProfilesClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable CustomerProfilesClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomain(request), context);
    } );
}

DeleteIntegrationOutcome CustomerProfilesClient::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: DomainName, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/delete");
  return DeleteIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationOutcomeCallable CustomerProfilesClient::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIntegration(request), context);
    } );
}

DeleteProfileOutcome CustomerProfilesClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: DomainName, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/delete");
  return DeleteProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable CustomerProfilesClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfile(request), context);
    } );
}

DeleteProfileKeyOutcome CustomerProfilesClient::DeleteProfileKey(const DeleteProfileKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfileKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileKey", "Required field: DomainName, is not set");
    return DeleteProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfileKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/keys/delete");
  return DeleteProfileKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileKeyOutcomeCallable CustomerProfilesClient::DeleteProfileKeyCallable(const DeleteProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteProfileKeyAsync(const DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfileKey(request), context);
    } );
}

DeleteProfileObjectOutcome CustomerProfilesClient::DeleteProfileObject(const DeleteProfileObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfileObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObject", "Required field: DomainName, is not set");
    return DeleteProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfileObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects/delete");
  return DeleteProfileObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectOutcomeCallable CustomerProfilesClient::DeleteProfileObjectCallable(const DeleteProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteProfileObjectAsync(const DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfileObject(request), context);
    } );
}

DeleteProfileObjectTypeOutcome CustomerProfilesClient::DeleteProfileObjectType(const DeleteProfileObjectTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  return DeleteProfileObjectTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectTypeOutcomeCallable CustomerProfilesClient::DeleteProfileObjectTypeCallable(const DeleteProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteProfileObjectTypeAsync(const DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfileObjectType(request), context);
    } );
}

DeleteWorkflowOutcome CustomerProfilesClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  return DeleteWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable CustomerProfilesClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkflow(request), context);
    } );
}

GetAutoMergingPreviewOutcome CustomerProfilesClient::GetAutoMergingPreview(const GetAutoMergingPreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutoMergingPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAutoMergingPreview", "Required field: DomainName, is not set");
    return GetAutoMergingPreviewOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutoMergingPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs/auto-merging-preview");
  return GetAutoMergingPreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoMergingPreviewOutcomeCallable CustomerProfilesClient::GetAutoMergingPreviewCallable(const GetAutoMergingPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoMergingPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoMergingPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetAutoMergingPreviewAsync(const GetAutoMergingPreviewRequest& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutoMergingPreview(request), context);
    } );
}

GetDomainOutcome CustomerProfilesClient::GetDomain(const GetDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainName, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return GetDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcomeCallable CustomerProfilesClient::GetDomainCallable(const GetDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomain(request), context);
    } );
}

GetIdentityResolutionJobOutcome CustomerProfilesClient::GetIdentityResolutionJob(const GetIdentityResolutionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityResolutionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityResolutionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetIdentityResolutionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityResolutionJobOutcomeCallable CustomerProfilesClient::GetIdentityResolutionJobCallable(const GetIdentityResolutionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityResolutionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityResolutionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetIdentityResolutionJobAsync(const GetIdentityResolutionJobRequest& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIdentityResolutionJob(request), context);
    } );
}

GetIntegrationOutcome CustomerProfilesClient::GetIntegration(const GetIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: DomainName, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  return GetIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationOutcomeCallable CustomerProfilesClient::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIntegration(request), context);
    } );
}

GetMatchesOutcome CustomerProfilesClient::GetMatches(const GetMatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMatches", "Required field: DomainName, is not set");
    return GetMatchesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/matches");
  return GetMatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMatchesOutcomeCallable CustomerProfilesClient::GetMatchesCallable(const GetMatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetMatchesAsync(const GetMatchesRequest& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMatches(request), context);
    } );
}

GetProfileObjectTypeOutcome CustomerProfilesClient::GetProfileObjectType(const GetProfileObjectTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  return GetProfileObjectTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeOutcomeCallable CustomerProfilesClient::GetProfileObjectTypeCallable(const GetProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetProfileObjectTypeAsync(const GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProfileObjectType(request), context);
    } );
}

GetProfileObjectTypeTemplateOutcome CustomerProfilesClient::GetProfileObjectTypeTemplate(const GetProfileObjectTypeTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfileObjectTypeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectTypeTemplate", "Required field: TemplateId, is not set");
    return GetProfileObjectTypeTemplateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfileObjectTypeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return GetProfileObjectTypeTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeTemplateOutcomeCallable CustomerProfilesClient::GetProfileObjectTypeTemplateCallable(const GetProfileObjectTypeTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectTypeTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetProfileObjectTypeTemplateAsync(const GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProfileObjectTypeTemplate(request), context);
    } );
}

GetWorkflowOutcome CustomerProfilesClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  return GetWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcomeCallable CustomerProfilesClient::GetWorkflowCallable(const GetWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkflow(request), context);
    } );
}

GetWorkflowStepsOutcome CustomerProfilesClient::GetWorkflowSteps(const GetWorkflowStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/steps");
  return GetWorkflowStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepsOutcomeCallable CustomerProfilesClient::GetWorkflowStepsCallable(const GetWorkflowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::GetWorkflowStepsAsync(const GetWorkflowStepsRequest& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkflowSteps(request), context);
    } );
}

ListAccountIntegrationsOutcome CustomerProfilesClient::ListAccountIntegrations(const ListAccountIntegrationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  return ListAccountIntegrationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountIntegrationsOutcomeCallable CustomerProfilesClient::ListAccountIntegrationsCallable(const ListAccountIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListAccountIntegrationsAsync(const ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccountIntegrations(request), context);
    } );
}

ListDomainsOutcome CustomerProfilesClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable CustomerProfilesClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomains(request), context);
    } );
}

ListIdentityResolutionJobsOutcome CustomerProfilesClient::ListIdentityResolutionJobs(const ListIdentityResolutionJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityResolutionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityResolutionJobs", "Required field: DomainName, is not set");
    return ListIdentityResolutionJobsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityResolutionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs");
  return ListIdentityResolutionJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityResolutionJobsOutcomeCallable CustomerProfilesClient::ListIdentityResolutionJobsCallable(const ListIdentityResolutionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityResolutionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityResolutionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListIdentityResolutionJobsAsync(const ListIdentityResolutionJobsRequest& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIdentityResolutionJobs(request), context);
    } );
}

ListIntegrationsOutcome CustomerProfilesClient::ListIntegrations(const ListIntegrationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntegrations", "Required field: DomainName, is not set");
    return ListIntegrationsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  return ListIntegrationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIntegrationsOutcomeCallable CustomerProfilesClient::ListIntegrationsCallable(const ListIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListIntegrationsAsync(const ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIntegrations(request), context);
    } );
}

ListProfileObjectTypeTemplatesOutcome CustomerProfilesClient::ListProfileObjectTypeTemplates(const ListProfileObjectTypeTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileObjectTypeTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfileObjectTypeTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  return ListProfileObjectTypeTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypeTemplatesOutcomeCallable CustomerProfilesClient::ListProfileObjectTypeTemplatesCallable(const ListProfileObjectTypeTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypeTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypeTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListProfileObjectTypeTemplatesAsync(const ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfileObjectTypeTemplates(request), context);
    } );
}

ListProfileObjectTypesOutcome CustomerProfilesClient::ListProfileObjectTypes(const ListProfileObjectTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileObjectTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjectTypes", "Required field: DomainName, is not set");
    return ListProfileObjectTypesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfileObjectTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/object-types");
  return ListProfileObjectTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypesOutcomeCallable CustomerProfilesClient::ListProfileObjectTypesCallable(const ListProfileObjectTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListProfileObjectTypesAsync(const ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfileObjectTypes(request), context);
    } );
}

ListProfileObjectsOutcome CustomerProfilesClient::ListProfileObjects(const ListProfileObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjects", "Required field: DomainName, is not set");
    return ListProfileObjectsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfileObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects");
  return ListProfileObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectsOutcomeCallable CustomerProfilesClient::ListProfileObjectsCallable(const ListProfileObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListProfileObjectsAsync(const ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfileObjects(request), context);
    } );
}

ListTagsForResourceOutcome CustomerProfilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CustomerProfilesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWorkflowsOutcome CustomerProfilesClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: DomainName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflows");
  return ListWorkflowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable CustomerProfilesClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkflows(request), context);
    } );
}

MergeProfilesOutcome CustomerProfilesClient::MergeProfiles(const MergeProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("MergeProfiles", "Required field: DomainName, is not set");
    return MergeProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects/merge");
  return MergeProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeProfilesOutcomeCallable CustomerProfilesClient::MergeProfilesCallable(const MergeProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::MergeProfilesAsync(const MergeProfilesRequest& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MergeProfiles(request), context);
    } );
}

PutIntegrationOutcome CustomerProfilesClient::PutIntegration(const PutIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: DomainName, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  return PutIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntegrationOutcomeCallable CustomerProfilesClient::PutIntegrationCallable(const PutIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::PutIntegrationAsync(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutIntegration(request), context);
    } );
}

PutProfileObjectOutcome CustomerProfilesClient::PutProfileObject(const PutProfileObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutProfileObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObject", "Required field: DomainName, is not set");
    return PutProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutProfileObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects");
  return PutProfileObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectOutcomeCallable CustomerProfilesClient::PutProfileObjectCallable(const PutProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::PutProfileObjectAsync(const PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutProfileObject(request), context);
    } );
}

PutProfileObjectTypeOutcome CustomerProfilesClient::PutProfileObjectType(const PutProfileObjectTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutProfileObjectType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  return PutProfileObjectTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectTypeOutcomeCallable CustomerProfilesClient::PutProfileObjectTypeCallable(const PutProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::PutProfileObjectTypeAsync(const PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutProfileObjectType(request), context);
    } );
}

SearchProfilesOutcome CustomerProfilesClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchProfiles", "Required field: DomainName, is not set");
    return SearchProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/search");
  return SearchProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProfilesOutcomeCallable CustomerProfilesClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchProfiles(request), context);
    } );
}

TagResourceOutcome CustomerProfilesClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CustomerProfilesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CustomerProfilesClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CustomerProfilesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDomainOutcome CustomerProfilesClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: DomainName, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return UpdateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable CustomerProfilesClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomain(request), context);
    } );
}

UpdateProfileOutcome CustomerProfilesClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: DomainName, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  return UpdateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable CustomerProfilesClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CustomerProfilesClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProfile(request), context);
    } );
}

