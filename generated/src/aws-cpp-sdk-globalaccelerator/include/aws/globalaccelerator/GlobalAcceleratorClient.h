/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/GlobalAcceleratorServiceClientModel.h>

namespace Aws
{
namespace GlobalAccelerator
{
  /**
   * <fullname>Global Accelerator</fullname> <p>This is the <i>Global Accelerator API
   * Reference</i>. This guide is for developers who need detailed information about
   * Global Accelerator API actions, data types, and errors. For more information
   * about Global Accelerator features, see the <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global
   * Accelerator Developer Guide</a>.</p> <p>Global Accelerator is a service in which
   * you create <i>accelerators</i> to improve the performance of your applications
   * for local and global users. Depending on the type of accelerator you choose, you
   * can gain additional benefits. </p> <ul> <li> <p>By using a standard accelerator,
   * you can improve availability of your internet applications that are used by a
   * global audience. With a standard accelerator, Global Accelerator directs traffic
   * to optimal endpoints over the Amazon Web Services global network. </p> </li>
   * <li> <p>For other scenarios, you might choose a custom routing accelerator. With
   * a custom routing accelerator, you can use application logic to directly map one
   * or more users to a specific endpoint among many endpoints.</p> </li> </ul>
   *  <p>Global Accelerator is a global service that supports endpoints in
   * multiple Amazon Web Services Regions but you must specify the US West (Oregon)
   * Region to create, update, or otherwise work with accelerators. That is, for
   * example, specify <code>--region us-west-2</code> on Amazon Web Services CLI
   * commands.</p>  <p>By default, Global Accelerator provides you with
   * static IP addresses that you associate with your accelerator. The static IP
   * addresses are anycast from the Amazon Web Services edge network. For IPv4,
   * Global Accelerator provides two static IPv4 addresses. For dual-stack, Global
   * Accelerator provides a total of four addresses: two static IPv4 addresses and
   * two static IPv6 addresses. With a standard accelerator for IPv4, instead of
   * using the addresses that Global Accelerator provides, you can configure these
   * entry points to be IPv4 addresses from your own IP address ranges that you bring
   * to Global Accelerator (BYOIP). </p> <p>For a standard accelerator, they
   * distribute incoming application traffic across multiple endpoint resources in
   * multiple Amazon Web Services Regions , which increases the availability of your
   * applications. Endpoints for standard accelerators can be Network Load Balancers,
   * Application Load Balancers, Amazon EC2 instances, or Elastic IP addresses that
   * are located in one Amazon Web Services Region or multiple Amazon Web Services
   * Regions. For custom routing accelerators, you map traffic that arrives to the
   * static IP addresses to specific Amazon EC2 servers in endpoints that are virtual
   * private cloud (VPC) subnets.</p>  <p>The static IP addresses remain
   * assigned to your accelerator for as long as it exists, even if you disable the
   * accelerator and it no longer accepts or routes traffic. However, when you
   * <i>delete</i> an accelerator, you lose the static IP addresses that are assigned
   * to it, so you can no longer route traffic by using them. You can use IAM
   * policies like tag-based permissions with Global Accelerator to limit the users
   * who have permissions to delete an accelerator. For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
   * policies</a>.</p>  <p>For standard accelerators, Global Accelerator
   * uses the Amazon Web Services global network to route traffic to the optimal
   * regional endpoint based on health, client location, and policies that you
   * configure. The service reacts instantly to changes in health or configuration to
   * ensure that internet traffic from clients is always directed to healthy
   * endpoints.</p> <p>For more information about understanding and using Global
   * Accelerator, see the <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global
   * Accelerator Developer Guide</a>.</p>
   */
  class AWS_GLOBALACCELERATOR_API GlobalAcceleratorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GlobalAcceleratorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GlobalAcceleratorClientConfiguration ClientConfigurationType;
      typedef GlobalAcceleratorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration(),
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlobalAcceleratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlobalAcceleratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GlobalAcceleratorClient();

        /**
         * <p>Associate a virtual private cloud (VPC) subnet endpoint with your custom
         * routing accelerator.</p> <p>The listener port range must be large enough to
         * support the number of IP addresses that can be specified in your subnet. The
         * number of ports required is: subnet size times the number of ports per
         * destination EC2 instances. For example, a subnet defined as /24 requires a
         * listener port range of at least 255 ports. </p> <p>Note: You must have enough
         * remaining listener ports available to map to the subnet ports, or the call will
         * fail with a LimitExceededException.</p> <p>By default, all destinations in a
         * subnet in a custom routing accelerator cannot receive traffic. To enable all
         * destinations to receive traffic, or to specify individual port mappings that can
         * receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCustomRoutingEndpointsOutcome AddCustomRoutingEndpoints(const Model::AddCustomRoutingEndpointsRequest& request) const;

        /**
         * A Callable wrapper for AddCustomRoutingEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddCustomRoutingEndpointsRequestT = Model::AddCustomRoutingEndpointsRequest>
        Model::AddCustomRoutingEndpointsOutcomeCallable AddCustomRoutingEndpointsCallable(const AddCustomRoutingEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::AddCustomRoutingEndpoints, request);
        }

        /**
         * An Async wrapper for AddCustomRoutingEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddCustomRoutingEndpointsRequestT = Model::AddCustomRoutingEndpointsRequest>
        void AddCustomRoutingEndpointsAsync(const AddCustomRoutingEndpointsRequestT& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::AddCustomRoutingEndpoints, request, handler, context);
        }

        /**
         * <p>Add endpoints to an endpoint group. The <code>AddEndpoints</code> API
         * operation is the recommended option for adding endpoints. The alternative
         * options are to add endpoints when you create an endpoint group (with the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_CreateEndpointGroup.html">CreateEndpointGroup</a>
         * API) or when you update an endpoint group (with the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_UpdateEndpointGroup.html">UpdateEndpointGroup</a>
         * API). </p> <p>There are two advantages to using <code>AddEndpoints</code> to add
         * endpoints in Global Accelerator:</p> <ul> <li> <p>It's faster, because Global
         * Accelerator only has to resolve the new endpoints that you're adding, rather
         * than resolving new and existing endpoints.</p> </li> <li> <p>It's more
         * convenient, because you don't need to specify the current endpoints that are
         * already in the endpoint group, in addition to the new endpoints that you want to
         * add.</p> </li> </ul> <p>For information about endpoint types and requirements
         * for endpoints that you can add to Global Accelerator, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints.html">
         * Endpoints for standard accelerators</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::AddEndpointsOutcome AddEndpoints(const Model::AddEndpointsRequest& request) const;

        /**
         * A Callable wrapper for AddEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddEndpointsRequestT = Model::AddEndpointsRequest>
        Model::AddEndpointsOutcomeCallable AddEndpointsCallable(const AddEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::AddEndpoints, request);
        }

        /**
         * An Async wrapper for AddEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddEndpointsRequestT = Model::AddEndpointsRequest>
        void AddEndpointsAsync(const AddEndpointsRequestT& request, const AddEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::AddEndpoints, request, handler, context);
        }

        /**
         * <p>Advertises an IPv4 address range that is provisioned for use with your Amazon
         * Web Services resources through bring your own IP addresses (BYOIP). It can take
         * a few minutes before traffic to the specified addresses starts routing to Amazon
         * Web Services because of propagation delays. </p> <p>To stop advertising the
         * BYOIP address range, use <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">
         * WithdrawByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * your own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AdvertiseByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::AdvertiseByoipCidrOutcome AdvertiseByoipCidr(const Model::AdvertiseByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for AdvertiseByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdvertiseByoipCidrRequestT = Model::AdvertiseByoipCidrRequest>
        Model::AdvertiseByoipCidrOutcomeCallable AdvertiseByoipCidrCallable(const AdvertiseByoipCidrRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::AdvertiseByoipCidr, request);
        }

        /**
         * An Async wrapper for AdvertiseByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdvertiseByoipCidrRequestT = Model::AdvertiseByoipCidrRequest>
        void AdvertiseByoipCidrAsync(const AdvertiseByoipCidrRequestT& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::AdvertiseByoipCidr, request, handler, context);
        }

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that can receive traffic for a custom routing accelerator.
         * You can allow traffic to all destinations in the subnet endpoint, or allow
         * traffic to a specified list of destination IP addresses and ports in the subnet.
         * Note that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AllowCustomRoutingTraffic">AWS
         * API Reference</a></p>
         */
        virtual Model::AllowCustomRoutingTrafficOutcome AllowCustomRoutingTraffic(const Model::AllowCustomRoutingTrafficRequest& request) const;

        /**
         * A Callable wrapper for AllowCustomRoutingTraffic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AllowCustomRoutingTrafficRequestT = Model::AllowCustomRoutingTrafficRequest>
        Model::AllowCustomRoutingTrafficOutcomeCallable AllowCustomRoutingTrafficCallable(const AllowCustomRoutingTrafficRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::AllowCustomRoutingTraffic, request);
        }

        /**
         * An Async wrapper for AllowCustomRoutingTraffic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AllowCustomRoutingTrafficRequestT = Model::AllowCustomRoutingTrafficRequest>
        void AllowCustomRoutingTrafficAsync(const AllowCustomRoutingTrafficRequestT& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::AllowCustomRoutingTraffic, request, handler, context);
        }

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. </p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple Amazon Web Services Regions but you must specify the US West (Oregon)
         * Region to create, update, or otherwise work with accelerators. That is, for
         * example, specify <code>--region us-west-2</code> on Amazon Web Services CLI
         * commands.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAcceleratorOutcome CreateAccelerator(const Model::CreateAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for CreateAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAcceleratorRequestT = Model::CreateAcceleratorRequest>
        Model::CreateAcceleratorOutcomeCallable CreateAcceleratorCallable(const CreateAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateAccelerator, request);
        }

        /**
         * An Async wrapper for CreateAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAcceleratorRequestT = Model::CreateAcceleratorRequest>
        void CreateAcceleratorAsync(const CreateAcceleratorRequestT& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateAccelerator, request, handler, context);
        }

        /**
         * <p>Create a cross-account attachment in Global Accelerator. You create a
         * cross-account attachment to specify the <i>principals</i> who have permission to
         * add to accelerators in their own account the resources in your account that you
         * also list in the attachment.</p> <p>A principal can be an Amazon Web Services
         * account number or the Amazon Resource Name (ARN) for an accelerator. For account
         * numbers that are listed as principals, to add a resource listed in the
         * attachment to an accelerator, you must sign in to an account specified as a
         * principal. Then you can add the resources that are listed to any of your
         * accelerators. If an accelerator ARN is listed in the cross-account attachment as
         * a principal, anyone with permission to make updates to the accelerator can add
         * as endpoints resources that are listed in the attachment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCrossAccountAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCrossAccountAttachmentOutcome CreateCrossAccountAttachment(const Model::CreateCrossAccountAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateCrossAccountAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCrossAccountAttachmentRequestT = Model::CreateCrossAccountAttachmentRequest>
        Model::CreateCrossAccountAttachmentOutcomeCallable CreateCrossAccountAttachmentCallable(const CreateCrossAccountAttachmentRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateCrossAccountAttachment, request);
        }

        /**
         * An Async wrapper for CreateCrossAccountAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCrossAccountAttachmentRequestT = Model::CreateCrossAccountAttachmentRequest>
        void CreateCrossAccountAttachmentAsync(const CreateCrossAccountAttachmentRequestT& request, const CreateCrossAccountAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateCrossAccountAttachment, request, handler, context);
        }

        /**
         * <p>Create a custom routing accelerator. A custom routing accelerator directs
         * traffic to one of possibly thousands of Amazon EC2 instance destinations running
         * in a single or multiple virtual private clouds (VPC) subnet endpoints.</p> <p>Be
         * aware that, by default, all destination EC2 instances in a VPC subnet endpoint
         * cannot receive traffic. To enable all destinations to receive traffic, or to
         * specify individual port mappings that can receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p>  <p>Global Accelerator
         * is a global service that supports endpoints in multiple Amazon Web Services
         * Regions but you must specify the US West (Oregon) Region to create, update, or
         * otherwise work with accelerators. That is, for example, specify <code>--region
         * us-west-2</code> on Amazon Web Services CLI commands.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingAcceleratorOutcome CreateCustomRoutingAccelerator(const Model::CreateCustomRoutingAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomRoutingAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomRoutingAcceleratorRequestT = Model::CreateCustomRoutingAcceleratorRequest>
        Model::CreateCustomRoutingAcceleratorOutcomeCallable CreateCustomRoutingAcceleratorCallable(const CreateCustomRoutingAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingAccelerator, request);
        }

        /**
         * An Async wrapper for CreateCustomRoutingAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomRoutingAcceleratorRequestT = Model::CreateCustomRoutingAcceleratorRequest>
        void CreateCustomRoutingAcceleratorAsync(const CreateCustomRoutingAcceleratorRequestT& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingAccelerator, request, handler, context);
        }

        /**
         * <p>Create an endpoint group for the specified listener for a custom routing
         * accelerator. An endpoint group is a collection of endpoints in one Amazon Web
         * Services Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingEndpointGroupOutcome CreateCustomRoutingEndpointGroup(const Model::CreateCustomRoutingEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomRoutingEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomRoutingEndpointGroupRequestT = Model::CreateCustomRoutingEndpointGroupRequest>
        Model::CreateCustomRoutingEndpointGroupOutcomeCallable CreateCustomRoutingEndpointGroupCallable(const CreateCustomRoutingEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup, request);
        }

        /**
         * An Async wrapper for CreateCustomRoutingEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomRoutingEndpointGroupRequestT = Model::CreateCustomRoutingEndpointGroupRequest>
        void CreateCustomRoutingEndpointGroupAsync(const CreateCustomRoutingEndpointGroupRequestT& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup, request, handler, context);
        }

        /**
         * <p>Create a listener to process inbound connections from clients to a custom
         * routing accelerator. Connections arrive to assigned static IP addresses on the
         * port range that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingListenerOutcome CreateCustomRoutingListener(const Model::CreateCustomRoutingListenerRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomRoutingListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomRoutingListenerRequestT = Model::CreateCustomRoutingListenerRequest>
        Model::CreateCustomRoutingListenerOutcomeCallable CreateCustomRoutingListenerCallable(const CreateCustomRoutingListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingListener, request);
        }

        /**
         * An Async wrapper for CreateCustomRoutingListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomRoutingListenerRequestT = Model::CreateCustomRoutingListenerRequest>
        void CreateCustomRoutingListenerAsync(const CreateCustomRoutingListenerRequestT& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingListener, request, handler, context);
        }

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one Amazon Web Services Region. A resource must be
         * valid and active when you add it as an endpoint.</p> <p>For more information
         * about endpoint types and requirements for endpoints that you can add to Global
         * Accelerator, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints.html">
         * Endpoints for standard accelerators</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEndpointGroupRequestT = Model::CreateEndpointGroupRequest>
        Model::CreateEndpointGroupOutcomeCallable CreateEndpointGroupCallable(const CreateEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateEndpointGroup, request);
        }

        /**
         * An Async wrapper for CreateEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointGroupRequestT = Model::CreateEndpointGroupRequest>
        void CreateEndpointGroupAsync(const CreateEndpointGroupRequestT& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateEndpointGroup, request, handler, context);
        }

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * A Callable wrapper for CreateListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        Model::CreateListenerOutcomeCallable CreateListenerCallable(const CreateListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::CreateListener, request);
        }

        /**
         * An Async wrapper for CreateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        void CreateListenerAsync(const CreateListenerRequestT& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::CreateListener, request, handler, context);
        }

        /**
         * <p>Delete an accelerator. Before you can delete an accelerator, you must disable
         * it and remove all dependent resources (listeners and endpoint groups). To
         * disable the accelerator, update the accelerator to set <code>Enabled</code> to
         * false.</p>  <p>When you create an accelerator, by default, Global
         * Accelerator provides you with a set of two static IP addresses. Alternatively,
         * you can bring your own IP address ranges to Global Accelerator and assign IP
         * addresses from those ranges. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Identity
         * and access management</a> in the <i>Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAcceleratorOutcome DeleteAccelerator(const Model::DeleteAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAcceleratorRequestT = Model::DeleteAcceleratorRequest>
        Model::DeleteAcceleratorOutcomeCallable DeleteAcceleratorCallable(const DeleteAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteAccelerator, request);
        }

        /**
         * An Async wrapper for DeleteAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAcceleratorRequestT = Model::DeleteAcceleratorRequest>
        void DeleteAcceleratorAsync(const DeleteAcceleratorRequestT& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteAccelerator, request, handler, context);
        }

        /**
         * <p>Delete a cross-account attachment. When you delete an attachment, Global
         * Accelerator revokes the permission to use the resources in the attachment from
         * all principals in the list of principals. Global Accelerator revokes the
         * permission for specific resources by doing the following:</p> <ul> <li> <p>If
         * the principal is an account ID, Global Accelerator reviews every accelerator in
         * the account and removes cross-account endpoints from all accelerators.</p> </li>
         * <li> <p>If the principal is an accelerator, Global Accelerator reviews just that
         * accelerator and removes cross-account endpoints from it.</p> </li> </ul> <p>If
         * there are overlapping permissions provided by multiple cross-account
         * attachments, Global Accelerator only removes endpoints if there are no current
         * cross-account attachments that provide access permission. For example, if you
         * delete a cross-account attachment that lists an accelerator as a principal, but
         * another cross-account attachment includes the account ID that owns that
         * accelerator, endpoints will not be removed from the accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCrossAccountAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrossAccountAttachmentOutcome DeleteCrossAccountAttachment(const Model::DeleteCrossAccountAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrossAccountAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCrossAccountAttachmentRequestT = Model::DeleteCrossAccountAttachmentRequest>
        Model::DeleteCrossAccountAttachmentOutcomeCallable DeleteCrossAccountAttachmentCallable(const DeleteCrossAccountAttachmentRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteCrossAccountAttachment, request);
        }

        /**
         * An Async wrapper for DeleteCrossAccountAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCrossAccountAttachmentRequestT = Model::DeleteCrossAccountAttachmentRequest>
        void DeleteCrossAccountAttachmentAsync(const DeleteCrossAccountAttachmentRequestT& request, const DeleteCrossAccountAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteCrossAccountAttachment, request, handler, context);
        }

        /**
         * <p>Delete a custom routing accelerator. Before you can delete an accelerator,
         * you must disable it and remove all dependent resources (listeners and endpoint
         * groups). To disable the accelerator, update the accelerator to set
         * <code>Enabled</code> to false.</p>  <p>When you create a custom
         * routing accelerator, by default, Global Accelerator provides you with a set of
         * two static IP addresses. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Identity
         * and access management</a> in the <i>Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingAcceleratorOutcome DeleteCustomRoutingAccelerator(const Model::DeleteCustomRoutingAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomRoutingAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomRoutingAcceleratorRequestT = Model::DeleteCustomRoutingAcceleratorRequest>
        Model::DeleteCustomRoutingAcceleratorOutcomeCallable DeleteCustomRoutingAcceleratorCallable(const DeleteCustomRoutingAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingAccelerator, request);
        }

        /**
         * An Async wrapper for DeleteCustomRoutingAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomRoutingAcceleratorRequestT = Model::DeleteCustomRoutingAcceleratorRequest>
        void DeleteCustomRoutingAcceleratorAsync(const DeleteCustomRoutingAcceleratorRequestT& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingAccelerator, request, handler, context);
        }

        /**
         * <p>Delete an endpoint group from a listener for a custom routing
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingEndpointGroupOutcome DeleteCustomRoutingEndpointGroup(const Model::DeleteCustomRoutingEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomRoutingEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomRoutingEndpointGroupRequestT = Model::DeleteCustomRoutingEndpointGroupRequest>
        Model::DeleteCustomRoutingEndpointGroupOutcomeCallable DeleteCustomRoutingEndpointGroupCallable(const DeleteCustomRoutingEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup, request);
        }

        /**
         * An Async wrapper for DeleteCustomRoutingEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomRoutingEndpointGroupRequestT = Model::DeleteCustomRoutingEndpointGroupRequest>
        void DeleteCustomRoutingEndpointGroupAsync(const DeleteCustomRoutingEndpointGroupRequestT& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup, request, handler, context);
        }

        /**
         * <p>Delete a listener for a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingListenerOutcome DeleteCustomRoutingListener(const Model::DeleteCustomRoutingListenerRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomRoutingListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomRoutingListenerRequestT = Model::DeleteCustomRoutingListenerRequest>
        Model::DeleteCustomRoutingListenerOutcomeCallable DeleteCustomRoutingListenerCallable(const DeleteCustomRoutingListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingListener, request);
        }

        /**
         * An Async wrapper for DeleteCustomRoutingListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomRoutingListenerRequestT = Model::DeleteCustomRoutingListenerRequest>
        void DeleteCustomRoutingListenerAsync(const DeleteCustomRoutingListenerRequestT& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingListener, request, handler, context);
        }

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointGroupOutcome DeleteEndpointGroup(const Model::DeleteEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointGroupRequestT = Model::DeleteEndpointGroupRequest>
        Model::DeleteEndpointGroupOutcomeCallable DeleteEndpointGroupCallable(const DeleteEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteEndpointGroup, request);
        }

        /**
         * An Async wrapper for DeleteEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointGroupRequestT = Model::DeleteEndpointGroupRequest>
        void DeleteEndpointGroupAsync(const DeleteEndpointGroupRequestT& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteEndpointGroup, request, handler, context);
        }

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * A Callable wrapper for DeleteListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const DeleteListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeleteListener, request);
        }

        /**
         * An Async wrapper for DeleteListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        void DeleteListenerAsync(const DeleteListenerRequestT& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeleteListener, request, handler, context);
        }

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that cannot receive traffic for a custom routing
         * accelerator. You can deny traffic to all destinations in the VPC endpoint, or
         * deny traffic to a specified list of destination IP addresses and ports. Note
         * that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DenyCustomRoutingTraffic">AWS
         * API Reference</a></p>
         */
        virtual Model::DenyCustomRoutingTrafficOutcome DenyCustomRoutingTraffic(const Model::DenyCustomRoutingTrafficRequest& request) const;

        /**
         * A Callable wrapper for DenyCustomRoutingTraffic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DenyCustomRoutingTrafficRequestT = Model::DenyCustomRoutingTrafficRequest>
        Model::DenyCustomRoutingTrafficOutcomeCallable DenyCustomRoutingTrafficCallable(const DenyCustomRoutingTrafficRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DenyCustomRoutingTraffic, request);
        }

        /**
         * An Async wrapper for DenyCustomRoutingTraffic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DenyCustomRoutingTrafficRequestT = Model::DenyCustomRoutingTrafficRequest>
        void DenyCustomRoutingTrafficAsync(const DenyCustomRoutingTrafficRequestT& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DenyCustomRoutingTraffic, request, handler, context);
        }

        /**
         * <p>Releases the specified address range that you provisioned to use with your
         * Amazon Web Services resources through bring your own IP addresses (BYOIP) and
         * deletes the corresponding address pool. </p> <p>Before you can release an
         * address range, you must stop advertising it by using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">WithdrawByoipCidr</a>
         * and you must not have any accelerators that are using static IP addresses
         * allocated from its address range. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * your own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeprovisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionByoipCidrOutcome DeprovisionByoipCidr(const Model::DeprovisionByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for DeprovisionByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeprovisionByoipCidrRequestT = Model::DeprovisionByoipCidrRequest>
        Model::DeprovisionByoipCidrOutcomeCallable DeprovisionByoipCidrCallable(const DeprovisionByoipCidrRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DeprovisionByoipCidr, request);
        }

        /**
         * An Async wrapper for DeprovisionByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeprovisionByoipCidrRequestT = Model::DeprovisionByoipCidrRequest>
        void DeprovisionByoipCidrAsync(const DeprovisionByoipCidrRequestT& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DeprovisionByoipCidr, request, handler, context);
        }

        /**
         * <p>Describe an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOutcome DescribeAccelerator(const Model::DescribeAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAcceleratorRequestT = Model::DescribeAcceleratorRequest>
        Model::DescribeAcceleratorOutcomeCallable DescribeAcceleratorCallable(const DescribeAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeAccelerator, request);
        }

        /**
         * An Async wrapper for DescribeAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAcceleratorRequestT = Model::DescribeAcceleratorRequest>
        void DescribeAcceleratorAsync(const DescribeAcceleratorRequestT& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeAccelerator, request, handler, context);
        }

        /**
         * <p>Describe the attributes of an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorAttributesOutcome DescribeAcceleratorAttributes(const Model::DescribeAcceleratorAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAcceleratorAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAcceleratorAttributesRequestT = Model::DescribeAcceleratorAttributesRequest>
        Model::DescribeAcceleratorAttributesOutcomeCallable DescribeAcceleratorAttributesCallable(const DescribeAcceleratorAttributesRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeAcceleratorAttributes, request);
        }

        /**
         * An Async wrapper for DescribeAcceleratorAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAcceleratorAttributesRequestT = Model::DescribeAcceleratorAttributesRequest>
        void DescribeAcceleratorAttributesAsync(const DescribeAcceleratorAttributesRequestT& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeAcceleratorAttributes, request, handler, context);
        }

        /**
         * <p>Gets configuration information about a cross-account
         * attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCrossAccountAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCrossAccountAttachmentOutcome DescribeCrossAccountAttachment(const Model::DescribeCrossAccountAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeCrossAccountAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCrossAccountAttachmentRequestT = Model::DescribeCrossAccountAttachmentRequest>
        Model::DescribeCrossAccountAttachmentOutcomeCallable DescribeCrossAccountAttachmentCallable(const DescribeCrossAccountAttachmentRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeCrossAccountAttachment, request);
        }

        /**
         * An Async wrapper for DescribeCrossAccountAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCrossAccountAttachmentRequestT = Model::DescribeCrossAccountAttachmentRequest>
        void DescribeCrossAccountAttachmentAsync(const DescribeCrossAccountAttachmentRequestT& request, const DescribeCrossAccountAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeCrossAccountAttachment, request, handler, context);
        }

        /**
         * <p>Describe a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorOutcome DescribeCustomRoutingAccelerator(const Model::DescribeCustomRoutingAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomRoutingAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomRoutingAcceleratorRequestT = Model::DescribeCustomRoutingAcceleratorRequest>
        Model::DescribeCustomRoutingAcceleratorOutcomeCallable DescribeCustomRoutingAcceleratorCallable(const DescribeCustomRoutingAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingAccelerator, request);
        }

        /**
         * An Async wrapper for DescribeCustomRoutingAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomRoutingAcceleratorRequestT = Model::DescribeCustomRoutingAcceleratorRequest>
        void DescribeCustomRoutingAcceleratorAsync(const DescribeCustomRoutingAcceleratorRequestT& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingAccelerator, request, handler, context);
        }

        /**
         * <p>Describe the attributes of a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorAttributesOutcome DescribeCustomRoutingAcceleratorAttributes(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomRoutingAcceleratorAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomRoutingAcceleratorAttributesRequestT = Model::DescribeCustomRoutingAcceleratorAttributesRequest>
        Model::DescribeCustomRoutingAcceleratorAttributesOutcomeCallable DescribeCustomRoutingAcceleratorAttributesCallable(const DescribeCustomRoutingAcceleratorAttributesRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes, request);
        }

        /**
         * An Async wrapper for DescribeCustomRoutingAcceleratorAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomRoutingAcceleratorAttributesRequestT = Model::DescribeCustomRoutingAcceleratorAttributesRequest>
        void DescribeCustomRoutingAcceleratorAttributesAsync(const DescribeCustomRoutingAcceleratorAttributesRequestT& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes, request, handler, context);
        }

        /**
         * <p>Describe an endpoint group for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingEndpointGroupOutcome DescribeCustomRoutingEndpointGroup(const Model::DescribeCustomRoutingEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomRoutingEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomRoutingEndpointGroupRequestT = Model::DescribeCustomRoutingEndpointGroupRequest>
        Model::DescribeCustomRoutingEndpointGroupOutcomeCallable DescribeCustomRoutingEndpointGroupCallable(const DescribeCustomRoutingEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup, request);
        }

        /**
         * An Async wrapper for DescribeCustomRoutingEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomRoutingEndpointGroupRequestT = Model::DescribeCustomRoutingEndpointGroupRequest>
        void DescribeCustomRoutingEndpointGroupAsync(const DescribeCustomRoutingEndpointGroupRequestT& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup, request, handler, context);
        }

        /**
         * <p>The description of a listener for a custom routing accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingListenerOutcome DescribeCustomRoutingListener(const Model::DescribeCustomRoutingListenerRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomRoutingListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomRoutingListenerRequestT = Model::DescribeCustomRoutingListenerRequest>
        Model::DescribeCustomRoutingListenerOutcomeCallable DescribeCustomRoutingListenerCallable(const DescribeCustomRoutingListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingListener, request);
        }

        /**
         * An Async wrapper for DescribeCustomRoutingListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomRoutingListenerRequestT = Model::DescribeCustomRoutingListenerRequest>
        void DescribeCustomRoutingListenerAsync(const DescribeCustomRoutingListenerRequestT& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingListener, request, handler, context);
        }

        /**
         * <p>Describe an endpoint group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointGroupOutcome DescribeEndpointGroup(const Model::DescribeEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointGroupRequestT = Model::DescribeEndpointGroupRequest>
        Model::DescribeEndpointGroupOutcomeCallable DescribeEndpointGroupCallable(const DescribeEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeEndpointGroup, request);
        }

        /**
         * An Async wrapper for DescribeEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointGroupRequestT = Model::DescribeEndpointGroupRequest>
        void DescribeEndpointGroupAsync(const DescribeEndpointGroupRequestT& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeEndpointGroup, request, handler, context);
        }

        /**
         * <p>Describe a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerOutcome DescribeListener(const Model::DescribeListenerRequest& request) const;

        /**
         * A Callable wrapper for DescribeListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeListenerRequestT = Model::DescribeListenerRequest>
        Model::DescribeListenerOutcomeCallable DescribeListenerCallable(const DescribeListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::DescribeListener, request);
        }

        /**
         * An Async wrapper for DescribeListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeListenerRequestT = Model::DescribeListenerRequest>
        void DescribeListenerAsync(const DescribeListenerRequestT& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::DescribeListener, request, handler, context);
        }

        /**
         * <p>List the accelerators for an Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceleratorsOutcome ListAccelerators(const Model::ListAcceleratorsRequest& request) const;

        /**
         * A Callable wrapper for ListAccelerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAcceleratorsRequestT = Model::ListAcceleratorsRequest>
        Model::ListAcceleratorsOutcomeCallable ListAcceleratorsCallable(const ListAcceleratorsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListAccelerators, request);
        }

        /**
         * An Async wrapper for ListAccelerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAcceleratorsRequestT = Model::ListAcceleratorsRequest>
        void ListAcceleratorsAsync(const ListAcceleratorsRequestT& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListAccelerators, request, handler, context);
        }

        /**
         * <p>Lists the IP address ranges that were specified in calls to <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/ProvisionByoipCidr.html">ProvisionByoipCidr</a>,
         * including the current state and a history of state changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListByoipCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListByoipCidrsOutcome ListByoipCidrs(const Model::ListByoipCidrsRequest& request) const;

        /**
         * A Callable wrapper for ListByoipCidrs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListByoipCidrsRequestT = Model::ListByoipCidrsRequest>
        Model::ListByoipCidrsOutcomeCallable ListByoipCidrsCallable(const ListByoipCidrsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListByoipCidrs, request);
        }

        /**
         * An Async wrapper for ListByoipCidrs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListByoipCidrsRequestT = Model::ListByoipCidrsRequest>
        void ListByoipCidrsAsync(const ListByoipCidrsRequestT& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListByoipCidrs, request, handler, context);
        }

        /**
         * <p>List the cross-account attachments that have been created in Global
         * Accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCrossAccountAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountAttachmentsOutcome ListCrossAccountAttachments(const Model::ListCrossAccountAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for ListCrossAccountAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrossAccountAttachmentsRequestT = Model::ListCrossAccountAttachmentsRequest>
        Model::ListCrossAccountAttachmentsOutcomeCallable ListCrossAccountAttachmentsCallable(const ListCrossAccountAttachmentsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCrossAccountAttachments, request);
        }

        /**
         * An Async wrapper for ListCrossAccountAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrossAccountAttachmentsRequestT = Model::ListCrossAccountAttachmentsRequest>
        void ListCrossAccountAttachmentsAsync(const ListCrossAccountAttachmentsRequestT& request, const ListCrossAccountAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCrossAccountAttachments, request, handler, context);
        }

        /**
         * <p>List the accounts that have cross-account endpoints.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCrossAccountResourceAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountResourceAccountsOutcome ListCrossAccountResourceAccounts(const Model::ListCrossAccountResourceAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListCrossAccountResourceAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrossAccountResourceAccountsRequestT = Model::ListCrossAccountResourceAccountsRequest>
        Model::ListCrossAccountResourceAccountsOutcomeCallable ListCrossAccountResourceAccountsCallable(const ListCrossAccountResourceAccountsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCrossAccountResourceAccounts, request);
        }

        /**
         * An Async wrapper for ListCrossAccountResourceAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrossAccountResourceAccountsRequestT = Model::ListCrossAccountResourceAccountsRequest>
        void ListCrossAccountResourceAccountsAsync(const ListCrossAccountResourceAccountsRequestT& request, const ListCrossAccountResourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCrossAccountResourceAccounts, request, handler, context);
        }

        /**
         * <p>List the cross-account endpoints available to add to an
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCrossAccountResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountResourcesOutcome ListCrossAccountResources(const Model::ListCrossAccountResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListCrossAccountResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrossAccountResourcesRequestT = Model::ListCrossAccountResourcesRequest>
        Model::ListCrossAccountResourcesOutcomeCallable ListCrossAccountResourcesCallable(const ListCrossAccountResourcesRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCrossAccountResources, request);
        }

        /**
         * An Async wrapper for ListCrossAccountResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrossAccountResourcesRequestT = Model::ListCrossAccountResourcesRequest>
        void ListCrossAccountResourcesAsync(const ListCrossAccountResourcesRequestT& request, const ListCrossAccountResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCrossAccountResources, request, handler, context);
        }

        /**
         * <p>List the custom routing accelerators for an Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingAcceleratorsOutcome ListCustomRoutingAccelerators(const Model::ListCustomRoutingAcceleratorsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomRoutingAccelerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomRoutingAcceleratorsRequestT = Model::ListCustomRoutingAcceleratorsRequest>
        Model::ListCustomRoutingAcceleratorsOutcomeCallable ListCustomRoutingAcceleratorsCallable(const ListCustomRoutingAcceleratorsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingAccelerators, request);
        }

        /**
         * An Async wrapper for ListCustomRoutingAccelerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomRoutingAcceleratorsRequestT = Model::ListCustomRoutingAcceleratorsRequest>
        void ListCustomRoutingAcceleratorsAsync(const ListCustomRoutingAcceleratorsRequestT& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingAccelerators, request, handler, context);
        }

        /**
         * <p>List the endpoint groups that are associated with a listener for a custom
         * routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingEndpointGroupsOutcome ListCustomRoutingEndpointGroups(const Model::ListCustomRoutingEndpointGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomRoutingEndpointGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomRoutingEndpointGroupsRequestT = Model::ListCustomRoutingEndpointGroupsRequest>
        Model::ListCustomRoutingEndpointGroupsOutcomeCallable ListCustomRoutingEndpointGroupsCallable(const ListCustomRoutingEndpointGroupsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingEndpointGroups, request);
        }

        /**
         * An Async wrapper for ListCustomRoutingEndpointGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomRoutingEndpointGroupsRequestT = Model::ListCustomRoutingEndpointGroupsRequest>
        void ListCustomRoutingEndpointGroupsAsync(const ListCustomRoutingEndpointGroupsRequestT& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingEndpointGroups, request, handler, context);
        }

        /**
         * <p>List the listeners for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingListenersOutcome ListCustomRoutingListeners(const Model::ListCustomRoutingListenersRequest& request) const;

        /**
         * A Callable wrapper for ListCustomRoutingListeners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomRoutingListenersRequestT = Model::ListCustomRoutingListenersRequest>
        Model::ListCustomRoutingListenersOutcomeCallable ListCustomRoutingListenersCallable(const ListCustomRoutingListenersRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingListeners, request);
        }

        /**
         * An Async wrapper for ListCustomRoutingListeners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomRoutingListenersRequestT = Model::ListCustomRoutingListenersRequest>
        void ListCustomRoutingListenersAsync(const ListCustomRoutingListenersRequestT& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingListeners, request, handler, context);
        }

        /**
         * <p>Provides a complete mapping from the public accelerator IP address and port
         * to destination EC2 instance IP addresses and ports in the virtual public cloud
         * (VPC) subnet endpoint for a custom routing accelerator. For each subnet endpoint
         * that you add, Global Accelerator creates a new static port mapping for the
         * accelerator. The port mappings don't change after Global Accelerator generates
         * them, so you can retrieve and cache the full mapping on your servers. </p> <p>If
         * you remove a subnet from your accelerator, Global Accelerator removes (reclaims)
         * the port mappings. If you add a subnet to your accelerator, Global Accelerator
         * creates new port mappings (the existing ones don't change). If you add or remove
         * EC2 instances in your subnet, the port mappings don't change, because the
         * mappings are created when you add the subnet to Global Accelerator.</p> <p>The
         * mappings also include a flag for each destination denoting which destination IP
         * addresses and ports are allowed or denied traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingPortMappingsOutcome ListCustomRoutingPortMappings(const Model::ListCustomRoutingPortMappingsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomRoutingPortMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomRoutingPortMappingsRequestT = Model::ListCustomRoutingPortMappingsRequest>
        Model::ListCustomRoutingPortMappingsOutcomeCallable ListCustomRoutingPortMappingsCallable(const ListCustomRoutingPortMappingsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingPortMappings, request);
        }

        /**
         * An Async wrapper for ListCustomRoutingPortMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomRoutingPortMappingsRequestT = Model::ListCustomRoutingPortMappingsRequest>
        void ListCustomRoutingPortMappingsAsync(const ListCustomRoutingPortMappingsRequestT& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingPortMappings, request, handler, context);
        }

        /**
         * <p>List the port mappings for a specific EC2 instance (destination) in a VPC
         * subnet endpoint. The response is the mappings for one destination IP address.
         * This is useful when your subnet endpoint has mappings that span multiple custom
         * routing accelerators in your account, or for scenarios where you only want to
         * list the port mappings for a specific destination instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappingsByDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingPortMappingsByDestinationOutcome ListCustomRoutingPortMappingsByDestination(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request) const;

        /**
         * A Callable wrapper for ListCustomRoutingPortMappingsByDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomRoutingPortMappingsByDestinationRequestT = Model::ListCustomRoutingPortMappingsByDestinationRequest>
        Model::ListCustomRoutingPortMappingsByDestinationOutcomeCallable ListCustomRoutingPortMappingsByDestinationCallable(const ListCustomRoutingPortMappingsByDestinationRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination, request);
        }

        /**
         * An Async wrapper for ListCustomRoutingPortMappingsByDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomRoutingPortMappingsByDestinationRequestT = Model::ListCustomRoutingPortMappingsByDestinationRequest>
        void ListCustomRoutingPortMappingsByDestinationAsync(const ListCustomRoutingPortMappingsByDestinationRequestT& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination, request, handler, context);
        }

        /**
         * <p>List the endpoint groups that are associated with a listener. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointGroupsOutcome ListEndpointGroups(const Model::ListEndpointGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointGroupsRequestT = Model::ListEndpointGroupsRequest>
        Model::ListEndpointGroupsOutcomeCallable ListEndpointGroupsCallable(const ListEndpointGroupsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListEndpointGroups, request);
        }

        /**
         * An Async wrapper for ListEndpointGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointGroupsRequestT = Model::ListEndpointGroupsRequest>
        void ListEndpointGroupsAsync(const ListEndpointGroupsRequestT& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListEndpointGroups, request, handler, context);
        }

        /**
         * <p>List the listeners for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListListenersOutcome ListListeners(const Model::ListListenersRequest& request) const;

        /**
         * A Callable wrapper for ListListeners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListListenersRequestT = Model::ListListenersRequest>
        Model::ListListenersOutcomeCallable ListListenersCallable(const ListListenersRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListListeners, request);
        }

        /**
         * An Async wrapper for ListListeners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListListenersRequestT = Model::ListListenersRequest>
        void ListListenersAsync(const ListListenersRequestT& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListListeners, request, handler, context);
        }

        /**
         * <p>List all tags for an accelerator. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Provisions an IP address range to use with your Amazon Web Services resources
         * through bring your own IP addresses (BYOIP) and creates a corresponding address
         * pool. After the address range is provisioned, it is ready to be advertised using
         * <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/AdvertiseByoipCidr.html">
         * AdvertiseByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * your own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ProvisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionByoipCidrOutcome ProvisionByoipCidr(const Model::ProvisionByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for ProvisionByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ProvisionByoipCidrRequestT = Model::ProvisionByoipCidrRequest>
        Model::ProvisionByoipCidrOutcomeCallable ProvisionByoipCidrCallable(const ProvisionByoipCidrRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::ProvisionByoipCidr, request);
        }

        /**
         * An Async wrapper for ProvisionByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ProvisionByoipCidrRequestT = Model::ProvisionByoipCidrRequest>
        void ProvisionByoipCidrAsync(const ProvisionByoipCidrRequestT& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::ProvisionByoipCidr, request, handler, context);
        }

        /**
         * <p>Remove endpoints from a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveCustomRoutingEndpointsOutcome RemoveCustomRoutingEndpoints(const Model::RemoveCustomRoutingEndpointsRequest& request) const;

        /**
         * A Callable wrapper for RemoveCustomRoutingEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveCustomRoutingEndpointsRequestT = Model::RemoveCustomRoutingEndpointsRequest>
        Model::RemoveCustomRoutingEndpointsOutcomeCallable RemoveCustomRoutingEndpointsCallable(const RemoveCustomRoutingEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::RemoveCustomRoutingEndpoints, request);
        }

        /**
         * An Async wrapper for RemoveCustomRoutingEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveCustomRoutingEndpointsRequestT = Model::RemoveCustomRoutingEndpointsRequest>
        void RemoveCustomRoutingEndpointsAsync(const RemoveCustomRoutingEndpointsRequestT& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::RemoveCustomRoutingEndpoints, request, handler, context);
        }

        /**
         * <p>Remove endpoints from an endpoint group. </p> <p>The
         * <code>RemoveEndpoints</code> API operation is the recommended option for
         * removing endpoints. The alternative is to remove endpoints by updating an
         * endpoint group by using the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_UpdateEndpointGroup.html">UpdateEndpointGroup</a>
         * API operation. There are two advantages to using <code>AddEndpoints</code> to
         * remove endpoints instead:</p> <ul> <li> <p>It's more convenient, because you
         * only need to specify the endpoints that you want to remove. With the
         * <code>UpdateEndpointGroup</code> API operation, you must specify all of the
         * endpoints in the endpoint group except the ones that you want to remove from the
         * group.</p> </li> <li> <p>It's faster, because Global Accelerator doesn't need to
         * resolve any endpoints. With the <code>UpdateEndpointGroup</code> API operation,
         * Global Accelerator must resolve all of the endpoints that remain in the
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveEndpointsOutcome RemoveEndpoints(const Model::RemoveEndpointsRequest& request) const;

        /**
         * A Callable wrapper for RemoveEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveEndpointsRequestT = Model::RemoveEndpointsRequest>
        Model::RemoveEndpointsOutcomeCallable RemoveEndpointsCallable(const RemoveEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::RemoveEndpoints, request);
        }

        /**
         * An Async wrapper for RemoveEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveEndpointsRequestT = Model::RemoveEndpointsRequest>
        void RemoveEndpointsAsync(const RemoveEndpointsRequestT& request, const RemoveEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::RemoveEndpoints, request, handler, context);
        }

        /**
         * <p>Add tags to an accelerator resource. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags from a Global Accelerator resource. When you specify a tag key,
         * the action removes both that key and its associated value. The operation
         * succeeds even if you attempt to remove tags from an accelerator that was already
         * removed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in Global Accelerator</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update an accelerator to make changes, such as the following: </p> <ul> <li>
         * <p>Change the name of the accelerator.</p> </li> <li> <p>Disable the accelerator
         * so that it no longer accepts or routes traffic, or so that you can delete
         * it.</p> </li> <li> <p>Enable the accelerator, if it is disabled.</p> </li> <li>
         * <p>Change the IP address type to dual-stack if it is IPv4, or change the IP
         * address type to IPv4 if it's dual-stack.</p> </li> </ul> <p>Be aware that static
         * IP addresses remain assigned to your accelerator for as long as it exists, even
         * if you disable the accelerator and it no longer accepts or routes traffic.
         * However, when you delete the accelerator, you lose the static IP addresses that
         * are assigned to it, so you can no longer route traffic by using them.</p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple Amazon Web Services Regions but you must specify the US West (Oregon)
         * Region to create, update, or otherwise work with accelerators. That is, for
         * example, specify <code>--region us-west-2</code> on Amazon Web Services CLI
         * commands.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorOutcome UpdateAccelerator(const Model::UpdateAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAcceleratorRequestT = Model::UpdateAcceleratorRequest>
        Model::UpdateAcceleratorOutcomeCallable UpdateAcceleratorCallable(const UpdateAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateAccelerator, request);
        }

        /**
         * An Async wrapper for UpdateAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAcceleratorRequestT = Model::UpdateAcceleratorRequest>
        void UpdateAcceleratorAsync(const UpdateAcceleratorRequestT& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateAccelerator, request, handler, context);
        }

        /**
         * <p>Update the attributes for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorAttributesOutcome UpdateAcceleratorAttributes(const Model::UpdateAcceleratorAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateAcceleratorAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAcceleratorAttributesRequestT = Model::UpdateAcceleratorAttributesRequest>
        Model::UpdateAcceleratorAttributesOutcomeCallable UpdateAcceleratorAttributesCallable(const UpdateAcceleratorAttributesRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateAcceleratorAttributes, request);
        }

        /**
         * An Async wrapper for UpdateAcceleratorAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAcceleratorAttributesRequestT = Model::UpdateAcceleratorAttributesRequest>
        void UpdateAcceleratorAttributesAsync(const UpdateAcceleratorAttributesRequestT& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateAcceleratorAttributes, request, handler, context);
        }

        /**
         * <p>Update a cross-account attachment to add or remove principals or resources.
         * When you update an attachment to remove a principal (account ID or accelerator)
         * or a resource, Global Accelerator revokes the permission for specific resources
         * by doing the following:</p> <ul> <li> <p>If the principal is an account ID,
         * Global Accelerator reviews every accelerator in the account and removes
         * cross-account endpoints from all accelerators.</p> </li> <li> <p>If the
         * principal is an accelerator, Global Accelerator reviews just that accelerator
         * and removes cross-account endpoints from it.</p> </li> </ul> <p>If there are
         * overlapping permissions provided by multiple cross-account attachments, Global
         * Accelerator only removes endpoints if there are no current cross-account
         * attachments that provide access permission. For example, if you delete a
         * cross-account attachment that lists an accelerator as a principal, but another
         * cross-account attachment includes the account ID that owns that accelerator,
         * endpoints will not be removed from the accelerator.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCrossAccountAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrossAccountAttachmentOutcome UpdateCrossAccountAttachment(const Model::UpdateCrossAccountAttachmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateCrossAccountAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCrossAccountAttachmentRequestT = Model::UpdateCrossAccountAttachmentRequest>
        Model::UpdateCrossAccountAttachmentOutcomeCallable UpdateCrossAccountAttachmentCallable(const UpdateCrossAccountAttachmentRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateCrossAccountAttachment, request);
        }

        /**
         * An Async wrapper for UpdateCrossAccountAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCrossAccountAttachmentRequestT = Model::UpdateCrossAccountAttachmentRequest>
        void UpdateCrossAccountAttachmentAsync(const UpdateCrossAccountAttachmentRequestT& request, const UpdateCrossAccountAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateCrossAccountAttachment, request, handler, context);
        }

        /**
         * <p>Update a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorOutcome UpdateCustomRoutingAccelerator(const Model::UpdateCustomRoutingAcceleratorRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomRoutingAccelerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomRoutingAcceleratorRequestT = Model::UpdateCustomRoutingAcceleratorRequest>
        Model::UpdateCustomRoutingAcceleratorOutcomeCallable UpdateCustomRoutingAcceleratorCallable(const UpdateCustomRoutingAcceleratorRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingAccelerator, request);
        }

        /**
         * An Async wrapper for UpdateCustomRoutingAccelerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomRoutingAcceleratorRequestT = Model::UpdateCustomRoutingAcceleratorRequest>
        void UpdateCustomRoutingAcceleratorAsync(const UpdateCustomRoutingAcceleratorRequestT& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingAccelerator, request, handler, context);
        }

        /**
         * <p>Update the attributes for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorAttributesOutcome UpdateCustomRoutingAcceleratorAttributes(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomRoutingAcceleratorAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomRoutingAcceleratorAttributesRequestT = Model::UpdateCustomRoutingAcceleratorAttributesRequest>
        Model::UpdateCustomRoutingAcceleratorAttributesOutcomeCallable UpdateCustomRoutingAcceleratorAttributesCallable(const UpdateCustomRoutingAcceleratorAttributesRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes, request);
        }

        /**
         * An Async wrapper for UpdateCustomRoutingAcceleratorAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomRoutingAcceleratorAttributesRequestT = Model::UpdateCustomRoutingAcceleratorAttributesRequest>
        void UpdateCustomRoutingAcceleratorAttributesAsync(const UpdateCustomRoutingAcceleratorAttributesRequestT& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes, request, handler, context);
        }

        /**
         * <p>Update a listener for a custom routing accelerator. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingListenerOutcome UpdateCustomRoutingListener(const Model::UpdateCustomRoutingListenerRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomRoutingListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomRoutingListenerRequestT = Model::UpdateCustomRoutingListenerRequest>
        Model::UpdateCustomRoutingListenerOutcomeCallable UpdateCustomRoutingListenerCallable(const UpdateCustomRoutingListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingListener, request);
        }

        /**
         * An Async wrapper for UpdateCustomRoutingListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomRoutingListenerRequestT = Model::UpdateCustomRoutingListenerRequest>
        void UpdateCustomRoutingListenerAsync(const UpdateCustomRoutingListenerRequestT& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingListener, request, handler, context);
        }

        /**
         * <p>Update an endpoint group. A resource must be valid and active when you add it
         * as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointGroupOutcome UpdateEndpointGroup(const Model::UpdateEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointGroupRequestT = Model::UpdateEndpointGroupRequest>
        Model::UpdateEndpointGroupOutcomeCallable UpdateEndpointGroupCallable(const UpdateEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateEndpointGroup, request);
        }

        /**
         * An Async wrapper for UpdateEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointGroupRequestT = Model::UpdateEndpointGroupRequest>
        void UpdateEndpointGroupAsync(const UpdateEndpointGroupRequestT& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateEndpointGroup, request, handler, context);
        }

        /**
         * <p>Update a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListenerOutcome UpdateListener(const Model::UpdateListenerRequest& request) const;

        /**
         * A Callable wrapper for UpdateListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateListenerRequestT = Model::UpdateListenerRequest>
        Model::UpdateListenerOutcomeCallable UpdateListenerCallable(const UpdateListenerRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::UpdateListener, request);
        }

        /**
         * An Async wrapper for UpdateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateListenerRequestT = Model::UpdateListenerRequest>
        void UpdateListenerAsync(const UpdateListenerRequestT& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::UpdateListener, request, handler, context);
        }

        /**
         * <p>Stops advertising an address range that is provisioned as an address pool.
         * You can perform this operation at most once every 10 seconds, even if you
         * specify different address ranges each time.</p> <p>It can take a few minutes
         * before traffic to the specified addresses stops routing to Amazon Web Services
         * because of propagation delays.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * your own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/WithdrawByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::WithdrawByoipCidrOutcome WithdrawByoipCidr(const Model::WithdrawByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for WithdrawByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename WithdrawByoipCidrRequestT = Model::WithdrawByoipCidrRequest>
        Model::WithdrawByoipCidrOutcomeCallable WithdrawByoipCidrCallable(const WithdrawByoipCidrRequestT& request) const
        {
            return SubmitCallable(&GlobalAcceleratorClient::WithdrawByoipCidr, request);
        }

        /**
         * An Async wrapper for WithdrawByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename WithdrawByoipCidrRequestT = Model::WithdrawByoipCidrRequest>
        void WithdrawByoipCidrAsync(const WithdrawByoipCidrRequestT& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlobalAcceleratorClient::WithdrawByoipCidr, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlobalAcceleratorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GlobalAcceleratorClient>;
      void init(const GlobalAcceleratorClientConfiguration& clientConfiguration);

      GlobalAcceleratorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlobalAcceleratorEndpointProviderBase> m_endpointProvider;
  };

} // namespace GlobalAccelerator
} // namespace Aws
