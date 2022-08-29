/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-control-config/model/CreateClusterResult.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterResult.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterResult.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksResult.h>
#include <aws/route53-recovery-control-config/model/ListClustersResult.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsResult.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesResult.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceResult.h>
#include <aws/route53-recovery-control-config/model/TagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UntagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleResult.h>
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

namespace Route53RecoveryControlConfig
{

namespace Model
{
        class CreateClusterRequest;
        class CreateControlPanelRequest;
        class CreateRoutingControlRequest;
        class CreateSafetyRuleRequest;
        class DeleteClusterRequest;
        class DeleteControlPanelRequest;
        class DeleteRoutingControlRequest;
        class DeleteSafetyRuleRequest;
        class DescribeClusterRequest;
        class DescribeControlPanelRequest;
        class DescribeRoutingControlRequest;
        class DescribeSafetyRuleRequest;
        class ListAssociatedRoute53HealthChecksRequest;
        class ListClustersRequest;
        class ListControlPanelsRequest;
        class ListRoutingControlsRequest;
        class ListSafetyRulesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateControlPanelRequest;
        class UpdateRoutingControlRequest;
        class UpdateSafetyRuleRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Route53RecoveryControlConfigError> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateControlPanelResult, Route53RecoveryControlConfigError> CreateControlPanelOutcome;
        typedef Aws::Utils::Outcome<CreateRoutingControlResult, Route53RecoveryControlConfigError> CreateRoutingControlOutcome;
        typedef Aws::Utils::Outcome<CreateSafetyRuleResult, Route53RecoveryControlConfigError> CreateSafetyRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Route53RecoveryControlConfigError> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteControlPanelResult, Route53RecoveryControlConfigError> DeleteControlPanelOutcome;
        typedef Aws::Utils::Outcome<DeleteRoutingControlResult, Route53RecoveryControlConfigError> DeleteRoutingControlOutcome;
        typedef Aws::Utils::Outcome<DeleteSafetyRuleResult, Route53RecoveryControlConfigError> DeleteSafetyRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Route53RecoveryControlConfigError> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeControlPanelResult, Route53RecoveryControlConfigError> DescribeControlPanelOutcome;
        typedef Aws::Utils::Outcome<DescribeRoutingControlResult, Route53RecoveryControlConfigError> DescribeRoutingControlOutcome;
        typedef Aws::Utils::Outcome<DescribeSafetyRuleResult, Route53RecoveryControlConfigError> DescribeSafetyRuleOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedRoute53HealthChecksResult, Route53RecoveryControlConfigError> ListAssociatedRoute53HealthChecksOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Route53RecoveryControlConfigError> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListControlPanelsResult, Route53RecoveryControlConfigError> ListControlPanelsOutcome;
        typedef Aws::Utils::Outcome<ListRoutingControlsResult, Route53RecoveryControlConfigError> ListRoutingControlsOutcome;
        typedef Aws::Utils::Outcome<ListSafetyRulesResult, Route53RecoveryControlConfigError> ListSafetyRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53RecoveryControlConfigError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Route53RecoveryControlConfigError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Route53RecoveryControlConfigError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateControlPanelResult, Route53RecoveryControlConfigError> UpdateControlPanelOutcome;
        typedef Aws::Utils::Outcome<UpdateRoutingControlResult, Route53RecoveryControlConfigError> UpdateRoutingControlOutcome;
        typedef Aws::Utils::Outcome<UpdateSafetyRuleResult, Route53RecoveryControlConfigError> UpdateSafetyRuleOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateControlPanelOutcome> CreateControlPanelOutcomeCallable;
        typedef std::future<CreateRoutingControlOutcome> CreateRoutingControlOutcomeCallable;
        typedef std::future<CreateSafetyRuleOutcome> CreateSafetyRuleOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteControlPanelOutcome> DeleteControlPanelOutcomeCallable;
        typedef std::future<DeleteRoutingControlOutcome> DeleteRoutingControlOutcomeCallable;
        typedef std::future<DeleteSafetyRuleOutcome> DeleteSafetyRuleOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeControlPanelOutcome> DescribeControlPanelOutcomeCallable;
        typedef std::future<DescribeRoutingControlOutcome> DescribeRoutingControlOutcomeCallable;
        typedef std::future<DescribeSafetyRuleOutcome> DescribeSafetyRuleOutcomeCallable;
        typedef std::future<ListAssociatedRoute53HealthChecksOutcome> ListAssociatedRoute53HealthChecksOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListControlPanelsOutcome> ListControlPanelsOutcomeCallable;
        typedef std::future<ListRoutingControlsOutcome> ListRoutingControlsOutcomeCallable;
        typedef std::future<ListSafetyRulesOutcome> ListSafetyRulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateControlPanelOutcome> UpdateControlPanelOutcomeCallable;
        typedef std::future<UpdateRoutingControlOutcome> UpdateRoutingControlOutcomeCallable;
        typedef std::future<UpdateSafetyRuleOutcome> UpdateSafetyRuleOutcomeCallable;
} // namespace Model

  class Route53RecoveryControlConfigClient;

    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateControlPanelRequest&, const Model::CreateControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateRoutingControlRequest&, const Model::CreateRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateSafetyRuleRequest&, const Model::CreateSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteControlPanelRequest&, const Model::DeleteControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteRoutingControlRequest&, const Model::DeleteRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteSafetyRuleRequest&, const Model::DeleteSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeControlPanelRequest&, const Model::DescribeControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeRoutingControlRequest&, const Model::DescribeRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeSafetyRuleRequest&, const Model::DescribeSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListAssociatedRoute53HealthChecksRequest&, const Model::ListAssociatedRoute53HealthChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedRoute53HealthChecksResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListControlPanelsRequest&, const Model::ListControlPanelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlPanelsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListRoutingControlsRequest&, const Model::ListRoutingControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingControlsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListSafetyRulesRequest&, const Model::ListSafetyRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSafetyRulesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateControlPanelRequest&, const Model::UpdateControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateRoutingControlRequest&, const Model::UpdateRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateSafetyRuleRequest&, const Model::UpdateSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSafetyRuleResponseReceivedHandler;

  /**
   * <p>Recovery Control Configuration API Reference for Amazon Route 53 Application
   * Recovery Controller</p>
   */
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryControlConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryControlConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateControlPanelAsyncHelper(const Model::CreateControlPanelRequest& request, const CreateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoutingControlAsyncHelper(const Model::CreateRoutingControlRequest& request, const CreateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSafetyRuleAsyncHelper(const Model::CreateSafetyRuleRequest& request, const CreateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteControlPanelAsyncHelper(const Model::DeleteControlPanelRequest& request, const DeleteControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoutingControlAsyncHelper(const Model::DeleteRoutingControlRequest& request, const DeleteRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSafetyRuleAsyncHelper(const Model::DeleteSafetyRuleRequest& request, const DeleteSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeControlPanelAsyncHelper(const Model::DescribeControlPanelRequest& request, const DescribeControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRoutingControlAsyncHelper(const Model::DescribeRoutingControlRequest& request, const DescribeRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSafetyRuleAsyncHelper(const Model::DescribeSafetyRuleRequest& request, const DescribeSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedRoute53HealthChecksAsyncHelper(const Model::ListAssociatedRoute53HealthChecksRequest& request, const ListAssociatedRoute53HealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListControlPanelsAsyncHelper(const Model::ListControlPanelsRequest& request, const ListControlPanelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingControlsAsyncHelper(const Model::ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSafetyRulesAsyncHelper(const Model::ListSafetyRulesRequest& request, const ListSafetyRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateControlPanelAsyncHelper(const Model::UpdateControlPanelRequest& request, const UpdateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingControlAsyncHelper(const Model::UpdateRoutingControlRequest& request, const UpdateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSafetyRuleAsyncHelper(const Model::UpdateSafetyRuleRequest& request, const UpdateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53RecoveryControlConfig
} // namespace Aws
