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

AssociatePricingRulesOutcome BillingConductorClient::AssociatePricingRules(const AssociatePricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-pricing-rules");
  return AssociatePricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateResourcesToCustomLineItemOutcome BillingConductorClient::BatchAssociateResourcesToCustomLineItem(const BatchAssociateResourcesToCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateResourcesToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateResourcesToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batch-associate-resources-to-custom-line-item");
  return BatchAssociateResourcesToCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateResourcesFromCustomLineItemOutcome BillingConductorClient::BatchDisassociateResourcesFromCustomLineItem(const BatchDisassociateResourcesFromCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateResourcesFromCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateResourcesFromCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batch-disassociate-resources-from-custom-line-item");
  return BatchDisassociateResourcesFromCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBillingGroupOutcome BillingConductorClient::CreateBillingGroup(const CreateBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-billing-group");
  return CreateBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomLineItemOutcome BillingConductorClient::CreateCustomLineItem(const CreateCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-custom-line-item");
  return CreateCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingPlanOutcome BillingConductorClient::CreatePricingPlan(const CreatePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-pricing-plan");
  return CreatePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingRuleOutcome BillingConductorClient::CreatePricingRule(const CreatePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-pricing-rule");
  return CreatePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBillingGroupOutcome BillingConductorClient::DeleteBillingGroup(const DeleteBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-billing-group");
  return DeleteBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomLineItemOutcome BillingConductorClient::DeleteCustomLineItem(const DeleteCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-custom-line-item");
  return DeleteCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingPlanOutcome BillingConductorClient::DeletePricingPlan(const DeletePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-pricing-plan");
  return DeletePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingRuleOutcome BillingConductorClient::DeletePricingRule(const DeletePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-pricing-rule");
  return DeletePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAccountsOutcome BillingConductorClient::DisassociateAccounts(const DisassociateAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-accounts");
  return DisassociateAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePricingRulesOutcome BillingConductorClient::DisassociatePricingRules(const DisassociatePricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-pricing-rules");
  return DisassociatePricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssociationsOutcome BillingConductorClient::ListAccountAssociations(const ListAccountAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-account-associations");
  return ListAccountAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupCostReportsOutcome BillingConductorClient::ListBillingGroupCostReports(const ListBillingGroupCostReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBillingGroupCostReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBillingGroupCostReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-billing-group-cost-reports");
  return ListBillingGroupCostReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupsOutcome BillingConductorClient::ListBillingGroups(const ListBillingGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBillingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBillingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-billing-groups");
  return ListBillingGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomLineItemVersionsOutcome BillingConductorClient::ListCustomLineItemVersions(const ListCustomLineItemVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomLineItemVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomLineItemVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-line-item-versions");
  return ListCustomLineItemVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomLineItemsOutcome BillingConductorClient::ListCustomLineItems(const ListCustomLineItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomLineItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomLineItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-line-items");
  return ListCustomLineItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansOutcome BillingConductorClient::ListPricingPlans(const ListPricingPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-plans");
  return ListPricingPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansAssociatedWithPricingRuleOutcome BillingConductorClient::ListPricingPlansAssociatedWithPricingRule(const ListPricingPlansAssociatedWithPricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingPlansAssociatedWithPricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingPlansAssociatedWithPricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-plans-associated-with-pricing-rule");
  return ListPricingPlansAssociatedWithPricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesOutcome BillingConductorClient::ListPricingRules(const ListPricingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-rules");
  return ListPricingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesAssociatedToPricingPlanOutcome BillingConductorClient::ListPricingRulesAssociatedToPricingPlan(const ListPricingRulesAssociatedToPricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPricingRulesAssociatedToPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPricingRulesAssociatedToPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-pricing-rules-associated-to-pricing-plan");
  return ListPricingRulesAssociatedToPricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesAssociatedToCustomLineItemOutcome BillingConductorClient::ListResourcesAssociatedToCustomLineItem(const ListResourcesAssociatedToCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourcesAssociatedToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourcesAssociatedToCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-resources-associated-to-custom-line-item");
  return ListResourcesAssociatedToCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateBillingGroupOutcome BillingConductorClient::UpdateBillingGroup(const UpdateBillingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBillingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-billing-group");
  return UpdateBillingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomLineItemOutcome BillingConductorClient::UpdateCustomLineItem(const UpdateCustomLineItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomLineItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-custom-line-item");
  return UpdateCustomLineItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingPlanOutcome BillingConductorClient::UpdatePricingPlan(const UpdatePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-pricing-plan");
  return UpdatePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingRuleOutcome BillingConductorClient::UpdatePricingRule(const UpdatePricingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePricingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-pricing-rule");
  return UpdatePricingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

