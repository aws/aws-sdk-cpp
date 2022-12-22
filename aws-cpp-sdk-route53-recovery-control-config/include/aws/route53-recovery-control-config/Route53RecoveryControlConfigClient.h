/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigServiceClientModel.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
  /**
   * <p>Recovery Control Configuration API Reference for Amazon Route 53 Application
   * Recovery Controller</p>
   */
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53RecoveryControlConfigClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration = Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration(),
                                           std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                           std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration = Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryControlConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration = Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryControlConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53RecoveryControlConfigClient();

        /**
         * <p>Create a new cluster. A cluster is a set of redundant Regional endpoints
         * against which you can run API calls to update or get the state of one or more
         * routing controls. Each cluster has a name, status, Amazon Resource Name (ARN),
         * and an array of the five cluster endpoints (one for each supported Amazon Web
         * Services Region) that you can use with API calls to the cluster data
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new control panel. A control panel represents a group of routing
         * controls that can be changed together in a single transaction. You can use a
         * control panel to centrally view the operational status of applications across
         * your organization, and trigger multi-app failovers in a single transaction, for
         * example, to fail over an Availability Zone or Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateControlPanelOutcome CreateControlPanel(const Model::CreateControlPanelRequest& request) const;

        /**
         * A Callable wrapper for CreateControlPanel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateControlPanelOutcomeCallable CreateControlPanelCallable(const Model::CreateControlPanelRequest& request) const;

        /**
         * An Async wrapper for CreateControlPanel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateControlPanelAsync(const Model::CreateControlPanelRequest& request, const CreateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new routing control.</p> <p>A routing control has one of two
         * states: ON and OFF. You can map the routing control state to the state of an
         * Amazon Route 53 health check, which can be used to control traffic routing.</p>
         * <p>To get or update the routing control state, see the Recovery Cluster (data
         * plane) API actions for Amazon Route 53 Application Recovery
         * Controller.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateRoutingControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoutingControlOutcome CreateRoutingControl(const Model::CreateRoutingControlRequest& request) const;

        /**
         * A Callable wrapper for CreateRoutingControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoutingControlOutcomeCallable CreateRoutingControlCallable(const Model::CreateRoutingControlRequest& request) const;

        /**
         * An Async wrapper for CreateRoutingControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoutingControlAsync(const Model::CreateRoutingControlRequest& request, const CreateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a safety rule in a control panel. Safety rules let you add safeguards
         * around changing routing control states, and for enabling and disabling routing
         * controls, to help prevent unexpected outcomes.</p> <p>There are two types of
         * safety rules: assertion rules and gating rules.</p> <p>Assertion rule: An
         * assertion rule enforces that, when you change a routing control state, that a
         * certain criteria is met. For example, the criteria might be that at least one
         * routing control state is On after the transation so that traffic continues to
         * flow to at least one cell for the application. This ensures that you avoid a
         * fail-open scenario.</p> <p>Gating rule: A gating rule lets you configure a
         * gating routing control as an overall "on/off" switch for a group of routing
         * controls. Or, you can configure more complex gating scenarios, for example by
         * configuring multiple gating routing controls.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.safety-rules.html">Safety
         * rules</a> in the Amazon Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSafetyRuleOutcome CreateSafetyRule(const Model::CreateSafetyRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateSafetyRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSafetyRuleOutcomeCallable CreateSafetyRuleCallable(const Model::CreateSafetyRuleRequest& request) const;

        /**
         * An Async wrapper for CreateSafetyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSafetyRuleAsync(const Model::CreateSafetyRuleRequest& request, const CreateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteControlPanelOutcome DeleteControlPanel(const Model::DeleteControlPanelRequest& request) const;

        /**
         * A Callable wrapper for DeleteControlPanel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteControlPanelOutcomeCallable DeleteControlPanelCallable(const Model::DeleteControlPanelRequest& request) const;

        /**
         * An Async wrapper for DeleteControlPanel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteControlPanelAsync(const Model::DeleteControlPanelRequest& request, const DeleteControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a routing control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteRoutingControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoutingControlOutcome DeleteRoutingControl(const Model::DeleteRoutingControlRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoutingControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoutingControlOutcomeCallable DeleteRoutingControlCallable(const Model::DeleteRoutingControlRequest& request) const;

        /**
         * An Async wrapper for DeleteRoutingControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoutingControlAsync(const Model::DeleteRoutingControlRequest& request, const DeleteRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a safety rule.</p>/&gt;<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSafetyRuleOutcome DeleteSafetyRule(const Model::DeleteSafetyRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSafetyRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSafetyRuleOutcomeCallable DeleteSafetyRuleCallable(const Model::DeleteSafetyRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteSafetyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSafetyRuleAsync(const Model::DeleteSafetyRuleRequest& request, const DeleteSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Display the details about a cluster. The response includes the cluster name,
         * endpoints, status, and Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about a control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeControlPanelOutcome DescribeControlPanel(const Model::DescribeControlPanelRequest& request) const;

        /**
         * A Callable wrapper for DescribeControlPanel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeControlPanelOutcomeCallable DescribeControlPanelCallable(const Model::DescribeControlPanelRequest& request) const;

        /**
         * An Async wrapper for DescribeControlPanel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeControlPanelAsync(const Model::DescribeControlPanelRequest& request, const DescribeControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about a routing control. A routing control has one of two
         * states: ON and OFF. You can map the routing control state to the state of an
         * Amazon Route 53 health check, which can be used to control routing.</p> <p>To
         * get or update the routing control state, see the Recovery Cluster (data plane)
         * API actions for Amazon Route 53 Application Recovery Controller.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeRoutingControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoutingControlOutcome DescribeRoutingControl(const Model::DescribeRoutingControlRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoutingControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRoutingControlOutcomeCallable DescribeRoutingControlCallable(const Model::DescribeRoutingControlRequest& request) const;

        /**
         * An Async wrapper for DescribeRoutingControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRoutingControlAsync(const Model::DescribeRoutingControlRequest& request, const DescribeRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a safety rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSafetyRuleOutcome DescribeSafetyRule(const Model::DescribeSafetyRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeSafetyRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSafetyRuleOutcomeCallable DescribeSafetyRuleCallable(const Model::DescribeSafetyRuleRequest& request) const;

        /**
         * An Async wrapper for DescribeSafetyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSafetyRuleAsync(const Model::DescribeSafetyRuleRequest& request, const DescribeSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of all Amazon Route 53 health checks associated with a
         * specific routing control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListAssociatedRoute53HealthChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedRoute53HealthChecksOutcome ListAssociatedRoute53HealthChecks(const Model::ListAssociatedRoute53HealthChecksRequest& request) const;

        /**
         * A Callable wrapper for ListAssociatedRoute53HealthChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedRoute53HealthChecksOutcomeCallable ListAssociatedRoute53HealthChecksCallable(const Model::ListAssociatedRoute53HealthChecksRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedRoute53HealthChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedRoute53HealthChecksAsync(const Model::ListAssociatedRoute53HealthChecksRequest& request, const ListAssociatedRoute53HealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of all the clusters in an account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of control panels in an account or in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListControlPanels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlPanelsOutcome ListControlPanels(const Model::ListControlPanelsRequest& request) const;

        /**
         * A Callable wrapper for ListControlPanels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListControlPanelsOutcomeCallable ListControlPanelsCallable(const Model::ListControlPanelsRequest& request) const;

        /**
         * An Async wrapper for ListControlPanels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListControlPanelsAsync(const Model::ListControlPanelsRequest& request, const ListControlPanelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of routing controls for a control panel. A routing control
         * is an Amazon Route 53 Application Recovery Controller construct that has one of
         * two states: ON and OFF. You can map the routing control state to the state of an
         * Amazon Route 53 health check, which can be used to control
         * routing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListRoutingControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingControlsOutcome ListRoutingControls(const Model::ListRoutingControlsRequest& request) const;

        /**
         * A Callable wrapper for ListRoutingControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingControlsOutcomeCallable ListRoutingControlsCallable(const Model::ListRoutingControlsRequest& request) const;

        /**
         * An Async wrapper for ListRoutingControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingControlsAsync(const Model::ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the safety rules (the assertion rules and gating rules) that you've
         * defined for the routing controls in a control panel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListSafetyRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSafetyRulesOutcome ListSafetyRules(const Model::ListSafetyRulesRequest& request) const;

        /**
         * A Callable wrapper for ListSafetyRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSafetyRulesOutcomeCallable ListSafetyRulesCallable(const Model::ListSafetyRulesRequest& request) const;

        /**
         * An Async wrapper for ListSafetyRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSafetyRulesAsync(const Model::ListSafetyRulesRequest& request, const ListSafetyRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListTagsForResource">AWS
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
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/TagResource">AWS
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
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UntagResource">AWS
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
         * <p>Updates a control panel. The only update you can make to a control panel is
         * to change the name of the control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateControlPanelOutcome UpdateControlPanel(const Model::UpdateControlPanelRequest& request) const;

        /**
         * A Callable wrapper for UpdateControlPanel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateControlPanelOutcomeCallable UpdateControlPanelCallable(const Model::UpdateControlPanelRequest& request) const;

        /**
         * An Async wrapper for UpdateControlPanel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateControlPanelAsync(const Model::UpdateControlPanelRequest& request, const UpdateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a routing control. You can only update the name of the routing
         * control. To get or update the routing control state, see the Recovery Cluster
         * (data plane) API actions for Amazon Route 53 Application Recovery
         * Controller.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateRoutingControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingControlOutcome UpdateRoutingControl(const Model::UpdateRoutingControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingControlOutcomeCallable UpdateRoutingControlCallable(const Model::UpdateRoutingControlRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingControlAsync(const Model::UpdateRoutingControlRequest& request, const UpdateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a safety rule (an assertion rule or gating rule). You can only update
         * the name and the waiting period for a safety rule. To make other updates, delete
         * the safety rule and create a new one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSafetyRuleOutcome UpdateSafetyRule(const Model::UpdateSafetyRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSafetyRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSafetyRuleOutcomeCallable UpdateSafetyRuleCallable(const Model::UpdateSafetyRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateSafetyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSafetyRuleAsync(const Model::UpdateSafetyRuleRequest& request, const UpdateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53RecoveryControlConfigClient>;
      void init(const Route53RecoveryControlConfigClientConfiguration& clientConfiguration);

      Route53RecoveryControlConfigClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53RecoveryControlConfig
} // namespace Aws
