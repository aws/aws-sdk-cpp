/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>

namespace Aws
{
namespace NetworkManager
{
  /**
   * <p>Amazon Web Services enables you to centrally manage your Amazon Web Services
   * Cloud WAN core network and your Transit Gateway network across Amazon Web
   * Services accounts, Regions, and on-premises locations.</p>
   */
  class AWS_NETWORKMANAGER_API NetworkManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NetworkManagerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration(),
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG),
                             const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG),
                             const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkManagerClient();

        /**
         * <p>Accepts a core network attachment request. </p> <p>Once the attachment
         * request is accepted by a core network owner, the attachment is created and
         * connected to a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AcceptAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAttachmentOutcome AcceptAttachment(const Model::AcceptAttachmentRequest& request) const;

        /**
         * A Callable wrapper for AcceptAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptAttachmentOutcomeCallable AcceptAttachmentCallable(const Model::AcceptAttachmentRequest& request) const;

        /**
         * An Async wrapper for AcceptAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptAttachmentAsync(const Model::AcceptAttachmentRequest& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a core network Connect peer with a device and optionally, with a
         * link. </p> <p>If you specify a link, it must be associated with the specified
         * device. You can only associate core network Connect peers that have been created
         * on a core network Connect attachment on a core network. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectPeerOutcome AssociateConnectPeer(const Model::AssociateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for AssociateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConnectPeerOutcomeCallable AssociateConnectPeerCallable(const Model::AssociateConnectPeerRequest& request) const;

        /**
         * An Async wrapper for AssociateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConnectPeerAsync(const Model::AssociateConnectPeerRequest& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a customer gateway with a device and optionally, with a link. If
         * you specify a link, it must be associated with the specified device. </p> <p>You
         * can only associate customer gateways that are connected to a VPN attachment on a
         * transit gateway or core network registered in your global network. When you
         * register a transit gateway or core network, customer gateways that are connected
         * to the transit gateway are automatically included in the global network. To list
         * customer gateways that are connected to a transit gateway, use the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
         * EC2 API and filter by <code>transit-gateway-id</code>.</p> <p>You cannot
         * associate a customer gateway with more than one device and link. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCustomerGatewayOutcome AssociateCustomerGateway(const Model::AssociateCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for AssociateCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCustomerGatewayOutcomeCallable AssociateCustomerGatewayCallable(const Model::AssociateCustomerGatewayRequest& request) const;

        /**
         * An Async wrapper for AssociateCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCustomerGatewayAsync(const Model::AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLinkOutcome AssociateLink(const Model::AssociateLinkRequest& request) const;

        /**
         * A Callable wrapper for AssociateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLinkOutcomeCallable AssociateLinkCallable(const Model::AssociateLinkRequest& request) const;

        /**
         * An Async wrapper for AssociateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLinkAsync(const Model::AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a transit gateway Connect peer with a device, and optionally, with
         * a link. If you specify a link, it must be associated with the specified device.
         * </p> <p>You can only associate transit gateway Connect peers that have been
         * created on a transit gateway that's registered in your global network.</p>
         * <p>You cannot associate a transit gateway Connect peer with more than one device
         * and link. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayConnectPeerOutcome AssociateTransitGatewayConnectPeer(const Model::AssociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for AssociateTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTransitGatewayConnectPeerOutcomeCallable AssociateTransitGatewayConnectPeerCallable(const Model::AssociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * An Async wrapper for AssociateTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTransitGatewayConnectPeerAsync(const Model::AssociateTransitGatewayConnectPeerRequest& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a core network Connect attachment from a specified core network
         * attachment. </p> <p>A core network Connect attachment is a GRE-based tunnel
         * attachment that you can use to establish a connection between a core network and
         * an appliance. A core network Connect attachment uses an existing VPC attachment
         * as the underlying transport mechanism.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectAttachmentOutcome CreateConnectAttachment(const Model::CreateConnectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectAttachmentOutcomeCallable CreateConnectAttachmentCallable(const Model::CreateConnectAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateConnectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectAttachmentAsync(const Model::CreateConnectAttachmentRequest& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a core network Connect peer for a specified core network connect
         * attachment between a core network and an appliance. The peer address and transit
         * gateway address must be the same IP address family (IPv4 or IPv6).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectPeerOutcome CreateConnectPeer(const Model::CreateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectPeerOutcomeCallable CreateConnectPeerCallable(const Model::CreateConnectPeerRequest& request) const;

        /**
         * An Async wrapper for CreateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectPeerAsync(const Model::CreateConnectPeerRequest& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection between two devices. The devices can be a physical or
         * virtual appliance that connects to a third-party appliance in a VPC, or a
         * physical appliance that connects to another physical appliance in an on-premises
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a core network as part of your global network, and optionally, with a
         * core network policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreNetworkOutcome CreateCoreNetwork(const Model::CreateCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCoreNetworkOutcomeCallable CreateCoreNetworkCallable(const Model::CreateCoreNetworkRequest& request) const;

        /**
         * An Async wrapper for CreateCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoreNetworkAsync(const Model::CreateCoreNetworkRequest& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest& request) const;

        /**
         * A Callable wrapper for CreateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request) const;

        /**
         * An Async wrapper for CreateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalNetworkOutcome CreateGlobalNetwork(const Model::CreateGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGlobalNetworkOutcomeCallable CreateGlobalNetworkCallable(const Model::CreateGlobalNetworkRequest& request) const;

        /**
         * An Async wrapper for CreateGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalNetworkAsync(const Model::CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLinkOutcomeCallable CreateLinkCallable(const Model::CreateLinkRequest& request) const;

        /**
         * An Async wrapper for CreateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLinkAsync(const Model::CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSiteOutcomeCallable CreateSiteCallable(const Model::CreateSiteRequest& request) const;

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSiteAsync(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Web Services site-to-site VPN attachment on an edge
         * location of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteToSiteVpnAttachmentOutcome CreateSiteToSiteVpnAttachment(const Model::CreateSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateSiteToSiteVpnAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSiteToSiteVpnAttachmentOutcomeCallable CreateSiteToSiteVpnAttachmentCallable(const Model::CreateSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateSiteToSiteVpnAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSiteToSiteVpnAttachmentAsync(const Model::CreateSiteToSiteVpnAttachmentRequest& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a transit gateway peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPeeringOutcome CreateTransitGatewayPeering(const Model::CreateTransitGatewayPeeringRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayPeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayPeeringOutcomeCallable CreateTransitGatewayPeeringCallable(const Model::CreateTransitGatewayPeeringRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayPeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayPeeringAsync(const Model::CreateTransitGatewayPeeringRequest& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a transit gateway route table attachment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableAttachmentOutcome CreateTransitGatewayRouteTableAttachment(const Model::CreateTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayRouteTableAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayRouteTableAttachmentOutcomeCallable CreateTransitGatewayRouteTableAttachmentCallable(const Model::CreateTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayRouteTableAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayRouteTableAttachmentAsync(const Model::CreateTransitGatewayRouteTableAttachmentRequest& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC attachment on an edge location of a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcAttachmentOutcome CreateVpcAttachment(const Model::CreateVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcAttachmentOutcomeCallable CreateVpcAttachmentCallable(const Model::CreateVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcAttachmentAsync(const Model::CreateVpcAttachmentRequest& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an attachment. Supports all attachment types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttachmentOutcome DeleteAttachment(const Model::DeleteAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttachmentOutcomeCallable DeleteAttachmentCallable(const Model::DeleteAttachmentRequest& request) const;

        /**
         * An Async wrapper for DeleteAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttachmentAsync(const Model::DeleteAttachmentRequest& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Connect peer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectPeerOutcome DeleteConnectPeer(const Model::DeleteConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectPeerOutcomeCallable DeleteConnectPeerCallable(const Model::DeleteConnectPeerRequest& request) const;

        /**
         * An Async wrapper for DeleteConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectPeerAsync(const Model::DeleteConnectPeerRequest& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified connection in your global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a core network along with all core network policies. This can only be
         * done if there are no attachments on a core network.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkOutcome DeleteCoreNetwork(const Model::DeleteCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoreNetworkOutcomeCallable DeleteCoreNetworkCallable(const Model::DeleteCoreNetworkRequest& request) const;

        /**
         * An Async wrapper for DeleteCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoreNetworkAsync(const Model::DeleteCoreNetworkRequest& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a policy version from a core network. You can't delete the current
         * LIVE policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkPolicyVersionOutcome DeleteCoreNetworkPolicyVersion(const Model::DeleteCoreNetworkPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreNetworkPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoreNetworkPolicyVersionOutcomeCallable DeleteCoreNetworkPolicyVersionCallable(const Model::DeleteCoreNetworkPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteCoreNetworkPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoreNetworkPolicyVersionAsync(const Model::DeleteCoreNetworkPolicyVersionRequest& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites), deregister all transit gateways, and delete
         * any core networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalNetworkOutcome DeleteGlobalNetwork(const Model::DeleteGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGlobalNetworkOutcomeCallable DeleteGlobalNetworkCallable(const Model::DeleteGlobalNetworkRequest& request) const;

        /**
         * An Async wrapper for DeleteGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGlobalNetworkAsync(const Model::DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLinkOutcomeCallable DeleteLinkCallable(const Model::DeleteLinkRequest& request) const;

        /**
         * An Async wrapper for DeleteLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLinkAsync(const Model::DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeletePeering">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePeeringOutcome DeletePeering(const Model::DeletePeeringRequest& request) const;

        /**
         * A Callable wrapper for DeletePeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePeeringOutcomeCallable DeletePeeringCallable(const Model::DeletePeeringRequest& request) const;

        /**
         * An Async wrapper for DeletePeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePeeringAsync(const Model::DeletePeeringRequest& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource policy for the specified resource. This revokes the access
         * of the principals specified in the resource policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const Model::DeleteSiteRequest& request) const;

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSiteAsync(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayOutcome DeregisterTransitGateway(const Model::DeregisterTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTransitGatewayOutcomeCallable DeregisterTransitGatewayCallable(const Model::DeregisterTransitGatewayRequest& request) const;

        /**
         * An Async wrapper for DeregisterTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTransitGatewayAsync(const Model::DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more global networks. By default, all global networks are
         * described. To describe the objects in your global network, you must use the
         * appropriate <code>Get*</code> action. For example, to list the transit gateways
         * in your global network, use <a>GetTransitGatewayRegistrations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DescribeGlobalNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalNetworksOutcome DescribeGlobalNetworks(const Model::DescribeGlobalNetworksRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalNetworksOutcomeCallable DescribeGlobalNetworksCallable(const Model::DescribeGlobalNetworksRequest& request) const;

        /**
         * An Async wrapper for DescribeGlobalNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalNetworksAsync(const Model::DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a core network Connect peer from a device and a link.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectPeerOutcome DisassociateConnectPeer(const Model::DisassociateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectPeerOutcomeCallable DisassociateConnectPeerCallable(const Model::DisassociateConnectPeerRequest& request) const;

        /**
         * An Async wrapper for DisassociateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectPeerAsync(const Model::DisassociateConnectPeerRequest& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCustomerGatewayOutcome DisassociateCustomerGateway(const Model::DisassociateCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for DisassociateCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCustomerGatewayOutcomeCallable DisassociateCustomerGatewayCallable(const Model::DisassociateCustomerGatewayRequest& request) const;

        /**
         * An Async wrapper for DisassociateCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCustomerGatewayAsync(const Model::DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLinkOutcome DisassociateLink(const Model::DisassociateLinkRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLinkOutcomeCallable DisassociateLinkCallable(const Model::DisassociateLinkRequest& request) const;

        /**
         * An Async wrapper for DisassociateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLinkAsync(const Model::DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a transit gateway Connect peer from a device and
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayConnectPeerOutcome DisassociateTransitGatewayConnectPeer(const Model::DisassociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTransitGatewayConnectPeerOutcomeCallable DisassociateTransitGatewayConnectPeerCallable(const Model::DisassociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * An Async wrapper for DisassociateTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTransitGatewayConnectPeerAsync(const Model::DisassociateTransitGatewayConnectPeerRequest& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes a change set on your core network. Deploys changes globally based on
         * the policy submitted..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ExecuteCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteCoreNetworkChangeSetOutcome ExecuteCoreNetworkChangeSet(const Model::ExecuteCoreNetworkChangeSetRequest& request) const;

        /**
         * A Callable wrapper for ExecuteCoreNetworkChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteCoreNetworkChangeSetOutcomeCallable ExecuteCoreNetworkChangeSetCallable(const Model::ExecuteCoreNetworkChangeSetRequest& request) const;

        /**
         * An Async wrapper for ExecuteCoreNetworkChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteCoreNetworkChangeSetAsync(const Model::ExecuteCoreNetworkChangeSetRequest& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a core network Connect attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectAttachmentOutcome GetConnectAttachment(const Model::GetConnectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetConnectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectAttachmentOutcomeCallable GetConnectAttachmentCallable(const Model::GetConnectAttachmentRequest& request) const;

        /**
         * An Async wrapper for GetConnectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectAttachmentAsync(const Model::GetConnectAttachmentRequest& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a core network Connect peer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerOutcome GetConnectPeer(const Model::GetConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for GetConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectPeerOutcomeCallable GetConnectPeerCallable(const Model::GetConnectPeerRequest& request) const;

        /**
         * An Async wrapper for GetConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectPeerAsync(const Model::GetConnectPeerRequest& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a core network Connect peer
         * associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerAssociationsOutcome GetConnectPeerAssociations(const Model::GetConnectPeerAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetConnectPeerAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectPeerAssociationsOutcomeCallable GetConnectPeerAssociationsCallable(const Model::GetConnectPeerAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetConnectPeerAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectPeerAssociationsAsync(const Model::GetConnectPeerAssociationsRequest& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your connections in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;

        /**
         * A Callable wrapper for GetConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionsOutcomeCallable GetConnectionsCallable(const Model::GetConnectionsRequest& request) const;

        /**
         * An Async wrapper for GetConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionsAsync(const Model::GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the LIVE policy for a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkOutcome GetCoreNetwork(const Model::GetCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreNetworkOutcomeCallable GetCoreNetworkCallable(const Model::GetCoreNetworkRequest& request) const;

        /**
         * An Async wrapper for GetCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreNetworkAsync(const Model::GetCoreNetworkRequest& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a core network change event.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeEventsOutcome GetCoreNetworkChangeEvents(const Model::GetCoreNetworkChangeEventsRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkChangeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreNetworkChangeEventsOutcomeCallable GetCoreNetworkChangeEventsCallable(const Model::GetCoreNetworkChangeEventsRequest& request) const;

        /**
         * An Async wrapper for GetCoreNetworkChangeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreNetworkChangeEventsAsync(const Model::GetCoreNetworkChangeEventsRequest& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a change set between the LIVE core network policy and a submitted
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeSetOutcome GetCoreNetworkChangeSet(const Model::GetCoreNetworkChangeSetRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreNetworkChangeSetOutcomeCallable GetCoreNetworkChangeSetCallable(const Model::GetCoreNetworkChangeSetRequest& request) const;

        /**
         * An Async wrapper for GetCoreNetworkChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreNetworkChangeSetAsync(const Model::GetCoreNetworkChangeSetRequest& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a core network policy. You can get details about your
         * current live policy or any previous policy version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkPolicyOutcome GetCoreNetworkPolicy(const Model::GetCoreNetworkPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreNetworkPolicyOutcomeCallable GetCoreNetworkPolicyCallable(const Model::GetCoreNetworkPolicyRequest& request) const;

        /**
         * An Async wrapper for GetCoreNetworkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreNetworkPolicyAsync(const Model::GetCoreNetworkPolicyRequest& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomerGatewayAssociationsOutcome GetCustomerGatewayAssociations(const Model::GetCustomerGatewayAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetCustomerGatewayAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomerGatewayAssociationsOutcomeCallable GetCustomerGatewayAssociationsCallable(const Model::GetCustomerGatewayAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetCustomerGatewayAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomerGatewayAssociationsAsync(const Model::GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesOutcome GetDevices(const Model::GetDevicesRequest& request) const;

        /**
         * A Callable wrapper for GetDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request) const;

        /**
         * An Async wrapper for GetDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAssociationsOutcome GetLinkAssociations(const Model::GetLinkAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetLinkAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLinkAssociationsOutcomeCallable GetLinkAssociationsCallable(const Model::GetLinkAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetLinkAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLinkAssociationsAsync(const Model::GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more links in a specified global network.</p>
         * <p>If you specify the site ID, you cannot specify the type or provider in the
         * same request. You can specify the type and provider in the same
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinksOutcome GetLinks(const Model::GetLinksRequest& request) const;

        /**
         * A Callable wrapper for GetLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLinksOutcomeCallable GetLinksCallable(const Model::GetLinksRequest& request) const;

        /**
         * An Async wrapper for GetLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLinksAsync(const Model::GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the count of network resources, by resource type, for the specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceCountsOutcome GetNetworkResourceCounts(const Model::GetNetworkResourceCountsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResourceCounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkResourceCountsOutcomeCallable GetNetworkResourceCountsCallable(const Model::GetNetworkResourceCountsRequest& request) const;

        /**
         * An Async wrapper for GetNetworkResourceCounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkResourceCountsAsync(const Model::GetNetworkResourceCountsRequest& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network resource relationships for the specified global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceRelationships">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceRelationshipsOutcome GetNetworkResourceRelationships(const Model::GetNetworkResourceRelationshipsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResourceRelationships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkResourceRelationshipsOutcomeCallable GetNetworkResourceRelationshipsCallable(const Model::GetNetworkResourceRelationshipsRequest& request) const;

        /**
         * An Async wrapper for GetNetworkResourceRelationships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkResourceRelationshipsAsync(const Model::GetNetworkResourceRelationshipsRequest& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the network resources for the specified global network.</p> <p>The
         * results include information from the corresponding Describe call for the
         * resource, minus any sensitive information such as pre-shared keys.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourcesOutcome GetNetworkResources(const Model::GetNetworkResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkResourcesOutcomeCallable GetNetworkResourcesCallable(const Model::GetNetworkResourcesRequest& request) const;

        /**
         * An Async wrapper for GetNetworkResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkResourcesAsync(const Model::GetNetworkResourcesRequest& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network routes of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkRoutesOutcome GetNetworkRoutes(const Model::GetNetworkRoutesRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkRoutesOutcomeCallable GetNetworkRoutesCallable(const Model::GetNetworkRoutesRequest& request) const;

        /**
         * An Async wrapper for GetNetworkRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkRoutesAsync(const Model::GetNetworkRoutesRequest& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network telemetry of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkTelemetry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkTelemetryOutcome GetNetworkTelemetry(const Model::GetNetworkTelemetryRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkTelemetry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkTelemetryOutcomeCallable GetNetworkTelemetryCallable(const Model::GetNetworkTelemetryRequest& request) const;

        /**
         * An Async wrapper for GetNetworkTelemetry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkTelemetryAsync(const Model::GetNetworkTelemetryRequest& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified route analysis.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetRouteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteAnalysisOutcome GetRouteAnalysis(const Model::GetRouteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for GetRouteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRouteAnalysisOutcomeCallable GetRouteAnalysisCallable(const Model::GetRouteAnalysisRequest& request) const;

        /**
         * An Async wrapper for GetRouteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRouteAnalysisAsync(const Model::GetRouteAnalysisRequest& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a site-to-site VPN attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteToSiteVpnAttachmentOutcome GetSiteToSiteVpnAttachment(const Model::GetSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetSiteToSiteVpnAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSiteToSiteVpnAttachmentOutcomeCallable GetSiteToSiteVpnAttachmentCallable(const Model::GetSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * An Async wrapper for GetSiteToSiteVpnAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSiteToSiteVpnAttachmentAsync(const Model::GetSiteToSiteVpnAttachmentRequest& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSitesOutcome GetSites(const Model::GetSitesRequest& request) const;

        /**
         * A Callable wrapper for GetSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSitesOutcomeCallable GetSitesCallable(const Model::GetSitesRequest& request) const;

        /**
         * An Async wrapper for GetSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSitesAsync(const Model::GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your transit gateway Connect peer
         * associations in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayConnectPeerAssociationsOutcome GetTransitGatewayConnectPeerAssociations(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayConnectPeerAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayConnectPeerAssociationsOutcomeCallable GetTransitGatewayConnectPeerAssociationsCallable(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayConnectPeerAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayConnectPeerAssociationsAsync(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transit gateway peer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPeeringOutcome GetTransitGatewayPeering(const Model::GetTransitGatewayPeeringRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayPeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayPeeringOutcomeCallable GetTransitGatewayPeeringCallable(const Model::GetTransitGatewayPeeringRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayPeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayPeeringAsync(const Model::GetTransitGatewayPeeringRequest& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRegistrationsOutcome GetTransitGatewayRegistrations(const Model::GetTransitGatewayRegistrationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayRegistrationsOutcomeCallable GetTransitGatewayRegistrationsCallable(const Model::GetTransitGatewayRegistrationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayRegistrationsAsync(const Model::GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transit gateway route table
         * attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTableAttachmentOutcome GetTransitGatewayRouteTableAttachment(const Model::GetTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRouteTableAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayRouteTableAttachmentOutcomeCallable GetTransitGatewayRouteTableAttachmentCallable(const Model::GetTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayRouteTableAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayRouteTableAttachmentAsync(const Model::GetTransitGatewayRouteTableAttachmentRequest& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcAttachmentOutcome GetVpcAttachment(const Model::GetVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVpcAttachmentOutcomeCallable GetVpcAttachmentCallable(const Model::GetVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for GetVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpcAttachmentAsync(const Model::GetVpcAttachmentRequest& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of core network attachments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachmentsOutcome ListAttachments(const Model::ListAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachmentsOutcomeCallable ListAttachmentsCallable(const Model::ListAttachmentsRequest& request) const;

        /**
         * An Async wrapper for ListAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachmentsAsync(const Model::ListAttachmentsRequest& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of core network Connect peers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListConnectPeers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectPeersOutcome ListConnectPeers(const Model::ListConnectPeersRequest& request) const;

        /**
         * A Callable wrapper for ListConnectPeers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectPeersOutcomeCallable ListConnectPeersCallable(const Model::ListConnectPeersRequest& request) const;

        /**
         * An Async wrapper for ListConnectPeers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectPeersAsync(const Model::ListConnectPeersRequest& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of core network policy versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworkPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworkPolicyVersionsOutcome ListCoreNetworkPolicyVersions(const Model::ListCoreNetworkPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreNetworkPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreNetworkPolicyVersionsOutcomeCallable ListCoreNetworkPolicyVersionsCallable(const Model::ListCoreNetworkPolicyVersionsRequest& request) const;

        /**
         * An Async wrapper for ListCoreNetworkPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreNetworkPolicyVersionsAsync(const Model::ListCoreNetworkPolicyVersionsRequest& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of owned and shared core networks.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworksOutcome ListCoreNetworks(const Model::ListCoreNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListCoreNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreNetworksOutcomeCallable ListCoreNetworksCallable(const Model::ListCoreNetworksRequest& request) const;

        /**
         * An Async wrapper for ListCoreNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreNetworksAsync(const Model::ListCoreNetworksRequest& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of the Service Linked Role (SLR) deployment for the accounts
         * in a given Amazon Web Services Organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListOrganizationServiceAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationServiceAccessStatusOutcome ListOrganizationServiceAccessStatus(const Model::ListOrganizationServiceAccessStatusRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationServiceAccessStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationServiceAccessStatusOutcomeCallable ListOrganizationServiceAccessStatusCallable(const Model::ListOrganizationServiceAccessStatusRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationServiceAccessStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationServiceAccessStatusAsync(const Model::ListOrganizationServiceAccessStatusRequest& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the peerings for a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListPeerings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPeeringsOutcome ListPeerings(const Model::ListPeeringsRequest& request) const;

        /**
         * A Callable wrapper for ListPeerings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPeeringsOutcomeCallable ListPeeringsCallable(const Model::ListPeeringsRequest& request) const;

        /**
         * An Async wrapper for ListPeerings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPeeringsAsync(const Model::ListPeeringsRequest& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
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
         * <p>Creates a new, immutable version of a core network policy. A subsequent
         * change set is created showing the differences between the LIVE policy and the
         * submitted policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCoreNetworkPolicyOutcome PutCoreNetworkPolicy(const Model::PutCoreNetworkPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutCoreNetworkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCoreNetworkPolicyOutcomeCallable PutCoreNetworkPolicyCallable(const Model::PutCoreNetworkPolicyRequest& request) const;

        /**
         * An Async wrapper for PutCoreNetworkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCoreNetworkPolicyAsync(const Model::PutCoreNetworkPolicyRequest& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a transit gateway in your global network. The transit gateway can
         * be in any Amazon Web Services Region, but it must be owned by the same Amazon
         * Web Services account that owns the global network. You cannot register a transit
         * gateway in more than one global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RegisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTransitGatewayOutcome RegisterTransitGateway(const Model::RegisterTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for RegisterTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTransitGatewayOutcomeCallable RegisterTransitGatewayCallable(const Model::RegisterTransitGatewayRequest& request) const;

        /**
         * An Async wrapper for RegisterTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTransitGatewayAsync(const Model::RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a core network attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RejectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectAttachmentOutcome RejectAttachment(const Model::RejectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for RejectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectAttachmentOutcomeCallable RejectAttachmentCallable(const Model::RejectAttachmentRequest& request) const;

        /**
         * An Async wrapper for RejectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectAttachmentAsync(const Model::RejectAttachmentRequest& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a previous policy version as a new, immutable version of a core
         * network policy. A subsequent change set is created showing the differences
         * between the LIVE policy and restored policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RestoreCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreCoreNetworkPolicyVersionOutcome RestoreCoreNetworkPolicyVersion(const Model::RestoreCoreNetworkPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for RestoreCoreNetworkPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreCoreNetworkPolicyVersionOutcomeCallable RestoreCoreNetworkPolicyVersionCallable(const Model::RestoreCoreNetworkPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for RestoreCoreNetworkPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreCoreNetworkPolicyVersionAsync(const Model::RestoreCoreNetworkPolicyVersionRequest& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Network Manager service for an Amazon Web Services Organization.
         * This can only be called by a management account within the organization.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/StartOrganizationServiceAccessUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOrganizationServiceAccessUpdateOutcome StartOrganizationServiceAccessUpdate(const Model::StartOrganizationServiceAccessUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartOrganizationServiceAccessUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOrganizationServiceAccessUpdateOutcomeCallable StartOrganizationServiceAccessUpdateCallable(const Model::StartOrganizationServiceAccessUpdateRequest& request) const;

        /**
         * An Async wrapper for StartOrganizationServiceAccessUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOrganizationServiceAccessUpdateAsync(const Model::StartOrganizationServiceAccessUpdateRequest& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts analyzing the routing path between the specified source and
         * destination. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/route-analyzer.html">Route
         * Analyzer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/StartRouteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRouteAnalysisOutcome StartRouteAnalysis(const Model::StartRouteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartRouteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRouteAnalysisOutcomeCallable StartRouteAnalysisCallable(const Model::StartRouteAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartRouteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRouteAnalysisAsync(const Model::StartRouteAnalysisRequest& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
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
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
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
         * <p>Updates the information for an existing connection. To remove information for
         * any of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const Model::UpdateConnectionRequest& request) const;

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreNetworkOutcome UpdateCoreNetwork(const Model::UpdateCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCoreNetworkOutcomeCallable UpdateCoreNetworkCallable(const Model::UpdateCoreNetworkRequest& request) const;

        /**
         * An Async wrapper for UpdateCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCoreNetworkAsync(const Model::UpdateCoreNetworkRequest& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request) const;

        /**
         * An Async wrapper for UpdateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalNetworkOutcome UpdateGlobalNetwork(const Model::UpdateGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalNetworkOutcomeCallable UpdateGlobalNetworkCallable(const Model::UpdateGlobalNetworkRequest& request) const;

        /**
         * An Async wrapper for UpdateGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalNetworkAsync(const Model::UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLinkOutcomeCallable UpdateLinkCallable(const Model::UpdateLinkRequest& request) const;

        /**
         * An Async wrapper for UpdateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLinkAsync(const Model::UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource metadata for the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateNetworkResourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkResourceMetadataOutcome UpdateNetworkResourceMetadata(const Model::UpdateNetworkResourceMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkResourceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkResourceMetadataOutcomeCallable UpdateNetworkResourceMetadataCallable(const Model::UpdateNetworkResourceMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkResourceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkResourceMetadataAsync(const Model::UpdateNetworkResourceMetadataRequest& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const Model::UpdateSiteRequest& request) const;

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteAsync(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcAttachmentOutcome UpdateVpcAttachment(const Model::UpdateVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVpcAttachmentOutcomeCallable UpdateVpcAttachmentCallable(const Model::UpdateVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for UpdateVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVpcAttachmentAsync(const Model::UpdateVpcAttachmentRequest& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkManagerClient>;
      void init(const NetworkManagerClientConfiguration& clientConfiguration);

      NetworkManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NetworkManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkManager
} // namespace Aws
