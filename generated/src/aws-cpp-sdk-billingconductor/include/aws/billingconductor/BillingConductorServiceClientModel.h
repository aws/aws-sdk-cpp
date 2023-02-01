/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/billingconductor/BillingConductorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/billingconductor/BillingConductorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BillingConductorClient header */
#include <aws/billingconductor/model/AssociateAccountsResult.h>
#include <aws/billingconductor/model/AssociatePricingRulesResult.h>
#include <aws/billingconductor/model/BatchAssociateResourcesToCustomLineItemResult.h>
#include <aws/billingconductor/model/BatchDisassociateResourcesFromCustomLineItemResult.h>
#include <aws/billingconductor/model/CreateBillingGroupResult.h>
#include <aws/billingconductor/model/CreateCustomLineItemResult.h>
#include <aws/billingconductor/model/CreatePricingPlanResult.h>
#include <aws/billingconductor/model/CreatePricingRuleResult.h>
#include <aws/billingconductor/model/DeleteBillingGroupResult.h>
#include <aws/billingconductor/model/DeleteCustomLineItemResult.h>
#include <aws/billingconductor/model/DeletePricingPlanResult.h>
#include <aws/billingconductor/model/DeletePricingRuleResult.h>
#include <aws/billingconductor/model/DisassociateAccountsResult.h>
#include <aws/billingconductor/model/DisassociatePricingRulesResult.h>
#include <aws/billingconductor/model/ListAccountAssociationsResult.h>
#include <aws/billingconductor/model/ListBillingGroupCostReportsResult.h>
#include <aws/billingconductor/model/ListBillingGroupsResult.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsResult.h>
#include <aws/billingconductor/model/ListCustomLineItemsResult.h>
#include <aws/billingconductor/model/ListPricingPlansResult.h>
#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRuleResult.h>
#include <aws/billingconductor/model/ListPricingRulesResult.h>
#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanResult.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResult.h>
#include <aws/billingconductor/model/ListTagsForResourceResult.h>
#include <aws/billingconductor/model/TagResourceResult.h>
#include <aws/billingconductor/model/UntagResourceResult.h>
#include <aws/billingconductor/model/UpdateBillingGroupResult.h>
#include <aws/billingconductor/model/UpdateCustomLineItemResult.h>
#include <aws/billingconductor/model/UpdatePricingPlanResult.h>
#include <aws/billingconductor/model/UpdatePricingRuleResult.h>
/* End of service model headers required in BillingConductorClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace BillingConductor
  {
    using BillingConductorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BillingConductorEndpointProviderBase = Aws::BillingConductor::Endpoint::BillingConductorEndpointProviderBase;
    using BillingConductorEndpointProvider = Aws::BillingConductor::Endpoint::BillingConductorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BillingConductorClient header */
      class AssociateAccountsRequest;
      class AssociatePricingRulesRequest;
      class BatchAssociateResourcesToCustomLineItemRequest;
      class BatchDisassociateResourcesFromCustomLineItemRequest;
      class CreateBillingGroupRequest;
      class CreateCustomLineItemRequest;
      class CreatePricingPlanRequest;
      class CreatePricingRuleRequest;
      class DeleteBillingGroupRequest;
      class DeleteCustomLineItemRequest;
      class DeletePricingPlanRequest;
      class DeletePricingRuleRequest;
      class DisassociateAccountsRequest;
      class DisassociatePricingRulesRequest;
      class ListAccountAssociationsRequest;
      class ListBillingGroupCostReportsRequest;
      class ListBillingGroupsRequest;
      class ListCustomLineItemVersionsRequest;
      class ListCustomLineItemsRequest;
      class ListPricingPlansRequest;
      class ListPricingPlansAssociatedWithPricingRuleRequest;
      class ListPricingRulesRequest;
      class ListPricingRulesAssociatedToPricingPlanRequest;
      class ListResourcesAssociatedToCustomLineItemRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBillingGroupRequest;
      class UpdateCustomLineItemRequest;
      class UpdatePricingPlanRequest;
      class UpdatePricingRuleRequest;
      /* End of service model forward declarations required in BillingConductorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAccountsResult, BillingConductorError> AssociateAccountsOutcome;
      typedef Aws::Utils::Outcome<AssociatePricingRulesResult, BillingConductorError> AssociatePricingRulesOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateResourcesToCustomLineItemResult, BillingConductorError> BatchAssociateResourcesToCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateResourcesFromCustomLineItemResult, BillingConductorError> BatchDisassociateResourcesFromCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<CreateBillingGroupResult, BillingConductorError> CreateBillingGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCustomLineItemResult, BillingConductorError> CreateCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<CreatePricingPlanResult, BillingConductorError> CreatePricingPlanOutcome;
      typedef Aws::Utils::Outcome<CreatePricingRuleResult, BillingConductorError> CreatePricingRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteBillingGroupResult, BillingConductorError> DeleteBillingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomLineItemResult, BillingConductorError> DeleteCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<DeletePricingPlanResult, BillingConductorError> DeletePricingPlanOutcome;
      typedef Aws::Utils::Outcome<DeletePricingRuleResult, BillingConductorError> DeletePricingRuleOutcome;
      typedef Aws::Utils::Outcome<DisassociateAccountsResult, BillingConductorError> DisassociateAccountsOutcome;
      typedef Aws::Utils::Outcome<DisassociatePricingRulesResult, BillingConductorError> DisassociatePricingRulesOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssociationsResult, BillingConductorError> ListAccountAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListBillingGroupCostReportsResult, BillingConductorError> ListBillingGroupCostReportsOutcome;
      typedef Aws::Utils::Outcome<ListBillingGroupsResult, BillingConductorError> ListBillingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListCustomLineItemVersionsResult, BillingConductorError> ListCustomLineItemVersionsOutcome;
      typedef Aws::Utils::Outcome<ListCustomLineItemsResult, BillingConductorError> ListCustomLineItemsOutcome;
      typedef Aws::Utils::Outcome<ListPricingPlansResult, BillingConductorError> ListPricingPlansOutcome;
      typedef Aws::Utils::Outcome<ListPricingPlansAssociatedWithPricingRuleResult, BillingConductorError> ListPricingPlansAssociatedWithPricingRuleOutcome;
      typedef Aws::Utils::Outcome<ListPricingRulesResult, BillingConductorError> ListPricingRulesOutcome;
      typedef Aws::Utils::Outcome<ListPricingRulesAssociatedToPricingPlanResult, BillingConductorError> ListPricingRulesAssociatedToPricingPlanOutcome;
      typedef Aws::Utils::Outcome<ListResourcesAssociatedToCustomLineItemResult, BillingConductorError> ListResourcesAssociatedToCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BillingConductorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BillingConductorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BillingConductorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBillingGroupResult, BillingConductorError> UpdateBillingGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomLineItemResult, BillingConductorError> UpdateCustomLineItemOutcome;
      typedef Aws::Utils::Outcome<UpdatePricingPlanResult, BillingConductorError> UpdatePricingPlanOutcome;
      typedef Aws::Utils::Outcome<UpdatePricingRuleResult, BillingConductorError> UpdatePricingRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAccountsOutcome> AssociateAccountsOutcomeCallable;
      typedef std::future<AssociatePricingRulesOutcome> AssociatePricingRulesOutcomeCallable;
      typedef std::future<BatchAssociateResourcesToCustomLineItemOutcome> BatchAssociateResourcesToCustomLineItemOutcomeCallable;
      typedef std::future<BatchDisassociateResourcesFromCustomLineItemOutcome> BatchDisassociateResourcesFromCustomLineItemOutcomeCallable;
      typedef std::future<CreateBillingGroupOutcome> CreateBillingGroupOutcomeCallable;
      typedef std::future<CreateCustomLineItemOutcome> CreateCustomLineItemOutcomeCallable;
      typedef std::future<CreatePricingPlanOutcome> CreatePricingPlanOutcomeCallable;
      typedef std::future<CreatePricingRuleOutcome> CreatePricingRuleOutcomeCallable;
      typedef std::future<DeleteBillingGroupOutcome> DeleteBillingGroupOutcomeCallable;
      typedef std::future<DeleteCustomLineItemOutcome> DeleteCustomLineItemOutcomeCallable;
      typedef std::future<DeletePricingPlanOutcome> DeletePricingPlanOutcomeCallable;
      typedef std::future<DeletePricingRuleOutcome> DeletePricingRuleOutcomeCallable;
      typedef std::future<DisassociateAccountsOutcome> DisassociateAccountsOutcomeCallable;
      typedef std::future<DisassociatePricingRulesOutcome> DisassociatePricingRulesOutcomeCallable;
      typedef std::future<ListAccountAssociationsOutcome> ListAccountAssociationsOutcomeCallable;
      typedef std::future<ListBillingGroupCostReportsOutcome> ListBillingGroupCostReportsOutcomeCallable;
      typedef std::future<ListBillingGroupsOutcome> ListBillingGroupsOutcomeCallable;
      typedef std::future<ListCustomLineItemVersionsOutcome> ListCustomLineItemVersionsOutcomeCallable;
      typedef std::future<ListCustomLineItemsOutcome> ListCustomLineItemsOutcomeCallable;
      typedef std::future<ListPricingPlansOutcome> ListPricingPlansOutcomeCallable;
      typedef std::future<ListPricingPlansAssociatedWithPricingRuleOutcome> ListPricingPlansAssociatedWithPricingRuleOutcomeCallable;
      typedef std::future<ListPricingRulesOutcome> ListPricingRulesOutcomeCallable;
      typedef std::future<ListPricingRulesAssociatedToPricingPlanOutcome> ListPricingRulesAssociatedToPricingPlanOutcomeCallable;
      typedef std::future<ListResourcesAssociatedToCustomLineItemOutcome> ListResourcesAssociatedToCustomLineItemOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBillingGroupOutcome> UpdateBillingGroupOutcomeCallable;
      typedef std::future<UpdateCustomLineItemOutcome> UpdateCustomLineItemOutcomeCallable;
      typedef std::future<UpdatePricingPlanOutcome> UpdatePricingPlanOutcomeCallable;
      typedef std::future<UpdatePricingRuleOutcome> UpdatePricingRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BillingConductorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BillingConductorClient*, const Model::AssociateAccountsRequest&, const Model::AssociateAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAccountsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::AssociatePricingRulesRequest&, const Model::AssociatePricingRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePricingRulesResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::BatchAssociateResourcesToCustomLineItemRequest&, const Model::BatchAssociateResourcesToCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateResourcesToCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::BatchDisassociateResourcesFromCustomLineItemRequest&, const Model::BatchDisassociateResourcesFromCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::CreateBillingGroupRequest&, const Model::CreateBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillingGroupResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::CreateCustomLineItemRequest&, const Model::CreateCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::CreatePricingPlanRequest&, const Model::CreatePricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePricingPlanResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::CreatePricingRuleRequest&, const Model::CreatePricingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePricingRuleResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DeleteBillingGroupRequest&, const Model::DeleteBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBillingGroupResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DeleteCustomLineItemRequest&, const Model::DeleteCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DeletePricingPlanRequest&, const Model::DeletePricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePricingPlanResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DeletePricingRuleRequest&, const Model::DeletePricingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePricingRuleResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DisassociateAccountsRequest&, const Model::DisassociateAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAccountsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::DisassociatePricingRulesRequest&, const Model::DisassociatePricingRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePricingRulesResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListAccountAssociationsRequest&, const Model::ListAccountAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssociationsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListBillingGroupCostReportsRequest&, const Model::ListBillingGroupCostReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillingGroupCostReportsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListBillingGroupsRequest&, const Model::ListBillingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillingGroupsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListCustomLineItemVersionsRequest&, const Model::ListCustomLineItemVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomLineItemVersionsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListCustomLineItemsRequest&, const Model::ListCustomLineItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomLineItemsResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListPricingPlansRequest&, const Model::ListPricingPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPricingPlansResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListPricingPlansAssociatedWithPricingRuleRequest&, const Model::ListPricingPlansAssociatedWithPricingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListPricingRulesRequest&, const Model::ListPricingRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPricingRulesResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListPricingRulesAssociatedToPricingPlanRequest&, const Model::ListPricingRulesAssociatedToPricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListResourcesAssociatedToCustomLineItemRequest&, const Model::ListResourcesAssociatedToCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesAssociatedToCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::UpdateBillingGroupRequest&, const Model::UpdateBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBillingGroupResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::UpdateCustomLineItemRequest&, const Model::UpdateCustomLineItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomLineItemResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::UpdatePricingPlanRequest&, const Model::UpdatePricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePricingPlanResponseReceivedHandler;
    typedef std::function<void(const BillingConductorClient*, const Model::UpdatePricingRuleRequest&, const Model::UpdatePricingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePricingRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BillingConductor
} // namespace Aws
