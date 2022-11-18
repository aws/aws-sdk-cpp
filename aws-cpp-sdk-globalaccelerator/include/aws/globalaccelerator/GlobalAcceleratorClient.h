/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/GlobalAcceleratorServiceClientModel.h>
#include <aws/globalaccelerator/GlobalAcceleratorLegacyAsyncMacros.h>

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
   * example, specify <code>--region us-west-2</code> on AWS CLI commands.</p>
   *  <p>By default, Global Accelerator provides you with static IP
   * addresses that you associate with your accelerator. The static IP addresses are
   * anycast from the Amazon Web Services edge network. For IPv4, Global Accelerator
   * provides two static IPv4 addresses. For dual-stack, Global Accelerator provides
   * a total of four addresses: two static IPv4 addresses and two static IPv6
   * addresses. With a standard accelerator for IPv4, instead of using the addresses
   * that Global Accelerator provides, you can configure these entry points to be
   * IPv4 addresses from your own IP address ranges that you bring toGlobal
   * Accelerator (BYOIP). </p> <p>For a standard accelerator, they distribute
   * incoming application traffic across multiple endpoint resources in multiple
   * Amazon Web Services Regions , which increases the availability of your
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
  class AWS_GLOBALACCELERATOR_API GlobalAcceleratorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration(),
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG),
                                const Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlobalAcceleratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider = Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Add endpoints to an endpoint group. The <code>AddEndpoints</code> API
         * operation is the recommended option for adding endpoints. The alternative
         * options are to add endpoints when you create an endpoint group (with the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_CreateEndpointGroup.html">CreateEndpointGroup</a>
         * API) or when you update an endpoint group (with the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_UpdateEndpointGroup.html">UpdateEndpointGroup</a>
         * API). </p> <p>There are two advantages to using <code>AddEndpoints</code> to add
         * endpoints:</p> <ul> <li> <p>It's faster, because Global Accelerator only has to
         * resolve the new endpoints that you're adding.</p> </li> <li> <p>It's more
         * convenient, because you don't need to specify all of the current endpoints that
         * are already in the endpoint group in addition to the new endpoints that you want
         * to add.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::AddEndpointsOutcome AddEndpoints(const Model::AddEndpointsRequest& request) const;


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
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. </p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple Amazon Web Services Regions but you must specify the US West (Oregon)
         * Region to create, update, or otherwise work with accelerators. That is, for
         * example, specify <code>--region us-west-2</code> on AWS CLI commands.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAcceleratorOutcome CreateAccelerator(const Model::CreateAcceleratorRequest& request) const;


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
         * us-west-2</code> on AWS CLI commands.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingAcceleratorOutcome CreateCustomRoutingAccelerator(const Model::CreateCustomRoutingAcceleratorRequest& request) const;


        /**
         * <p>Create an endpoint group for the specified listener for a custom routing
         * accelerator. An endpoint group is a collection of endpoints in one Amazon Web
         * Services Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingEndpointGroupOutcome CreateCustomRoutingEndpointGroup(const Model::CreateCustomRoutingEndpointGroupRequest& request) const;


        /**
         * <p>Create a listener to process inbound connections from clients to a custom
         * routing accelerator. Connections arrive to assigned static IP addresses on the
         * port range that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingListenerOutcome CreateCustomRoutingListener(const Model::CreateCustomRoutingListenerRequest& request) const;


        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one Amazon Web Services Region. A resource must be
         * valid and active when you add it as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest& request) const;


        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;


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
         * <p>Delete an endpoint group from a listener for a custom routing
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingEndpointGroupOutcome DeleteCustomRoutingEndpointGroup(const Model::DeleteCustomRoutingEndpointGroupRequest& request) const;


        /**
         * <p>Delete a listener for a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingListenerOutcome DeleteCustomRoutingListener(const Model::DeleteCustomRoutingListenerRequest& request) const;


        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointGroupOutcome DeleteEndpointGroup(const Model::DeleteEndpointGroupRequest& request) const;


        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;


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
         * <p>Describe an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOutcome DescribeAccelerator(const Model::DescribeAcceleratorRequest& request) const;


        /**
         * <p>Describe the attributes of an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorAttributesOutcome DescribeAcceleratorAttributes(const Model::DescribeAcceleratorAttributesRequest& request) const;


        /**
         * <p>Describe a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorOutcome DescribeCustomRoutingAccelerator(const Model::DescribeCustomRoutingAcceleratorRequest& request) const;


        /**
         * <p>Describe the attributes of a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorAttributesOutcome DescribeCustomRoutingAcceleratorAttributes(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request) const;


        /**
         * <p>Describe an endpoint group for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingEndpointGroupOutcome DescribeCustomRoutingEndpointGroup(const Model::DescribeCustomRoutingEndpointGroupRequest& request) const;


        /**
         * <p>The description of a listener for a custom routing accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingListenerOutcome DescribeCustomRoutingListener(const Model::DescribeCustomRoutingListenerRequest& request) const;


        /**
         * <p>Describe an endpoint group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointGroupOutcome DescribeEndpointGroup(const Model::DescribeEndpointGroupRequest& request) const;


        /**
         * <p>Describe a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerOutcome DescribeListener(const Model::DescribeListenerRequest& request) const;


        /**
         * <p>List the accelerators for an Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceleratorsOutcome ListAccelerators(const Model::ListAcceleratorsRequest& request) const;


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
         * <p>List the custom routing accelerators for an Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingAcceleratorsOutcome ListCustomRoutingAccelerators(const Model::ListCustomRoutingAcceleratorsRequest& request) const;


        /**
         * <p>List the endpoint groups that are associated with a listener for a custom
         * routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingEndpointGroupsOutcome ListCustomRoutingEndpointGroups(const Model::ListCustomRoutingEndpointGroupsRequest& request) const;


        /**
         * <p>List the listeners for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingListenersOutcome ListCustomRoutingListeners(const Model::ListCustomRoutingListenersRequest& request) const;


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
         * <p>List the endpoint groups that are associated with a listener. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointGroupsOutcome ListEndpointGroups(const Model::ListEndpointGroupsRequest& request) const;


        /**
         * <p>List the listeners for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListListenersOutcome ListListeners(const Model::ListListenersRequest& request) const;


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
         * <p>Remove endpoints from a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveCustomRoutingEndpointsOutcome RemoveCustomRoutingEndpoints(const Model::RemoveCustomRoutingEndpointsRequest& request) const;


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
         * <p>Add tags to an accelerator resource. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


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
         * <p>Update an accelerator. </p>  <p>Global Accelerator is a global
         * service that supports endpoints in multiple Amazon Web Services Regions but you
         * must specify the US West (Oregon) Region to create, update, or otherwise work
         * with accelerators. That is, for example, specify <code>--region us-west-2</code>
         * on AWS CLI commands.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorOutcome UpdateAccelerator(const Model::UpdateAcceleratorRequest& request) const;


        /**
         * <p>Update the attributes for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorAttributesOutcome UpdateAcceleratorAttributes(const Model::UpdateAcceleratorAttributesRequest& request) const;


        /**
         * <p>Update a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorOutcome UpdateCustomRoutingAccelerator(const Model::UpdateCustomRoutingAcceleratorRequest& request) const;


        /**
         * <p>Update the attributes for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorAttributesOutcome UpdateCustomRoutingAcceleratorAttributes(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request) const;


        /**
         * <p>Update a listener for a custom routing accelerator. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingListenerOutcome UpdateCustomRoutingListener(const Model::UpdateCustomRoutingListenerRequest& request) const;


        /**
         * <p>Update an endpoint group. A resource must be valid and active when you add it
         * as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointGroupOutcome UpdateEndpointGroup(const Model::UpdateEndpointGroupRequest& request) const;


        /**
         * <p>Update a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListenerOutcome UpdateListener(const Model::UpdateListenerRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlobalAcceleratorEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GlobalAcceleratorClientConfiguration& clientConfiguration);

      GlobalAcceleratorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlobalAcceleratorEndpointProviderBase> m_endpointProvider;
  };

} // namespace GlobalAccelerator
} // namespace Aws
