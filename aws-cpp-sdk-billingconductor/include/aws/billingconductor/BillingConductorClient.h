/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
} // namespace Model

  class BillingConductorClient;

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

  /**
   * <p>Amazon Web Services Billing Conductor is a fully managed service that you can
   * use to customize a <a
   * href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/understanding-eb.html#eb-other-definitions">pro
   * forma</a> version of your billing data each month, to accurately show or
   * chargeback your end customers. Amazon Web Services Billing Conductor doesn't
   * change the way you're billed by Amazon Web Services each month by design.
   * Instead, it provides you with a mechanism to configure, generate, and display
   * rates to certain customers over a given billing period. You can also analyze the
   * difference between the rates you apply to your accounting groupings relative to
   * your actual rates from Amazon Web Services. As a result of your Amazon Web
   * Services Billing Conductor configuration, the payer account can also see the
   * custom rate applied on the billing details page of the <a
   * href="https://console.aws.amazon.com/billing">Amazon Web Services Billing
   * console</a>, or configure a cost and usage report per billing group.</p> <p>This
   * documentation shows how you can configure Amazon Web Services Billing Conductor
   * using its API. For more information about using the <a
   * href="https://console.aws.amazon.com/enterprisebilling/">Amazon Web Services
   * Billing Conductor</a> user interface, see the <a
   * href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/what-is-enterprisebilling.html">
   * Amazon Web Services Enterprise Billing Console User Guide</a>.</p>
   */
  class AWS_BILLINGCONDUCTOR_API BillingConductorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BillingConductorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BillingConductorClient();


        /**
         * <p>Connects an array of account IDs in a consolidated billing family to a
         * predefined billing group. The account IDs must be a part of the consolidated
         * billing family during the current month, and not already associated with another
         * billing group. The maximum number of accounts that can be associated in one call
         * is 30. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AssociateAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAccountsOutcome AssociateAccounts(const Model::AssociateAccountsRequest& request) const;

        /**
         * A Callable wrapper for AssociateAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAccountsOutcomeCallable AssociateAccountsCallable(const Model::AssociateAccountsRequest& request) const;

        /**
         * An Async wrapper for AssociateAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAccountsAsync(const Model::AssociateAccountsRequest& request, const AssociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Connects an array of <code>PricingRuleArns</code> to a defined
         * <code>PricingPlan</code>. The maximum number <code>PricingRuleArn</code> that
         * can be associated in one call is 30. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AssociatePricingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePricingRulesOutcome AssociatePricingRules(const Model::AssociatePricingRulesRequest& request) const;

        /**
         * A Callable wrapper for AssociatePricingRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePricingRulesOutcomeCallable AssociatePricingRulesCallable(const Model::AssociatePricingRulesRequest& request) const;

        /**
         * An Async wrapper for AssociatePricingRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePricingRulesAsync(const Model::AssociatePricingRulesRequest& request, const AssociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associates a batch of resources to a percentage custom line item.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BatchAssociateResourcesToCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateResourcesToCustomLineItemOutcome BatchAssociateResourcesToCustomLineItem(const Model::BatchAssociateResourcesToCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateResourcesToCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateResourcesToCustomLineItemOutcomeCallable BatchAssociateResourcesToCustomLineItemCallable(const Model::BatchAssociateResourcesToCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateResourcesToCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateResourcesToCustomLineItemAsync(const Model::BatchAssociateResourcesToCustomLineItemRequest& request, const BatchAssociateResourcesToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Disassociates a batch of resources from a percentage custom line item.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BatchDisassociateResourcesFromCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateResourcesFromCustomLineItemOutcome BatchDisassociateResourcesFromCustomLineItem(const Model::BatchDisassociateResourcesFromCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateResourcesFromCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateResourcesFromCustomLineItemOutcomeCallable BatchDisassociateResourcesFromCustomLineItemCallable(const Model::BatchDisassociateResourcesFromCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateResourcesFromCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateResourcesFromCustomLineItemAsync(const Model::BatchDisassociateResourcesFromCustomLineItemRequest& request, const BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a billing group that resembles a consolidated billing family that
         * Amazon Web Services charges, based off of the predefined pricing plan
         * computation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CreateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillingGroupOutcome CreateBillingGroup(const Model::CreateBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBillingGroupOutcomeCallable CreateBillingGroupCallable(const Model::CreateBillingGroupRequest& request) const;

        /**
         * An Async wrapper for CreateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBillingGroupAsync(const Model::CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a custom line item that can be used to create a one-time fixed
         * charge that can be applied to a single billing group for the current or previous
         * billing period. The one-time fixed charge is either a fee or discount.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CreateCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomLineItemOutcome CreateCustomLineItem(const Model::CreateCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomLineItemOutcomeCallable CreateCustomLineItemCallable(const Model::CreateCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for CreateCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomLineItemAsync(const Model::CreateCustomLineItemRequest& request, const CreateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pricing plan that is used for computing Amazon Web Services charges
         * for billing groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CreatePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePricingPlanOutcome CreatePricingPlan(const Model::CreatePricingPlanRequest& request) const;

        /**
         * A Callable wrapper for CreatePricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePricingPlanOutcomeCallable CreatePricingPlanCallable(const Model::CreatePricingPlanRequest& request) const;

        /**
         * An Async wrapper for CreatePricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePricingPlanAsync(const Model::CreatePricingPlanRequest& request, const CreatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a pricing rule can be associated to a pricing plan, or a set of
         * pricing plans. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CreatePricingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePricingRuleOutcome CreatePricingRule(const Model::CreatePricingRuleRequest& request) const;

        /**
         * A Callable wrapper for CreatePricingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePricingRuleOutcomeCallable CreatePricingRuleCallable(const Model::CreatePricingRuleRequest& request) const;

        /**
         * An Async wrapper for CreatePricingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePricingRuleAsync(const Model::CreatePricingRuleRequest& request, const CreatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a billing group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DeleteBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBillingGroupOutcome DeleteBillingGroup(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBillingGroupOutcomeCallable DeleteBillingGroupCallable(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBillingGroupAsync(const Model::DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the custom line item identified by the given ARN in the current, or
         * previous billing period. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DeleteCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomLineItemOutcome DeleteCustomLineItem(const Model::DeleteCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomLineItemOutcomeCallable DeleteCustomLineItemCallable(const Model::DeleteCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomLineItemAsync(const Model::DeleteCustomLineItemRequest& request, const DeleteCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a pricing plan. The pricing plan must not be associated with any
         * billing groups to delete successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DeletePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePricingPlanOutcome DeletePricingPlan(const Model::DeletePricingPlanRequest& request) const;

        /**
         * A Callable wrapper for DeletePricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePricingPlanOutcomeCallable DeletePricingPlanCallable(const Model::DeletePricingPlanRequest& request) const;

        /**
         * An Async wrapper for DeletePricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePricingPlanAsync(const Model::DeletePricingPlanRequest& request, const DeletePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the pricing rule identified by the input Amazon Resource Name (ARN).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DeletePricingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePricingRuleOutcome DeletePricingRule(const Model::DeletePricingRuleRequest& request) const;

        /**
         * A Callable wrapper for DeletePricingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePricingRuleOutcomeCallable DeletePricingRuleCallable(const Model::DeletePricingRuleRequest& request) const;

        /**
         * An Async wrapper for DeletePricingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePricingRuleAsync(const Model::DeletePricingRuleRequest& request, const DeletePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified list of account IDs from the given billing group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DisassociateAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAccountsOutcome DisassociateAccounts(const Model::DisassociateAccountsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAccountsOutcomeCallable DisassociateAccountsCallable(const Model::DisassociateAccountsRequest& request) const;

        /**
         * An Async wrapper for DisassociateAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAccountsAsync(const Model::DisassociateAccountsRequest& request, const DisassociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Disassociates a list of pricing rules from a pricing plan. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/DisassociatePricingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePricingRulesOutcome DisassociatePricingRules(const Model::DisassociatePricingRulesRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePricingRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePricingRulesOutcomeCallable DisassociatePricingRulesCallable(const Model::DisassociatePricingRulesRequest& request) const;

        /**
         * An Async wrapper for DisassociatePricingRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePricingRulesAsync(const Model::DisassociatePricingRulesRequest& request, const DisassociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <i> <b>Amazon Web Services Billing Conductor is in beta release and is
         * subject to change. Your use of Amazon Web Services Billing Conductor is subject
         * to the Beta Service Participation terms of the <a
         * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
         * Terms</a> (Section 1.10).</b> </i> </p> <p> This is a paginated call to list
         * linked accounts that are linked to the payer account for the specified time
         * period. If no information is provided, the current billing period is used. The
         * response will optionally include the billing group associated with the linked
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListAccountAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssociationsOutcome ListAccountAssociations(const Model::ListAccountAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssociationsOutcomeCallable ListAccountAssociationsCallable(const Model::ListAccountAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListAccountAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAssociationsAsync(const Model::ListAccountAssociationsRequest& request, const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A paginated call to retrieve a summary report of actual Amazon Web Services
         * charges and the calculated Amazon Web Services charges based on the associated
         * pricing plan of a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupCostReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillingGroupCostReportsOutcome ListBillingGroupCostReports(const Model::ListBillingGroupCostReportsRequest& request) const;

        /**
         * A Callable wrapper for ListBillingGroupCostReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBillingGroupCostReportsOutcomeCallable ListBillingGroupCostReportsCallable(const Model::ListBillingGroupCostReportsRequest& request) const;

        /**
         * An Async wrapper for ListBillingGroupCostReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBillingGroupCostReportsAsync(const Model::ListBillingGroupCostReportsRequest& request, const ListBillingGroupCostReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A paginated call to retrieve a list of billing groups for the given billing
         * period. If you don't provide a billing group, the current billing period is
         * used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillingGroupsOutcome ListBillingGroups(const Model::ListBillingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListBillingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBillingGroupsOutcomeCallable ListBillingGroupsCallable(const Model::ListBillingGroupsRequest& request) const;

        /**
         * An Async wrapper for ListBillingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBillingGroupsAsync(const Model::ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> A paginated call to get a list of all custom line items (FFLIs) for the
         * given billing period. If you don't provide a billing period, the current billing
         * period is used. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomLineItemsOutcome ListCustomLineItems(const Model::ListCustomLineItemsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomLineItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomLineItemsOutcomeCallable ListCustomLineItemsCallable(const Model::ListCustomLineItemsRequest& request) const;

        /**
         * An Async wrapper for ListCustomLineItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomLineItemsAsync(const Model::ListCustomLineItemsRequest& request, const ListCustomLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A paginated call to get pricing plans for the given billing period. If you
         * don't provide a billing period, the current billing period is used.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPricingPlansOutcome ListPricingPlans(const Model::ListPricingPlansRequest& request) const;

        /**
         * A Callable wrapper for ListPricingPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPricingPlansOutcomeCallable ListPricingPlansCallable(const Model::ListPricingPlansRequest& request) const;

        /**
         * An Async wrapper for ListPricingPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPricingPlansAsync(const Model::ListPricingPlansRequest& request, const ListPricingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> A list of the pricing plans associated with a pricing rule. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingPlansAssociatedWithPricingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPricingPlansAssociatedWithPricingRuleOutcome ListPricingPlansAssociatedWithPricingRule(const Model::ListPricingPlansAssociatedWithPricingRuleRequest& request) const;

        /**
         * A Callable wrapper for ListPricingPlansAssociatedWithPricingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPricingPlansAssociatedWithPricingRuleOutcomeCallable ListPricingPlansAssociatedWithPricingRuleCallable(const Model::ListPricingPlansAssociatedWithPricingRuleRequest& request) const;

        /**
         * An Async wrapper for ListPricingPlansAssociatedWithPricingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPricingPlansAssociatedWithPricingRuleAsync(const Model::ListPricingPlansAssociatedWithPricingRuleRequest& request, const ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes a pricing rule that can be associated to a pricing plan, or set of
         * pricing plans. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPricingRulesOutcome ListPricingRules(const Model::ListPricingRulesRequest& request) const;

        /**
         * A Callable wrapper for ListPricingRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPricingRulesOutcomeCallable ListPricingRulesCallable(const Model::ListPricingRulesRequest& request) const;

        /**
         * An Async wrapper for ListPricingRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPricingRulesAsync(const Model::ListPricingRulesRequest& request, const ListPricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the pricing rules associated with a pricing plan. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingRulesAssociatedToPricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPricingRulesAssociatedToPricingPlanOutcome ListPricingRulesAssociatedToPricingPlan(const Model::ListPricingRulesAssociatedToPricingPlanRequest& request) const;

        /**
         * A Callable wrapper for ListPricingRulesAssociatedToPricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPricingRulesAssociatedToPricingPlanOutcomeCallable ListPricingRulesAssociatedToPricingPlanCallable(const Model::ListPricingRulesAssociatedToPricingPlanRequest& request) const;

        /**
         * An Async wrapper for ListPricingRulesAssociatedToPricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPricingRulesAssociatedToPricingPlanAsync(const Model::ListPricingRulesAssociatedToPricingPlanRequest& request, const ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List the resources associated to a custom line item. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListResourcesAssociatedToCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesAssociatedToCustomLineItemOutcome ListResourcesAssociatedToCustomLineItem(const Model::ListResourcesAssociatedToCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesAssociatedToCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesAssociatedToCustomLineItemOutcomeCallable ListResourcesAssociatedToCustomLineItemCallable(const Model::ListResourcesAssociatedToCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for ListResourcesAssociatedToCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAssociatedToCustomLineItemAsync(const Model::ListResourcesAssociatedToCustomLineItemRequest& request, const ListResourcesAssociatedToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> A list the tags for a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes specified tags from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This updates an existing billing group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBillingGroupOutcome UpdateBillingGroup(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBillingGroupOutcomeCallable UpdateBillingGroupCallable(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBillingGroupAsync(const Model::UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Update an existing custom line item in the current or previous billing
         * period. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateCustomLineItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomLineItemOutcome UpdateCustomLineItem(const Model::UpdateCustomLineItemRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomLineItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomLineItemOutcomeCallable UpdateCustomLineItemCallable(const Model::UpdateCustomLineItemRequest& request) const;

        /**
         * An Async wrapper for UpdateCustomLineItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomLineItemAsync(const Model::UpdateCustomLineItemRequest& request, const UpdateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This updates an existing pricing plan. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdatePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePricingPlanOutcome UpdatePricingPlan(const Model::UpdatePricingPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdatePricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePricingPlanOutcomeCallable UpdatePricingPlanCallable(const Model::UpdatePricingPlanRequest& request) const;

        /**
         * An Async wrapper for UpdatePricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePricingPlanAsync(const Model::UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an existing pricing rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdatePricingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePricingRuleOutcome UpdatePricingRule(const Model::UpdatePricingRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdatePricingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePricingRuleOutcomeCallable UpdatePricingRuleCallable(const Model::UpdatePricingRuleRequest& request) const;

        /**
         * An Async wrapper for UpdatePricingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePricingRuleAsync(const Model::UpdatePricingRuleRequest& request, const UpdatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAccountsAsyncHelper(const Model::AssociateAccountsRequest& request, const AssociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePricingRulesAsyncHelper(const Model::AssociatePricingRulesRequest& request, const AssociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchAssociateResourcesToCustomLineItemAsyncHelper(const Model::BatchAssociateResourcesToCustomLineItemRequest& request, const BatchAssociateResourcesToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateResourcesFromCustomLineItemAsyncHelper(const Model::BatchDisassociateResourcesFromCustomLineItemRequest& request, const BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBillingGroupAsyncHelper(const Model::CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomLineItemAsyncHelper(const Model::CreateCustomLineItemRequest& request, const CreateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePricingPlanAsyncHelper(const Model::CreatePricingPlanRequest& request, const CreatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePricingRuleAsyncHelper(const Model::CreatePricingRuleRequest& request, const CreatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBillingGroupAsyncHelper(const Model::DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomLineItemAsyncHelper(const Model::DeleteCustomLineItemRequest& request, const DeleteCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePricingPlanAsyncHelper(const Model::DeletePricingPlanRequest& request, const DeletePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePricingRuleAsyncHelper(const Model::DeletePricingRuleRequest& request, const DeletePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAccountsAsyncHelper(const Model::DisassociateAccountsRequest& request, const DisassociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePricingRulesAsyncHelper(const Model::DisassociatePricingRulesRequest& request, const DisassociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAssociationsAsyncHelper(const Model::ListAccountAssociationsRequest& request, const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBillingGroupCostReportsAsyncHelper(const Model::ListBillingGroupCostReportsRequest& request, const ListBillingGroupCostReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBillingGroupsAsyncHelper(const Model::ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomLineItemsAsyncHelper(const Model::ListCustomLineItemsRequest& request, const ListCustomLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPricingPlansAsyncHelper(const Model::ListPricingPlansRequest& request, const ListPricingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPricingPlansAssociatedWithPricingRuleAsyncHelper(const Model::ListPricingPlansAssociatedWithPricingRuleRequest& request, const ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPricingRulesAsyncHelper(const Model::ListPricingRulesRequest& request, const ListPricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPricingRulesAssociatedToPricingPlanAsyncHelper(const Model::ListPricingRulesAssociatedToPricingPlanRequest& request, const ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAssociatedToCustomLineItemAsyncHelper(const Model::ListResourcesAssociatedToCustomLineItemRequest& request, const ListResourcesAssociatedToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBillingGroupAsyncHelper(const Model::UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCustomLineItemAsyncHelper(const Model::UpdateCustomLineItemRequest& request, const UpdateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePricingPlanAsyncHelper(const Model::UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePricingRuleAsyncHelper(const Model::UpdatePricingRuleRequest& request, const UpdatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace BillingConductor
} // namespace Aws
