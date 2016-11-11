/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/AllocateConnectionOnInterconnectResult.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmConnectionResult.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreateConnectionResult.h>
#include <aws/directconnect/model/CreateInterconnectResult.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/DeleteConnectionResult.h>
#include <aws/directconnect/model/DeleteInterconnectResult.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceResult.h>
#include <aws/directconnect/model/DescribeConnectionLoaResult.h>
#include <aws/directconnect/model/DescribeConnectionsResult.h>
#include <aws/directconnect/model/DescribeConnectionsOnInterconnectResult.h>
#include <aws/directconnect/model/DescribeInterconnectLoaResult.h>
#include <aws/directconnect/model/DescribeInterconnectsResult.h>
#include <aws/directconnect/model/DescribeLocationsResult.h>
#include <aws/directconnect/model/DescribeTagsResult.h>
#include <aws/directconnect/model/DescribeVirtualGatewaysResult.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesResult.h>
#include <aws/directconnect/model/TagResourceResult.h>
#include <aws/directconnect/model/UntagResourceResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace DirectConnect
{

namespace Model
{
        class AllocateConnectionOnInterconnectRequest;
        class AllocatePrivateVirtualInterfaceRequest;
        class AllocatePublicVirtualInterfaceRequest;
        class ConfirmConnectionRequest;
        class ConfirmPrivateVirtualInterfaceRequest;
        class ConfirmPublicVirtualInterfaceRequest;
        class CreateConnectionRequest;
        class CreateInterconnectRequest;
        class CreatePrivateVirtualInterfaceRequest;
        class CreatePublicVirtualInterfaceRequest;
        class DeleteConnectionRequest;
        class DeleteInterconnectRequest;
        class DeleteVirtualInterfaceRequest;
        class DescribeConnectionLoaRequest;
        class DescribeConnectionsRequest;
        class DescribeConnectionsOnInterconnectRequest;
        class DescribeInterconnectLoaRequest;
        class DescribeInterconnectsRequest;
        class DescribeTagsRequest;
        class DescribeVirtualInterfacesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<AllocateConnectionOnInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> AllocateConnectionOnInterconnectOutcome;
        typedef Aws::Utils::Outcome<AllocatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AllocatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmConnectionOutcome;
        typedef Aws::Utils::Outcome<ConfirmPrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmPublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> CreateInterconnectOutcome;
        typedef Aws::Utils::Outcome<CreatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteInterconnectOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionLoaResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeConnectionLoaOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionsOnInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeConnectionsOnInterconnectOutcome;
        typedef Aws::Utils::Outcome<DescribeInterconnectLoaResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeInterconnectLoaOutcome;
        typedef Aws::Utils::Outcome<DescribeInterconnectsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeInterconnectsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualGatewaysResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualInterfacesResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualInterfacesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> UntagResourceOutcome;

        typedef std::future<AllocateConnectionOnInterconnectOutcome> AllocateConnectionOnInterconnectOutcomeCallable;
        typedef std::future<AllocatePrivateVirtualInterfaceOutcome> AllocatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<AllocatePublicVirtualInterfaceOutcome> AllocatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmConnectionOutcome> ConfirmConnectionOutcomeCallable;
        typedef std::future<ConfirmPrivateVirtualInterfaceOutcome> ConfirmPrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmPublicVirtualInterfaceOutcome> ConfirmPublicVirtualInterfaceOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateInterconnectOutcome> CreateInterconnectOutcomeCallable;
        typedef std::future<CreatePrivateVirtualInterfaceOutcome> CreatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<CreatePublicVirtualInterfaceOutcome> CreatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteInterconnectOutcome> DeleteInterconnectOutcomeCallable;
        typedef std::future<DeleteVirtualInterfaceOutcome> DeleteVirtualInterfaceOutcomeCallable;
        typedef std::future<DescribeConnectionLoaOutcome> DescribeConnectionLoaOutcomeCallable;
        typedef std::future<DescribeConnectionsOutcome> DescribeConnectionsOutcomeCallable;
        typedef std::future<DescribeConnectionsOnInterconnectOutcome> DescribeConnectionsOnInterconnectOutcomeCallable;
        typedef std::future<DescribeInterconnectLoaOutcome> DescribeInterconnectLoaOutcomeCallable;
        typedef std::future<DescribeInterconnectsOutcome> DescribeInterconnectsOutcomeCallable;
        typedef std::future<DescribeLocationsOutcome> DescribeLocationsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeVirtualGatewaysOutcome> DescribeVirtualGatewaysOutcomeCallable;
        typedef std::future<DescribeVirtualInterfacesOutcome> DescribeVirtualInterfacesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class DirectConnectClient;

    typedef std::function<void(const DirectConnectClient*, const Model::AllocateConnectionOnInterconnectRequest&, const Model::AllocateConnectionOnInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateConnectionOnInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePrivateVirtualInterfaceRequest&, const Model::AllocatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePublicVirtualInterfaceRequest&, const Model::AllocatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmConnectionRequest&, const Model::ConfirmConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPrivateVirtualInterfaceRequest&, const Model::ConfirmPrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPublicVirtualInterfaceRequest&, const Model::ConfirmPublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateInterconnectRequest&, const Model::CreateInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePrivateVirtualInterfaceRequest&, const Model::CreatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePublicVirtualInterfaceRequest&, const Model::CreatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteInterconnectRequest&, const Model::DeleteInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteVirtualInterfaceRequest&, const Model::DeleteVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeConnectionLoaRequest&, const Model::DescribeConnectionLoaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionLoaResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeConnectionsRequest&, const Model::DescribeConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeConnectionsOnInterconnectRequest&, const Model::DescribeConnectionsOnInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsOnInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeInterconnectLoaRequest&, const Model::DescribeInterconnectLoaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInterconnectLoaResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeInterconnectsRequest&, const Model::DescribeInterconnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInterconnectsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualInterfacesRequest&, const Model::DescribeVirtualInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualInterfacesResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>AWS Direct Connect links your internal network to an AWS Direct Connect
   * location over a standard 1 gigabit or 10 gigabit Ethernet fiber-optic cable. One
   * end of the cable is connected to your router, the other to an AWS Direct Connect
   * router. With this connection in place, you can create virtual interfaces
   * directly to the AWS cloud (for example, to Amazon Elastic Compute Cloud (Amazon
   * EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual
   * Private Cloud (Amazon VPC), bypassing Internet service providers in your network
   * path. An AWS Direct Connect location provides access to AWS in the region it is
   * associated with, as well as access to other US regions. For example, you can
   * provision a single connection to any AWS Direct Connect location in the US and
   * use it to access public AWS services in all US Regions and AWS GovCloud
   * (US).</p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectConnectClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~DirectConnectClient();

        /**
         * <p>Creates a hosted connection on an interconnect.</p> <p>Allocates a VLAN
         * number and a specified amount of bandwidth for use by a hosted connection on the
         * given interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         */
        virtual Model::AllocateConnectionOnInterconnectOutcome AllocateConnectionOnInterconnect(const Model::AllocateConnectionOnInterconnectRequest& request) const;

        /**
         * <p>Creates a hosted connection on an interconnect.</p> <p>Allocates a VLAN
         * number and a specified amount of bandwidth for use by a hosted connection on the
         * given interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateConnectionOnInterconnectOutcomeCallable AllocateConnectionOnInterconnectCallable(const Model::AllocateConnectionOnInterconnectRequest& request) const;

        /**
         * <p>Creates a hosted connection on an interconnect.</p> <p>Allocates a VLAN
         * number and a specified amount of bandwidth for use by a hosted connection on the
         * given interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateConnectionOnInterconnectAsync(const Model::AllocateConnectionOnInterconnectRequest& request, const AllocateConnectionOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a private virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * private virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPrivateVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcome AllocatePrivateVirtualInterface(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * private virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPrivateVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcomeCallable AllocatePrivateVirtualInterfaceCallable(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * private virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPrivateVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocatePrivateVirtualInterfaceAsync(const Model::AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a public virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPublicVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcome AllocatePublicVirtualInterface(const Model::AllocatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a public virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPublicVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcomeCallable AllocatePublicVirtualInterfaceCallable(const Model::AllocatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a public virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPublicVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocatePublicVirtualInterfaceAsync(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p>
         */
        virtual Model::ConfirmConnectionOutcome ConfirmConnection(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmConnectionOutcomeCallable ConfirmConnectionCallable(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmConnectionAsync(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p>
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcome ConfirmPrivateVirtualInterface(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcomeCallable ConfirmPrivateVirtualInterfaceCallable(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPrivateVirtualInterfaceAsync(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p>
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcome ConfirmPublicVirtualInterface(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcomeCallable ConfirmPublicVirtualInterfaceCallable(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPublicVirtualInterfaceAsync(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new connection between the customer network and a specific AWS
         * Direct Connect location.</p> <p>A connection links your internal network to an
         * AWS Direct Connect location over a standard 1 gigabit or 10 gigabit Ethernet
         * fiber-optic cable. One end of the cable is connected to your router, the other
         * to an AWS Direct Connect router. An AWS Direct Connect location provides access
         * to Amazon Web Services in the region it is associated with. You can establish
         * connections with AWS Direct Connect locations in multiple regions, but a
         * connection in one region does not provide connectivity to other regions.</p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a new connection between the customer network and a specific AWS
         * Direct Connect location.</p> <p>A connection links your internal network to an
         * AWS Direct Connect location over a standard 1 gigabit or 10 gigabit Ethernet
         * fiber-optic cable. One end of the cable is connected to your router, the other
         * to an AWS Direct Connect router. An AWS Direct Connect location provides access
         * to Amazon Web Services in the region it is associated with. You can establish
         * connections with AWS Direct Connect locations in multiple regions, but a
         * connection in one region does not provide connectivity to other regions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a new connection between the customer network and a specific AWS
         * Direct Connect location.</p> <p>A connection links your internal network to an
         * AWS Direct Connect location over a standard 1 gigabit or 10 gigabit Ethernet
         * fiber-optic cable. One end of the cable is connected to your router, the other
         * to an AWS Direct Connect router. An AWS Direct Connect location provides access
         * to Amazon Web Services in the region it is associated with. You can establish
         * connections with AWS Direct Connect locations in multiple regions, but a
         * connection in one region does not provide connectivity to other regions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new interconnect between a AWS Direct Connect partner's network and
         * a specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * which is capable of hosting other connections. The AWS Direct Connect partner
         * can use an interconnect to provide sub-1Gbps AWS Direct Connect service to tier
         * 2 customers who do not have their own connections. Like a standard connection,
         * an interconnect links the AWS Direct Connect partner's network to an AWS Direct
         * Connect location over a standard 1 Gbps or 10 Gbps Ethernet fiber-optic cable.
         * One end is connected to the partner's router, the other to an AWS Direct Connect
         * router.</p> <p>For each end customer, the AWS Direct Connect partner provisions
         * a connection on their interconnect by calling AllocateConnectionOnInterconnect.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect partner.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         */
        virtual Model::CreateInterconnectOutcome CreateInterconnect(const Model::CreateInterconnectRequest& request) const;

        /**
         * <p>Creates a new interconnect between a AWS Direct Connect partner's network and
         * a specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * which is capable of hosting other connections. The AWS Direct Connect partner
         * can use an interconnect to provide sub-1Gbps AWS Direct Connect service to tier
         * 2 customers who do not have their own connections. Like a standard connection,
         * an interconnect links the AWS Direct Connect partner's network to an AWS Direct
         * Connect location over a standard 1 Gbps or 10 Gbps Ethernet fiber-optic cable.
         * One end is connected to the partner's router, the other to an AWS Direct Connect
         * router.</p> <p>For each end customer, the AWS Direct Connect partner provisions
         * a connection on their interconnect by calling AllocateConnectionOnInterconnect.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect partner.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInterconnectOutcomeCallable CreateInterconnectCallable(const Model::CreateInterconnectRequest& request) const;

        /**
         * <p>Creates a new interconnect between a AWS Direct Connect partner's network and
         * a specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * which is capable of hosting other connections. The AWS Direct Connect partner
         * can use an interconnect to provide sub-1Gbps AWS Direct Connect service to tier
         * 2 customers who do not have their own connections. Like a standard connection,
         * an interconnect links the AWS Direct Connect partner's network to an AWS Direct
         * Connect location over a standard 1 Gbps or 10 Gbps Ethernet fiber-optic cable.
         * One end is connected to the partner's router, the other to an AWS Direct Connect
         * router.</p> <p>For each end customer, the AWS Direct Connect partner provisions
         * a connection on their interconnect by calling AllocateConnectionOnInterconnect.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect partner.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInterconnectAsync(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p>
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcome CreatePrivateVirtualInterface(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcomeCallable CreatePrivateVirtualInterfaceCallable(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePrivateVirtualInterfaceAsync(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p>
         */
        virtual Model::CreatePublicVirtualInterfaceOutcome CreatePublicVirtualInterface(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicVirtualInterfaceOutcomeCallable CreatePublicVirtualInterfaceCallable(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicVirtualInterfaceAsync(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect location.</p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect location.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect location.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note>
         */
        virtual Model::DeleteInterconnectOutcome DeleteInterconnect(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInterconnectOutcomeCallable DeleteInterconnectCallable(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInterconnectAsync(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual interface.</p>
         */
        virtual Model::DeleteVirtualInterfaceOutcome DeleteVirtualInterface(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualInterfaceOutcomeCallable DeleteVirtualInterfaceCallable(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualInterfaceAsync(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the LOA-CFA for a Connection.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that your APN partner or
         * service provider uses when establishing your cross connect to AWS at the
         * colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         */
        virtual Model::DescribeConnectionLoaOutcome DescribeConnectionLoa(const Model::DescribeConnectionLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for a Connection.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that your APN partner or
         * service provider uses when establishing your cross connect to AWS at the
         * colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionLoaOutcomeCallable DescribeConnectionLoaCallable(const Model::DescribeConnectionLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for a Connection.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that your APN partner or
         * service provider uses when establishing your cross connect to AWS at the
         * colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionLoaAsync(const Model::DescribeConnectionLoaRequest& request, const DescribeConnectionLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsAsync(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a list of connections that have been provisioned on the given
         * interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         */
        virtual Model::DescribeConnectionsOnInterconnectOutcome DescribeConnectionsOnInterconnect(const Model::DescribeConnectionsOnInterconnectRequest& request) const;

        /**
         * <p>Return a list of connections that have been provisioned on the given
         * interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOnInterconnectOutcomeCallable DescribeConnectionsOnInterconnectCallable(const Model::DescribeConnectionsOnInterconnectRequest& request) const;

        /**
         * <p>Return a list of connections that have been provisioned on the given
         * interconnect.</p> <note> <p>This is intended for use by AWS Direct Connect
         * partners only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsOnInterconnectAsync(const Model::DescribeConnectionsOnInterconnectRequest& request, const DescribeConnectionsOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the LOA-CFA for an Interconnect.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that is used when
         * establishing your cross connect to AWS at the colocation facility. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         */
        virtual Model::DescribeInterconnectLoaOutcome DescribeInterconnectLoa(const Model::DescribeInterconnectLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for an Interconnect.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that is used when
         * establishing your cross connect to AWS at the colocation facility. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInterconnectLoaOutcomeCallable DescribeInterconnectLoaCallable(const Model::DescribeInterconnectLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for an Interconnect.</p> <p>The Letter of Authorization -
         * Connecting Facility Assignment (LOA-CFA) is a document that is used when
         * establishing your cross connect to AWS at the colocation facility. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInterconnectLoaAsync(const Model::DescribeInterconnectLoaRequest& request, const DescribeInterconnectLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p>
         */
        virtual Model::DescribeInterconnectsOutcome DescribeInterconnects(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInterconnectsOutcomeCallable DescribeInterconnectsCallable(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInterconnectsAsync(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p>
         */
        virtual Model::DescribeLocationsOutcome DescribeLocations() const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationsOutcomeCallable DescribeLocationsCallable() const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of virtual private gateways owned by the AWS account.</p>
         * <p>You can create one or more AWS Direct Connect private virtual interfaces
         * linking to a virtual private gateway. A virtual private gateway can be managed
         * via Amazon Virtual Private Cloud (VPC) console or the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
         * CreateVpnGateway</a> action.</p>
         */
        virtual Model::DescribeVirtualGatewaysOutcome DescribeVirtualGateways() const;

        /**
         * <p>Returns a list of virtual private gateways owned by the AWS account.</p>
         * <p>You can create one or more AWS Direct Connect private virtual interfaces
         * linking to a virtual private gateway. A virtual private gateway can be managed
         * via Amazon Virtual Private Cloud (VPC) console or the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
         * CreateVpnGateway</a> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualGatewaysOutcomeCallable DescribeVirtualGatewaysCallable() const;

        /**
         * <p>Returns a list of virtual private gateways owned by the AWS account.</p>
         * <p>You can create one or more AWS Direct Connect private virtual interfaces
         * linking to a virtual private gateway. A virtual private gateway can be managed
         * via Amazon Virtual Private Cloud (VPC) console or the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
         * CreateVpnGateway</a> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before DescribeVirtualInterfaces is called are
         * also returned. If a connection ID is included then only virtual interfaces
         * associated with this connection will be returned. If a virtual interface ID is
         * included then only a single virtual interface will be returned.</p> <p>A virtual
         * interface (VLAN) transmits the traffic between the AWS Direct Connect location
         * and the customer.</p> <p>If a connection ID is provided, only virtual interfaces
         * provisioned on the specified connection will be returned. If a virtual interface
         * ID is provided, only this particular virtual interface will be returned.</p>
         */
        virtual Model::DescribeVirtualInterfacesOutcome DescribeVirtualInterfaces(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before DescribeVirtualInterfaces is called are
         * also returned. If a connection ID is included then only virtual interfaces
         * associated with this connection will be returned. If a virtual interface ID is
         * included then only a single virtual interface will be returned.</p> <p>A virtual
         * interface (VLAN) transmits the traffic between the AWS Direct Connect location
         * and the customer.</p> <p>If a connection ID is provided, only virtual interfaces
         * provisioned on the specified connection will be returned. If a virtual interface
         * ID is provided, only this particular virtual interface will be returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualInterfacesOutcomeCallable DescribeVirtualInterfacesCallable(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before DescribeVirtualInterfaces is called are
         * also returned. If a connection ID is included then only virtual interfaces
         * associated with this connection will be returned. If a virtual interface ID is
         * included then only a single virtual interface will be returned.</p> <p>A virtual
         * interface (VLAN) transmits the traffic between the AWS Direct Connect location
         * and the customer.</p> <p>If a connection ID is provided, only virtual interfaces
         * provisioned on the specified connection will be returned. If a virtual interface
         * ID is provided, only this particular virtual interface will be returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualInterfacesAsync(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect resource.</p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AllocateConnectionOnInterconnectAsyncHelper(const Model::AllocateConnectionOnInterconnectRequest& request, const AllocateConnectionOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePrivateVirtualInterfaceAsyncHelper(const Model::AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePublicVirtualInterfaceAsyncHelper(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmConnectionAsyncHelper(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPrivateVirtualInterfaceAsyncHelper(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPublicVirtualInterfaceAsyncHelper(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInterconnectAsyncHelper(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePrivateVirtualInterfaceAsyncHelper(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicVirtualInterfaceAsyncHelper(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInterconnectAsyncHelper(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualInterfaceAsyncHelper(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionLoaAsyncHelper(const Model::DescribeConnectionLoaRequest& request, const DescribeConnectionLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionsAsyncHelper(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionsOnInterconnectAsyncHelper(const Model::DescribeConnectionsOnInterconnectRequest& request, const DescribeConnectionsOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInterconnectLoaAsyncHelper(const Model::DescribeInterconnectLoaRequest& request, const DescribeInterconnectLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInterconnectsAsyncHelper(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationsAsyncHelper(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualGatewaysAsyncHelper(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualInterfacesAsyncHelper(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace DirectConnect
} // namespace Aws
