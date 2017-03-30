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
#include <aws/directconnect/model/AllocateHostedConnectionResult.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/AssociateConnectionWithLagResult.h>
#include <aws/directconnect/model/AssociateHostedConnectionResult.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmConnectionResult.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreateBGPPeerResult.h>
#include <aws/directconnect/model/CreateConnectionResult.h>
#include <aws/directconnect/model/CreateInterconnectResult.h>
#include <aws/directconnect/model/CreateLagResult.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/DeleteBGPPeerResult.h>
#include <aws/directconnect/model/DeleteConnectionResult.h>
#include <aws/directconnect/model/DeleteInterconnectResult.h>
#include <aws/directconnect/model/DeleteLagResult.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceResult.h>
#include <aws/directconnect/model/DescribeConnectionsResult.h>
#include <aws/directconnect/model/DescribeHostedConnectionsResult.h>
#include <aws/directconnect/model/DescribeInterconnectsResult.h>
#include <aws/directconnect/model/DescribeLagsResult.h>
#include <aws/directconnect/model/DescribeLoaResult.h>
#include <aws/directconnect/model/DescribeLocationsResult.h>
#include <aws/directconnect/model/DescribeTagsResult.h>
#include <aws/directconnect/model/DescribeVirtualGatewaysResult.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesResult.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagResult.h>
#include <aws/directconnect/model/TagResourceResult.h>
#include <aws/directconnect/model/UntagResourceResult.h>
#include <aws/directconnect/model/UpdateLagResult.h>
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
        class AllocateHostedConnectionRequest;
        class AllocatePrivateVirtualInterfaceRequest;
        class AllocatePublicVirtualInterfaceRequest;
        class AssociateConnectionWithLagRequest;
        class AssociateHostedConnectionRequest;
        class AssociateVirtualInterfaceRequest;
        class ConfirmConnectionRequest;
        class ConfirmPrivateVirtualInterfaceRequest;
        class ConfirmPublicVirtualInterfaceRequest;
        class CreateBGPPeerRequest;
        class CreateConnectionRequest;
        class CreateInterconnectRequest;
        class CreateLagRequest;
        class CreatePrivateVirtualInterfaceRequest;
        class CreatePublicVirtualInterfaceRequest;
        class DeleteBGPPeerRequest;
        class DeleteConnectionRequest;
        class DeleteInterconnectRequest;
        class DeleteLagRequest;
        class DeleteVirtualInterfaceRequest;
        class DescribeConnectionsRequest;
        class DescribeHostedConnectionsRequest;
        class DescribeInterconnectsRequest;
        class DescribeLagsRequest;
        class DescribeLoaRequest;
        class DescribeTagsRequest;
        class DescribeVirtualInterfacesRequest;
        class DisassociateConnectionFromLagRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateLagRequest;

        typedef Aws::Utils::Outcome<AllocateHostedConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> AllocateHostedConnectionOutcome;
        typedef Aws::Utils::Outcome<AllocatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AllocatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AssociateConnectionWithLagResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateConnectionWithLagOutcome;
        typedef Aws::Utils::Outcome<AssociateHostedConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateHostedConnectionOutcome;
        typedef Aws::Utils::Outcome<AssociateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmConnectionOutcome;
        typedef Aws::Utils::Outcome<ConfirmPrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmPublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreateBGPPeerResult, Aws::Client::AWSError<DirectConnectErrors>> CreateBGPPeerOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> CreateInterconnectOutcome;
        typedef Aws::Utils::Outcome<CreateLagResult, Aws::Client::AWSError<DirectConnectErrors>> CreateLagOutcome;
        typedef Aws::Utils::Outcome<CreatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DeleteBGPPeerResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteBGPPeerOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteInterconnectOutcome;
        typedef Aws::Utils::Outcome<DeleteLagResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteLagOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeHostedConnectionsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeHostedConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInterconnectsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeInterconnectsOutcome;
        typedef Aws::Utils::Outcome<DescribeLagsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLagsOutcome;
        typedef Aws::Utils::Outcome<DescribeLoaResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLoaOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualGatewaysResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualInterfacesResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualInterfacesOutcome;
        typedef Aws::Utils::Outcome<DisassociateConnectionFromLagResult, Aws::Client::AWSError<DirectConnectErrors>> DisassociateConnectionFromLagOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateLagResult, Aws::Client::AWSError<DirectConnectErrors>> UpdateLagOutcome;

        typedef std::future<AllocateHostedConnectionOutcome> AllocateHostedConnectionOutcomeCallable;
        typedef std::future<AllocatePrivateVirtualInterfaceOutcome> AllocatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<AllocatePublicVirtualInterfaceOutcome> AllocatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<AssociateConnectionWithLagOutcome> AssociateConnectionWithLagOutcomeCallable;
        typedef std::future<AssociateHostedConnectionOutcome> AssociateHostedConnectionOutcomeCallable;
        typedef std::future<AssociateVirtualInterfaceOutcome> AssociateVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmConnectionOutcome> ConfirmConnectionOutcomeCallable;
        typedef std::future<ConfirmPrivateVirtualInterfaceOutcome> ConfirmPrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmPublicVirtualInterfaceOutcome> ConfirmPublicVirtualInterfaceOutcomeCallable;
        typedef std::future<CreateBGPPeerOutcome> CreateBGPPeerOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateInterconnectOutcome> CreateInterconnectOutcomeCallable;
        typedef std::future<CreateLagOutcome> CreateLagOutcomeCallable;
        typedef std::future<CreatePrivateVirtualInterfaceOutcome> CreatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<CreatePublicVirtualInterfaceOutcome> CreatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<DeleteBGPPeerOutcome> DeleteBGPPeerOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteInterconnectOutcome> DeleteInterconnectOutcomeCallable;
        typedef std::future<DeleteLagOutcome> DeleteLagOutcomeCallable;
        typedef std::future<DeleteVirtualInterfaceOutcome> DeleteVirtualInterfaceOutcomeCallable;
        typedef std::future<DescribeConnectionsOutcome> DescribeConnectionsOutcomeCallable;
        typedef std::future<DescribeHostedConnectionsOutcome> DescribeHostedConnectionsOutcomeCallable;
        typedef std::future<DescribeInterconnectsOutcome> DescribeInterconnectsOutcomeCallable;
        typedef std::future<DescribeLagsOutcome> DescribeLagsOutcomeCallable;
        typedef std::future<DescribeLoaOutcome> DescribeLoaOutcomeCallable;
        typedef std::future<DescribeLocationsOutcome> DescribeLocationsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeVirtualGatewaysOutcome> DescribeVirtualGatewaysOutcomeCallable;
        typedef std::future<DescribeVirtualInterfacesOutcome> DescribeVirtualInterfacesOutcomeCallable;
        typedef std::future<DisassociateConnectionFromLagOutcome> DisassociateConnectionFromLagOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateLagOutcome> UpdateLagOutcomeCallable;
} // namespace Model

  class DirectConnectClient;

    typedef std::function<void(const DirectConnectClient*, const Model::AllocateHostedConnectionRequest&, const Model::AllocateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePrivateVirtualInterfaceRequest&, const Model::AllocatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePublicVirtualInterfaceRequest&, const Model::AllocatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateConnectionWithLagRequest&, const Model::AssociateConnectionWithLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectionWithLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateHostedConnectionRequest&, const Model::AssociateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateVirtualInterfaceRequest&, const Model::AssociateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmConnectionRequest&, const Model::ConfirmConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPrivateVirtualInterfaceRequest&, const Model::ConfirmPrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPublicVirtualInterfaceRequest&, const Model::ConfirmPublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateBGPPeerRequest&, const Model::CreateBGPPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBGPPeerResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateInterconnectRequest&, const Model::CreateInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateLagRequest&, const Model::CreateLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePrivateVirtualInterfaceRequest&, const Model::CreatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePublicVirtualInterfaceRequest&, const Model::CreatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteBGPPeerRequest&, const Model::DeleteBGPPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBGPPeerResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteInterconnectRequest&, const Model::DeleteInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteLagRequest&, const Model::DeleteLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteVirtualInterfaceRequest&, const Model::DeleteVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeConnectionsRequest&, const Model::DescribeConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeHostedConnectionsRequest&, const Model::DescribeHostedConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostedConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeInterconnectsRequest&, const Model::DescribeInterconnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInterconnectsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLagsRequest&, const Model::DescribeLagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLoaRequest&, const Model::DescribeLoaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoaResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualInterfacesRequest&, const Model::DescribeVirtualInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualInterfacesResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DisassociateConnectionFromLagRequest&, const Model::DisassociateConnectionFromLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectionFromLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateLagRequest&, const Model::UpdateLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLagResponseReceivedHandler;

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
         * <p>Creates a hosted connection on an interconnect or a link aggregation group
         * (LAG).</p> <p>Allocates a VLAN number and a specified amount of bandwidth for
         * use by a hosted connection on the given interconnect or LAG.</p> <note> <p>This
         * is intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostedConnectionOutcome AllocateHostedConnection(const Model::AllocateHostedConnectionRequest& request) const;

        /**
         * <p>Creates a hosted connection on an interconnect or a link aggregation group
         * (LAG).</p> <p>Allocates a VLAN number and a specified amount of bandwidth for
         * use by a hosted connection on the given interconnect or LAG.</p> <note> <p>This
         * is intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateHostedConnectionOutcomeCallable AllocateHostedConnectionCallable(const Model::AllocateHostedConnectionRequest& request) const;

        /**
         * <p>Creates a hosted connection on an interconnect or a link aggregation group
         * (LAG).</p> <p>Allocates a VLAN number and a specified amount of bandwidth for
         * use by a hosted connection on the given interconnect or LAG.</p> <note> <p>This
         * is intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateHostedConnectionAsync(const Model::AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a private virtual interface to be owned by another AWS
         * customer.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the virtual interface owner by using the
         * <a>ConfirmPrivateVirtualInterface</a> action. Until then, the virtual interface
         * will be in 'Confirming' state, and will not be available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcome AllocatePrivateVirtualInterface(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by another AWS
         * customer.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the virtual interface owner by using the
         * <a>ConfirmPrivateVirtualInterface</a> action. Until then, the virtual interface
         * will be in 'Confirming' state, and will not be available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcomeCallable AllocatePrivateVirtualInterfaceCallable(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by another AWS
         * customer.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the virtual interface owner by using the
         * <a>ConfirmPrivateVirtualInterface</a> action. Until then, the virtual interface
         * will be in 'Confirming' state, and will not be available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
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
         * and will not be available for handling traffic.</p> <p>When creating an IPv6
         * public virtual interface (addressFamily is 'ipv6'), the customer and amazon
         * address fields should be left blank to use auto-assigned IPv6 space. Custom IPv6
         * Addresses are currently not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcome AllocatePublicVirtualInterface(const Model::AllocatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a public virtual interface to be owned by a different
         * customer.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface which will be owned by another AWS customer.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the
         * virtual interface owner by calling ConfirmPublicVirtualInterface. Until this
         * step has been completed, the virtual interface will be in 'Confirming' state,
         * and will not be available for handling traffic.</p> <p>When creating an IPv6
         * public virtual interface (addressFamily is 'ipv6'), the customer and amazon
         * address fields should be left blank to use auto-assigned IPv6 space. Custom IPv6
         * Addresses are currently not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
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
         * and will not be available for handling traffic.</p> <p>When creating an IPv6
         * public virtual interface (addressFamily is 'ipv6'), the customer and amazon
         * address fields should be left blank to use auto-assigned IPv6 space. Custom IPv6
         * Addresses are currently not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocatePublicVirtualInterfaceAsync(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS will be interrupted). The connection must be hosted on the
         * same AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can reassociate a connection that's currently
         * associated with a different LAG; however, if removing the connection will cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Virtual interfaces that are directly
         * associated with the connection are not automatically migrated. You can delete
         * them or associate them with the target LAG using
         * <a>AssociateVirtualInterface</a>. If the connection was originally associated
         * with a different LAG, the virtual interfaces remain associated with the original
         * LAG.</p> <p>For interconnects, hosted connections are not automatically
         * migrated. You can delete them, or the owner of the physical connection can
         * associate them with the target LAG using <a>AssociateHostedConnection</a>. After
         * all hosted connections have been migrated, the interconnect can be migrated into
         * the LAG. If the interconnect is already associated with a LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionWithLagOutcome AssociateConnectionWithLag(const Model::AssociateConnectionWithLagRequest& request) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS will be interrupted). The connection must be hosted on the
         * same AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can reassociate a connection that's currently
         * associated with a different LAG; however, if removing the connection will cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Virtual interfaces that are directly
         * associated with the connection are not automatically migrated. You can delete
         * them or associate them with the target LAG using
         * <a>AssociateVirtualInterface</a>. If the connection was originally associated
         * with a different LAG, the virtual interfaces remain associated with the original
         * LAG.</p> <p>For interconnects, hosted connections are not automatically
         * migrated. You can delete them, or the owner of the physical connection can
         * associate them with the target LAG using <a>AssociateHostedConnection</a>. After
         * all hosted connections have been migrated, the interconnect can be migrated into
         * the LAG. If the interconnect is already associated with a LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConnectionWithLagOutcomeCallable AssociateConnectionWithLagCallable(const Model::AssociateConnectionWithLagRequest& request) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS will be interrupted). The connection must be hosted on the
         * same AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can reassociate a connection that's currently
         * associated with a different LAG; however, if removing the connection will cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Virtual interfaces that are directly
         * associated with the connection are not automatically migrated. You can delete
         * them or associate them with the target LAG using
         * <a>AssociateVirtualInterface</a>. If the connection was originally associated
         * with a different LAG, the virtual interfaces remain associated with the original
         * LAG.</p> <p>For interconnects, hosted connections are not automatically
         * migrated. You can delete them, or the owner of the physical connection can
         * associate them with the target LAG using <a>AssociateHostedConnection</a>. After
         * all hosted connections have been migrated, the interconnect can be migrated into
         * the LAG. If the interconnect is already associated with a LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConnectionWithLagAsync(const Model::AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateHostedConnectionOutcome AssociateHostedConnection(const Model::AssociateHostedConnectionRequest& request) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateHostedConnectionOutcomeCallable AssociateHostedConnectionCallable(const Model::AssociateHostedConnectionRequest& request) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateHostedConnectionAsync(const Model::AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails. </p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>Hosted virtual interfaces (an interface for which the owner of the connection
         * is not the owner of physical connection) can only be reassociated by the owner
         * of the physical connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVirtualInterfaceOutcome AssociateVirtualInterface(const Model::AssociateVirtualInterfaceRequest& request) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails. </p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>Hosted virtual interfaces (an interface for which the owner of the connection
         * is not the owner of physical connection) can only be reassociated by the owner
         * of the physical connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVirtualInterfaceOutcomeCallable AssociateVirtualInterfaceCallable(const Model::AssociateVirtualInterfaceRequest& request) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails. </p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>Hosted virtual interfaces (an interface for which the owner of the connection
         * is not the owner of physical connection) can only be reassociated by the owner
         * of the physical connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVirtualInterfaceAsync(const Model::AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmConnectionOutcome ConfirmConnection(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmConnectionOutcomeCallable ConfirmConnectionCallable(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirm the creation of a hosted connection on an interconnect.</p> <p>Upon
         * creation, the hosted connection is initially in the 'Ordering' state, and will
         * remain in this state until the owner calls ConfirmConnection to confirm creation
         * of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmConnectionAsync(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcome ConfirmPrivateVirtualInterface(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcomeCallable ConfirmPrivateVirtualInterfaceCallable(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a private virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * virtual interface will be created and attached to the given virtual private
         * gateway, and will be available for handling traffic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPrivateVirtualInterfaceAsync(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcome ConfirmPublicVirtualInterface(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcomeCallable ConfirmPublicVirtualInterfaceCallable(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accept ownership of a public virtual interface created by another
         * customer.</p> <p>After the virtual interface owner calls this function, the
         * specified virtual interface will be created and made available for handling
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPublicVirtualInterfaceAsync(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new BGP peer on a specified virtual interface. The BGP peer cannot
         * be in the same address family (IPv4/IPv6) of an existing BGP peer on the virtual
         * interface.</p> <p>You must create a BGP peer for the corresponding address
         * family in order to access AWS resources that also use that address family.</p>
         * <p>When creating a IPv6 BGP peer, the Amazon address and customer address fields
         * must be left blank. IPv6 addresses are automatically assigned from Amazon's pool
         * of IPv6 addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public
         * virtual interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBGPPeerOutcome CreateBGPPeer(const Model::CreateBGPPeerRequest& request) const;

        /**
         * <p>Creates a new BGP peer on a specified virtual interface. The BGP peer cannot
         * be in the same address family (IPv4/IPv6) of an existing BGP peer on the virtual
         * interface.</p> <p>You must create a BGP peer for the corresponding address
         * family in order to access AWS resources that also use that address family.</p>
         * <p>When creating a IPv6 BGP peer, the Amazon address and customer address fields
         * must be left blank. IPv6 addresses are automatically assigned from Amazon's pool
         * of IPv6 addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public
         * virtual interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBGPPeerOutcomeCallable CreateBGPPeerCallable(const Model::CreateBGPPeerRequest& request) const;

        /**
         * <p>Creates a new BGP peer on a specified virtual interface. The BGP peer cannot
         * be in the same address family (IPv4/IPv6) of an existing BGP peer on the virtual
         * interface.</p> <p>You must create a BGP peer for the corresponding address
         * family in order to access AWS resources that also use that address family.</p>
         * <p>When creating a IPv6 BGP peer, the Amazon address and customer address fields
         * must be left blank. IPv6 addresses are automatically assigned from Amazon's pool
         * of IPv6 addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public
         * virtual interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBGPPeerAsync(const Model::CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new connection between the customer network and a specific AWS
         * Direct Connect location.</p> <p>A connection links your internal network to an
         * AWS Direct Connect location over a standard 1 gigabit or 10 gigabit Ethernet
         * fiber-optic cable. One end of the cable is connected to your router, the other
         * to an AWS Direct Connect router. An AWS Direct Connect location provides access
         * to Amazon Web Services in the region it is associated with. You can establish
         * connections with AWS Direct Connect locations in multiple regions, but a
         * connection in one region does not provide connectivity to other regions.</p>
         * <p>You can automatically add the new connection to a link aggregation group
         * (LAG) by specifying a LAG ID in the request. This ensures that the new
         * connection is allocated on the same AWS Direct Connect endpoint that hosts the
         * specified LAG. If there are no available ports on the endpoint, the request
         * fails and no connection will be created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
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
         * <p>You can automatically add the new connection to a link aggregation group
         * (LAG) by specifying a LAG ID in the request. This ensures that the new
         * connection is allocated on the same AWS Direct Connect endpoint that hosts the
         * specified LAG. If there are no available ports on the endpoint, the request
         * fails and no connection will be created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
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
         * <p>You can automatically add the new connection to a link aggregation group
         * (LAG) by specifying a LAG ID in the request. This ensures that the new
         * connection is allocated on the same AWS Direct Connect endpoint that hosts the
         * specified LAG. If there are no available ports on the endpoint, the request
         * fails and no connection will be created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
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
         * router.</p> <p>You can automatically add the new interconnect to a link
         * aggregation group (LAG) by specifying a LAG ID in the request. This ensures that
         * the new interconnect is allocated on the same AWS Direct Connect endpoint that
         * hosts the specified LAG. If there are no available ports on the endpoint, the
         * request fails and no interconnect will be created.</p> <p>For each end customer,
         * the AWS Direct Connect partner provisions a connection on their interconnect by
         * calling AllocateConnectionOnInterconnect. The end customer can then connect to
         * AWS resources by creating a virtual interface on their connection, using the
         * VLAN assigned to them by the AWS Direct Connect partner.</p> <note> <p>This is
         * intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
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
         * router.</p> <p>You can automatically add the new interconnect to a link
         * aggregation group (LAG) by specifying a LAG ID in the request. This ensures that
         * the new interconnect is allocated on the same AWS Direct Connect endpoint that
         * hosts the specified LAG. If there are no available ports on the endpoint, the
         * request fails and no interconnect will be created.</p> <p>For each end customer,
         * the AWS Direct Connect partner provisions a connection on their interconnect by
         * calling AllocateConnectionOnInterconnect. The end customer can then connect to
         * AWS resources by creating a virtual interface on their connection, using the
         * VLAN assigned to them by the AWS Direct Connect partner.</p> <note> <p>This is
         * intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
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
         * router.</p> <p>You can automatically add the new interconnect to a link
         * aggregation group (LAG) by specifying a LAG ID in the request. This ensures that
         * the new interconnect is allocated on the same AWS Direct Connect endpoint that
         * hosts the specified LAG. If there are no available ports on the endpoint, the
         * request fails and no interconnect will be created.</p> <p>For each end customer,
         * the AWS Direct Connect partner provisions a connection on their interconnect by
         * calling AllocateConnectionOnInterconnect. The end customer can then connect to
         * AWS resources by creating a virtual interface on their connection, using the
         * VLAN assigned to them by the AWS Direct Connect partner.</p> <note> <p>This is
         * intended for use by AWS Direct Connect partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInterconnectAsync(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new link aggregation group (LAG) with the specified number of
         * bundled physical connections between the customer network and a specific AWS
         * Direct Connect location. A LAG is a logical interface that uses the Link
         * Aggregation Control Protocol (LACP) to aggregate multiple 1 gigabit or 10
         * gigabit interfaces, allowing you to treat them as a single interface.</p> <p>All
         * connections in a LAG must use the same bandwidth (for example, 10 Gbps), and
         * must terminate at the same AWS Direct Connect endpoint.</p> <p>You can have up
         * to 10 connections per LAG. Regardless of this limit, if you request more
         * connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLagOutcome CreateLag(const Model::CreateLagRequest& request) const;

        /**
         * <p>Creates a new link aggregation group (LAG) with the specified number of
         * bundled physical connections between the customer network and a specific AWS
         * Direct Connect location. A LAG is a logical interface that uses the Link
         * Aggregation Control Protocol (LACP) to aggregate multiple 1 gigabit or 10
         * gigabit interfaces, allowing you to treat them as a single interface.</p> <p>All
         * connections in a LAG must use the same bandwidth (for example, 10 Gbps), and
         * must terminate at the same AWS Direct Connect endpoint.</p> <p>You can have up
         * to 10 connections per LAG. Regardless of this limit, if you request more
         * connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLagOutcomeCallable CreateLagCallable(const Model::CreateLagRequest& request) const;

        /**
         * <p>Creates a new link aggregation group (LAG) with the specified number of
         * bundled physical connections between the customer network and a specific AWS
         * Direct Connect location. A LAG is a logical interface that uses the Link
         * Aggregation Control Protocol (LACP) to aggregate multiple 1 gigabit or 10
         * gigabit interfaces, allowing you to treat them as a single interface.</p> <p>All
         * connections in a LAG must use the same bandwidth (for example, 10 Gbps), and
         * must terminate at the same AWS Direct Connect endpoint.</p> <p>You can have up
         * to 10 connections per LAG. Regardless of this limit, if you request more
         * connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLagAsync(const Model::CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcome CreatePrivateVirtualInterface(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcomeCallable CreatePrivateVirtualInterfaceCallable(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface supports
         * sending traffic to a single virtual private cloud (VPC).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePrivateVirtualInterfaceAsync(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p> <p>When creating an IPv6 public virtual interface
         * (addressFamily is 'ipv6'), the customer and amazon address fields should be left
         * blank to use auto-assigned IPv6 space. Custom IPv6 Addresses are currently not
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicVirtualInterfaceOutcome CreatePublicVirtualInterface(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p> <p>When creating an IPv6 public virtual interface
         * (addressFamily is 'ipv6'), the customer and amazon address fields should be left
         * blank to use auto-assigned IPv6 space. Custom IPv6 Addresses are currently not
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicVirtualInterfaceOutcomeCallable CreatePublicVirtualInterfaceCallable(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a new public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon Simple Storage Service
         * (Amazon S3).</p> <p>When creating an IPv6 public virtual interface
         * (addressFamily is 'ipv6'), the customer and amazon address fields should be left
         * blank to use auto-assigned IPv6 space. Custom IPv6 Addresses are currently not
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicVirtualInterfaceAsync(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a BGP peer on the specified virtual interface that matches the
         * specified customer address and ASN. You cannot delete the last BGP peer from a
         * virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBGPPeerOutcome DeleteBGPPeer(const Model::DeleteBGPPeerRequest& request) const;

        /**
         * <p>Deletes a BGP peer on the specified virtual interface that matches the
         * specified customer address and ASN. You cannot delete the last BGP peer from a
         * virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBGPPeerOutcomeCallable DeleteBGPPeerCallable(const Model::DeleteBGPPeerRequest& request) const;

        /**
         * <p>Deletes a BGP peer on the specified virtual interface that matches the
         * specified customer address and ASN. You cannot delete the last BGP peer from a
         * virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBGPPeerAsync(const Model::DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the connection.</p> <p>Deleting a connection only stops the AWS
         * Direct Connect port hour and data transfer charges. You need to cancel
         * separately with the providers any services or charges for cross-connects or
         * network circuits that connect you to the AWS Direct Connect
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInterconnectOutcome DeleteInterconnect(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInterconnectOutcomeCallable DeleteInterconnectCallable(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>This is intended for use by
         * AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInterconnectAsync(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a link aggregation group (LAG). You cannot delete a LAG if it has
         * active virtual interfaces or hosted connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLagOutcome DeleteLag(const Model::DeleteLagRequest& request) const;

        /**
         * <p>Deletes a link aggregation group (LAG). You cannot delete a LAG if it has
         * active virtual interfaces or hosted connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLagOutcomeCallable DeleteLagCallable(const Model::DeleteLagRequest& request) const;

        /**
         * <p>Deletes a link aggregation group (LAG). You cannot delete a LAG if it has
         * active virtual interfaces or hosted connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLagAsync(const Model::DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualInterfaceOutcome DeleteVirtualInterface(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualInterfaceOutcomeCallable DeleteVirtualInterfaceCallable(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualInterfaceAsync(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays all connections in this region.</p> <p>If a connection ID is
         * provided, the call returns only that particular connection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsAsync(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of hosted connections that have been provisioned on the given
         * interconnect or link aggregation group (LAG).</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostedConnectionsOutcome DescribeHostedConnections(const Model::DescribeHostedConnectionsRequest& request) const;

        /**
         * <p>Returns a list of hosted connections that have been provisioned on the given
         * interconnect or link aggregation group (LAG).</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostedConnectionsOutcomeCallable DescribeHostedConnectionsCallable(const Model::DescribeHostedConnectionsRequest& request) const;

        /**
         * <p>Returns a list of hosted connections that have been provisioned on the given
         * interconnect or link aggregation group (LAG).</p> <note> <p>This is intended for
         * use by AWS Direct Connect partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostedConnectionsAsync(const Model::DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInterconnectsOutcome DescribeInterconnects(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInterconnectsOutcomeCallable DescribeInterconnectsCallable(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Returns a list of interconnects owned by the AWS account.</p> <p>If an
         * interconnect ID is provided, it will only return this particular
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInterconnectsAsync(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the link aggregation groups (LAGs) in your account. </p> <p>If a
         * LAG ID is provided, only information about the specified LAG is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLagsOutcome DescribeLags(const Model::DescribeLagsRequest& request) const;

        /**
         * <p>Describes the link aggregation groups (LAGs) in your account. </p> <p>If a
         * LAG ID is provided, only information about the specified LAG is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLagsOutcomeCallable DescribeLagsCallable(const Model::DescribeLagsRequest& request) const;

        /**
         * <p>Describes the link aggregation groups (LAGs) in your account. </p> <p>If a
         * LAG ID is provided, only information about the specified LAG is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLagsAsync(const Model::DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoaOutcome DescribeLoa(const Model::DescribeLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoaOutcomeCallable DescribeLoaCallable(const Model::DescribeLoaRequest& request) const;

        /**
         * <p>Returns the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the AWS Direct Connect
         * user guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoaAsync(const Model::DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationsOutcome DescribeLocations() const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationsOutcomeCallable DescribeLocationsCallable() const;

        /**
         * <p>Returns the list of AWS Direct Connect locations in the current AWS region.
         * These are the locations that may be selected when calling CreateConnection or
         * CreateInterconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
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
         * CreateVpnGateway</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewaysOutcome DescribeVirtualGateways() const;

        /**
         * <p>Returns a list of virtual private gateways owned by the AWS account.</p>
         * <p>You can create one or more AWS Direct Connect private virtual interfaces
         * linking to a virtual private gateway. A virtual private gateway can be managed
         * via Amazon Virtual Private Cloud (VPC) console or the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
         * CreateVpnGateway</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
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
         * CreateVpnGateway</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the
         * customer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualInterfacesOutcome DescribeVirtualInterfaces(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the
         * customer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualInterfacesOutcomeCallable DescribeVirtualInterfacesCallable(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the
         * customer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualInterfacesAsync(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection will cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionFromLagOutcome DisassociateConnectionFromLag(const Model::DisassociateConnectionFromLagRequest& request) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection will cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectionFromLagOutcomeCallable DisassociateConnectionFromLagCallable(const Model::DisassociateConnectionFromLagRequest& request) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection will cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectionFromLagAsync(const Model::DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each Direct
         * Connect resource can have a maximum of 50 tags.</p> <p>Each tag consists of a
         * key and an optional value. If a tag with the same key is already associated with
         * the Direct Connect resource, this action updates its value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the attributes of a link aggregation group (LAG). </p> <p>You can
         * update the following attributes: </p> <ul> <li> <p>The name of the LAG.</p>
         * </li> <li> <p>The value for the minimum number of connections that must be
         * operational for the LAG itself to be operational. </p> </li> </ul> <p>When you
         * create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value, and the number of operational
         * connections falls below the specified value, the LAG will automatically go down
         * to avoid overutilization of the remaining connections. Adjusting this value
         * should be done with care as it could force the LAG down if the value is set
         * higher than the current number of operational connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLagOutcome UpdateLag(const Model::UpdateLagRequest& request) const;

        /**
         * <p>Updates the attributes of a link aggregation group (LAG). </p> <p>You can
         * update the following attributes: </p> <ul> <li> <p>The name of the LAG.</p>
         * </li> <li> <p>The value for the minimum number of connections that must be
         * operational for the LAG itself to be operational. </p> </li> </ul> <p>When you
         * create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value, and the number of operational
         * connections falls below the specified value, the LAG will automatically go down
         * to avoid overutilization of the remaining connections. Adjusting this value
         * should be done with care as it could force the LAG down if the value is set
         * higher than the current number of operational connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLagOutcomeCallable UpdateLagCallable(const Model::UpdateLagRequest& request) const;

        /**
         * <p>Updates the attributes of a link aggregation group (LAG). </p> <p>You can
         * update the following attributes: </p> <ul> <li> <p>The name of the LAG.</p>
         * </li> <li> <p>The value for the minimum number of connections that must be
         * operational for the LAG itself to be operational. </p> </li> </ul> <p>When you
         * create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value, and the number of operational
         * connections falls below the specified value, the LAG will automatically go down
         * to avoid overutilization of the remaining connections. Adjusting this value
         * should be done with care as it could force the LAG down if the value is set
         * higher than the current number of operational connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLagAsync(const Model::UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AllocateHostedConnectionAsyncHelper(const Model::AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePrivateVirtualInterfaceAsyncHelper(const Model::AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePublicVirtualInterfaceAsyncHelper(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateConnectionWithLagAsyncHelper(const Model::AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateHostedConnectionAsyncHelper(const Model::AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateVirtualInterfaceAsyncHelper(const Model::AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmConnectionAsyncHelper(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPrivateVirtualInterfaceAsyncHelper(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPublicVirtualInterfaceAsyncHelper(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBGPPeerAsyncHelper(const Model::CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInterconnectAsyncHelper(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLagAsyncHelper(const Model::CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePrivateVirtualInterfaceAsyncHelper(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicVirtualInterfaceAsyncHelper(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBGPPeerAsyncHelper(const Model::DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInterconnectAsyncHelper(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLagAsyncHelper(const Model::DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualInterfaceAsyncHelper(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionsAsyncHelper(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHostedConnectionsAsyncHelper(const Model::DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInterconnectsAsyncHelper(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLagsAsyncHelper(const Model::DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoaAsyncHelper(const Model::DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationsAsyncHelper(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualGatewaysAsyncHelper(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualInterfacesAsyncHelper(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConnectionFromLagAsyncHelper(const Model::DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLagAsyncHelper(const Model::UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DirectConnect
} // namespace Aws
