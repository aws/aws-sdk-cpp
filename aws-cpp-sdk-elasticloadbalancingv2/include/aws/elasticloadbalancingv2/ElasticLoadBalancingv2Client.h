/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ServiceClientModel.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
  /**
   * <fullname>Elastic Load Balancing</fullname> <p>A load balancer distributes
   * incoming traffic across targets, such as your EC2 instances. This enables you to
   * increase the availability of your application. The load balancer also monitors
   * the health of its registered targets and ensures that it routes traffic only to
   * healthy targets. You configure your load balancer to accept incoming traffic by
   * specifying one or more listeners, which are configured with a protocol and port
   * number for connections from clients to the load balancer. You configure a target
   * group with a protocol and port number for connections from the load balancer to
   * the targets, and with health check settings to be used when checking the health
   * status of the targets.</p> <p>Elastic Load Balancing supports the following
   * types of load balancers: Application Load Balancers, Network Load Balancers,
   * Gateway Load Balancers, and Classic Load Balancers. This reference covers the
   * following load balancer types:</p> <ul> <li> <p>Application Load Balancer -
   * Operates at the application layer (layer 7) and supports HTTP and HTTPS.</p>
   * </li> <li> <p>Network Load Balancer - Operates at the transport layer (layer 4)
   * and supports TCP, TLS, and UDP.</p> </li> <li> <p>Gateway Load Balancer -
   * Operates at the network layer (layer 3).</p> </li> </ul> <p>For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic
   * Load Balancing User Guide</a>.</p> <p>All Elastic Load Balancing operations are
   * idempotent, which means that they complete at most one time. If you repeat an
   * operation, it succeeds.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2Client : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticLoadBalancingv2Client>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration(),
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG),
                                     const Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG),
                                     const Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElasticLoadBalancingv2Client();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds the specified SSL server certificate to the certificate list for the
         * specified HTTPS or TLS listener.</p> <p>If the certificate in already in the
         * certificate list, the call is successful but the certificate is not added
         * again.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html">HTTPS
         * listeners</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
         * listeners</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::AddListenerCertificatesOutcome AddListenerCertificates(const Model::AddListenerCertificatesRequest& request) const;

        /**
         * A Callable wrapper for AddListenerCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddListenerCertificatesOutcomeCallable AddListenerCertificatesCallable(const Model::AddListenerCertificatesRequest& request) const;

        /**
         * An Async wrapper for AddListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddListenerCertificatesAsync(const Model::AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified Elastic Load Balancing resource. You
         * can tag your Application Load Balancers, Network Load Balancers, Gateway Load
         * Balancers, target groups, listeners, and rules.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer, Network Load
         * Balancer, or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-listeners.html">Listeners
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-listeners.html">Listeners
         * for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple listeners with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * A Callable wrapper for CreateListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request) const;

        /**
         * An Async wrapper for CreateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Application Load Balancer, Network Load Balancer, or Gateway Load
         * Balancer.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html">Network
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html">Gateway
         * Load Balancers</a> </p> </li> </ul> <p>This operation is idempotent, which means
         * that it completes at most one time. If you attempt to create multiple load
         * balancers with the same settings, each call succeeds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for CreateLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for CreateLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule for the specified listener. The listener must be associated
         * with an Application Load Balancer.</p> <p>Each rule consists of a priority, one
         * or more actions, and one or more conditions. Rules are evaluated in priority
         * order, from the lowest value to the highest value. When the conditions for a
         * rule are met, its actions are performed. If the conditions for no rules are met,
         * the actions for the default rule are performed. For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * rules</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a target group.</p> <p>For more information, see the following:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * groups for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html">Target
         * groups for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html">Target
         * groups for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple target groups with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer to which it is attached.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * A Callable wrapper for DeleteListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request) const;

        /**
         * An Async wrapper for DeleteListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer. Deleting a load balancer also deletes its listeners.</p>
         * <p>You can't delete a load balancer if deletion protection is enabled. If the
         * load balancer does not exist or has already been deleted, the call succeeds.</p>
         * <p>Deleting a load balancer does not affect its registered targets. For example,
         * your EC2 instances continue to run and are still registered to their target
         * groups. If you no longer need these EC2 instances, you can stop or terminate
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for DeleteLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p> <p>You can't delete the default
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks. Deleting a target group does not affect its registered
         * targets. For example, any EC2 instances continue to run until you stop or
         * terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetGroupOutcome DeleteTargetGroup(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTargetGroupOutcomeCallable DeleteTargetGroupCallable(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTargetGroupAsync(const Model::DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified targets from the specified target group. After the
         * targets are deregistered, they no longer receive traffic from the load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeregisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request) const;

        /**
         * An Async wrapper for DeregisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your Amazon
         * Web Services account.</p> <p>For more information, see the following:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Quotas
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/quotas-limits.html">Quotas
         * for your Gateway Load Balancers</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default certificate and the certificate list for the specified
         * HTTPS or TLS listener.</p> <p>If the default certificate is also in the
         * certificate list, it appears twice in the results (once with
         * <code>IsDefault</code> set to true and once with <code>IsDefault</code> set to
         * false).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#https-listener-certificates">SSL
         * certificates</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#tls-listener-certificate">Server
         * certificates</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerCertificatesOutcome DescribeListenerCertificates(const Model::DescribeListenerCertificatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeListenerCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenerCertificatesOutcomeCallable DescribeListenerCertificatesCallable(const Model::DescribeListenerCertificatesRequest& request) const;

        /**
         * An Async wrapper for DescribeListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenerCertificatesAsync(const Model::DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer, Network Load Balancer, or Gateway Load Balancer. You
         * must specify either a load balancer or one or more listeners.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest& request) const;

        /**
         * A Callable wrapper for DescribeListeners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request) const;

        /**
         * An Async wrapper for DescribeListeners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified Application Load Balancer, Network
         * Load Balancer, or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Application Load Balancers Guide</i> </p>
         * </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerAttributesOutcome DescribeLoadBalancerAttributes(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoadBalancerAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeLoadBalancerAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerAttributesAsync(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified load balancers or all of your load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * An Async wrapper for DescribeLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified rules or the rules for the specified listener. You
         * must specify either a listener or one or more rules.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request) const;

        /**
         * An Async wrapper for DescribeRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSSLPoliciesOutcome DescribeSSLPolicies(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSSLPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSSLPoliciesOutcomeCallable DescribeSSLPoliciesCallable(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * An Async wrapper for DescribeSSLPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSSLPoliciesAsync(const Model::DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the tags for the specified Elastic Load Balancing resources. You
         * can describe the tags for one or more Application Load Balancers, Network Load
         * Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified target group.</p> <p>For more
         * information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Application Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupAttributesOutcome DescribeTargetGroupAttributes(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTargetGroupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetGroupAttributesOutcomeCallable DescribeTargetGroupAttributesCallable(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeTargetGroupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetGroupAttributesAsync(const Model::DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified target groups or all of your target groups. By
         * default, all target groups are described. Alternatively, you can specify one of
         * the following to filter the results: the ARN of the load balancer, the names of
         * one or more target groups, or the ARNs of one or more target
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the health of the specified targets or all of your
         * targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeTargetHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeTargetHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the specified properties of the specified listener. Any properties
         * that you do not specify remain unchanged.</p> <p>Changing the protocol from
         * HTTPS to HTTP, or from TLS to TCP, removes the security policy and default
         * certificate properties. If you change the protocol from HTTP to HTTPS, or from
         * TCP to TLS, you must add the security policy and default certificate
         * properties.</p> <p>To add an item to a list, remove an item from a list, or
         * update an item in a list, you must provide the entire list. For example, to add
         * an action, specify a list with the current actions plus the new
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest& request) const;

        /**
         * A Callable wrapper for ModifyListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request) const;

        /**
         * An Async wrapper for ModifyListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load Balancer,
         * Network Load Balancer, or Gateway Load Balancer.</p> <p>If any of the specified
         * attributes can't be modified as requested, the call fails. Any existing
         * attributes that you do not modify retain their current values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * A Callable wrapper for ModifyLoadBalancerAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * An Async wrapper for ModifyLoadBalancerAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the specified properties of the specified rule. Any properties that
         * you do not specify are unchanged.</p> <p>To add an item to a list, remove an
         * item from a list, or update an item in a list, you must provide the entire list.
         * For example, to add an action, specify a list with the current actions plus the
         * new action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest& request) const;

        /**
         * A Callable wrapper for ModifyRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request) const;

        /**
         * An Async wrapper for ModifyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTargetGroupOutcome ModifyTargetGroup(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTargetGroupOutcomeCallable ModifyTargetGroupCallable(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTargetGroupAsync(const Model::ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attributes of the specified target
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTargetGroupAttributesOutcome ModifyTargetGroupAttributes(const Model::ModifyTargetGroupAttributesRequest& request) const;

        /**
         * A Callable wrapper for ModifyTargetGroupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTargetGroupAttributesOutcomeCallable ModifyTargetGroupAttributesCallable(const Model::ModifyTargetGroupAttributesRequest& request) const;

        /**
         * An Async wrapper for ModifyTargetGroupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTargetGroupAttributesAsync(const Model::ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>If
         * the target is an EC2 instance, it must be in the <code>running</code> state when
         * you register it.</p> <p>By default, the load balancer routes requests to
         * registered targets using the protocol and port for the target group.
         * Alternatively, you can override the port for a target when you register it. You
         * can register each EC2 instance or IP address with the same target group multiple
         * times using different ports.</p> <p>With a Network Load Balancer, you cannot
         * register instances by instance ID if they have the following instance types: C1,
         * CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1. You can
         * register instances of these types by IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest& request) const;

        /**
         * A Callable wrapper for RegisterTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request) const;

        /**
         * An Async wrapper for RegisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified certificate from the certificate list for the specified
         * HTTPS or TLS listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveListenerCertificatesOutcome RemoveListenerCertificates(const Model::RemoveListenerCertificatesRequest& request) const;

        /**
         * A Callable wrapper for RemoveListenerCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveListenerCertificatesOutcomeCallable RemoveListenerCertificatesCallable(const Model::RemoveListenerCertificatesRequest& request) const;

        /**
         * An Async wrapper for RemoveListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveListenerCertificatesAsync(const Model::RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified Elastic Load Balancing
         * resources. You can remove the tags for one or more Application Load Balancers,
         * Network Load Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the type of IP addresses used by the subnets of the specified load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetIpAddressType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIpAddressTypeOutcome SetIpAddressType(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * A Callable wrapper for SetIpAddressType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIpAddressTypeOutcomeCallable SetIpAddressTypeCallable(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * An Async wrapper for SetIpAddressType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIpAddressTypeAsync(const Model::SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the priorities of the specified rules.</p> <p>You can reorder the rules
         * as long as there are no priority conflicts in the new order. Any existing rules
         * that you do not specify retain their current priority.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetRulePriorities">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRulePrioritiesOutcome SetRulePriorities(const Model::SetRulePrioritiesRequest& request) const;

        /**
         * A Callable wrapper for SetRulePriorities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRulePrioritiesOutcomeCallable SetRulePrioritiesCallable(const Model::SetRulePrioritiesRequest& request) const;

        /**
         * An Async wrapper for SetRulePriorities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRulePrioritiesAsync(const Model::SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified security groups with the specified Application Load
         * Balancer. The specified security groups override the previously associated
         * security groups.</p> <p>You can't specify a security group for a Network Load
         * Balancer or Gateway Load Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityGroupsOutcome SetSecurityGroups(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for SetSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSecurityGroupsOutcomeCallable SetSecurityGroupsCallable(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for SetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSecurityGroupsAsync(const Model::SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Availability Zones for the specified public subnets for the
         * specified Application Load Balancer or Network Load Balancer. The specified
         * subnets replace the previously enabled subnets.</p> <p>When you specify subnets
         * for a Network Load Balancer, you must include all subnets that were enabled
         * previously, with their existing configurations, plus any additional
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubnetsOutcome SetSubnets(const Model::SetSubnetsRequest& request) const;

        /**
         * A Callable wrapper for SetSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSubnetsOutcomeCallable SetSubnetsCallable(const Model::SetSubnetsRequest& request) const;

        /**
         * An Async wrapper for SetSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSubnetsAsync(const Model::SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<ElasticLoadBalancingv2Client>;
        void init(const ElasticLoadBalancingv2ClientConfiguration& clientConfiguration);

        ElasticLoadBalancingv2ClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticLoadBalancingv2
} // namespace Aws
