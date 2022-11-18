/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>
#include <aws/networkmanager/NetworkManagerLegacyAsyncMacros.h>

namespace Aws
{
namespace NetworkManager
{
  /**
   * <p>Amazon Web Services enables you to centrally manage your Amazon Web Services
   * Cloud WAN core network and your Transit Gateway network across Amazon Web
   * Services accounts, Regions, and on-premises locations.</p>
   */
  class AWS_NETWORKMANAGER_API NetworkManagerClient : public Aws::Client::AWSJsonClient
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
         * <p>Accepts a core network attachment request. </p> <p>Once the attachment
         * request is accepted by a core network owner, the attachment is created and
         * connected to a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AcceptAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAttachmentOutcome AcceptAttachment(const Model::AcceptAttachmentRequest& request) const;


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
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLinkOutcome AssociateLink(const Model::AssociateLinkRequest& request) const;


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
         * <p>Creates a core network Connect peer for a specified core network connect
         * attachment between a core network and an appliance. The peer address and transit
         * gateway address must be the same IP address family (IPv4 or IPv6).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectPeerOutcome CreateConnectPeer(const Model::CreateConnectPeerRequest& request) const;


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
         * <p>Creates a core network as part of your global network, and optionally, with a
         * core network policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreNetworkOutcome CreateCoreNetwork(const Model::CreateCoreNetworkRequest& request) const;


        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest& request) const;


        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalNetworkOutcome CreateGlobalNetwork(const Model::CreateGlobalNetworkRequest& request) const;


        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;


        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;


        /**
         * <p>Creates an Amazon Web Services site-to-site VPN attachment on an edge
         * location of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteToSiteVpnAttachmentOutcome CreateSiteToSiteVpnAttachment(const Model::CreateSiteToSiteVpnAttachmentRequest& request) const;


        /**
         * <p>Creates a transit gateway peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPeeringOutcome CreateTransitGatewayPeering(const Model::CreateTransitGatewayPeeringRequest& request) const;


        /**
         * <p>Creates a transit gateway route table attachment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableAttachmentOutcome CreateTransitGatewayRouteTableAttachment(const Model::CreateTransitGatewayRouteTableAttachmentRequest& request) const;


        /**
         * <p>Creates a VPC attachment on an edge location of a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcAttachmentOutcome CreateVpcAttachment(const Model::CreateVpcAttachmentRequest& request) const;


        /**
         * <p>Deletes an attachment. Supports all attachment types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttachmentOutcome DeleteAttachment(const Model::DeleteAttachmentRequest& request) const;


        /**
         * <p>Deletes a Connect peer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectPeerOutcome DeleteConnectPeer(const Model::DeleteConnectPeerRequest& request) const;


        /**
         * <p>Deletes the specified connection in your global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;


        /**
         * <p>Deletes a core network along with all core network policies. This can only be
         * done if there are no attachments on a core network.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkOutcome DeleteCoreNetwork(const Model::DeleteCoreNetworkRequest& request) const;


        /**
         * <p>Deletes a policy version from a core network. You can't delete the current
         * LIVE policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkPolicyVersionOutcome DeleteCoreNetworkPolicyVersion(const Model::DeleteCoreNetworkPolicyVersionRequest& request) const;


        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;


        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites), deregister all transit gateways, and delete
         * any core networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalNetworkOutcome DeleteGlobalNetwork(const Model::DeleteGlobalNetworkRequest& request) const;


        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;


        /**
         * <p>Deletes an existing peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeletePeering">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePeeringOutcome DeletePeering(const Model::DeletePeeringRequest& request) const;


        /**
         * <p>Deletes a resource policy for the specified resource. This revokes the access
         * of the principals specified in the resource policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;


        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayOutcome DeregisterTransitGateway(const Model::DeregisterTransitGatewayRequest& request) const;


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
         * <p>Disassociates a core network Connect peer from a device and a link.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectPeerOutcome DisassociateConnectPeer(const Model::DisassociateConnectPeerRequest& request) const;


        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCustomerGatewayOutcome DisassociateCustomerGateway(const Model::DisassociateCustomerGatewayRequest& request) const;


        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLinkOutcome DisassociateLink(const Model::DisassociateLinkRequest& request) const;


        /**
         * <p>Disassociates a transit gateway Connect peer from a device and
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayConnectPeerOutcome DisassociateTransitGatewayConnectPeer(const Model::DisassociateTransitGatewayConnectPeerRequest& request) const;


        /**
         * <p>Executes a change set on your core network. Deploys changes globally based on
         * the policy submitted..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ExecuteCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteCoreNetworkChangeSetOutcome ExecuteCoreNetworkChangeSet(const Model::ExecuteCoreNetworkChangeSetRequest& request) const;


        /**
         * <p>Returns information about a core network Connect attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectAttachmentOutcome GetConnectAttachment(const Model::GetConnectAttachmentRequest& request) const;


        /**
         * <p>Returns information about a core network Connect peer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerOutcome GetConnectPeer(const Model::GetConnectPeerRequest& request) const;


        /**
         * <p>Returns information about a core network Connect peer
         * associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerAssociationsOutcome GetConnectPeerAssociations(const Model::GetConnectPeerAssociationsRequest& request) const;


        /**
         * <p>Gets information about one or more of your connections in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;


        /**
         * <p>Returns information about the LIVE policy for a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkOutcome GetCoreNetwork(const Model::GetCoreNetworkRequest& request) const;


        /**
         * <p>Returns information about a core network change event.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeEventsOutcome GetCoreNetworkChangeEvents(const Model::GetCoreNetworkChangeEventsRequest& request) const;


        /**
         * <p>Returns a change set between the LIVE core network policy and a submitted
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeSetOutcome GetCoreNetworkChangeSet(const Model::GetCoreNetworkChangeSetRequest& request) const;


        /**
         * <p>Returns details about a core network policy. You can get details about your
         * current live policy or any previous policy version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkPolicyOutcome GetCoreNetworkPolicy(const Model::GetCoreNetworkPolicyRequest& request) const;


        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomerGatewayAssociationsOutcome GetCustomerGatewayAssociations(const Model::GetCustomerGatewayAssociationsRequest& request) const;


        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesOutcome GetDevices(const Model::GetDevicesRequest& request) const;


        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAssociationsOutcome GetLinkAssociations(const Model::GetLinkAssociationsRequest& request) const;


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
         * <p>Gets the count of network resources, by resource type, for the specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceCountsOutcome GetNetworkResourceCounts(const Model::GetNetworkResourceCountsRequest& request) const;


        /**
         * <p>Gets the network resource relationships for the specified global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceRelationships">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceRelationshipsOutcome GetNetworkResourceRelationships(const Model::GetNetworkResourceRelationshipsRequest& request) const;


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
         * <p>Gets the network routes of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkRoutesOutcome GetNetworkRoutes(const Model::GetNetworkRoutesRequest& request) const;


        /**
         * <p>Gets the network telemetry of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkTelemetry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkTelemetryOutcome GetNetworkTelemetry(const Model::GetNetworkTelemetryRequest& request) const;


        /**
         * <p>Returns information about a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p>Gets information about the specified route analysis.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetRouteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteAnalysisOutcome GetRouteAnalysis(const Model::GetRouteAnalysisRequest& request) const;


        /**
         * <p>Returns information about a site-to-site VPN attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteToSiteVpnAttachmentOutcome GetSiteToSiteVpnAttachment(const Model::GetSiteToSiteVpnAttachmentRequest& request) const;


        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSitesOutcome GetSites(const Model::GetSitesRequest& request) const;


        /**
         * <p>Gets information about one or more of your transit gateway Connect peer
         * associations in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayConnectPeerAssociationsOutcome GetTransitGatewayConnectPeerAssociations(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request) const;


        /**
         * <p>Returns information about a transit gateway peer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPeeringOutcome GetTransitGatewayPeering(const Model::GetTransitGatewayPeeringRequest& request) const;


        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRegistrationsOutcome GetTransitGatewayRegistrations(const Model::GetTransitGatewayRegistrationsRequest& request) const;


        /**
         * <p>Returns information about a transit gateway route table
         * attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTableAttachmentOutcome GetTransitGatewayRouteTableAttachment(const Model::GetTransitGatewayRouteTableAttachmentRequest& request) const;


        /**
         * <p>Returns information about a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcAttachmentOutcome GetVpcAttachment(const Model::GetVpcAttachmentRequest& request) const;


        /**
         * <p>Returns a list of core network attachments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachmentsOutcome ListAttachments(const Model::ListAttachmentsRequest& request) const;


        /**
         * <p>Returns a list of core network Connect peers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListConnectPeers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectPeersOutcome ListConnectPeers(const Model::ListConnectPeersRequest& request) const;


        /**
         * <p>Returns a list of core network policy versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworkPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworkPolicyVersionsOutcome ListCoreNetworkPolicyVersions(const Model::ListCoreNetworkPolicyVersionsRequest& request) const;


        /**
         * <p>Returns a list of owned and shared core networks.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworksOutcome ListCoreNetworks(const Model::ListCoreNetworksRequest& request) const;


        /**
         * <p>Gets the status of the Service Linked Role (SLR) deployment for the accounts
         * in a given Amazon Web Services Organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListOrganizationServiceAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationServiceAccessStatusOutcome ListOrganizationServiceAccessStatus(const Model::ListOrganizationServiceAccessStatusRequest& request) const;


        /**
         * <p>Lists the peerings for a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListPeerings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPeeringsOutcome ListPeerings(const Model::ListPeeringsRequest& request) const;


        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Creates a new, immutable version of a core network policy. A subsequent
         * change set is created showing the differences between the LIVE policy and the
         * submitted policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCoreNetworkPolicyOutcome PutCoreNetworkPolicy(const Model::PutCoreNetworkPolicyRequest& request) const;


        /**
         * <p>Creates or updates a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


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
         * <p>Rejects a core network attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RejectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectAttachmentOutcome RejectAttachment(const Model::RejectAttachmentRequest& request) const;


        /**
         * <p>Restores a previous policy version as a new, immutable version of a core
         * network policy. A subsequent change set is created showing the differences
         * between the LIVE policy and restored policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RestoreCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreCoreNetworkPolicyVersionOutcome RestoreCoreNetworkPolicyVersion(const Model::RestoreCoreNetworkPolicyVersionRequest& request) const;


        /**
         * <p>Enables for the Network Manager service for an Amazon Web Services
         * Organization. This can only be called by a management account within the
         * organization. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/StartOrganizationServiceAccessUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOrganizationServiceAccessUpdateOutcome StartOrganizationServiceAccessUpdate(const Model::StartOrganizationServiceAccessUpdateRequest& request) const;


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
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the information for an existing connection. To remove information for
         * any of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;


        /**
         * <p>Updates the description of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreNetworkOutcome UpdateCoreNetwork(const Model::UpdateCoreNetworkRequest& request) const;


        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;


        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalNetworkOutcome UpdateGlobalNetwork(const Model::UpdateGlobalNetworkRequest& request) const;


        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;


        /**
         * <p>Updates the resource metadata for the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateNetworkResourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkResourceMetadataOutcome UpdateNetworkResourceMetadata(const Model::UpdateNetworkResourceMetadataRequest& request) const;


        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;


        /**
         * <p>Updates a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcAttachmentOutcome UpdateVpcAttachment(const Model::UpdateVpcAttachmentRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const NetworkManagerClientConfiguration& clientConfiguration);

      NetworkManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NetworkManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkManager
} // namespace Aws
