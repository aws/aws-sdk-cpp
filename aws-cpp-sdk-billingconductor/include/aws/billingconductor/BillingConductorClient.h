/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/billingconductor/BillingConductorServiceClientModel.h>

namespace Aws
{
namespace BillingConductor
{
  /**
   * <p>Amazon Web Services Billing Conductor is a fully managed service that you can
   * use to customize a <a
   * href="https://docs.aws.amazon.com/billingconductor/latest/userguide/understanding-eb.html#eb-other-definitions">pro
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
   * href="https://console.aws.amazon.com/billingconductor/">Amazon Web Services
   * Billing Conductor</a> user interface, see the <a
   * href="https://docs.aws.amazon.com/billingconductor/latest/userguide/what-is-billingconductor.html">
   * Amazon Web Services Billing Conductor User Guide</a>.</p>
   */
  class AWS_BILLINGCONDUCTOR_API BillingConductorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BillingConductorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::BillingConductor::BillingConductorClientConfiguration& clientConfiguration = Aws::BillingConductor::BillingConductorClientConfiguration(),
                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider = Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider = Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG),
                               const Aws::BillingConductor::BillingConductorClientConfiguration& clientConfiguration = Aws::BillingConductor::BillingConductorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BillingConductorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<BillingConductorEndpointProviderBase> endpointProvider = Aws::MakeShared<BillingConductorEndpointProvider>(ALLOCATION_TAG),
                               const Aws::BillingConductor::BillingConductorClientConfiguration& clientConfiguration = Aws::BillingConductor::BillingConductorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingConductorClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BillingConductorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p> Deletes the pricing rule that's identified by the input Amazon Resource Name
         * (ARN). </p><p><h3>See Also:</h3>   <a
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
         * <p> This is a paginated call to list linked accounts that are linked to the
         * payer account for the specified time period. If no information is provided, the
         * current billing period is used. The response will optionally include the billing
         * group that's associated with the linked account.</p><p><h3>See Also:</h3>   <a
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
         * <p>A paginated call to get a list of all custom line item
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomLineItemVersionsOutcome ListCustomLineItemVersions(const Model::ListCustomLineItemVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomLineItemVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomLineItemVersionsOutcomeCallable ListCustomLineItemVersionsCallable(const Model::ListCustomLineItemVersionsRequest& request) const;

        /**
         * An Async wrapper for ListCustomLineItemVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomLineItemVersionsAsync(const Model::ListCustomLineItemVersionsRequest& request, const ListCustomLineItemVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> A list of the pricing plans that are associated with a pricing rule.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p> Lists the pricing rules that are associated with a pricing plan.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p> List the resources that are associated to a custom line item. </p><p><h3>See
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
      std::shared_ptr<BillingConductorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BillingConductorClient>;
      void init(const BillingConductorClientConfiguration& clientConfiguration);

      BillingConductorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BillingConductorEndpointProviderBase> m_endpointProvider;
  };

} // namespace BillingConductor
} // namespace Aws
