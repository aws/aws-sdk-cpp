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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ElasticLoadBalancingv2ClientConfiguration ClientConfigurationType;
      typedef ElasticLoadBalancingv2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration(),
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AddListenerCertificatesRequestT = Model::AddListenerCertificatesRequest>
        Model::AddListenerCertificatesOutcomeCallable AddListenerCertificatesCallable(const AddListenerCertificatesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::AddListenerCertificates, request);
        }

        /**
         * An Async wrapper for AddListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddListenerCertificatesRequestT = Model::AddListenerCertificatesRequest>
        void AddListenerCertificatesAsync(const AddListenerCertificatesRequestT& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::AddListenerCertificates, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified Elastic Load Balancing resource. You
         * can tag your Application Load Balancers, Network Load Balancers, Gateway Load
         * Balancers, target groups, trust stores, listeners, and rules.</p> <p>Each tag
         * consists of a key and an optional value. If a resource already has a tag with
         * the same key, <code>AddTags</code> updates its value.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::AddTags, request, handler, context);
        }

        /**
         * <p>Adds the specified revocation file to the specified trust
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTrustStoreRevocations">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTrustStoreRevocationsOutcome AddTrustStoreRevocations(const Model::AddTrustStoreRevocationsRequest& request) const;

        /**
         * A Callable wrapper for AddTrustStoreRevocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTrustStoreRevocationsRequestT = Model::AddTrustStoreRevocationsRequest>
        Model::AddTrustStoreRevocationsOutcomeCallable AddTrustStoreRevocationsCallable(const AddTrustStoreRevocationsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::AddTrustStoreRevocations, request);
        }

        /**
         * An Async wrapper for AddTrustStoreRevocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTrustStoreRevocationsRequestT = Model::AddTrustStoreRevocationsRequest>
        void AddTrustStoreRevocationsAsync(const AddTrustStoreRevocationsRequestT& request, const AddTrustStoreRevocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::AddTrustStoreRevocations, request, handler, context);
        }

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
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        Model::CreateListenerOutcomeCallable CreateListenerCallable(const CreateListenerRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::CreateListener, request);
        }

        /**
         * An Async wrapper for CreateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        void CreateListenerAsync(const CreateListenerRequestT& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::CreateListener, request, handler, context);
        }

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
        template<typename CreateLoadBalancerRequestT = Model::CreateLoadBalancerRequest>
        Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const CreateLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::CreateLoadBalancer, request);
        }

        /**
         * An Async wrapper for CreateLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoadBalancerRequestT = Model::CreateLoadBalancerRequest>
        void CreateLoadBalancerAsync(const CreateLoadBalancerRequestT& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::CreateLoadBalancer, request, handler, context);
        }

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
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::CreateRule, request, handler, context);
        }

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
        template<typename CreateTargetGroupRequestT = Model::CreateTargetGroupRequest>
        Model::CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const CreateTargetGroupRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::CreateTargetGroup, request);
        }

        /**
         * An Async wrapper for CreateTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTargetGroupRequestT = Model::CreateTargetGroupRequest>
        void CreateTargetGroupAsync(const CreateTargetGroupRequestT& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::CreateTargetGroup, request, handler, context);
        }

        /**
         * <p>Creates a trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustStoreOutcome CreateTrustStore(const Model::CreateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrustStoreRequestT = Model::CreateTrustStoreRequest>
        Model::CreateTrustStoreOutcomeCallable CreateTrustStoreCallable(const CreateTrustStoreRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::CreateTrustStore, request);
        }

        /**
         * An Async wrapper for CreateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrustStoreRequestT = Model::CreateTrustStoreRequest>
        void CreateTrustStoreAsync(const CreateTrustStoreRequestT& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::CreateTrustStore, request, handler, context);
        }

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
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const DeleteListenerRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeleteListener, request);
        }

        /**
         * An Async wrapper for DeleteListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        void DeleteListenerAsync(const DeleteListenerRequestT& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeleteListener, request, handler, context);
        }

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
        template<typename DeleteLoadBalancerRequestT = Model::DeleteLoadBalancerRequest>
        Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const DeleteLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeleteLoadBalancer, request);
        }

        /**
         * An Async wrapper for DeleteLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoadBalancerRequestT = Model::DeleteLoadBalancerRequest>
        void DeleteLoadBalancerAsync(const DeleteLoadBalancerRequestT& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeleteLoadBalancer, request, handler, context);
        }

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
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeleteRule, request, handler, context);
        }

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
        template<typename DeleteTargetGroupRequestT = Model::DeleteTargetGroupRequest>
        Model::DeleteTargetGroupOutcomeCallable DeleteTargetGroupCallable(const DeleteTargetGroupRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeleteTargetGroup, request);
        }

        /**
         * An Async wrapper for DeleteTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTargetGroupRequestT = Model::DeleteTargetGroupRequest>
        void DeleteTargetGroupAsync(const DeleteTargetGroupRequestT& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeleteTargetGroup, request, handler, context);
        }

        /**
         * <p>Deletes a trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustStoreOutcome DeleteTrustStore(const Model::DeleteTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrustStoreRequestT = Model::DeleteTrustStoreRequest>
        Model::DeleteTrustStoreOutcomeCallable DeleteTrustStoreCallable(const DeleteTrustStoreRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeleteTrustStore, request);
        }

        /**
         * An Async wrapper for DeleteTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrustStoreRequestT = Model::DeleteTrustStoreRequest>
        void DeleteTrustStoreAsync(const DeleteTrustStoreRequestT& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeleteTrustStore, request, handler, context);
        }

        /**
         * <p>Deregisters the specified targets from the specified target group. After the
         * targets are deregistered, they no longer receive traffic from the load
         * balancer.</p> <p>The load balancer stops sending requests to targets that are
         * deregistering, but uses connection draining to ensure that in-flight traffic
         * completes on the existing connections. This deregistration delay is configured
         * by default but can be updated for each target group.</p> <p>For more
         * information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#deregistration-delay">
         * Deregistration delay</a> in the <i>Application Load Balancers User Guide</i>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#deregistration-delay">
         * Deregistration delay</a> in the <i>Network Load Balancers User Guide</i> </p>
         * </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html#deregistration-delay">
         * Deregistration delay</a> in the <i>Gateway Load Balancers User Guide</i> </p>
         * </li> </ul> <p>Note: If the specified target does not exist, the action returns
         * successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeregisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTargetsRequestT = Model::DeregisterTargetsRequest>
        Model::DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const DeregisterTargetsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DeregisterTargets, request);
        }

        /**
         * An Async wrapper for DeregisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTargetsRequestT = Model::DeregisterTargetsRequest>
        void DeregisterTargetsAsync(const DeregisterTargetsRequestT& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DeregisterTargets, request, handler, context);
        }

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
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const DescribeAccountLimitsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeAccountLimits, request);
        }

        /**
         * An Async wrapper for DescribeAccountLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        void DescribeAccountLimitsAsync(const DescribeAccountLimitsRequestT& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeAccountLimits, request, handler, context);
        }

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
        template<typename DescribeListenerCertificatesRequestT = Model::DescribeListenerCertificatesRequest>
        Model::DescribeListenerCertificatesOutcomeCallable DescribeListenerCertificatesCallable(const DescribeListenerCertificatesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeListenerCertificates, request);
        }

        /**
         * An Async wrapper for DescribeListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeListenerCertificatesRequestT = Model::DescribeListenerCertificatesRequest>
        void DescribeListenerCertificatesAsync(const DescribeListenerCertificatesRequestT& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeListenerCertificates, request, handler, context);
        }

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
        template<typename DescribeListenersRequestT = Model::DescribeListenersRequest>
        Model::DescribeListenersOutcomeCallable DescribeListenersCallable(const DescribeListenersRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeListeners, request);
        }

        /**
         * An Async wrapper for DescribeListeners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeListenersRequestT = Model::DescribeListenersRequest>
        void DescribeListenersAsync(const DescribeListenersRequestT& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeListeners, request, handler, context);
        }

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
        template<typename DescribeLoadBalancerAttributesRequestT = Model::DescribeLoadBalancerAttributesRequest>
        Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes, request);
        }

        /**
         * An Async wrapper for DescribeLoadBalancerAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoadBalancerAttributesRequestT = Model::DescribeLoadBalancerAttributesRequest>
        void DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequestT& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes, request, handler, context);
        }

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
        template<typename DescribeLoadBalancersRequestT = Model::DescribeLoadBalancersRequest>
        Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const DescribeLoadBalancersRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeLoadBalancers, request);
        }

        /**
         * An Async wrapper for DescribeLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoadBalancersRequestT = Model::DescribeLoadBalancersRequest>
        void DescribeLoadBalancersAsync(const DescribeLoadBalancersRequestT& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeLoadBalancers, request, handler, context);
        }

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
        template<typename DescribeRulesRequestT = Model::DescribeRulesRequest>
        Model::DescribeRulesOutcomeCallable DescribeRulesCallable(const DescribeRulesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeRules, request);
        }

        /**
         * An Async wrapper for DescribeRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRulesRequestT = Model::DescribeRulesRequest>
        void DescribeRulesAsync(const DescribeRulesRequestT& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeRules, request, handler, context);
        }

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
        template<typename DescribeSSLPoliciesRequestT = Model::DescribeSSLPoliciesRequest>
        Model::DescribeSSLPoliciesOutcomeCallable DescribeSSLPoliciesCallable(const DescribeSSLPoliciesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeSSLPolicies, request);
        }

        /**
         * An Async wrapper for DescribeSSLPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSSLPoliciesRequestT = Model::DescribeSSLPoliciesRequest>
        void DescribeSSLPoliciesAsync(const DescribeSSLPoliciesRequestT& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeSSLPolicies, request, handler, context);
        }

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
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const DescribeTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTags, request);
        }

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        void DescribeTagsAsync(const DescribeTagsRequestT& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTags, request, handler, context);
        }

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
        template<typename DescribeTargetGroupAttributesRequestT = Model::DescribeTargetGroupAttributesRequest>
        Model::DescribeTargetGroupAttributesOutcomeCallable DescribeTargetGroupAttributesCallable(const DescribeTargetGroupAttributesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes, request);
        }

        /**
         * An Async wrapper for DescribeTargetGroupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTargetGroupAttributesRequestT = Model::DescribeTargetGroupAttributesRequest>
        void DescribeTargetGroupAttributesAsync(const DescribeTargetGroupAttributesRequestT& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes, request, handler, context);
        }

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
        template<typename DescribeTargetGroupsRequestT = Model::DescribeTargetGroupsRequest>
        Model::DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const DescribeTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetGroups, request);
        }

        /**
         * An Async wrapper for DescribeTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTargetGroupsRequestT = Model::DescribeTargetGroupsRequest>
        void DescribeTargetGroupsAsync(const DescribeTargetGroupsRequestT& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetGroups, request, handler, context);
        }

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
        template<typename DescribeTargetHealthRequestT = Model::DescribeTargetHealthRequest>
        Model::DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const DescribeTargetHealthRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetHealth, request);
        }

        /**
         * An Async wrapper for DescribeTargetHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTargetHealthRequestT = Model::DescribeTargetHealthRequest>
        void DescribeTargetHealthAsync(const DescribeTargetHealthRequestT& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetHealth, request, handler, context);
        }

        /**
         * <p>Describes all resources associated with the specified trust
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTrustStoreAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustStoreAssociationsOutcome DescribeTrustStoreAssociations(const Model::DescribeTrustStoreAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrustStoreAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrustStoreAssociationsRequestT = Model::DescribeTrustStoreAssociationsRequest>
        Model::DescribeTrustStoreAssociationsOutcomeCallable DescribeTrustStoreAssociationsCallable(const DescribeTrustStoreAssociationsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTrustStoreAssociations, request);
        }

        /**
         * An Async wrapper for DescribeTrustStoreAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrustStoreAssociationsRequestT = Model::DescribeTrustStoreAssociationsRequest>
        void DescribeTrustStoreAssociationsAsync(const DescribeTrustStoreAssociationsRequestT& request, const DescribeTrustStoreAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTrustStoreAssociations, request, handler, context);
        }

        /**
         * <p>Describes the revocation files in use by the specified trust store arn, or
         * revocation ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTrustStoreRevocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustStoreRevocationsOutcome DescribeTrustStoreRevocations(const Model::DescribeTrustStoreRevocationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrustStoreRevocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrustStoreRevocationsRequestT = Model::DescribeTrustStoreRevocationsRequest>
        Model::DescribeTrustStoreRevocationsOutcomeCallable DescribeTrustStoreRevocationsCallable(const DescribeTrustStoreRevocationsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTrustStoreRevocations, request);
        }

        /**
         * An Async wrapper for DescribeTrustStoreRevocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrustStoreRevocationsRequestT = Model::DescribeTrustStoreRevocationsRequest>
        void DescribeTrustStoreRevocationsAsync(const DescribeTrustStoreRevocationsRequestT& request, const DescribeTrustStoreRevocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTrustStoreRevocations, request, handler, context);
        }

        /**
         * <p>Describes all trust stores for a given account by trust store arn’s or
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTrustStores">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustStoresOutcome DescribeTrustStores(const Model::DescribeTrustStoresRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrustStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrustStoresRequestT = Model::DescribeTrustStoresRequest>
        Model::DescribeTrustStoresOutcomeCallable DescribeTrustStoresCallable(const DescribeTrustStoresRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTrustStores, request);
        }

        /**
         * An Async wrapper for DescribeTrustStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrustStoresRequestT = Model::DescribeTrustStoresRequest>
        void DescribeTrustStoresAsync(const DescribeTrustStoresRequestT& request, const DescribeTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTrustStores, request, handler, context);
        }

        /**
         * <p>Retrieves the ca certificate bundle.</p> <p>This action returns a pre-signed
         * S3 URI which is active for ten minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/GetTrustStoreCaCertificatesBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreCaCertificatesBundleOutcome GetTrustStoreCaCertificatesBundle(const Model::GetTrustStoreCaCertificatesBundleRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStoreCaCertificatesBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrustStoreCaCertificatesBundleRequestT = Model::GetTrustStoreCaCertificatesBundleRequest>
        Model::GetTrustStoreCaCertificatesBundleOutcomeCallable GetTrustStoreCaCertificatesBundleCallable(const GetTrustStoreCaCertificatesBundleRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::GetTrustStoreCaCertificatesBundle, request);
        }

        /**
         * An Async wrapper for GetTrustStoreCaCertificatesBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrustStoreCaCertificatesBundleRequestT = Model::GetTrustStoreCaCertificatesBundleRequest>
        void GetTrustStoreCaCertificatesBundleAsync(const GetTrustStoreCaCertificatesBundleRequestT& request, const GetTrustStoreCaCertificatesBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::GetTrustStoreCaCertificatesBundle, request, handler, context);
        }

        /**
         * <p>Retrieves the specified revocation file.</p> <p>This action returns a
         * pre-signed S3 URI which is active for ten minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/GetTrustStoreRevocationContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreRevocationContentOutcome GetTrustStoreRevocationContent(const Model::GetTrustStoreRevocationContentRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStoreRevocationContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrustStoreRevocationContentRequestT = Model::GetTrustStoreRevocationContentRequest>
        Model::GetTrustStoreRevocationContentOutcomeCallable GetTrustStoreRevocationContentCallable(const GetTrustStoreRevocationContentRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::GetTrustStoreRevocationContent, request);
        }

        /**
         * An Async wrapper for GetTrustStoreRevocationContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrustStoreRevocationContentRequestT = Model::GetTrustStoreRevocationContentRequest>
        void GetTrustStoreRevocationContentAsync(const GetTrustStoreRevocationContentRequestT& request, const GetTrustStoreRevocationContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::GetTrustStoreRevocationContent, request, handler, context);
        }

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
        template<typename ModifyListenerRequestT = Model::ModifyListenerRequest>
        Model::ModifyListenerOutcomeCallable ModifyListenerCallable(const ModifyListenerRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyListener, request);
        }

        /**
         * An Async wrapper for ModifyListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyListenerRequestT = Model::ModifyListenerRequest>
        void ModifyListenerAsync(const ModifyListenerRequestT& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyListener, request, handler, context);
        }

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
        template<typename ModifyLoadBalancerAttributesRequestT = Model::ModifyLoadBalancerAttributesRequest>
        Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes, request);
        }

        /**
         * An Async wrapper for ModifyLoadBalancerAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyLoadBalancerAttributesRequestT = Model::ModifyLoadBalancerAttributesRequest>
        void ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequestT& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes, request, handler, context);
        }

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
        template<typename ModifyRuleRequestT = Model::ModifyRuleRequest>
        Model::ModifyRuleOutcomeCallable ModifyRuleCallable(const ModifyRuleRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyRule, request);
        }

        /**
         * An Async wrapper for ModifyRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyRuleRequestT = Model::ModifyRuleRequest>
        void ModifyRuleAsync(const ModifyRuleRequestT& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyRule, request, handler, context);
        }

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
        template<typename ModifyTargetGroupRequestT = Model::ModifyTargetGroupRequest>
        Model::ModifyTargetGroupOutcomeCallable ModifyTargetGroupCallable(const ModifyTargetGroupRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyTargetGroup, request);
        }

        /**
         * An Async wrapper for ModifyTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyTargetGroupRequestT = Model::ModifyTargetGroupRequest>
        void ModifyTargetGroupAsync(const ModifyTargetGroupRequestT& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyTargetGroup, request, handler, context);
        }

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
        template<typename ModifyTargetGroupAttributesRequestT = Model::ModifyTargetGroupAttributesRequest>
        Model::ModifyTargetGroupAttributesOutcomeCallable ModifyTargetGroupAttributesCallable(const ModifyTargetGroupAttributesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes, request);
        }

        /**
         * An Async wrapper for ModifyTargetGroupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyTargetGroupAttributesRequestT = Model::ModifyTargetGroupAttributesRequest>
        void ModifyTargetGroupAttributesAsync(const ModifyTargetGroupAttributesRequestT& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes, request, handler, context);
        }

        /**
         * <p>Update the ca certificate bundle for a given trust store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrustStoreOutcome ModifyTrustStore(const Model::ModifyTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for ModifyTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyTrustStoreRequestT = Model::ModifyTrustStoreRequest>
        Model::ModifyTrustStoreOutcomeCallable ModifyTrustStoreCallable(const ModifyTrustStoreRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::ModifyTrustStore, request);
        }

        /**
         * An Async wrapper for ModifyTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyTrustStoreRequestT = Model::ModifyTrustStoreRequest>
        void ModifyTrustStoreAsync(const ModifyTrustStoreRequestT& request, const ModifyTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::ModifyTrustStore, request, handler, context);
        }

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
        template<typename RegisterTargetsRequestT = Model::RegisterTargetsRequest>
        Model::RegisterTargetsOutcomeCallable RegisterTargetsCallable(const RegisterTargetsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::RegisterTargets, request);
        }

        /**
         * An Async wrapper for RegisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTargetsRequestT = Model::RegisterTargetsRequest>
        void RegisterTargetsAsync(const RegisterTargetsRequestT& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::RegisterTargets, request, handler, context);
        }

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
        template<typename RemoveListenerCertificatesRequestT = Model::RemoveListenerCertificatesRequest>
        Model::RemoveListenerCertificatesOutcomeCallable RemoveListenerCertificatesCallable(const RemoveListenerCertificatesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::RemoveListenerCertificates, request);
        }

        /**
         * An Async wrapper for RemoveListenerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveListenerCertificatesRequestT = Model::RemoveListenerCertificatesRequest>
        void RemoveListenerCertificatesAsync(const RemoveListenerCertificatesRequestT& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::RemoveListenerCertificates, request, handler, context);
        }

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
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const RemoveTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::RemoveTags, request);
        }

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        void RemoveTagsAsync(const RemoveTagsRequestT& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::RemoveTags, request, handler, context);
        }

        /**
         * <p>Removes the specified revocation file from the specified trust
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTrustStoreRevocations">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTrustStoreRevocationsOutcome RemoveTrustStoreRevocations(const Model::RemoveTrustStoreRevocationsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTrustStoreRevocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTrustStoreRevocationsRequestT = Model::RemoveTrustStoreRevocationsRequest>
        Model::RemoveTrustStoreRevocationsOutcomeCallable RemoveTrustStoreRevocationsCallable(const RemoveTrustStoreRevocationsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::RemoveTrustStoreRevocations, request);
        }

        /**
         * An Async wrapper for RemoveTrustStoreRevocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTrustStoreRevocationsRequestT = Model::RemoveTrustStoreRevocationsRequest>
        void RemoveTrustStoreRevocationsAsync(const RemoveTrustStoreRevocationsRequestT& request, const RemoveTrustStoreRevocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::RemoveTrustStoreRevocations, request, handler, context);
        }

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
        template<typename SetIpAddressTypeRequestT = Model::SetIpAddressTypeRequest>
        Model::SetIpAddressTypeOutcomeCallable SetIpAddressTypeCallable(const SetIpAddressTypeRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::SetIpAddressType, request);
        }

        /**
         * An Async wrapper for SetIpAddressType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIpAddressTypeRequestT = Model::SetIpAddressTypeRequest>
        void SetIpAddressTypeAsync(const SetIpAddressTypeRequestT& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::SetIpAddressType, request, handler, context);
        }

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
        template<typename SetRulePrioritiesRequestT = Model::SetRulePrioritiesRequest>
        Model::SetRulePrioritiesOutcomeCallable SetRulePrioritiesCallable(const SetRulePrioritiesRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::SetRulePriorities, request);
        }

        /**
         * An Async wrapper for SetRulePriorities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetRulePrioritiesRequestT = Model::SetRulePrioritiesRequest>
        void SetRulePrioritiesAsync(const SetRulePrioritiesRequestT& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::SetRulePriorities, request, handler, context);
        }

        /**
         * <p>Associates the specified security groups with the specified Application Load
         * Balancer or Network Load Balancer. The specified security groups override the
         * previously associated security groups.</p> <p>You can't perform this operation
         * on a Network Load Balancer unless you specified a security group for the load
         * balancer when you created it.</p> <p>You can't associate a security group with a
         * Gateway Load Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityGroupsOutcome SetSecurityGroups(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for SetSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetSecurityGroupsRequestT = Model::SetSecurityGroupsRequest>
        Model::SetSecurityGroupsOutcomeCallable SetSecurityGroupsCallable(const SetSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::SetSecurityGroups, request);
        }

        /**
         * An Async wrapper for SetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetSecurityGroupsRequestT = Model::SetSecurityGroupsRequest>
        void SetSecurityGroupsAsync(const SetSecurityGroupsRequestT& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::SetSecurityGroups, request, handler, context);
        }

        /**
         * <p>Enables the Availability Zones for the specified public subnets for the
         * specified Application Load Balancer, Network Load Balancer or Gateway Load
         * Balancer. The specified subnets replace the previously enabled subnets.</p>
         * <p>When you specify subnets for a Network Load Balancer, or Gateway Load
         * Balancer you must include all subnets that were enabled previously, with their
         * existing configurations, plus any additional subnets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubnetsOutcome SetSubnets(const Model::SetSubnetsRequest& request) const;

        /**
         * A Callable wrapper for SetSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetSubnetsRequestT = Model::SetSubnetsRequest>
        Model::SetSubnetsOutcomeCallable SetSubnetsCallable(const SetSubnetsRequestT& request) const
        {
            return SubmitCallable(&ElasticLoadBalancingv2Client::SetSubnets, request);
        }

        /**
         * An Async wrapper for SetSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetSubnetsRequestT = Model::SetSubnetsRequest>
        void SetSubnetsAsync(const SetSubnetsRequestT& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticLoadBalancingv2Client::SetSubnets, request, handler, context);
        }


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
