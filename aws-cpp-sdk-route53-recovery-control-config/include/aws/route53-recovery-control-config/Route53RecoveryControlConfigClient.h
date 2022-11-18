/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigServiceClientModel.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigLegacyAsyncMacros.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
  /**
   * <p>Recovery Control Configuration API Reference for Amazon Route 53 Application
   * Recovery Controller</p>
   */
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Delete a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;


        /**
         * <p>Deletes a control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteControlPanelOutcome DeleteControlPanel(const Model::DeleteControlPanelRequest& request) const;


        /**
         * <p>Deletes a routing control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteRoutingControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoutingControlOutcome DeleteRoutingControl(const Model::DeleteRoutingControlRequest& request) const;


        /**
         * <p>Deletes a safety rule.</p>/&gt;<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DeleteSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSafetyRuleOutcome DeleteSafetyRule(const Model::DeleteSafetyRuleRequest& request) const;


        /**
         * <p>Display the details about a cluster. The response includes the cluster name,
         * endpoints, status, and Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;


        /**
         * <p>Displays details about a control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeControlPanelOutcome DescribeControlPanel(const Model::DescribeControlPanelRequest& request) const;


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
         * <p>Returns information about a safety rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/DescribeSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSafetyRuleOutcome DescribeSafetyRule(const Model::DescribeSafetyRuleRequest& request) const;


        /**
         * <p>Returns an array of all Amazon Route 53 health checks associated with a
         * specific routing control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListAssociatedRoute53HealthChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedRoute53HealthChecksOutcome ListAssociatedRoute53HealthChecks(const Model::ListAssociatedRoute53HealthChecksRequest& request) const;


        /**
         * <p>Returns an array of all the clusters in an account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;


        /**
         * <p>Returns an array of control panels in an account or in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListControlPanels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlPanelsOutcome ListControlPanels(const Model::ListControlPanelsRequest& request) const;


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
         * <p>List the safety rules (the assertion rules and gating rules) that you've
         * defined for the routing controls in a control panel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListSafetyRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSafetyRulesOutcome ListSafetyRules(const Model::ListSafetyRulesRequest& request) const;


        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a control panel. The only update you can make to a control panel is
         * to change the name of the control panel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateControlPanel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateControlPanelOutcome UpdateControlPanel(const Model::UpdateControlPanelRequest& request) const;


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
         * <p>Update a safety rule (an assertion rule or gating rule). You can only update
         * the name and the waiting period for a safety rule. To make other updates, delete
         * the safety rule and create a new one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateSafetyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSafetyRuleOutcome UpdateSafetyRule(const Model::UpdateSafetyRuleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Route53RecoveryControlConfigClientConfiguration& clientConfiguration);

      Route53RecoveryControlConfigClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53RecoveryControlConfig
} // namespace Aws
