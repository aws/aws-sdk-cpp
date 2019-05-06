/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/model/CreateAcceleratorResult.h>
#include <aws/globalaccelerator/model/CreateEndpointGroupResult.h>
#include <aws/globalaccelerator/model/CreateListenerResult.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorResult.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/DescribeEndpointGroupResult.h>
#include <aws/globalaccelerator/model/DescribeListenerResult.h>
#include <aws/globalaccelerator/model/ListAcceleratorsResult.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsResult.h>
#include <aws/globalaccelerator/model/ListListenersResult.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorResult.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/UpdateEndpointGroupResult.h>
#include <aws/globalaccelerator/model/UpdateListenerResult.h>
#include <aws/core/NoResult.h>
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

namespace GlobalAccelerator
{

namespace Model
{
        class CreateAcceleratorRequest;
        class CreateEndpointGroupRequest;
        class CreateListenerRequest;
        class DeleteAcceleratorRequest;
        class DeleteEndpointGroupRequest;
        class DeleteListenerRequest;
        class DescribeAcceleratorRequest;
        class DescribeAcceleratorAttributesRequest;
        class DescribeEndpointGroupRequest;
        class DescribeListenerRequest;
        class ListAcceleratorsRequest;
        class ListEndpointGroupsRequest;
        class ListListenersRequest;
        class UpdateAcceleratorRequest;
        class UpdateAcceleratorAttributesRequest;
        class UpdateEndpointGroupRequest;
        class UpdateListenerRequest;

        typedef Aws::Utils::Outcome<CreateAcceleratorResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> CreateAcceleratorOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointGroupResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> CreateEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<CreateListenerResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> CreateListenerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DeleteAcceleratorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DeleteEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DeleteListenerOutcome;
        typedef Aws::Utils::Outcome<DescribeAcceleratorResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DescribeAcceleratorOutcome;
        typedef Aws::Utils::Outcome<DescribeAcceleratorAttributesResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DescribeAcceleratorAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointGroupResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DescribeEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeListenerResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> DescribeListenerOutcome;
        typedef Aws::Utils::Outcome<ListAcceleratorsResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> ListAcceleratorsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointGroupsResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> ListEndpointGroupsOutcome;
        typedef Aws::Utils::Outcome<ListListenersResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> ListListenersOutcome;
        typedef Aws::Utils::Outcome<UpdateAcceleratorResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> UpdateAcceleratorOutcome;
        typedef Aws::Utils::Outcome<UpdateAcceleratorAttributesResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> UpdateAcceleratorAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointGroupResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> UpdateEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateListenerResult, Aws::Client::AWSError<GlobalAcceleratorErrors>> UpdateListenerOutcome;

        typedef std::future<CreateAcceleratorOutcome> CreateAcceleratorOutcomeCallable;
        typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
        typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
        typedef std::future<DeleteAcceleratorOutcome> DeleteAcceleratorOutcomeCallable;
        typedef std::future<DeleteEndpointGroupOutcome> DeleteEndpointGroupOutcomeCallable;
        typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
        typedef std::future<DescribeAcceleratorOutcome> DescribeAcceleratorOutcomeCallable;
        typedef std::future<DescribeAcceleratorAttributesOutcome> DescribeAcceleratorAttributesOutcomeCallable;
        typedef std::future<DescribeEndpointGroupOutcome> DescribeEndpointGroupOutcomeCallable;
        typedef std::future<DescribeListenerOutcome> DescribeListenerOutcomeCallable;
        typedef std::future<ListAcceleratorsOutcome> ListAcceleratorsOutcomeCallable;
        typedef std::future<ListEndpointGroupsOutcome> ListEndpointGroupsOutcomeCallable;
        typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
        typedef std::future<UpdateAcceleratorOutcome> UpdateAcceleratorOutcomeCallable;
        typedef std::future<UpdateAcceleratorAttributesOutcome> UpdateAcceleratorAttributesOutcomeCallable;
        typedef std::future<UpdateEndpointGroupOutcome> UpdateEndpointGroupOutcomeCallable;
        typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
} // namespace Model

  class GlobalAcceleratorClient;

    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateAcceleratorRequest&, const Model::CreateAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateEndpointGroupRequest&, const Model::CreateEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateListenerRequest&, const Model::CreateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteAcceleratorRequest&, const Model::DeleteAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteEndpointGroupRequest&, const Model::DeleteEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteListenerRequest&, const Model::DeleteListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeAcceleratorRequest&, const Model::DescribeAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeAcceleratorAttributesRequest&, const Model::DescribeAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeEndpointGroupRequest&, const Model::DescribeEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeListenerRequest&, const Model::DescribeListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListAcceleratorsRequest&, const Model::ListAcceleratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceleratorsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListEndpointGroupsRequest&, const Model::ListEndpointGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointGroupsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListListenersRequest&, const Model::ListListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListListenersResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateAcceleratorRequest&, const Model::UpdateAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateAcceleratorAttributesRequest&, const Model::UpdateAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateEndpointGroupRequest&, const Model::UpdateEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateListenerRequest&, const Model::UpdateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateListenerResponseReceivedHandler;

  /**
   * <fullname>AWS Global Accelerator</fullname> <p>This is the <i>AWS Global
   * Accelerator API Reference</i>. This guide is for developers who need detailed
   * information about AWS Global Accelerator API actions, data types, and errors.
   * For more information about Global Accelerator features, see the <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/Welcome.html">AWS
   * Global Accelerator Developer Guide</a>. </p> <p>AWS Global Accelerator is a
   * network layer service in which you create accelerators to improve availability
   * and performance for internet applications used by a global audience. </p>
   * <p>Global Accelerator provides you with static IP addresses that you associate
   * with your accelerator. These IP addresses are anycast from the AWS edge network
   * and distribute incoming application traffic across multiple endpoint resources
   * in multiple AWS Regions, which increases the availability of your applications.
   * Endpoints can be Elastic IP addresses, Network Load Balancers, and Application
   * Load Balancers that are located in one AWS Region or multiple Regions.</p>
   * <p>Global Accelerator uses the AWS global network to route traffic to the
   * optimal regional endpoint based on health, client location, and policies that
   * you configure. The service reacts instantly to changes in health or
   * configuration to ensure that internet traffic from clients is directed to only
   * healthy endpoints.</p> <p>Global Accelerator includes components that work
   * together to help you improve performance and availability for your
   * applications:</p> <dl> <dt>Static IP address</dt> <dd> <p>AWS Global Accelerator
   * provides you with a set of static IP addresses which are anycast from the AWS
   * edge network and serve as the single fixed entry points for your clients. If you
   * already have Elastic Load Balancing or Elastic IP address resources set up for
   * your applications, you can easily add those to Global Accelerator to allow the
   * resources to be accessed by a Global Accelerator static IP address.</p> </dd>
   * <dt>Accelerator</dt> <dd> <p>An accelerator directs traffic to optimal endpoints
   * over the AWS global network to improve availability and performance for your
   * internet applications that have a global audience. Each accelerator includes one
   * or more listeners.</p> </dd> <dt>Network zone</dt> <dd> <p>A network zone
   * services the static IP addresses for your accelerator from a unique IP subnet.
   * Similar to an AWS Availability Zone, a network zone is an isolated unit with its
   * own set of physical infrastructure. When you configure an accelerator, Global
   * Accelerator allocates two IPv4 addresses for it. If one IP address from a
   * network zone becomes unavailable due to IP address blocking by certain client
   * networks, or network disruptions, then client applications can retry on the
   * healthy static IP address from the other isolated network zone.</p> </dd>
   * <dt>Listener</dt> <dd> <p>A listener processes inbound connections from clients
   * to Global Accelerator, based on the protocol and port that you configure. Each
   * listener has one or more endpoint groups associated with it, and traffic is
   * forwarded to endpoints in one of the groups. You associate endpoint groups with
   * listeners by specifying the Regions that you want to distribute traffic to.
   * Traffic is distributed to optimal endpoints within the endpoint groups
   * associated with a listener.</p> </dd> <dt>Endpoint group</dt> <dd> <p>Each
   * endpoint group is associated with a specific AWS Region. Endpoint groups include
   * one or more endpoints in the Region. You can increase or reduce the percentage
   * of traffic that would be otherwise directed to an endpoint group by adjusting a
   * setting called a <i>traffic dial</i>. The traffic dial lets you easily do
   * performance testing or blue/green deployment testing for new releases across
   * different AWS Regions, for example. </p> </dd> <dt>Endpoint</dt> <dd> <p>An
   * endpoint is an Elastic IP address, Network Load Balancer, or Application Load
   * Balancer. Traffic is routed to endpoints based on several factors, including the
   * geo-proximity to the user, the health of the endpoint, and the configuration
   * options that you choose, such as endpoint weights. For each endpoint, you can
   * configure weights, which are numbers that you can use to specify the proportion
   * of traffic to route to each one. This can be useful, for example, to do
   * performance testing within a Region.</p> </dd> </dl>
   */
  class AWS_GLOBALACCELERATOR_API GlobalAcceleratorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlobalAcceleratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GlobalAcceleratorClient();

        inline virtual const char* GetServiceClientName() const override { return "Global Accelerator"; }


        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. To see an AWS
         * CLI example of creating an accelerator, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAcceleratorOutcome CreateAccelerator(const Model::CreateAcceleratorRequest& request) const;

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. To see an AWS
         * CLI example of creating an accelerator, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAcceleratorOutcomeCallable CreateAcceleratorCallable(const Model::CreateAcceleratorRequest& request) const;

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. To see an AWS
         * CLI example of creating an accelerator, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAcceleratorAsync(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. To see an AWS CLI example of creating
         * an endpoint group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. To see an AWS CLI example of creating
         * an endpoint group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointGroupOutcomeCallable CreateEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. To see an AWS CLI example of creating
         * an endpoint group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. To see an AWS CLI example of
         * creating a listener, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. To see an AWS CLI example of
         * creating a listener, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. To see an AWS CLI example of
         * creating a listener, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an accelerator. Note: before you can delete an accelerator, you must
         * disable it and remove all dependent resources (listeners and endpoint
         * groups).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAcceleratorOutcome DeleteAccelerator(const Model::DeleteAcceleratorRequest& request) const;

        /**
         * <p>Delete an accelerator. Note: before you can delete an accelerator, you must
         * disable it and remove all dependent resources (listeners and endpoint
         * groups).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAcceleratorOutcomeCallable DeleteAcceleratorCallable(const Model::DeleteAcceleratorRequest& request) const;

        /**
         * <p>Delete an accelerator. Note: before you can delete an accelerator, you must
         * disable it and remove all dependent resources (listeners and endpoint
         * groups).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAcceleratorAsync(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointGroupOutcome DeleteEndpointGroup(const Model::DeleteEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointGroupOutcomeCallable DeleteEndpointGroupCallable(const Model::DeleteEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointGroupAsync(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an accelerator. To see an AWS CLI example of describing an
         * accelerator, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOutcome DescribeAccelerator(const Model::DescribeAcceleratorRequest& request) const;

        /**
         * <p>Describe an accelerator. To see an AWS CLI example of describing an
         * accelerator, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorOutcomeCallable DescribeAcceleratorCallable(const Model::DescribeAcceleratorRequest& request) const;

        /**
         * <p>Describe an accelerator. To see an AWS CLI example of describing an
         * accelerator, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorAsync(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the attributes of an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorAttributesOutcome DescribeAcceleratorAttributes(const Model::DescribeAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorAttributesOutcomeCallable DescribeAcceleratorAttributesCallable(const Model::DescribeAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorAttributesAsync(const Model::DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointGroupOutcome DescribeEndpointGroup(const Model::DescribeEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointGroupOutcomeCallable DescribeEndpointGroupCallable(const Model::DescribeEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointGroupAsync(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerOutcome DescribeListener(const Model::DescribeListenerRequest& request) const;

        /**
         * <p>Describe a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenerOutcomeCallable DescribeListenerCallable(const Model::DescribeListenerRequest& request) const;

        /**
         * <p>Describe a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenerAsync(const Model::DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the accelerators for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceleratorsOutcome ListAccelerators(const Model::ListAcceleratorsRequest& request) const;

        /**
         * <p>List the accelerators for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAcceleratorsOutcomeCallable ListAcceleratorsCallable(const Model::ListAcceleratorsRequest& request) const;

        /**
         * <p>List the accelerators for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAcceleratorsAsync(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the endpoint groups that are associated with a listener.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointGroupsOutcome ListEndpointGroups(const Model::ListEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointGroupsOutcomeCallable ListEndpointGroupsCallable(const Model::ListEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointGroupsAsync(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the listeners for an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListListenersOutcome ListListeners(const Model::ListListenersRequest& request) const;

        /**
         * <p>List the listeners for an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListListenersOutcomeCallable ListListenersCallable(const Model::ListListenersRequest& request) const;

        /**
         * <p>List the listeners for an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListListenersAsync(const Model::ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorOutcome UpdateAccelerator(const Model::UpdateAcceleratorRequest& request) const;

        /**
         * <p>Update an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAcceleratorOutcomeCallable UpdateAcceleratorCallable(const Model::UpdateAcceleratorRequest& request) const;

        /**
         * <p>Update an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAcceleratorAsync(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the attributes for an accelerator. To see an AWS CLI example of
         * updating an accelerator to enable flow logs, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorAttributesOutcome UpdateAcceleratorAttributes(const Model::UpdateAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for an accelerator. To see an AWS CLI example of
         * updating an accelerator to enable flow logs, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAcceleratorAttributesOutcomeCallable UpdateAcceleratorAttributesCallable(const Model::UpdateAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for an accelerator. To see an AWS CLI example of
         * updating an accelerator to enable flow logs, scroll down to
         * <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAcceleratorAttributesAsync(const Model::UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an endpoint group. To see an AWS CLI example of updating an endpoint
         * group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointGroupOutcome UpdateEndpointGroup(const Model::UpdateEndpointGroupRequest& request) const;

        /**
         * <p>Update an endpoint group. To see an AWS CLI example of updating an endpoint
         * group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointGroupOutcomeCallable UpdateEndpointGroupCallable(const Model::UpdateEndpointGroupRequest& request) const;

        /**
         * <p>Update an endpoint group. To see an AWS CLI example of updating an endpoint
         * group, scroll down to <b>Example</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointGroupAsync(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListenerOutcome UpdateListener(const Model::UpdateListenerRequest& request) const;

        /**
         * <p>Update a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateListenerOutcomeCallable UpdateListenerCallable(const Model::UpdateListenerRequest& request) const;

        /**
         * <p>Update a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateListenerAsync(const Model::UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAcceleratorAsyncHelper(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointGroupAsyncHelper(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateListenerAsyncHelper(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAcceleratorAsyncHelper(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointGroupAsyncHelper(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteListenerAsyncHelper(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAcceleratorAsyncHelper(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAcceleratorAttributesAsyncHelper(const Model::DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointGroupAsyncHelper(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeListenerAsyncHelper(const Model::DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAcceleratorsAsyncHelper(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointGroupsAsyncHelper(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListListenersAsyncHelper(const Model::ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAcceleratorAsyncHelper(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAcceleratorAttributesAsyncHelper(const Model::UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointGroupAsyncHelper(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateListenerAsyncHelper(const Model::UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GlobalAccelerator
} // namespace Aws
