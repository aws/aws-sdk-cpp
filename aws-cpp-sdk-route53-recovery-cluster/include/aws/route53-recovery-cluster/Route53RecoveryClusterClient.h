/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesResult.h>
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

namespace Route53RecoveryCluster
{

namespace Model
{
        class GetRoutingControlStateRequest;
        class ListRoutingControlsRequest;
        class UpdateRoutingControlStateRequest;
        class UpdateRoutingControlStatesRequest;

        typedef Aws::Utils::Outcome<GetRoutingControlStateResult, Route53RecoveryClusterError> GetRoutingControlStateOutcome;
        typedef Aws::Utils::Outcome<ListRoutingControlsResult, Route53RecoveryClusterError> ListRoutingControlsOutcome;
        typedef Aws::Utils::Outcome<UpdateRoutingControlStateResult, Route53RecoveryClusterError> UpdateRoutingControlStateOutcome;
        typedef Aws::Utils::Outcome<UpdateRoutingControlStatesResult, Route53RecoveryClusterError> UpdateRoutingControlStatesOutcome;

        typedef std::future<GetRoutingControlStateOutcome> GetRoutingControlStateOutcomeCallable;
        typedef std::future<ListRoutingControlsOutcome> ListRoutingControlsOutcomeCallable;
        typedef std::future<UpdateRoutingControlStateOutcome> UpdateRoutingControlStateOutcomeCallable;
        typedef std::future<UpdateRoutingControlStatesOutcome> UpdateRoutingControlStatesOutcomeCallable;
} // namespace Model

  class Route53RecoveryClusterClient;

    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::GetRoutingControlStateRequest&, const Model::GetRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::ListRoutingControlsRequest&, const Model::ListRoutingControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingControlsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStateRequest&, const Model::UpdateRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStatesRequest&, const Model::UpdateRoutingControlStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStatesResponseReceivedHandler;

  /**
   * <p>Welcome to the Routing Control (Recovery Cluster) API Reference Guide for
   * Amazon Route 53 Application Recovery Controller.</p> <p>With Route 53 ARC, you
   * can use routing control with extreme reliability to recover applications by
   * rerouting traffic across Availability Zones or Amazon Web Services Regions.
   * Routing controls are simple on/off switches hosted on a highly available cluster
   * in Route 53 ARC. A cluster provides a set of five redundant Regional endpoints
   * against which you can run API calls to get or update the state of routing
   * controls. To implement failover, you set one routing control On and another one
   * Off, to reroute traffic from one Availability Zone or Amazon Web Services Region
   * to another. </p> <p> <i>Be aware that you must specify a Regional endpoint for a
   * cluster when you work with API cluster operations to get or update routing
   * control states in Route 53 ARC.</i> In addition, you must specify the US West
   * (Oregon) Region for Route 53 ARC API calls. For example, use the parameter
   * <code>--region us-west-2</code> with AWS CLI commands. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.api.html">
   * Get and update routing control states using the API</a> in the Amazon Route 53
   * Application Recovery Controller Developer Guide.</p> <p>This API guide includes
   * information about the API operations for how to get and update routing control
   * states in Route 53 ARC. To work with routing control in Route 53 ARC, you must
   * first create the required components (clusters, control panels, and routing
   * controls) using the recovery cluster configuration API.</p> <p>For more
   * information about working with routing control in Route 53 ARC, see the
   * following:</p> <ul> <li> <p>Create clusters, control panels, and routing
   * controls by using API operations. For more information, see the <a
   * href="https://docs.aws.amazon.com/recovery-cluster/latest/api/">Recovery Control
   * Configuration API Reference Guide for Amazon Route 53 Application Recovery
   * Controller</a>.</p> </li> <li> <p>Learn about the components in recovery
   * control, including clusters, routing controls, and control panels, and how to
   * work with Route 53 ARC in the Amazon Web Services console. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/introduction-components.html#introduction-components-routing">
   * Recovery control components</a> in the Amazon Route 53 Application Recovery
   * Controller Developer Guide.</p> </li> <li> <p>Route 53 ARC also provides
   * readiness checks that continually audit resources to help make sure that your
   * applications are scaled and ready to handle failover traffic. For more
   * information about the related API operations, see the <a
   * href="https://docs.aws.amazon.com/recovery-readiness/latest/api/">Recovery
   * Readiness API Reference Guide for Amazon Route 53 Application Recovery
   * Controller</a>.</p> </li> <li> <p>For more information about creating resilient
   * applications and preparing for recovery readiness with Route 53 ARC, see the <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/">Amazon Route 53
   * Application Recovery Controller Developer Guide</a>.</p> </li> </ul>
   */
  class AWS_ROUTE53RECOVERYCLUSTER_API Route53RecoveryClusterClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryClusterClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryClusterClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryClusterClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Route53RecoveryClusterClient();


        /**
         * <p>Get the state for a routing control. A routing control is a simple on/off
         * switch that you can use to route traffic to cells. When a routing control state
         * is On, traffic flows to a cell. When the state is Off, traffic does not flow.
         * </p> <p>Before you can create a routing control, you must first create a
         * cluster, and then host the control in a control panel on the cluster. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.create.html">
         * Create routing control structures</a> in the Amazon Route 53 Application
         * Recovery Controller Developer Guide. You access one of the endpoints for the
         * cluster to get or update the routing control state to redirect traffic for your
         * application. </p> <p> <i>You must specify Regional endpoints when you work with
         * API cluster operations to get or update routing control states in Route 53
         * ARC.</i> </p> <p>To see a code example for getting a routing control state,
         * including accessing Regional cluster endpoints in sequence, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API
         * examples</a> in the Amazon Route 53 Application Recovery Controller Developer
         * Guide.</p> <p>Learn more about working with routing controls in the following
         * topics in the Amazon Route 53 Application Recovery Controller Developer
         * Guide:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html">
         * Viewing and updating routing control states</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working
         * with routing controls in Route 53 ARC</a> </p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/GetRoutingControlState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoutingControlStateOutcome GetRoutingControlState(const Model::GetRoutingControlStateRequest& request) const;

        /**
         * A Callable wrapper for GetRoutingControlState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoutingControlStateOutcomeCallable GetRoutingControlStateCallable(const Model::GetRoutingControlStateRequest& request) const;

        /**
         * An Async wrapper for GetRoutingControlState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoutingControlStateAsync(const Model::GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List routing control names and Amazon Resource Names (ARNs), as well as the
         * routing control state for each routing control, along with the control panel
         * name and control panel ARN for the routing controls. If you specify a control
         * panel ARN, this call lists the routing controls in the control panel. Otherwise,
         * it lists all the routing controls in the cluster.</p> <p>A routing control is a
         * simple on/off switch in Route 53 ARC that you can use to route traffic to cells.
         * When a routing control state is On, traffic flows to a cell. When the state is
         * Off, traffic does not flow.</p> <p>Before you can create a routing control, you
         * must first create a cluster, and then host the control in a control panel on the
         * cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.create.html">
         * Create routing control structures</a> in the Amazon Route 53 Application
         * Recovery Controller Developer Guide. You access one of the endpoints for the
         * cluster to get or update the routing control state to redirect traffic for your
         * application. </p> <p> <i>You must specify Regional endpoints when you work with
         * API cluster operations to use this API operation to list routing controls in
         * Route 53 ARC.</i> </p> <p>Learn more about working with routing controls in the
         * following topics in the Amazon Route 53 Application Recovery Controller
         * Developer Guide:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html">
         * Viewing and updating routing control states</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working
         * with routing controls in Route 53 ARC</a> </p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/ListRoutingControls">AWS
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
         * <p>Set the state of the routing control to reroute traffic. You can set the
         * value to be On or Off. When the state is On, traffic flows to a cell. When the
         * state is Off, traffic does not flow.</p> <p>With Route 53 ARC, you can add
         * safety rules for routing controls, which are safeguards for routing control
         * state updates that help prevent unexpected outcomes, like fail open traffic
         * routing. However, there are scenarios when you might want to bypass the routing
         * control safeguards that are enforced with safety rules that you've configured.
         * For example, you might want to fail over quickly for disaster recovery, and one
         * or more safety rules might be unexpectedly preventing you from updating a
         * routing control state to reroute traffic. In a "break glass" scenario like this,
         * you can override one or more safety rules to change a routing control state and
         * fail over your application.</p> <p>The <code>SafetyRulesToOverride</code>
         * property enables you override one or more safety rules and update routing
         * control states. For more information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
         * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
         * Recovery Controller Developer Guide.</p> <p> <i>You must specify Regional
         * endpoints when you work with API cluster operations to get or update routing
         * control states in Route 53 ARC.</i> </p> <p>To see a code example for getting a
         * routing control state, including accessing Regional cluster endpoints in
         * sequence, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API
         * examples</a> in the Amazon Route 53 Application Recovery Controller Developer
         * Guide.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html">
         * Viewing and updating routing control states</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working
         * with routing controls overall</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingControlStateOutcome UpdateRoutingControlState(const Model::UpdateRoutingControlStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingControlState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingControlStateOutcomeCallable UpdateRoutingControlStateCallable(const Model::UpdateRoutingControlStateRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingControlState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingControlStateAsync(const Model::UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set multiple routing control states. You can set the value for each state to
         * be On or Off. When the state is On, traffic flows to a cell. When it's Off,
         * traffic does not flow.</p> <p>With Route 53 ARC, you can add safety rules for
         * routing controls, which are safeguards for routing control state updates that
         * help prevent unexpected outcomes, like fail open traffic routing. However, there
         * are scenarios when you might want to bypass the routing control safeguards that
         * are enforced with safety rules that you've configured. For example, you might
         * want to fail over quickly for disaster recovery, and one or more safety rules
         * might be unexpectedly preventing you from updating a routing control state to
         * reroute traffic. In a "break glass" scenario like this, you can override one or
         * more safety rules to change a routing control state and fail over your
         * application.</p> <p>The <code>SafetyRulesToOverride</code> property enables you
         * override one or more safety rules and update routing control states. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
         * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
         * Recovery Controller Developer Guide.</p> <p> <i>You must specify Regional
         * endpoints when you work with API cluster operations to get or update routing
         * control states in Route 53 ARC.</i> </p> <p>To see a code example for getting a
         * routing control state, including accessing Regional cluster endpoints in
         * sequence, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API
         * examples</a> in the Amazon Route 53 Application Recovery Controller Developer
         * Guide.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html">
         * Viewing and updating routing control states</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working
         * with routing controls overall</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlStates">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingControlStatesOutcome UpdateRoutingControlStates(const Model::UpdateRoutingControlStatesRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingControlStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingControlStatesOutcomeCallable UpdateRoutingControlStatesCallable(const Model::UpdateRoutingControlStatesRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingControlStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingControlStatesAsync(const Model::UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetRoutingControlStateAsyncHelper(const Model::GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingControlsAsyncHelper(const Model::ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingControlStateAsyncHelper(const Model::UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingControlStatesAsyncHelper(const Model::UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53RecoveryCluster
} // namespace Aws
