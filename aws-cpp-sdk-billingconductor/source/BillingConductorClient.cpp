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

#include <aws/billingconductor/BillingConductorClient.h>
#include <aws/billingconductor/BillingConductorErrorMarshaller.h>
#include <aws/billingconductor/BillingConductorEndpointProvider.h>
#include <aws/billingconductor/model/AssociateAccountsRequest.h>
#include <aws/billingconductor/model/AssociatePricingRulesRequest.h>
#include <aws/billingconductor/model/BatchAssociateResourcesToCustomLineItemRequest.h>
#include <aws/billingconductor/model/BatchDisassociateResourcesFromCustomLineItemRequest.h>
#include <aws/billingconductor/model/CreateBillingGroupRequest.h>
#include <aws/billingconductor/model/CreateCustomLineItemRequest.h>
#include <aws/billingconductor/model/CreatePricingPlanRequest.h>
#include <aws/billingconductor/model/CreatePricingRuleRequest.h>
#include <aws/billingconductor/model/DeleteBillingGroupRequest.h>
#include <aws/billingconductor/model/DeleteCustomLineItemRequest.h>
#include <aws/billingconductor/model/DeletePricingPlanRequest.h>
#include <aws/billingconductor/model/DeletePricingRuleRequest.h>
#include <aws/billingconductor/model/DisassociateAccountsRequest.h>
#include <aws/billingconductor/model/DisassociatePricingRulesRequest.h>
#include <aws/billingconductor/model/ListAccountAssociationsRequest.h>
#include <aws/billingconductor/model/ListBillingGroupCostReportsRequest.h>
#include <aws/billingconductor/model/ListBillingGroupsRequest.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsRequest.h>
#include <aws/billingconductor/model/ListCustomLineItemsRequest.h>
#include <aws/billingconductor/model/ListPricingPlansRequest.h>
#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRuleRequest.h>
#include <aws/billingconductor/model/ListPricingRulesRequest.h>
#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanRequest.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemRequest.h>
#include <aws/billingconductor/model/ListTagsForResourceRequest.h>
#include <aws/billingconductor/model/TagResourceRequest.h>
#include <aws/billingconductor/model/UntagResourceRequest.h>
#include <aws/billingconductor/model/UpdateBillingGroupRequest.h>
#include <aws/billingconductor/model/UpdateCustomLineItemRequest.h>
#include <aws/billingconductor/model/UpdatePricingPlanRequest.h>
#include <aws/billingconductor/model/UpdatePricingRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BillingConductor;
using namespace Aws::BillingConductor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* BillingConductorClient::SERVICE_NAME = "billingconductor";
const char* BillingConductorClient::ALLOCATION_TAG = "BillingConductorClient";

BillingConductorClient::BillingConductorClient(const BillingConductor::BillingConductorClientConfiguration& clientConfiguration,
                                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const AWSCredentials& credentials,
                                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider,
                                               const BillingConductor::BillingConductorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider,
                                               const BillingConductor::BillingConductorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BillingConductorClient::BillingConductorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BillingConductorClient::~BillingConductorClient()
{
}

std::shared_ptr<BillingConductorEndpointProviderBase>& BillingConductorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BillingConductorClient::init(const BillingConductor::BillingConductorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("billingconductor");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void BillingConductorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateAccountsOutcome BillingConductorClient::AssociateAccounts(const AssociateAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-accounts");
  return AssociateAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateAccountsOutcomeCallable BillingConductorClient::AssociateAccountsCallable(const AssociateAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::AssociateAccountsAsync(const AssociateAccountsRequest& request, const AssociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateAccounts(request), context);
    } );
}

AssociatePricingRulesOutcome BillingConductorClient::AssociatePricingRules(const AssociatePricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-pricing-rules");
  return AssociatePricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociatePricingRulesOutcomeCallable BillingConductorClient::AssociatePricingRulesCallable(const AssociatePricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::AssociatePricingRulesAsync(const AssociatePricingRulesRequest& request, const AssociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePricingRules(request), context);
    } );
}

BatchAssociateResourcesToCustomLineItemOutcome BillingConductorClient::BatchAssociateResourcesToCustomLineItem(const BatchAssociateResourcesToCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateResourcesToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateResourcesToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batch-associate-resources-to-custom-line-item");
  return BatchAssociateResourcesToCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateResourcesToCustomLineItemOutcomeCallable BillingConductorClient::BatchAssociateResourcesToCustomLineItemCallable(const BatchAssociateResourcesToCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateResourcesToCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateResourcesToCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::BatchAssociateResourcesToCustomLineItemAsync(const BatchAssociateResourcesToCustomLineItemRequest& request, const BatchAssociateResourcesToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchAssociateResourcesToCustomLineItem(request), context);
    } );
}

BatchDisassociateResourcesFromCustomLineItemOutcome BillingConductorClient::BatchDisassociateResourcesFromCustomLineItem(const BatchDisassociateResourcesFromCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateResourcesFromCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateResourcesFromCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batch-disassociate-resources-from-custom-line-item");
  return BatchDisassociateResourcesFromCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateResourcesFromCustomLineItemOutcomeCallable BillingConductorClient::BatchDisassociateResourcesFromCustomLineItemCallable(const BatchDisassociateResourcesFromCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateResourcesFromCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateResourcesFromCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::BatchDisassociateResourcesFromCustomLineItemAsync(const BatchDisassociateResourcesFromCustomLineItemRequest& request, const BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDisassociateResourcesFromCustomLineItem(request), context);
    } );
}

CreateBillingGroupOutcome BillingConductorClient::CreateBillingGroup(const CreateBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-billing-group");
  return CreateBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBillingGroupOutcomeCallable BillingConductorClient::CreateBillingGroupCallable(const CreateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::CreateBillingGroupAsync(const CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBillingGroup(request), context);
    } );
}

CreateCustomLineItemOutcome BillingConductorClient::CreateCustomLineItem(const CreateCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-custom-line-item");
  return CreateCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomLineItemOutcomeCallable BillingConductorClient::CreateCustomLineItemCallable(const CreateCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::CreateCustomLineItemAsync(const CreateCustomLineItemRequest& request, const CreateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomLineItem(request), context);
    } );
}

CreatePricingPlanOutcome BillingConductorClient::CreatePricingPlan(const CreatePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-pricing-plan");
  return CreatePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingPlanOutcomeCallable BillingConductorClient::CreatePricingPlanCallable(const CreatePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::CreatePricingPlanAsync(const CreatePricingPlanRequest& request, const CreatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePricingPlan(request), context);
    } );
}

CreatePricingRuleOutcome BillingConductorClient::CreatePricingRule(const CreatePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-pricing-rule");
  return CreatePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingRuleOutcomeCallable BillingConductorClient::CreatePricingRuleCallable(const CreatePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::CreatePricingRuleAsync(const CreatePricingRuleRequest& request, const CreatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePricingRule(request), context);
    } );
}

DeleteBillingGroupOutcome BillingConductorClient::DeleteBillingGroup(const DeleteBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-billing-group");
  return DeleteBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBillingGroupOutcomeCallable BillingConductorClient::DeleteBillingGroupCallable(const DeleteBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DeleteBillingGroupAsync(const DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBillingGroup(request), context);
    } );
}

DeleteCustomLineItemOutcome BillingConductorClient::DeleteCustomLineItem(const DeleteCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-custom-line-item");
  return DeleteCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomLineItemOutcomeCallable BillingConductorClient::DeleteCustomLineItemCallable(const DeleteCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DeleteCustomLineItemAsync(const DeleteCustomLineItemRequest& request, const DeleteCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomLineItem(request), context);
    } );
}

DeletePricingPlanOutcome BillingConductorClient::DeletePricingPlan(const DeletePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-pricing-plan");
  return DeletePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingPlanOutcomeCallable BillingConductorClient::DeletePricingPlanCallable(const DeletePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DeletePricingPlanAsync(const DeletePricingPlanRequest& request, const DeletePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePricingPlan(request), context);
    } );
}

DeletePricingRuleOutcome BillingConductorClient::DeletePricingRule(const DeletePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-pricing-rule");
  return DeletePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingRuleOutcomeCallable BillingConductorClient::DeletePricingRuleCallable(const DeletePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DeletePricingRuleAsync(const DeletePricingRuleRequest& request, const DeletePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePricingRule(request), context);
    } );
}

DisassociateAccountsOutcome BillingConductorClient::DisassociateAccounts(const DisassociateAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-accounts");
  return DisassociateAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAccountsOutcomeCallable BillingConductorClient::DisassociateAccountsCallable(const DisassociateAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DisassociateAccountsAsync(const DisassociateAccountsRequest& request, const DisassociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateAccounts(request), context);
    } );
}

DisassociatePricingRulesOutcome BillingConductorClient::DisassociatePricingRules(const DisassociatePricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-pricing-rules");
  return DisassociatePricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePricingRulesOutcomeCallable BillingConductorClient::DisassociatePricingRulesCallable(const DisassociatePricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::DisassociatePricingRulesAsync(const DisassociatePricingRulesRequest& request, const DisassociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePricingRules(request), context);
    } );
}

ListAccountAssociationsOutcome BillingConductorClient::ListAccountAssociations(const ListAccountAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-account-associations");
  return ListAccountAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssociationsOutcomeCallable BillingConductorClient::ListAccountAssociationsCallable(const ListAccountAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListAccountAssociationsAsync(const ListAccountAssociationsRequest& request, const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccountAssociations(request), context);
    } );
}

ListBillingGroupCostReportsOutcome BillingConductorClient::ListBillingGroupCostReports(const ListBillingGroupCostReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBillingGroupCostReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBillingGroupCostReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-billing-group-cost-reports");
  return ListBillingGroupCostReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupCostReportsOutcomeCallable BillingConductorClient::ListBillingGroupCostReportsCallable(const ListBillingGroupCostReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBillingGroupCostReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBillingGroupCostReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListBillingGroupCostReportsAsync(const ListBillingGroupCostReportsRequest& request, const ListBillingGroupCostReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBillingGroupCostReports(request), context);
    } );
}

ListBillingGroupsOutcome BillingConductorClient::ListBillingGroups(const ListBillingGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBillingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBillingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-billing-groups");
  return ListBillingGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupsOutcomeCallable BillingConductorClient::ListBillingGroupsCallable(const ListBillingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBillingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBillingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListBillingGroupsAsync(const ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBillingGroups(request), context);
    } );
}

ListCustomLineItemVersionsOutcome BillingConductorClient::ListCustomLineItemVersions(const ListCustomLineItemVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomLineItemVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomLineItemVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-line-item-versions");
  return ListCustomLineItemVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomLineItemVersionsOutcomeCallable BillingConductorClient::ListCustomLineItemVersionsCallable(const ListCustomLineItemVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomLineItemVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomLineItemVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListCustomLineItemVersionsAsync(const ListCustomLineItemVersionsRequest& request, const ListCustomLineItemVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomLineItemVersions(request), context);
    } );
}

ListCustomLineItemsOutcome BillingConductorClient::ListCustomLineItems(const ListCustomLineItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomLineItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomLineItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-line-items");
  return ListCustomLineItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomLineItemsOutcomeCallable BillingConductorClient::ListCustomLineItemsCallable(const ListCustomLineItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomLineItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomLineItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListCustomLineItemsAsync(const ListCustomLineItemsRequest& request, const ListCustomLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomLineItems(request), context);
    } );
}

ListPricingPlansOutcome BillingConductorClient::ListPricingPlans(const ListPricingPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-plans");
  return ListPricingPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansOutcomeCallable BillingConductorClient::ListPricingPlansCallable(const ListPricingPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListPricingPlansAsync(const ListPricingPlansRequest& request, const ListPricingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPricingPlans(request), context);
    } );
}

ListPricingPlansAssociatedWithPricingRuleOutcome BillingConductorClient::ListPricingPlansAssociatedWithPricingRule(const ListPricingPlansAssociatedWithPricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingPlansAssociatedWithPricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingPlansAssociatedWithPricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-plans-associated-with-pricing-rule");
  return ListPricingPlansAssociatedWithPricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansAssociatedWithPricingRuleOutcomeCallable BillingConductorClient::ListPricingPlansAssociatedWithPricingRuleCallable(const ListPricingPlansAssociatedWithPricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingPlansAssociatedWithPricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingPlansAssociatedWithPricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListPricingPlansAssociatedWithPricingRuleAsync(const ListPricingPlansAssociatedWithPricingRuleRequest& request, const ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPricingPlansAssociatedWithPricingRule(request), context);
    } );
}

ListPricingRulesOutcome BillingConductorClient::ListPricingRules(const ListPricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-rules");
  return ListPricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesOutcomeCallable BillingConductorClient::ListPricingRulesCallable(const ListPricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListPricingRulesAsync(const ListPricingRulesRequest& request, const ListPricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPricingRules(request), context);
    } );
}

ListPricingRulesAssociatedToPricingPlanOutcome BillingConductorClient::ListPricingRulesAssociatedToPricingPlan(const ListPricingRulesAssociatedToPricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingRulesAssociatedToPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingRulesAssociatedToPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-rules-associated-to-pricing-plan");
  return ListPricingRulesAssociatedToPricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesAssociatedToPricingPlanOutcomeCallable BillingConductorClient::ListPricingRulesAssociatedToPricingPlanCallable(const ListPricingRulesAssociatedToPricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingRulesAssociatedToPricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingRulesAssociatedToPricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListPricingRulesAssociatedToPricingPlanAsync(const ListPricingRulesAssociatedToPricingPlanRequest& request, const ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPricingRulesAssociatedToPricingPlan(request), context);
    } );
}

ListResourcesAssociatedToCustomLineItemOutcome BillingConductorClient::ListResourcesAssociatedToCustomLineItem(const ListResourcesAssociatedToCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourcesAssociatedToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourcesAssociatedToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-resources-associated-to-custom-line-item");
  return ListResourcesAssociatedToCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesAssociatedToCustomLineItemOutcomeCallable BillingConductorClient::ListResourcesAssociatedToCustomLineItemCallable(const ListResourcesAssociatedToCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesAssociatedToCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesAssociatedToCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListResourcesAssociatedToCustomLineItemAsync(const ListResourcesAssociatedToCustomLineItemRequest& request, const ListResourcesAssociatedToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourcesAssociatedToCustomLineItem(request), context);
    } );
}

ListTagsForResourceOutcome BillingConductorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable BillingConductorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

TagResourceOutcome BillingConductorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable BillingConductorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome BillingConductorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable BillingConductorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateBillingGroupOutcome BillingConductorClient::UpdateBillingGroup(const UpdateBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-billing-group");
  return UpdateBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBillingGroupOutcomeCallable BillingConductorClient::UpdateBillingGroupCallable(const UpdateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::UpdateBillingGroupAsync(const UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBillingGroup(request), context);
    } );
}

UpdateCustomLineItemOutcome BillingConductorClient::UpdateCustomLineItem(const UpdateCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-custom-line-item");
  return UpdateCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomLineItemOutcomeCallable BillingConductorClient::UpdateCustomLineItemCallable(const UpdateCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::UpdateCustomLineItemAsync(const UpdateCustomLineItemRequest& request, const UpdateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomLineItem(request), context);
    } );
}

UpdatePricingPlanOutcome BillingConductorClient::UpdatePricingPlan(const UpdatePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-pricing-plan");
  return UpdatePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingPlanOutcomeCallable BillingConductorClient::UpdatePricingPlanCallable(const UpdatePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::UpdatePricingPlanAsync(const UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePricingPlan(request), context);
    } );
}

UpdatePricingRuleOutcome BillingConductorClient::UpdatePricingRule(const UpdatePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-pricing-rule");
  return UpdatePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingRuleOutcomeCallable BillingConductorClient::UpdatePricingRuleCallable(const UpdatePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClient::UpdatePricingRuleAsync(const UpdatePricingRuleRequest& request, const UpdatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePricingRule(request), context);
    } );
}

