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
        class UpdateRoutingControlStateRequest;
        class UpdateRoutingControlStatesRequest;

        typedef Aws::Utils::Outcome<GetRoutingControlStateResult, Route53RecoveryClusterError> GetRoutingControlStateOutcome;
        typedef Aws::Utils::Outcome<UpdateRoutingControlStateResult, Route53RecoveryClusterError> UpdateRoutingControlStateOutcome;
        typedef Aws::Utils::Outcome<UpdateRoutingControlStatesResult, Route53RecoveryClusterError> UpdateRoutingControlStatesOutcome;

        typedef std::future<GetRoutingControlStateOutcome> GetRoutingControlStateOutcomeCallable;
        typedef std::future<UpdateRoutingControlStateOutcome> UpdateRoutingControlStateOutcomeCallable;
        typedef std::future<UpdateRoutingControlStatesOutcome> UpdateRoutingControlStatesOutcomeCallable;
} // namespace Model

  class Route53RecoveryClusterClient;

    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::GetRoutingControlStateRequest&, const Model::GetRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStateRequest&, const Model::UpdateRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStatesRequest&, const Model::UpdateRoutingControlStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStatesResponseReceivedHandler;

  /**
   * <p>Welcome to the Amazon Route 53 Application Recovery Controller API Reference
   * Guide for Recovery Control Data Plane .</p> <p>Recovery control in Route 53
   * Application Recovery Controller includes extremely reliable routing controls
   * that enable you to recover applications by rerouting traffic, for example,
   * across Availability Zones or AWS Regions. Routing controls are simple on/off
   * switches hosted on a cluster. A cluster is a set of five redundant regional
   * endpoints against which you can execute API calls to update or get the state of
   * routing controls. You use routing controls to failover traffic to recover your
   * application across Availability Zones or Regions.</p> <p>This API guide includes
   * information about how to get and update routing control states in Route 53
   * Application Recovery Controller.</p> <p>For more information about Route 53
   * Application Recovery Controller, see the following:</p> <ul> <li> <p>You can
   * create clusters, routing controls, and control panels by using the control plane
   * API for Recovery Control. For more information, see <a
   * href="https://docs.aws.amazon.com/recovery-cluster/latest/api/">Amazon Route 53
   * Application Recovery Controller Recovery Control API Reference</a>.</p> </li>
   * <li> <p>Route 53 Application Recovery Controller also provides continuous
   * readiness checks to ensure that your applications are scaled to handle failover
   * traffic. For more information about the related API actions, see <a
   * href="https://docs.aws.amazon.com/recovery-readiness/latest/api/">Amazon Route
   * 53 Application Recovery Controller Recovery Readiness API Reference</a>.</p>
   * </li> <li> <p>For more information about creating resilient applications and
   * preparing for recovery readiness with Route 53 Application Recovery Controller,
   * see the <a href="r53recovery/latest/dg/">Amazon Route 53 Application Recovery
   * Controller Developer Guide</a>.</p> </li> </ul>
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
         * switch that you can use to route traffic to cells. When the state is On, traffic
         * flows to a cell. When it's off, traffic does not flow. </p> <p>Before you can
         * create a routing control, you first must create a cluster to host the control.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/recovery-cluster/latest/api/cluster.html">CreateCluster</a>.
         * Access one of the endpoints for the cluster to get or update the routing control
         * state to redirect traffic.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/GetRoutingControlState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoutingControlStateOutcome GetRoutingControlState(const Model::GetRoutingControlStateRequest& request) const;

        /**
         * <p>Get the state for a routing control. A routing control is a simple on/off
         * switch that you can use to route traffic to cells. When the state is On, traffic
         * flows to a cell. When it's off, traffic does not flow. </p> <p>Before you can
         * create a routing control, you first must create a cluster to host the control.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/recovery-cluster/latest/api/cluster.html">CreateCluster</a>.
         * Access one of the endpoints for the cluster to get or update the routing control
         * state to redirect traffic.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/GetRoutingControlState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoutingControlStateOutcomeCallable GetRoutingControlStateCallable(const Model::GetRoutingControlStateRequest& request) const;

        /**
         * <p>Get the state for a routing control. A routing control is a simple on/off
         * switch that you can use to route traffic to cells. When the state is On, traffic
         * flows to a cell. When it's off, traffic does not flow. </p> <p>Before you can
         * create a routing control, you first must create a cluster to host the control.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/recovery-cluster/latest/api/cluster.html">CreateCluster</a>.
         * Access one of the endpoints for the cluster to get or update the routing control
         * state to redirect traffic.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/GetRoutingControlState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoutingControlStateAsync(const Model::GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the state of the routing control to reroute traffic. You can set the
         * value to be On or Off. When the state is On, traffic flows to a cell. When it's
         * off, traffic does not flow.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingControlStateOutcome UpdateRoutingControlState(const Model::UpdateRoutingControlStateRequest& request) const;

        /**
         * <p>Set the state of the routing control to reroute traffic. You can set the
         * value to be On or Off. When the state is On, traffic flows to a cell. When it's
         * off, traffic does not flow.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingControlStateOutcomeCallable UpdateRoutingControlStateCallable(const Model::UpdateRoutingControlStateRequest& request) const;

        /**
         * <p>Set the state of the routing control to reroute traffic. You can set the
         * value to be On or Off. When the state is On, traffic flows to a cell. When it's
         * off, traffic does not flow.</p> <p>For more information about working with
         * routing controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingControlStateAsync(const Model::UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set multiple routing control states. You can set the value for each state to
         * be On or Off. When the state is On, traffic flows to a cell. When it's off,
         * traffic does not flow.</p> <p>For more information about working with routing
         * controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlStates">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingControlStatesOutcome UpdateRoutingControlStates(const Model::UpdateRoutingControlStatesRequest& request) const;

        /**
         * <p>Set multiple routing control states. You can set the value for each state to
         * be On or Off. When the state is On, traffic flows to a cell. When it's off,
         * traffic does not flow.</p> <p>For more information about working with routing
         * controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingControlStatesOutcomeCallable UpdateRoutingControlStatesCallable(const Model::UpdateRoutingControlStatesRequest& request) const;

        /**
         * <p>Set multiple routing control states. You can set the value for each state to
         * be On or Off. When the state is On, traffic flows to a cell. When it's off,
         * traffic does not flow.</p> <p>For more information about working with routing
         * controls, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Routing
         * control</a> in the Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlStates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingControlStatesAsync(const Model::UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetRoutingControlStateAsyncHelper(const Model::GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingControlStateAsyncHelper(const Model::UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingControlStatesAsyncHelper(const Model::UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53RecoveryCluster
} // namespace Aws
