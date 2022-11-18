/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/DirectConnectServiceClientModel.h>
#include <aws/directconnect/DirectConnectLegacyAsyncMacros.h>

namespace Aws
{
namespace DirectConnect
{
  /**
   * <p>Direct Connect links your internal network to an Direct Connect location over
   * a standard Ethernet fiber-optic cable. One end of the cable is connected to your
   * router, the other to an Direct Connect router. With this connection in place,
   * you can create virtual interfaces directly to the Amazon Web Services Cloud (for
   * example, to Amazon EC2 and Amazon S3) and to Amazon VPC, bypassing Internet
   * service providers in your network path. A connection provides access to all
   * Amazon Web Services Regions except the China (Beijing) and (China) Ningxia
   * Regions. Amazon Web Services resources in the China Regions can only be accessed
   * through locations associated with those Regions.</p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::DirectConnect::DirectConnectClientConfiguration& clientConfiguration = Aws::DirectConnect::DirectConnectClientConfiguration(),
                            std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG),
                            const Aws::DirectConnect::DirectConnectClientConfiguration& clientConfiguration = Aws::DirectConnect::DirectConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG),
                            const Aws::DirectConnect::DirectConnectClientConfiguration& clientConfiguration = Aws::DirectConnect::DirectConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DirectConnectClient();


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
         * <p>Accepts a proposal request to attach a virtual private gateway or transit
         * gateway to a Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AcceptDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptDirectConnectGatewayAssociationProposalOutcome AcceptDirectConnectGatewayAssociationProposal(const Model::AcceptDirectConnectGatewayAssociationProposalRequest& request) const;


        /**
         * <p>Creates a hosted connection on the specified interconnect or a link
         * aggregation group (LAG) of interconnects.</p> <p>Allocates a VLAN number and a
         * specified amount of capacity (bandwidth) for use by a hosted connection on the
         * specified interconnect or LAG of interconnects. Amazon Web Services polices the
         * hosted connection for the specified capacity and the Direct Connect Partner must
         * also police the hosted connection for the specified capacity.</p> 
         * <p>Intended for use by Direct Connect Partners only.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostedConnectionOutcome AllocateHostedConnection(const Model::AllocateHostedConnectionRequest& request) const;


        /**
         * <p>Provisions a private virtual interface to be owned by the specified Amazon
         * Web Services account.</p> <p>Virtual interfaces created using this action must
         * be confirmed by the owner using <a>ConfirmPrivateVirtualInterface</a>. Until
         * then, the virtual interface is in the <code>Confirming</code> state and is not
         * available to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcome AllocatePrivateVirtualInterface(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;


        /**
         * <p>Provisions a public virtual interface to be owned by the specified Amazon Web
         * Services account.</p> <p>The owner of a connection calls this function to
         * provision a public virtual interface to be owned by the specified Amazon Web
         * Services account.</p> <p>Virtual interfaces created using this function must be
         * confirmed by the owner using <a>ConfirmPublicVirtualInterface</a>. Until this
         * step has been completed, the virtual interface is in the <code>confirming</code>
         * state and is not available to handle traffic.</p> <p>When creating an IPv6
         * public virtual interface, omit the Amazon address and customer address. IPv6
         * addresses are automatically assigned from the Amazon pool of IPv6 addresses; you
         * cannot specify custom IPv6 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcome AllocatePublicVirtualInterface(const Model::AllocatePublicVirtualInterfaceRequest& request) const;


        /**
         * <p>Provisions a transit virtual interface to be owned by the specified Amazon
         * Web Services account. Use this type of interface to connect a transit gateway to
         * your Direct Connect gateway.</p> <p>The owner of a connection provisions a
         * transit virtual interface to be owned by the specified Amazon Web Services
         * account.</p> <p>After you create a transit virtual interface, it must be
         * confirmed by the owner using <a>ConfirmTransitVirtualInterface</a>. Until this
         * step has been completed, the transit virtual interface is in the
         * <code>requested</code> state and is not available to handle
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateTransitVirtualInterfaceOutcome AllocateTransitVirtualInterface(const Model::AllocateTransitVirtualInterfaceRequest& request) const;


        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to Amazon Web Services is interrupted). The connection must be
         * hosted on the same Direct Connect endpoint as the LAG, and its bandwidth must
         * match the bandwidth for the LAG. You can re-associate a connection that's
         * currently associated with a different LAG; however, if removing the connection
         * would cause the original LAG to fall below its setting for minimum number of
         * operational connections, the request fails.</p> <p>Any virtual interfaces that
         * are directly associated with the connection are automatically re-associated with
         * the LAG. If the connection was originally associated with a different LAG, the
         * virtual interfaces remain associated with the original LAG.</p> <p>For
         * interconnects, any hosted connections are automatically re-associated with the
         * LAG. If the interconnect was originally associated with a different LAG, the
         * hosted connections remain associated with the original LAG.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionWithLagOutcome AssociateConnectionWithLag(const Model::AssociateConnectionWithLagRequest& request) const;


        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to Amazon Web Services as it is being migrated.</p> 
         * <p>Intended for use by Direct Connect Partners only.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateHostedConnectionOutcome AssociateHostedConnection(const Model::AssociateHostedConnectionRequest& request) const;


        /**
         * <p>Associates a MAC Security (MACsec) Connection Key Name (CKN)/ Connectivity
         * Association Key (CAK) pair with an Direct Connect dedicated connection.</p>
         * <p>You must supply either the <code>secretARN,</code> or the CKN/CAK
         * (<code>ckn</code> and <code>cak</code>) pair in the request.</p> <p>For
         * information about MAC Security (MACsec) key considerations, see <a
         * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/direct-connect-mac-sec-getting-started.html#mac-sec-key-consideration">MACsec
         * pre-shared CKN/CAK key considerations </a> in the <i>Direct Connect User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateMacSecKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMacSecKeyOutcome AssociateMacSecKey(const Model::AssociateMacSecKeyRequest& request) const;


        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to Amazon Web Services is temporarily interrupted as
         * the virtual interface is being migrated. If the target connection or LAG has an
         * associated virtual interface with a conflicting VLAN number or a conflicting IP
         * address, the operation fails.</p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>To reassociate a virtual interface to a new connection or LAG, the requester
         * must own either the virtual interface itself or the connection to which the
         * virtual interface is currently associated. Additionally, the requester must own
         * the connection or LAG for the association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVirtualInterfaceOutcome AssociateVirtualInterface(const Model::AssociateVirtualInterfaceRequest& request) const;


        /**
         * <p>Confirms the creation of the specified hosted connection on an
         * interconnect.</p> <p>Upon creation, the hosted connection is initially in the
         * <code>Ordering</code> state, and remains in this state until the owner confirms
         * creation of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmConnectionOutcome ConfirmConnection(const Model::ConfirmConnectionRequest& request) const;


        /**
         * <p> The confirmation of the terms of agreement when creating the connection/link
         * aggregation group (LAG). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmCustomerAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmCustomerAgreementOutcome ConfirmCustomerAgreement(const Model::ConfirmCustomerAgreementRequest& request) const;


        /**
         * <p>Accepts ownership of a private virtual interface created by another Amazon
         * Web Services account.</p> <p>After the virtual interface owner makes this call,
         * the virtual interface is created and attached to the specified virtual private
         * gateway or Direct Connect gateway, and is made available to handle
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcome ConfirmPrivateVirtualInterface(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;


        /**
         * <p>Accepts ownership of a public virtual interface created by another Amazon Web
         * Services account.</p> <p>After the virtual interface owner makes this call, the
         * specified virtual interface is created and made available to handle
         * traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcome ConfirmPublicVirtualInterface(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;


        /**
         * <p>Accepts ownership of a transit virtual interface created by another Amazon
         * Web Services account.</p> <p> After the owner of the transit virtual interface
         * makes this call, the specified transit virtual interface is created and made
         * available to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmTransitVirtualInterfaceOutcome ConfirmTransitVirtualInterface(const Model::ConfirmTransitVirtualInterfaceRequest& request) const;


        /**
         * <p>Creates a BGP peer on the specified virtual interface.</p> <p>You must create
         * a BGP peer for the corresponding address family (IPv4/IPv6) in order to access
         * Amazon Web Services resources that also use that address family.</p> <p>If
         * logical redundancy is not supported by the connection, interconnect, or LAG, the
         * BGP peer cannot be in the same address family as an existing BGP peer on the
         * virtual interface.</p> <p>When creating a IPv6 BGP peer, omit the Amazon address
         * and customer address. IPv6 addresses are automatically assigned from the Amazon
         * pool of IPv6 addresses; you cannot specify custom IPv6 addresses.</p> <p>For a
         * public virtual interface, the Autonomous System Number (ASN) must be private or
         * already on the allow list for the virtual interface.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBGPPeerOutcome CreateBGPPeer(const Model::CreateBGPPeerRequest& request) const;


        /**
         * <p>Creates a connection between a customer network and a specific Direct Connect
         * location.</p> <p>A connection links your internal network to an Direct Connect
         * location over a standard Ethernet fiber-optic cable. One end of the cable is
         * connected to your router, the other to an Direct Connect router.</p> <p>To find
         * the locations for your Region, use <a>DescribeLocations</a>.</p> <p>You can
         * automatically add the new connection to a link aggregation group (LAG) by
         * specifying a LAG ID in the request. This ensures that the new connection is
         * allocated on the same Direct Connect endpoint that hosts the specified LAG. If
         * there are no available ports on the endpoint, the request fails and no
         * connection is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;


        /**
         * <p>Creates a Direct Connect gateway, which is an intermediate object that
         * enables you to connect a set of virtual interfaces and virtual private gateways.
         * A Direct Connect gateway is global and visible in any Amazon Web Services Region
         * after it is created. The virtual interfaces and virtual private gateways that
         * are connected through a Direct Connect gateway can be in different Amazon Web
         * Services Regions. This enables you to connect to a VPC in any Region, regardless
         * of the Region in which the virtual interfaces are located, and pass traffic
         * between them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayOutcome CreateDirectConnectGateway(const Model::CreateDirectConnectGatewayRequest& request) const;


        /**
         * <p>Creates an association between a Direct Connect gateway and a virtual private
         * gateway. The virtual private gateway must be attached to a VPC and must not be
         * associated with another Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayAssociationOutcome CreateDirectConnectGatewayAssociation(const Model::CreateDirectConnectGatewayAssociationRequest& request) const;


        /**
         * <p>Creates a proposal to associate the specified virtual private gateway or
         * transit gateway with the specified Direct Connect gateway.</p> <p>You can
         * associate a Direct Connect gateway and virtual private gateway or transit
         * gateway that is owned by any Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayAssociationProposalOutcome CreateDirectConnectGatewayAssociationProposal(const Model::CreateDirectConnectGatewayAssociationProposalRequest& request) const;


        /**
         * <p>Creates an interconnect between an Direct Connect Partner's network and a
         * specific Direct Connect location.</p> <p>An interconnect is a connection that is
         * capable of hosting other connections. The Direct Connect Partner can use an
         * interconnect to provide Direct Connect hosted connections to customers through
         * their own network services. Like a standard connection, an interconnect links
         * the partner's network to an Direct Connect location over a standard Ethernet
         * fiber-optic cable. One end is connected to the partner's router, the other to an
         * Direct Connect router.</p> <p>You can automatically add the new interconnect to
         * a link aggregation group (LAG) by specifying a LAG ID in the request. This
         * ensures that the new interconnect is allocated on the same Direct Connect
         * endpoint that hosts the specified LAG. If there are no available ports on the
         * endpoint, the request fails and no interconnect is created.</p> <p>For each end
         * customer, the Direct Connect Partner provisions a connection on their
         * interconnect by calling <a>AllocateHostedConnection</a>. The end customer can
         * then connect to Amazon Web Services resources by creating a virtual interface on
         * their connection, using the VLAN assigned to them by the Direct Connect
         * Partner.</p>  <p>Intended for use by Direct Connect Partners only.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInterconnectOutcome CreateInterconnect(const Model::CreateInterconnectRequest& request) const;


        /**
         * <p>Creates a link aggregation group (LAG) with the specified number of bundled
         * physical dedicated connections between the customer network and a specific
         * Direct Connect location. A LAG is a logical interface that uses the Link
         * Aggregation Control Protocol (LACP) to aggregate multiple interfaces, enabling
         * you to treat them as a single interface.</p> <p>All connections in a LAG must
         * use the same bandwidth (either 1Gbps or 10Gbps) and must terminate at the same
         * Direct Connect endpoint.</p> <p>You can have up to 10 dedicated connections per
         * LAG. Regardless of this limit, if you request more connections for the LAG than
         * Direct Connect can allocate on a single endpoint, no LAG is created.</p> <p>You
         * can specify an existing physical dedicated connection or interconnect to include
         * in the LAG (which counts towards the total number of connections). Doing so
         * interrupts the current physical dedicated connection, and re-establishes them as
         * a member of the LAG. The LAG will be created on the same Direct Connect endpoint
         * to which the dedicated connection terminates. Any virtual interfaces associated
         * with the dedicated connection are automatically disassociated and re-associated
         * with the LAG. The connection ID does not change.</p> <p>If the Amazon Web
         * Services account used to create a LAG is a registered Direct Connect Partner,
         * the LAG is automatically enabled to host sub-connections. For a LAG owned by a
         * partner, any associated virtual interfaces cannot be directly
         * configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLagOutcome CreateLag(const Model::CreateLagRequest& request) const;


        /**
         * <p>Creates a private virtual interface. A virtual interface is the VLAN that
         * transports Direct Connect traffic. A private virtual interface can be connected
         * to either a Direct Connect gateway or a Virtual Private Gateway (VGW).
         * Connecting the private virtual interface to a Direct Connect gateway enables the
         * possibility for connecting to multiple VPCs, including VPCs in different Amazon
         * Web Services Regions. Connecting the private virtual interface to a VGW only
         * provides access to a single VPC within the same Region.</p> <p>Setting the MTU
         * of a virtual interface to 9001 (jumbo frames) can cause an update to the
         * underlying physical connection if it wasn't updated to support jumbo frames.
         * Updating the connection disrupts network connectivity for all virtual interfaces
         * associated with the connection for up to 30 seconds. To check whether your
         * connection supports jumbo frames, call <a>DescribeConnections</a>. To check
         * whether your virtual interface supports jumbo frames, call
         * <a>DescribeVirtualInterfaces</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcome CreatePrivateVirtualInterface(const Model::CreatePrivateVirtualInterfaceRequest& request) const;


        /**
         * <p>Creates a public virtual interface. A virtual interface is the VLAN that
         * transports Direct Connect traffic. A public virtual interface supports sending
         * traffic to public services of Amazon Web Services such as Amazon S3.</p> <p>When
         * creating an IPv6 public virtual interface (<code>addressFamily</code> is
         * <code>ipv6</code>), leave the <code>customer</code> and <code>amazon</code>
         * address fields blank to use auto-assigned IPv6 space. Custom IPv6 addresses are
         * not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicVirtualInterfaceOutcome CreatePublicVirtualInterface(const Model::CreatePublicVirtualInterfaceRequest& request) const;


        /**
         * <p>Creates a transit virtual interface. A transit virtual interface should be
         * used to access one or more transit gateways associated with Direct Connect
         * gateways. A transit virtual interface enables the connection of multiple VPCs
         * attached to a transit gateway to a Direct Connect gateway.</p>  <p>If
         * you associate your transit gateway with one or more Direct Connect gateways, the
         * Autonomous System Number (ASN) used by the transit gateway and the Direct
         * Connect gateway must be different. For example, if you use the default ASN 64512
         * for both your the transit gateway and Direct Connect gateway, the association
         * request fails.</p>  <p>Setting the MTU of a virtual interface to
         * 8500 (jumbo frames) can cause an update to the underlying physical connection if
         * it wasn't updated to support jumbo frames. Updating the connection disrupts
         * network connectivity for all virtual interfaces associated with the connection
         * for up to 30 seconds. To check whether your connection supports jumbo frames,
         * call <a>DescribeConnections</a>. To check whether your virtual interface
         * supports jumbo frames, call <a>DescribeVirtualInterfaces</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitVirtualInterfaceOutcome CreateTransitVirtualInterface(const Model::CreateTransitVirtualInterfaceRequest& request) const;


        /**
         * <p>Deletes the specified BGP peer on the specified virtual interface with the
         * specified customer address and ASN.</p> <p>You cannot delete the last BGP peer
         * from a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBGPPeerOutcome DeleteBGPPeer(const Model::DeleteBGPPeerRequest& request) const;


        /**
         * <p>Deletes the specified connection.</p> <p>Deleting a connection only stops the
         * Direct Connect port hour and data transfer charges. If you are partnering with
         * any third parties to connect with the Direct Connect location, you must cancel
         * your service with them separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;


        /**
         * <p>Deletes the specified Direct Connect gateway. You must first delete all
         * virtual interfaces that are attached to the Direct Connect gateway and
         * disassociate all virtual private gateways associated with the Direct Connect
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayOutcome DeleteDirectConnectGateway(const Model::DeleteDirectConnectGatewayRequest& request) const;


        /**
         * <p>Deletes the association between the specified Direct Connect gateway and
         * virtual private gateway.</p> <p>We recommend that you specify the
         * <code>associationID</code> to delete the association. Alternatively, if you own
         * virtual gateway and a Direct Connect gateway association, you can specify the
         * <code>virtualGatewayId</code> and <code>directConnectGatewayId</code> to delete
         * an association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayAssociationOutcome DeleteDirectConnectGatewayAssociation(const Model::DeleteDirectConnectGatewayAssociationRequest& request) const;


        /**
         * <p>Deletes the association proposal request between the specified Direct Connect
         * gateway and virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayAssociationProposalOutcome DeleteDirectConnectGatewayAssociationProposal(const Model::DeleteDirectConnectGatewayAssociationProposalRequest& request) const;


        /**
         * <p>Deletes the specified interconnect.</p>  <p>Intended for use by Direct
         * Connect Partners only.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInterconnectOutcome DeleteInterconnect(const Model::DeleteInterconnectRequest& request) const;


        /**
         * <p>Deletes the specified link aggregation group (LAG). You cannot delete a LAG
         * if it has active virtual interfaces or hosted connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLagOutcome DeleteLag(const Model::DeleteLagRequest& request) const;


        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualInterfaceOutcome DeleteVirtualInterface(const Model::DeleteVirtualInterfaceRequest& request) const;


        /**
         * <p>Displays the specified connection or all connections in this
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;


        /**
         * <p>Get and view a list of customer agreements, along with their signed status
         * and whether the customer is an NNIPartner, NNIPartnerV2, or a nonPartner.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeCustomerMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomerMetadataOutcome DescribeCustomerMetadata() const;

        /**
         * A Callable wrapper for DescribeCustomerMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomerMetadataOutcomeCallable DescribeCustomerMetadataCallable() const;

        /**
         * An Async wrapper for DescribeCustomerMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomerMetadataAsync(const DescribeCustomerMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes one or more association proposals for connection between a virtual
         * private gateway or transit gateway and a Direct Connect gateway. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationProposals">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAssociationProposalsOutcome DescribeDirectConnectGatewayAssociationProposals(const Model::DescribeDirectConnectGatewayAssociationProposalsRequest& request) const;


        /**
         * <p>Lists the associations between your Direct Connect gateways and virtual
         * private gateways and transit gateways. You must specify one of the
         * following:</p> <ul> <li> <p>A Direct Connect gateway</p> <p>The response
         * contains all virtual private gateways and transit gateways associated with the
         * Direct Connect gateway.</p> </li> <li> <p>A virtual private gateway</p> <p>The
         * response contains the Direct Connect gateway.</p> </li> <li> <p>A transit
         * gateway</p> <p>The response contains the Direct Connect gateway.</p> </li> <li>
         * <p>A Direct Connect gateway and a virtual private gateway</p> <p>The response
         * contains the association between the Direct Connect gateway and virtual private
         * gateway.</p> </li> <li> <p>A Direct Connect gateway and a transit gateway</p>
         * <p>The response contains the association between the Direct Connect gateway and
         * transit gateway.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAssociationsOutcome DescribeDirectConnectGatewayAssociations(const Model::DescribeDirectConnectGatewayAssociationsRequest& request) const;


        /**
         * <p>Lists the attachments between your Direct Connect gateways and virtual
         * interfaces. You must specify a Direct Connect gateway, a virtual interface, or
         * both. If you specify a Direct Connect gateway, the response contains all virtual
         * interfaces attached to the Direct Connect gateway. If you specify a virtual
         * interface, the response contains all Direct Connect gateways attached to the
         * virtual interface. If you specify both, the response contains the attachment
         * between the Direct Connect gateway and the virtual interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAttachmentsOutcome DescribeDirectConnectGatewayAttachments(const Model::DescribeDirectConnectGatewayAttachmentsRequest& request) const;


        /**
         * <p>Lists all your Direct Connect gateways or only the specified Direct Connect
         * gateway. Deleted Direct Connect gateways are not returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewaysOutcome DescribeDirectConnectGateways(const Model::DescribeDirectConnectGatewaysRequest& request) const;


        /**
         * <p>Lists the hosted connections that have been provisioned on the specified
         * interconnect or link aggregation group (LAG).</p>  <p>Intended for use by
         * Direct Connect Partners only.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostedConnectionsOutcome DescribeHostedConnections(const Model::DescribeHostedConnectionsRequest& request) const;


        /**
         * <p>Lists the interconnects owned by the Amazon Web Services account or only the
         * specified interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInterconnectsOutcome DescribeInterconnects(const Model::DescribeInterconnectsRequest& request) const;


        /**
         * <p>Describes all your link aggregation groups (LAG) or the specified
         * LAG.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLagsOutcome DescribeLags(const Model::DescribeLagsRequest& request) const;


        /**
         * <p>Gets the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to
         * Amazon Web Services at the colocation facility. For more information, see <a
         * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at Direct Connect Locations</a> in the <i>Direct Connect User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoaOutcome DescribeLoa(const Model::DescribeLoaRequest& request) const;


        /**
         * <p>Lists the Direct Connect locations in the current Amazon Web Services Region.
         * These are the locations that can be selected when calling
         * <a>CreateConnection</a> or <a>CreateInterconnect</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationsOutcome DescribeLocations() const;

        /**
         * A Callable wrapper for DescribeLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationsOutcomeCallable DescribeLocationsCallable() const;

        /**
         * An Async wrapper for DescribeLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p> Details about the router. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeRouterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouterConfigurationOutcome DescribeRouterConfiguration(const Model::DescribeRouterConfigurationRequest& request) const;


        /**
         * <p>Describes the tags associated with the specified Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;


        /**
         * <p>Lists the virtual private gateways owned by the Amazon Web Services
         * account.</p> <p>You can create one or more Direct Connect private virtual
         * interfaces linked to a virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewaysOutcome DescribeVirtualGateways() const;

        /**
         * A Callable wrapper for DescribeVirtualGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualGatewaysOutcomeCallable DescribeVirtualGatewaysCallable() const;

        /**
         * An Async wrapper for DescribeVirtualGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Displays all virtual interfaces for an Amazon Web Services account. Virtual
         * interfaces deleted fewer than 15 minutes before you make the request are also
         * returned. If you specify a connection ID, only the virtual interfaces associated
         * with the connection are returned. If you specify a virtual interface ID, then
         * only a single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the Direct Connect location and the customer
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualInterfacesOutcome DescribeVirtualInterfaces(const Model::DescribeVirtualInterfacesRequest& request) const;


        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an Direct Connect Partner is automatically converted to an
         * interconnect.</p> <p>If disassociating the connection would cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionFromLagOutcome DisassociateConnectionFromLag(const Model::DisassociateConnectionFromLagRequest& request) const;


        /**
         * <p>Removes the association between a MAC Security (MACsec) security key and an
         * Direct Connect dedicated connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateMacSecKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMacSecKeyOutcome DisassociateMacSecKey(const Model::DisassociateMacSecKeyRequest& request) const;


        /**
         * <p>Lists the virtual interface failover test history.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ListVirtualInterfaceTestHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualInterfaceTestHistoryOutcome ListVirtualInterfaceTestHistory(const Model::ListVirtualInterfaceTestHistoryRequest& request) const;


        /**
         * <p>Starts the virtual interface failover test that verifies your configuration
         * meets your resiliency requirements by placing the BGP peering session in the
         * DOWN state. You can then send traffic to verify that there are no outages.</p>
         * <p>You can run the test on public, private, transit, and hosted virtual
         * interfaces.</p> <p>You can use <a
         * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_ListVirtualInterfaceTestHistory.html">ListVirtualInterfaceTestHistory</a>
         * to view the virtual interface test history.</p> <p>If you need to stop the test
         * before the test interval completes, use <a
         * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_StopBgpFailoverTest.html">StopBgpFailoverTest</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/StartBgpFailoverTest">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBgpFailoverTestOutcome StartBgpFailoverTest(const Model::StartBgpFailoverTestRequest& request) const;


        /**
         * <p>Stops the virtual interface failover test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/StopBgpFailoverTest">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBgpFailoverTestOutcome StopBgpFailoverTest(const Model::StopBgpFailoverTestRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified Direct Connect resource. Each
         * resource can have a maximum of 50 tags.</p> <p>Each tag consists of a key and an
         * optional value. If a tag with the same key is already associated with the
         * resource, this action updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the Direct Connect dedicated connection configuration.</p> <p>You can
         * update the following parameters for a connection:</p> <ul> <li> <p>The
         * connection name</p> </li> <li> <p>The connection's MAC Security (MACsec)
         * encryption mode.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;


        /**
         * <p>Updates the name of a current Direct Connect gateway.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateDirectConnectGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectConnectGatewayOutcome UpdateDirectConnectGateway(const Model::UpdateDirectConnectGatewayRequest& request) const;


        /**
         * <p>Updates the specified attributes of the Direct Connect gateway
         * association.</p> <p>Add or remove prefixes from the association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectConnectGatewayAssociationOutcome UpdateDirectConnectGatewayAssociation(const Model::UpdateDirectConnectGatewayAssociationRequest& request) const;


        /**
         * <p>Updates the attributes of the specified link aggregation group (LAG).</p>
         * <p>You can update the following LAG attributes:</p> <ul> <li> <p>The name of the
         * LAG.</p> </li> <li> <p>The value for the minimum number of connections that must
         * be operational for the LAG itself to be operational. </p> </li> <li> <p>The
         * LAG's MACsec encryption mode.</p> <p>Amazon Web Services assigns this value to
         * each connection which is part of the LAG.</p> </li> <li> <p>The tags</p> </li>
         * </ul>  <p>If you adjust the threshold value for the minimum number of
         * operational connections, ensure that the new value does not cause the LAG to
         * fall below the threshold and become non-operational.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLagOutcome UpdateLag(const Model::UpdateLagRequest& request) const;


        /**
         * <p>Updates the specified attributes of the specified virtual private
         * interface.</p> <p>Setting the MTU of a virtual interface to 9001 (jumbo frames)
         * can cause an update to the underlying physical connection if it wasn't updated
         * to support jumbo frames. Updating the connection disrupts network connectivity
         * for all virtual interfaces associated with the connection for up to 30 seconds.
         * To check whether your connection supports jumbo frames, call
         * <a>DescribeConnections</a>. To check whether your virtual q interface supports
         * jumbo frames, call <a>DescribeVirtualInterfaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateVirtualInterfaceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualInterfaceAttributesOutcome UpdateVirtualInterfaceAttributes(const Model::UpdateVirtualInterfaceAttributesRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DirectConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DirectConnectClientConfiguration& clientConfiguration);

      DirectConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DirectConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace DirectConnect
} // namespace Aws
