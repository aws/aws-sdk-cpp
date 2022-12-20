/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/EC2ServiceClientModel.h>

namespace Aws
{
namespace EC2
{
  /**
   * <fullname>Amazon Elastic Compute Cloud</fullname> <p>Amazon Elastic Compute
   * Cloud (Amazon EC2) provides secure and resizable computing capacity in the
   * Amazon Web Services Cloud. Using Amazon EC2 eliminates the need to invest in
   * hardware up front, so you can develop and deploy applications faster. Amazon
   * Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated
   * section of the Amazon Web Services Cloud where you can launch Amazon Web
   * Services resources in a virtual network that you've defined. Amazon Elastic
   * Block Store (Amazon EBS) provides block level storage volumes for use with EC2
   * instances. EBS volumes are highly available and reliable storage volumes that
   * can be attached to any running instance and used like a hard drive.</p> <p>To
   * learn more, see the following resources:</p> <ul> <li> <p>Amazon EC2: <a
   * href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
   * href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a> </p>
   * </li> <li> <p>Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product
   * page</a>, <a href="http://aws.amazon.com/documentation/ebs">Amazon EBS
   * documentation</a> </p> </li> <li> <p>Amazon VPC: <a
   * href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
   * href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a> </p>
   * </li> <li> <p>Amazon Web Services VPN: <a
   * href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
   * href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN
   * documentation</a> </p> </li> </ul>
   */
  class AWS_EC2_API EC2Client : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<EC2Client>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::EC2::EC2ClientConfiguration& clientConfiguration = Aws::EC2::EC2ClientConfiguration(),
                  std::shared_ptr<EC2EndpointProviderBase> endpointProvider = Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EC2EndpointProviderBase> endpointProvider = Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG),
                  const Aws::EC2::EC2ClientConfiguration& clientConfiguration = Aws::EC2::EC2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EC2EndpointProviderBase> endpointProvider = Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG),
                  const Aws::EC2::EC2ClientConfiguration& clientConfiguration = Aws::EC2::EC2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EC2Client();


        /**
         * <p>Accepts an Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#using-instance-addressing-eips-transfer-accept">Accept
         * a transferred Elastic IP address</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAddressTransferOutcome AcceptAddressTransfer(const Model::AcceptAddressTransferRequest& request) const;

        /**
         * A Callable wrapper for AcceptAddressTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptAddressTransferOutcomeCallable AcceptAddressTransferCallable(const Model::AcceptAddressTransferRequest& request) const;

        /**
         * An Async wrapper for AcceptAddressTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptAddressTransferAsync(const Model::AcceptAddressTransferRequest& request, const AcceptAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts the Convertible Reserved Instance exchange quote described in the
         * <a>GetReservedInstancesExchangeQuote</a> call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptReservedInstancesExchangeQuoteOutcome AcceptReservedInstancesExchangeQuote(const Model::AcceptReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * A Callable wrapper for AcceptReservedInstancesExchangeQuote that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptReservedInstancesExchangeQuoteOutcomeCallable AcceptReservedInstancesExchangeQuoteCallable(const Model::AcceptReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * An Async wrapper for AcceptReservedInstancesExchangeQuote that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptReservedInstancesExchangeQuoteAsync(const Model::AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a request to associate subnets with a transit gateway multicast
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptTransitGatewayMulticastDomainAssociationsOutcome AcceptTransitGatewayMulticastDomainAssociations(const Model::AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for AcceptTransitGatewayMulticastDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptTransitGatewayMulticastDomainAssociationsOutcomeCallable AcceptTransitGatewayMulticastDomainAssociationsCallable(const Model::AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * An Async wrapper for AcceptTransitGatewayMulticastDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptTransitGatewayMulticastDomainAssociationsAsync(const Model::AcceptTransitGatewayMulticastDomainAssociationsRequest& request, const AcceptTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a transit gateway peering attachment request. The peering attachment
         * must be in the <code>pendingAcceptance</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptTransitGatewayPeeringAttachmentOutcome AcceptTransitGatewayPeeringAttachment(const Model::AcceptTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * A Callable wrapper for AcceptTransitGatewayPeeringAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptTransitGatewayPeeringAttachmentOutcomeCallable AcceptTransitGatewayPeeringAttachmentCallable(const Model::AcceptTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * An Async wrapper for AcceptTransitGatewayPeeringAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptTransitGatewayPeeringAttachmentAsync(const Model::AcceptTransitGatewayPeeringAttachmentRequest& request, const AcceptTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a request to attach a VPC to a transit gateway.</p> <p>The VPC
         * attachment must be in the <code>pendingAcceptance</code> state. Use
         * <a>DescribeTransitGatewayVpcAttachments</a> to view your pending VPC attachment
         * requests. Use <a>RejectTransitGatewayVpcAttachment</a> to reject a VPC
         * attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptTransitGatewayVpcAttachmentOutcome AcceptTransitGatewayVpcAttachment(const Model::AcceptTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for AcceptTransitGatewayVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptTransitGatewayVpcAttachmentOutcomeCallable AcceptTransitGatewayVpcAttachmentCallable(const Model::AcceptTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for AcceptTransitGatewayVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptTransitGatewayVpcAttachmentAsync(const Model::AcceptTransitGatewayVpcAttachmentRequest& request, const AcceptTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts one or more interface VPC endpoint connection requests to your VPC
         * endpoint service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptVpcEndpointConnectionsOutcome AcceptVpcEndpointConnections(const Model::AcceptVpcEndpointConnectionsRequest& request) const;

        /**
         * A Callable wrapper for AcceptVpcEndpointConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptVpcEndpointConnectionsOutcomeCallable AcceptVpcEndpointConnectionsCallable(const Model::AcceptVpcEndpointConnectionsRequest& request) const;

        /**
         * An Async wrapper for AcceptVpcEndpointConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptVpcEndpointConnectionsAsync(const Model::AcceptVpcEndpointConnectionsRequest& request, const AcceptVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept a VPC peering connection request. To accept a request, the VPC peering
         * connection must be in the <code>pending-acceptance</code> state, and you must be
         * the owner of the peer VPC. Use <a>DescribeVpcPeeringConnections</a> to view your
         * outstanding VPC peering connection requests.</p> <p>For an inter-Region VPC
         * peering connection request, you must accept the VPC peering connection in the
         * Region of the accepter VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptVpcPeeringConnectionOutcome AcceptVpcPeeringConnection(const Model::AcceptVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for AcceptVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptVpcPeeringConnectionOutcomeCallable AcceptVpcPeeringConnectionCallable(const Model::AcceptVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for AcceptVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptVpcPeeringConnectionAsync(const Model::AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Advertises an IPv4 or IPv6 address range that is provisioned for use with
         * your Amazon Web Services resources through bring your own IP addresses
         * (BYOIP).</p> <p>You can perform this operation at most once every 10 seconds,
         * even if you specify different address ranges each time.</p> <p>We recommend that
         * you stop advertising the BYOIP CIDR from other locations when you advertise it
         * from Amazon Web Services. To minimize down time, you can configure your Amazon
         * Web Services resources to use an address from a BYOIP CIDR before it is
         * advertised, and then simultaneously stop advertising it from the current
         * location and start advertising it through Amazon Web Services.</p> <p>It can
         * take a few minutes before traffic to the specified addresses starts routing to
         * Amazon Web Services because of BGP propagation delays.</p> <p>To stop
         * advertising the BYOIP CIDR, use <a>WithdrawByoipCidr</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AdvertiseByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::AdvertiseByoipCidrOutcome AdvertiseByoipCidr(const Model::AdvertiseByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for AdvertiseByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdvertiseByoipCidrOutcomeCallable AdvertiseByoipCidrCallable(const Model::AdvertiseByoipCidrRequest& request) const;

        /**
         * An Async wrapper for AdvertiseByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdvertiseByoipCidrAsync(const Model::AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allocates an Elastic IP address to your Amazon Web Services account. After
         * you allocate the Elastic IP address you can associate it with an instance or
         * network interface. After you release an Elastic IP address, it is released to
         * the IP address pool and can be allocated to a different Amazon Web Services
         * account.</p> <p>You can allocate an Elastic IP address from an address pool
         * owned by Amazon Web Services or from an address pool created from a public IPv4
         * address range that you have brought to Amazon Web Services for use with your
         * Amazon Web Services resources using bring your own IP addresses (BYOIP). For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>[EC2-VPC] If you release an Elastic IP address, you might be
         * able to recover it. You cannot recover an Elastic IP address that you released
         * after it is allocated to another Amazon Web Services account. You cannot recover
         * an Elastic IP address for EC2-Classic. To attempt to recover an Elastic IP
         * address that you released, specify it in this operation.</p> <p>An Elastic IP
         * address is for use either in the EC2-Classic platform or in a VPC. By default,
         * you can allocate 5 Elastic IP addresses for EC2-Classic per Region and 5 Elastic
         * IP addresses for EC2-VPC per Region.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can allocate a carrier IP address which is a public IP address from a
         * telecommunication carrier, to a network interface which resides in a subnet in a
         * Wavelength Zone (for example an EC2 instance). </p>  <p>We are retiring
         * EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateAddressOutcome AllocateAddress(const Model::AllocateAddressRequest& request) const;

        /**
         * A Callable wrapper for AllocateAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateAddressOutcomeCallable AllocateAddressCallable(const Model::AllocateAddressRequest& request) const;

        /**
         * An Async wrapper for AllocateAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateAddressAsync(const Model::AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allocates a Dedicated Host to your account. At a minimum, specify the
         * supported instance type or instance family, the Availability Zone in which to
         * allocate the host, and the number of hosts to allocate.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostsOutcome AllocateHosts(const Model::AllocateHostsRequest& request) const;

        /**
         * A Callable wrapper for AllocateHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateHostsOutcomeCallable AllocateHostsCallable(const Model::AllocateHostsRequest& request) const;

        /**
         * An Async wrapper for AllocateHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateHostsAsync(const Model::AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allocate a CIDR from an IPAM pool. In IPAM, an allocation is a CIDR
         * assignment from an IPAM pool to another resource or IPAM pool. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/allocate-cidrs-ipam.html">Allocate
         * CIDRs</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateIpamPoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateIpamPoolCidrOutcome AllocateIpamPoolCidr(const Model::AllocateIpamPoolCidrRequest& request) const;

        /**
         * A Callable wrapper for AllocateIpamPoolCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateIpamPoolCidrOutcomeCallable AllocateIpamPoolCidrCallable(const Model::AllocateIpamPoolCidrRequest& request) const;

        /**
         * An Async wrapper for AllocateIpamPoolCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateIpamPoolCidrAsync(const Model::AllocateIpamPoolCidrRequest& request, const AllocateIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a security group to the association between the target network and
         * the Client VPN endpoint. This action replaces the existing security groups with
         * the specified security groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplySecurityGroupsToClientVpnTargetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplySecurityGroupsToClientVpnTargetNetworkOutcome ApplySecurityGroupsToClientVpnTargetNetwork(const Model::ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const;

        /**
         * A Callable wrapper for ApplySecurityGroupsToClientVpnTargetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplySecurityGroupsToClientVpnTargetNetworkOutcomeCallable ApplySecurityGroupsToClientVpnTargetNetworkCallable(const Model::ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const;

        /**
         * An Async wrapper for ApplySecurityGroupsToClientVpnTargetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplySecurityGroupsToClientVpnTargetNetworkAsync(const Model::ApplySecurityGroupsToClientVpnTargetNetworkRequest& request, const ApplySecurityGroupsToClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more IPv6 addresses to the specified network interface. You
         * can specify one or more specific IPv6 addresses, or you can specify the number
         * of IPv6 addresses to be automatically assigned from within the subnet's IPv6
         * CIDR block range. You can assign as many IPv6 addresses to a network interface
         * as you can assign private IPv4 addresses, and the limit varies per instance
         * type. For information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
         * Addresses Per Network Interface Per Instance Type</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p> <p>You must specify either the IPv6 addresses
         * or the IPv6 address count in the request. </p> <p>You can optionally use Prefix
         * Delegation on the network interface. You must specify either the IPV6 Prefix
         * Delegation prefixes, or the IPv6 Prefix Delegation count. For information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
         * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignIpv6Addresses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest& request) const;

        /**
         * A Callable wrapper for AssignIpv6Addresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request) const;

        /**
         * An Async wrapper for AssignIpv6Addresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more secondary private IP addresses to the specified network
         * interface.</p> <p>You can specify one or more specific secondary IP addresses,
         * or you can specify the number of secondary IP addresses to be automatically
         * assigned within the subnet's CIDR block range. The number of secondary IP
         * addresses that you can assign to an instance varies by instance type. For
         * information about instance types, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more
         * information about Elastic IP addresses, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>When you move a secondary private IP address to another network interface,
         * any Elastic IP address that is associated with the IP address is also moved.</p>
         * <p>Remapping an IP address is an asynchronous operation. When you move an IP
         * address from one network interface to another, check
         * <code>network/interfaces/macs/mac/local-ipv4s</code> in the instance metadata to
         * confirm that the remapping is complete.</p> <p>You must specify either the IP
         * addresses or the IP address count in the request.</p> <p>You can optionally use
         * Prefix Delegation on the network interface. You must specify either the IPv4
         * Prefix Delegation prefixes, or the IPv4 Prefix Delegation count. For
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
         * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest& request) const;

        /**
         * A Callable wrapper for AssignPrivateIpAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request) const;

        /**
         * An Async wrapper for AssignPrivateIpAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Elastic IP address, or carrier IP address (for instances that
         * are in subnets in Wavelength Zones) with an instance or a network interface.
         * Before you can use an Elastic IP address, you must allocate it to your
         * account.</p> <p>An Elastic IP address is for use in either the EC2-Classic
         * platform or in a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>[EC2-Classic, VPC in an EC2-VPC-only account] If the Elastic IP address is
         * already associated with a different instance, it is disassociated from that
         * instance and associated with the specified instance. If you associate an Elastic
         * IP address with an instance that has an existing Elastic IP address, the
         * existing address is disassociated from the instance, but remains allocated to
         * your account.</p> <p>[VPC in an EC2-Classic account] If you don't specify a
         * private IP address, the Elastic IP address is associated with the primary IP
         * address. If the Elastic IP address is already associated with a different
         * instance or a network interface, you get an error unless you allow
         * reassociation. You cannot associate an Elastic IP address with an instance or
         * network interface that has an existing Elastic IP address.</p> <p>[Subnets in
         * Wavelength Zones] You can associate an IP address from the telecommunication
         * carrier to the instance or network interface. </p> <p>You cannot associate an
         * Elastic IP address with an interface in a different network border group.</p>
         *  <p>This is an idempotent operation. If you perform the operation
         * more than once, Amazon EC2 doesn't return an error, and you may be charged for
         * each time the Elastic IP address is remapped to the same instance. For more
         * information, see the <i>Elastic IP Addresses</i> section of <a
         * href="http://aws.amazon.com/ec2/pricing/">Amazon EC2 Pricing</a>.</p>
         *   <p>We are retiring EC2-Classic. We recommend that you
         * migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest& request) const;

        /**
         * A Callable wrapper for AssociateAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request) const;

        /**
         * An Async wrapper for AssociateAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a target network with a Client VPN endpoint. A target network is a
         * subnet in a VPC. You can associate multiple subnets from the same VPC with a
         * Client VPN endpoint. You can associate only one subnet in each Availability
         * Zone. We recommend that you associate at least two subnets to provide
         * Availability Zone redundancy.</p> <p>If you specified a VPC when you created the
         * Client VPN endpoint or if you have previous subnet associations, the specified
         * subnet must be in the same VPC. To specify a subnet that's in a different VPC,
         * you must first modify the Client VPN endpoint (<a>ModifyClientVpnEndpoint</a>)
         * and change the VPC that's associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateClientVpnTargetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateClientVpnTargetNetworkOutcome AssociateClientVpnTargetNetwork(const Model::AssociateClientVpnTargetNetworkRequest& request) const;

        /**
         * A Callable wrapper for AssociateClientVpnTargetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateClientVpnTargetNetworkOutcomeCallable AssociateClientVpnTargetNetworkCallable(const Model::AssociateClientVpnTargetNetworkRequest& request) const;

        /**
         * An Async wrapper for AssociateClientVpnTargetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateClientVpnTargetNetworkAsync(const Model::AssociateClientVpnTargetNetworkRequest& request, const AssociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of DHCP options (that you've previously created) with the
         * specified VPC, or associates no DHCP options with the VPC.</p> <p>After you
         * associate the options with the VPC, any existing instances and all new instances
         * that you launch in that VPC use the options. You don't need to restart or
         * relaunch the instances. They automatically pick up the changes within a few
         * hours, depending on how frequently the instance renews its DHCP lease. You can
         * explicitly renew the lease using the operating system on the instance.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_DHCP_Options.html">DHCP
         * options sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDhcpOptionsOutcome AssociateDhcpOptions(const Model::AssociateDhcpOptionsRequest& request) const;

        /**
         * A Callable wrapper for AssociateDhcpOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDhcpOptionsOutcomeCallable AssociateDhcpOptionsCallable(const Model::AssociateDhcpOptionsRequest& request) const;

        /**
         * An Async wrapper for AssociateDhcpOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDhcpOptionsAsync(const Model::AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Identity and Access Management (IAM) role with an Certificate
         * Manager (ACM) certificate. This enables the certificate to be used by the ACM
         * for Nitro Enclaves application inside an enclave. For more information, see <a
         * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave-refapp.html">Certificate
         * Manager for Nitro Enclaves</a> in the <i>Amazon Web Services Nitro Enclaves User
         * Guide</i>.</p> <p>When the IAM role is associated with the ACM certificate, the
         * certificate, certificate chain, and encrypted private key are placed in an
         * Amazon S3 location that only the associated IAM role can access. The private key
         * of the certificate is encrypted with an Amazon Web Services managed key that has
         * an attached attestation-based key policy.</p> <p>To enable the IAM role to
         * access the Amazon S3 object, you must grant it permission to call
         * <code>s3:GetObject</code> on the Amazon S3 bucket returned by the command. To
         * enable the IAM role to access the KMS key, you must grant it permission to call
         * <code>kms:Decrypt</code> on the KMS key returned by the command. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave-refapp.html#add-policy">
         * Grant the role permission to access the certificate and encryption key</a> in
         * the <i>Amazon Web Services Nitro Enclaves User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateEnclaveCertificateIamRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEnclaveCertificateIamRoleOutcome AssociateEnclaveCertificateIamRole(const Model::AssociateEnclaveCertificateIamRoleRequest& request) const;

        /**
         * A Callable wrapper for AssociateEnclaveCertificateIamRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateEnclaveCertificateIamRoleOutcomeCallable AssociateEnclaveCertificateIamRoleCallable(const Model::AssociateEnclaveCertificateIamRoleRequest& request) const;

        /**
         * An Async wrapper for AssociateEnclaveCertificateIamRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateEnclaveCertificateIamRoleAsync(const Model::AssociateEnclaveCertificateIamRoleRequest& request, const AssociateEnclaveCertificateIamRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an IAM instance profile with a running or stopped instance. You
         * cannot associate more than one IAM instance profile with an
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIamInstanceProfileOutcome AssociateIamInstanceProfile(const Model::AssociateIamInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for AssociateIamInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateIamInstanceProfileOutcomeCallable AssociateIamInstanceProfileCallable(const Model::AssociateIamInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for AssociateIamInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateIamInstanceProfileAsync(const Model::AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates one or more targets with an event window. Only one type of target
         * (instance IDs, Dedicated Host IDs, or tags) can be specified with an event
         * window.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateInstanceEventWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateInstanceEventWindowOutcome AssociateInstanceEventWindow(const Model::AssociateInstanceEventWindowRequest& request) const;

        /**
         * A Callable wrapper for AssociateInstanceEventWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateInstanceEventWindowOutcomeCallable AssociateInstanceEventWindowCallable(const Model::AssociateInstanceEventWindowRequest& request) const;

        /**
         * An Async wrapper for AssociateInstanceEventWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateInstanceEventWindowAsync(const Model::AssociateInstanceEventWindowRequest& request, const AssociateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a subnet in your VPC or an internet gateway or virtual private
         * gateway attached to your VPC with a route table in your VPC. This association
         * causes traffic from the subnet or gateway to be routed according to the routes
         * in the route table. The action returns an association ID, which you need in
         * order to disassociate the route table later. A route table can be associated
         * with multiple subnets.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRouteTableOutcome AssociateRouteTable(const Model::AssociateRouteTableRequest& request) const;

        /**
         * A Callable wrapper for AssociateRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRouteTableOutcomeCallable AssociateRouteTableCallable(const Model::AssociateRouteTableRequest& request) const;

        /**
         * An Async wrapper for AssociateRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRouteTableAsync(const Model::AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a CIDR block with your subnet. You can only associate a single
         * IPv6 CIDR block with your subnet. An IPv6 CIDR block must have a prefix length
         * of /64.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetCidrBlockOutcome AssociateSubnetCidrBlock(const Model::AssociateSubnetCidrBlockRequest& request) const;

        /**
         * A Callable wrapper for AssociateSubnetCidrBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSubnetCidrBlockOutcomeCallable AssociateSubnetCidrBlockCallable(const Model::AssociateSubnetCidrBlockRequest& request) const;

        /**
         * An Async wrapper for AssociateSubnetCidrBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSubnetCidrBlockAsync(const Model::AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified subnets and transit gateway attachments with the
         * specified transit gateway multicast domain.</p> <p>The transit gateway
         * attachment must be in the available state before you can add a resource. Use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeTransitGatewayAttachments.html">DescribeTransitGatewayAttachments</a>
         * to see the state of the attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayMulticastDomainOutcome AssociateTransitGatewayMulticastDomain(const Model::AssociateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * A Callable wrapper for AssociateTransitGatewayMulticastDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTransitGatewayMulticastDomainOutcomeCallable AssociateTransitGatewayMulticastDomainCallable(const Model::AssociateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * An Async wrapper for AssociateTransitGatewayMulticastDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTransitGatewayMulticastDomainAsync(const Model::AssociateTransitGatewayMulticastDomainRequest& request, const AssociateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified transit gateway attachment with a transit gateway
         * policy table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayPolicyTableOutcome AssociateTransitGatewayPolicyTable(const Model::AssociateTransitGatewayPolicyTableRequest& request) const;

        /**
         * A Callable wrapper for AssociateTransitGatewayPolicyTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTransitGatewayPolicyTableOutcomeCallable AssociateTransitGatewayPolicyTableCallable(const Model::AssociateTransitGatewayPolicyTableRequest& request) const;

        /**
         * An Async wrapper for AssociateTransitGatewayPolicyTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTransitGatewayPolicyTableAsync(const Model::AssociateTransitGatewayPolicyTableRequest& request, const AssociateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified attachment with the specified transit gateway route
         * table. You can associate only one route table with an attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayRouteTableOutcome AssociateTransitGatewayRouteTable(const Model::AssociateTransitGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for AssociateTransitGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTransitGatewayRouteTableOutcomeCallable AssociateTransitGatewayRouteTableCallable(const Model::AssociateTransitGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for AssociateTransitGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTransitGatewayRouteTableAsync(const Model::AssociateTransitGatewayRouteTableRequest& request, const AssociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This API action is currently in <b>limited preview only</b>. If you
         * are interested in using this feature, contact your account manager.</p> 
         * <p>Associates a branch network interface with a trunk network interface.</p>
         * <p>Before you create the association, run the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">create-network-interface</a>
         * command and set <code>--interface-type</code> to <code>trunk</code>. You must
         * also create a network interface for each branch network interface that you want
         * to associate with the trunk network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTrunkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrunkInterfaceOutcome AssociateTrunkInterface(const Model::AssociateTrunkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrunkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrunkInterfaceOutcomeCallable AssociateTrunkInterfaceCallable(const Model::AssociateTrunkInterfaceRequest& request) const;

        /**
         * An Async wrapper for AssociateTrunkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrunkInterfaceAsync(const Model::AssociateTrunkInterfaceRequest& request, const AssociateTrunkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a CIDR block with your VPC. You can associate a secondary IPv4
         * CIDR block, an Amazon-provided IPv6 CIDR block, or an IPv6 CIDR block from an
         * IPv6 address pool that you provisioned through bring your own IP addresses (<a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html">BYOIP</a>).
         * The IPv6 CIDR block size is fixed at /56.</p> <p>You must specify one of the
         * following in the request: an IPv4 CIDR block, an IPv6 pool, or an
         * Amazon-provided IPv6 CIDR block.</p> <p>For more information about associating
         * CIDR blocks with your VPC and applicable restrictions, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html#VPC_Sizing">VPC
         * and subnet sizing</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateVpcCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVpcCidrBlockOutcome AssociateVpcCidrBlock(const Model::AssociateVpcCidrBlockRequest& request) const;

        /**
         * A Callable wrapper for AssociateVpcCidrBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVpcCidrBlockOutcomeCallable AssociateVpcCidrBlockCallable(const Model::AssociateVpcCidrBlockRequest& request) const;

        /**
         * An Async wrapper for AssociateVpcCidrBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVpcCidrBlockAsync(const Model::AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Links an EC2-Classic instance to a ClassicLink-enabled
         * VPC through one or more of the VPC's security groups. You cannot link an
         * EC2-Classic instance to more than one VPC at a time. You can only link an
         * instance that's in the <code>running</code> state. An instance is automatically
         * unlinked from a VPC when it's stopped - you can link it to the VPC again when
         * you restart it.</p> <p>After you've linked an instance, you cannot change the
         * VPC security groups that are associated with it. To change the security groups,
         * you must first unlink the instance, and then link it again.</p> <p>Linking your
         * instance to a VPC is sometimes referred to as <i>attaching</i> your
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachClassicLinkVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest& request) const;

        /**
         * A Callable wrapper for AttachClassicLinkVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request) const;

        /**
         * An Async wrapper for AttachClassicLinkVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an internet gateway or a virtual private gateway to a VPC, enabling
         * connectivity between the internet and the VPC. For more information about your
         * VPC and internet gateway, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon Virtual Private
         * Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInternetGatewayOutcome AttachInternetGateway(const Model::AttachInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for AttachInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachInternetGatewayOutcomeCallable AttachInternetGatewayCallable(const Model::AttachInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for AttachInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachInternetGatewayAsync(const Model::AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a network interface to an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for AttachNetworkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request) const;

        /**
         * An Async wrapper for AttachNetworkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A trust provider is a third-party entity that creates, maintains, and manages
         * identity information for users and devices. One or more trust providers can be
         * attached to an Amazon Web Services Verified Access instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVerifiedAccessTrustProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVerifiedAccessTrustProviderOutcome AttachVerifiedAccessTrustProvider(const Model::AttachVerifiedAccessTrustProviderRequest& request) const;

        /**
         * A Callable wrapper for AttachVerifiedAccessTrustProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVerifiedAccessTrustProviderOutcomeCallable AttachVerifiedAccessTrustProviderCallable(const Model::AttachVerifiedAccessTrustProviderRequest& request) const;

        /**
         * An Async wrapper for AttachVerifiedAccessTrustProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVerifiedAccessTrustProviderAsync(const Model::AttachVerifiedAccessTrustProviderRequest& request, const AttachVerifiedAccessTrustProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an EBS volume to a running or stopped instance and exposes it to the
         * instance with the specified device name.</p> <p>Encrypted EBS volumes must be
         * attached to instances that support Amazon EBS encryption. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>After you attach an EBS volume, you must make it available. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-using-volumes.html">Make
         * an EBS volume available for use</a>.</p> <p>If a volume has an Amazon Web
         * Services Marketplace product code:</p> <ul> <li> <p>The volume can be attached
         * only to a stopped instance.</p> </li> <li> <p>Amazon Web Services Marketplace
         * product codes are copied from the volume to the instance.</p> </li> <li> <p>You
         * must be subscribed to the product.</p> </li> <li> <p>The instance type and
         * operating system of the instance must support the product. For example, you
         * can't detach a volume from a Windows instance and attach it to a Linux
         * instance.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attach
         * an Amazon EBS volume to an instance</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVolumeOutcome AttachVolume(const Model::AttachVolumeRequest& request) const;

        /**
         * A Callable wrapper for AttachVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVolumeOutcomeCallable AttachVolumeCallable(const Model::AttachVolumeRequest& request) const;

        /**
         * An Async wrapper for AttachVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVolumeAsync(const Model::AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a virtual private gateway to a VPC. You can attach one virtual
         * private gateway to one VPC at a time.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVpnGatewayOutcome AttachVpnGateway(const Model::AttachVpnGatewayRequest& request) const;

        /**
         * A Callable wrapper for AttachVpnGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVpnGatewayOutcomeCallable AttachVpnGatewayCallable(const Model::AttachVpnGatewayRequest& request) const;

        /**
         * An Async wrapper for AttachVpnGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVpnGatewayAsync(const Model::AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an ingress authorization rule to a Client VPN endpoint. Ingress
         * authorization rules act as firewall rules that grant access to networks. You
         * must configure ingress authorization rules to enable clients to access resources
         * in Amazon Web Services or on-premises networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeClientVpnIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeClientVpnIngressOutcome AuthorizeClientVpnIngress(const Model::AuthorizeClientVpnIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeClientVpnIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeClientVpnIngressOutcomeCallable AuthorizeClientVpnIngressCallable(const Model::AuthorizeClientVpnIngressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeClientVpnIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeClientVpnIngressAsync(const Model::AuthorizeClientVpnIngressRequest& request, const AuthorizeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[VPC only] Adds the specified outbound (egress) rules to a security group for
         * use with a VPC.</p> <p>An outbound rule permits instances to send traffic to the
         * specified IPv4 or IPv6 CIDR address ranges, or to the instances that are
         * associated with the specified source security groups. When specifying an
         * outbound rule for your security group in a VPC, the <code>IpPermissions</code>
         * must include a destination for the traffic.</p> <p>You specify a protocol for
         * each rule (for example, TCP). For the TCP and UDP protocols, you must also
         * specify the destination port or port range. For the ICMP protocol, you must also
         * specify the ICMP type and code. You can use -1 for the type or code to mean all
         * types or all codes.</p> <p>Rule changes are propagated to affected instances as
         * quickly as possible. However, a small delay might occur.</p> <p>For information
         * about VPC security group quotas, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html">Amazon
         * VPC quotas</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeSecurityGroupEgressOutcome AuthorizeSecurityGroupEgress(const Model::AuthorizeSecurityGroupEgressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeSecurityGroupEgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSecurityGroupEgressOutcomeCallable AuthorizeSecurityGroupEgressCallable(const Model::AuthorizeSecurityGroupEgressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeSecurityGroupEgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSecurityGroupEgressAsync(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified inbound (ingress) rules to a security group.</p> <p>An
         * inbound rule permits instances to receive traffic from the specified IPv4 or
         * IPv6 CIDR address range, or from the instances that are associated with the
         * specified destination security groups. When specifying an inbound rule for your
         * security group in a VPC, the <code>IpPermissions</code> must include a source
         * for the traffic.</p> <p>You specify a protocol for each rule (for example, TCP).
         * For TCP and UDP, you must also specify the destination port or port range. For
         * ICMP/ICMPv6, you must also specify the ICMP/ICMPv6 type and code. You can use -1
         * to mean all types or all codes.</p> <p>Rule changes are propagated to instances
         * within the security group as quickly as possible. However, a small delay might
         * occur.</p> <p>For more information about VPC security group quotas, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html">Amazon
         * VPC quotas</a>.</p>  <p>We are retiring EC2-Classic. We recommend that you
         * migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeSecurityGroupIngressOutcome AuthorizeSecurityGroupIngress(const Model::AuthorizeSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSecurityGroupIngressOutcomeCallable AuthorizeSecurityGroupIngressCallable(const Model::AuthorizeSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSecurityGroupIngressAsync(const Model::AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Bundles an Amazon instance store-backed Windows instance.</p> <p>During
         * bundling, only the root device volume (C:\) is bundled. Data on other instance
         * store volumes is not preserved.</p>  <p>This action is not applicable for
         * Linux/Unix instances or Windows instances that are backed by Amazon EBS.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BundleInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::BundleInstanceOutcome BundleInstance(const Model::BundleInstanceRequest& request) const;

        /**
         * A Callable wrapper for BundleInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BundleInstanceOutcomeCallable BundleInstanceCallable(const Model::BundleInstanceRequest& request) const;

        /**
         * An Async wrapper for BundleInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BundleInstanceAsync(const Model::BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a bundling operation for an instance store-backed Windows
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBundleTaskOutcome CancelBundleTask(const Model::CancelBundleTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelBundleTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelBundleTaskOutcomeCallable CancelBundleTaskCallable(const Model::CancelBundleTaskRequest& request) const;

        /**
         * An Async wrapper for CancelBundleTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelBundleTaskAsync(const Model::CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified Capacity Reservation, releases the reserved capacity,
         * and changes the Capacity Reservation's state to <code>cancelled</code>.</p>
         * <p>Instances running in the reserved capacity continue running until you stop
         * them. Stopped instances that target the Capacity Reservation can no longer
         * launch. Modify these instances to either target a different Capacity
         * Reservation, launch On-Demand Instance capacity, or run in any open Capacity
         * Reservation that has matching attributes and sufficient capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCapacityReservationOutcome CancelCapacityReservation(const Model::CancelCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for CancelCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCapacityReservationOutcomeCallable CancelCapacityReservationCallable(const Model::CancelCapacityReservationRequest& request) const;

        /**
         * An Async wrapper for CancelCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCapacityReservationAsync(const Model::CancelCapacityReservationRequest& request, const CancelCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels one or more Capacity Reservation Fleets. When you cancel a Capacity
         * Reservation Fleet, the following happens:</p> <ul> <li> <p>The Capacity
         * Reservation Fleet's status changes to <code>cancelled</code>.</p> </li> <li>
         * <p>The individual Capacity Reservations in the Fleet are cancelled. Instances
         * running in the Capacity Reservations at the time of cancelling the Fleet
         * continue to run in shared capacity.</p> </li> <li> <p>The Fleet stops creating
         * new Capacity Reservations.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelCapacityReservationFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCapacityReservationFleetsOutcome CancelCapacityReservationFleets(const Model::CancelCapacityReservationFleetsRequest& request) const;

        /**
         * A Callable wrapper for CancelCapacityReservationFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCapacityReservationFleetsOutcomeCallable CancelCapacityReservationFleetsCallable(const Model::CancelCapacityReservationFleetsRequest& request) const;

        /**
         * An Async wrapper for CancelCapacityReservationFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCapacityReservationFleetsAsync(const Model::CancelCapacityReservationFleetsRequest& request, const CancelCapacityReservationFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an active conversion task. The task can be the import of an instance
         * or volume. The action removes all artifacts of the conversion, including a
         * partially uploaded volume or instance. If the conversion is complete or is in
         * the process of transferring the final disk image, the command fails and returns
         * an exception.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelConversionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelConversionTaskOutcome CancelConversionTask(const Model::CancelConversionTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelConversionTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelConversionTaskOutcomeCallable CancelConversionTaskCallable(const Model::CancelConversionTaskRequest& request) const;

        /**
         * An Async wrapper for CancelConversionTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelConversionTaskAsync(const Model::CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an active export task. The request removes all artifacts of the
         * export, including any partially-created Amazon S3 objects. If the export task is
         * complete or is in the process of transferring the final disk image, the command
         * fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const Model::CancelExportTaskRequest& request) const;

        /**
         * An Async wrapper for CancelExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelExportTaskAsync(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes your Amazon Web Services account from the launch permissions for the
         * specified AMI. For more information, see <a
         * href="https://docs.aws.amazon.com/">Cancel having an AMI shared with your Amazon
         * Web Services account</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImageLaunchPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImageLaunchPermissionOutcome CancelImageLaunchPermission(const Model::CancelImageLaunchPermissionRequest& request) const;

        /**
         * A Callable wrapper for CancelImageLaunchPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelImageLaunchPermissionOutcomeCallable CancelImageLaunchPermissionCallable(const Model::CancelImageLaunchPermissionRequest& request) const;

        /**
         * An Async wrapper for CancelImageLaunchPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelImageLaunchPermissionAsync(const Model::CancelImageLaunchPermissionRequest& request, const CancelImageLaunchPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an in-process import virtual machine or import snapshot
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImportTaskOutcome CancelImportTask(const Model::CancelImportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelImportTaskOutcomeCallable CancelImportTaskCallable(const Model::CancelImportTaskRequest& request) const;

        /**
         * An Async wrapper for CancelImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelImportTaskAsync(const Model::CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified Reserved Instance listing in the Reserved Instance
         * Marketplace.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListing">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelReservedInstancesListingOutcome CancelReservedInstancesListing(const Model::CancelReservedInstancesListingRequest& request) const;

        /**
         * A Callable wrapper for CancelReservedInstancesListing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelReservedInstancesListingOutcomeCallable CancelReservedInstancesListingCallable(const Model::CancelReservedInstancesListingRequest& request) const;

        /**
         * An Async wrapper for CancelReservedInstancesListing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelReservedInstancesListingAsync(const Model::CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified Spot Fleet requests.</p> <p>After you cancel a Spot
         * Fleet request, the Spot Fleet launches no new Spot Instances. You must specify
         * whether the Spot Fleet should also terminate its Spot Instances. If you
         * terminate the instances, the Spot Fleet request enters the
         * <code>cancelled_terminating</code> state. Otherwise, the Spot Fleet request
         * enters the <code>cancelled_running</code> state and the instances continue to
         * run until they are interrupted or you terminate them manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSpotFleetRequestsOutcome CancelSpotFleetRequests(const Model::CancelSpotFleetRequestsRequest& request) const;

        /**
         * A Callable wrapper for CancelSpotFleetRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSpotFleetRequestsOutcomeCallable CancelSpotFleetRequestsCallable(const Model::CancelSpotFleetRequestsRequest& request) const;

        /**
         * An Async wrapper for CancelSpotFleetRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSpotFleetRequestsAsync(const Model::CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels one or more Spot Instance requests.</p>  <p>Canceling a
         * Spot Instance request does not terminate running Spot Instances associated with
         * the request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSpotInstanceRequestsOutcome CancelSpotInstanceRequests(const Model::CancelSpotInstanceRequestsRequest& request) const;

        /**
         * A Callable wrapper for CancelSpotInstanceRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSpotInstanceRequestsOutcomeCallable CancelSpotInstanceRequestsCallable(const Model::CancelSpotInstanceRequestsRequest& request) const;

        /**
         * An Async wrapper for CancelSpotInstanceRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSpotInstanceRequestsAsync(const Model::CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines whether a product code is associated with an instance. This action
         * can only be used by the owner of the product code. It is useful when a product
         * code owner must verify whether another user's instance is eligible for
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConfirmProductInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmProductInstanceOutcome ConfirmProductInstance(const Model::ConfirmProductInstanceRequest& request) const;

        /**
         * A Callable wrapper for ConfirmProductInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmProductInstanceOutcomeCallable ConfirmProductInstanceCallable(const Model::ConfirmProductInstanceRequest& request) const;

        /**
         * An Async wrapper for ConfirmProductInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmProductInstanceAsync(const Model::ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified Amazon FPGA Image (AFI) to the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyFpgaImageOutcome CopyFpgaImage(const Model::CopyFpgaImageRequest& request) const;

        /**
         * A Callable wrapper for CopyFpgaImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyFpgaImageOutcomeCallable CopyFpgaImageCallable(const Model::CopyFpgaImageRequest& request) const;

        /**
         * An Async wrapper for CopyFpgaImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyFpgaImageAsync(const Model::CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the copy of an AMI. You can copy an AMI from one Region to another,
         * or from a Region to an Outpost. You can't copy an AMI from an Outpost to a
         * Region, from one Outpost to another, or within the same Outpost. To copy an AMI
         * to another partition, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateStoreImageTask.html">CreateStoreImageTask</a>.</p>
         * <p>To copy an AMI from one Region to another, specify the source Region using
         * the <b>SourceRegion</b> parameter, and specify the destination Region using its
         * endpoint. Copies of encrypted backing snapshots for the AMI are encrypted.
         * Copies of unencrypted backing snapshots remain unencrypted, unless you set
         * <code>Encrypted</code> during the copy operation. You cannot create an
         * unencrypted copy of an encrypted backing snapshot.</p> <p>To copy an AMI from a
         * Region to an Outpost, specify the source Region using the <b>SourceRegion</b>
         * parameter, and specify the ARN of the destination Outpost using
         * <b>DestinationOutpostArn</b>. Backing snapshots copied to an Outpost are
         * encrypted by default using the default encryption key for the Region, or a
         * different key that you specify in the request using <b>KmsKeyId</b>. Outposts do
         * not support unencrypted snapshots. For more information, <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#ami">
         * Amazon EBS local snapshots on Outposts</a> in the <i>Amazon EC2 User
         * Guide</i>.</p> <p>For more information about the prerequisites and limits when
         * copying an AMI, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copy
         * an AMI</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;

        /**
         * A Callable wrapper for CopyImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyImageOutcomeCallable CopyImageCallable(const Model::CopyImageRequest& request) const;

        /**
         * An Async wrapper for CopyImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyImageAsync(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a point-in-time snapshot of an EBS volume and stores it in Amazon S3.
         * You can copy a snapshot within the same Region, from one Region to another, or
         * from a Region to an Outpost. You can't copy a snapshot from an Outpost to a
         * Region, from one Outpost to another, or within the same Outpost.</p> <p>You can
         * use the snapshot to create EBS volumes or Amazon Machine Images (AMIs).</p>
         * <p>When copying snapshots to a Region, copies of encrypted EBS snapshots remain
         * encrypted. Copies of unencrypted snapshots remain unencrypted, unless you enable
         * encryption for the snapshot copy operation. By default, encrypted snapshot
         * copies use the default Key Management Service (KMS) KMS key; however, you can
         * specify a different KMS key. To copy an encrypted snapshot that has been shared
         * from another account, you must have permissions for the KMS key used to encrypt
         * the snapshot.</p> <p>Snapshots copied to an Outpost are encrypted by default
         * using the default encryption key for the Region, or a different key that you
         * specify in the request using <b>KmsKeyId</b>. Outposts do not support
         * unencrypted snapshots. For more information, <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#ami">
         * Amazon EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p> <p>Snapshots created by copying another snapshot have
         * an arbitrary volume ID that should not be used for any purpose.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-copy-snapshot.html">Copy
         * an Amazon EBS snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopySnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * An Async wrapper for CopySnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Capacity Reservation with the specified attributes.</p>
         * <p>Capacity Reservations enable you to reserve capacity for your Amazon EC2
         * instances in a specific Availability Zone for any duration. This gives you the
         * flexibility to selectively add capacity reservations and still get the Regional
         * RI discounts for that usage. By creating Capacity Reservations, you ensure that
         * you always have access to Amazon EC2 capacity when you need it, for as long as
         * you need it. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-capacity-reservations.html">Capacity
         * Reservations</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Your request to
         * create a Capacity Reservation could fail if Amazon EC2 does not have sufficient
         * capacity to fulfill the request. If your request fails due to Amazon EC2
         * capacity constraints, either try again at a later time, try in a different
         * Availability Zone, or request a smaller capacity reservation. If your
         * application is flexible across instance types and sizes, try to create a
         * Capacity Reservation with different instance attributes.</p> <p>Your request
         * could also fail if the requested quantity exceeds your On-Demand Instance limit
         * for the selected instance type. If your request fails due to limit constraints,
         * increase your On-Demand Instance limit for the required instance type and try
         * again. For more information about increasing your instance limits, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
         * EC2 Service Quotas</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapacityReservationOutcome CreateCapacityReservation(const Model::CreateCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for CreateCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCapacityReservationOutcomeCallable CreateCapacityReservationCallable(const Model::CreateCapacityReservationRequest& request) const;

        /**
         * An Async wrapper for CreateCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCapacityReservationAsync(const Model::CreateCapacityReservationRequest& request, const CreateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Capacity Reservation Fleet. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/work-with-cr-fleets.html#create-crfleet">Create
         * a Capacity Reservation Fleet</a> in the Amazon EC2 User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCapacityReservationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapacityReservationFleetOutcome CreateCapacityReservationFleet(const Model::CreateCapacityReservationFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateCapacityReservationFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCapacityReservationFleetOutcomeCallable CreateCapacityReservationFleetCallable(const Model::CreateCapacityReservationFleetRequest& request) const;

        /**
         * An Async wrapper for CreateCapacityReservationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCapacityReservationFleetAsync(const Model::CreateCapacityReservationFleetRequest& request, const CreateCapacityReservationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a carrier gateway. For more information about carrier gateways, see
         * <a
         * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#wavelength-carrier-gateway">Carrier
         * gateways</a> in the <i>Amazon Web Services Wavelength Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCarrierGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCarrierGatewayOutcome CreateCarrierGateway(const Model::CreateCarrierGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateCarrierGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCarrierGatewayOutcomeCallable CreateCarrierGatewayCallable(const Model::CreateCarrierGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateCarrierGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCarrierGatewayAsync(const Model::CreateCarrierGatewayRequest& request, const CreateCarrierGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Client VPN endpoint. A Client VPN endpoint is the resource you
         * create and configure to enable and manage client VPN sessions. It is the
         * destination endpoint at which all client VPN sessions are
         * terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClientVpnEndpointOutcome CreateClientVpnEndpoint(const Model::CreateClientVpnEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateClientVpnEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClientVpnEndpointOutcomeCallable CreateClientVpnEndpointCallable(const Model::CreateClientVpnEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateClientVpnEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClientVpnEndpointAsync(const Model::CreateClientVpnEndpointRequest& request, const CreateClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a route to a network to a Client VPN endpoint. Each Client VPN endpoint
         * has a route table that describes the available destination network routes. Each
         * route in the route table specifies the path for traﬃc to speciﬁc resources or
         * networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateClientVpnRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClientVpnRouteOutcome CreateClientVpnRoute(const Model::CreateClientVpnRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateClientVpnRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClientVpnRouteOutcomeCallable CreateClientVpnRouteCallable(const Model::CreateClientVpnRouteRequest& request) const;

        /**
         * An Async wrapper for CreateClientVpnRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClientVpnRouteAsync(const Model::CreateClientVpnRouteRequest& request, const CreateClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a range of customer-owned IP addresses. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoipCidrOutcome CreateCoipCidr(const Model::CreateCoipCidrRequest& request) const;

        /**
         * A Callable wrapper for CreateCoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCoipCidrOutcomeCallable CreateCoipCidrCallable(const Model::CreateCoipCidrRequest& request) const;

        /**
         * An Async wrapper for CreateCoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoipCidrAsync(const Model::CreateCoipCidrRequest& request, const CreateCoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a pool of customer-owned IP (CoIP) addresses. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCoipPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoipPoolOutcome CreateCoipPool(const Model::CreateCoipPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateCoipPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCoipPoolOutcomeCallable CreateCoipPoolCallable(const Model::CreateCoipPoolRequest& request) const;

        /**
         * An Async wrapper for CreateCoipPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoipPoolAsync(const Model::CreateCoipPoolRequest& request, const CreateCoipPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to Amazon Web Services about your customer gateway
         * device. The customer gateway device is the appliance at your end of the VPN
         * connection. You must provide the IP address of the customer gateway device’s
         * external interface. The IP address must be static and can be behind a device
         * performing network address translation (NAT).</p> <p>For devices that use Border
         * Gateway Protocol (BGP), you can also provide the device's BGP Autonomous System
         * Number (ASN). You can use an existing ASN assigned to your network. If you don't
         * have an ASN already, you can use a private ASN. For more information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/cgw-options.html">Customer
         * gateway options for your Site-to-Site VPN connection</a> in the <i>Amazon Web
         * Services Site-to-Site VPN User Guide</i>.</p> <p>To create more than one
         * customer gateway with the same VPN type, IP address, and BGP ASN, specify a
         * unique device name for each customer gateway. An identical request returns
         * information about the existing customer gateway; it doesn't create a new
         * customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomerGatewayOutcome CreateCustomerGateway(const Model::CreateCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomerGatewayOutcomeCallable CreateCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a default subnet with a size <code>/20</code> IPv4 CIDR block in the
         * specified Availability Zone in your default VPC. You can have only one default
         * subnet per Availability Zone. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/default-vpc.html#create-default-subnet">Creating
         * a default subnet</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDefaultSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDefaultSubnetOutcome CreateDefaultSubnet(const Model::CreateDefaultSubnetRequest& request) const;

        /**
         * A Callable wrapper for CreateDefaultSubnet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDefaultSubnetOutcomeCallable CreateDefaultSubnetCallable(const Model::CreateDefaultSubnetRequest& request) const;

        /**
         * An Async wrapper for CreateDefaultSubnet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDefaultSubnetAsync(const Model::CreateDefaultSubnetRequest& request, const CreateDefaultSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a default VPC with a size <code>/16</code> IPv4 CIDR block and a
         * default subnet in each Availability Zone. For more information about the
         * components of a default VPC, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/default-vpc.html">Default
         * VPC and default subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>. You cannot specify the components of the default VPC yourself.</p>
         * <p>If you deleted your previous default VPC, you can create a default VPC. You
         * cannot have more than one default VPC per Region.</p> <p>If your account
         * supports EC2-Classic, you cannot use this action to create a default VPC in a
         * Region that supports EC2-Classic. If you want a default VPC in a Region that
         * supports EC2-Classic, see "I really want a default VPC for my existing EC2
         * account. Is that possible?" in the <a
         * href="http://aws.amazon.com/vpc/faqs/#Default_VPCs">Default VPCs FAQ</a>.</p>
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDefaultVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDefaultVpcOutcome CreateDefaultVpc(const Model::CreateDefaultVpcRequest& request) const;

        /**
         * A Callable wrapper for CreateDefaultVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDefaultVpcOutcomeCallable CreateDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request) const;

        /**
         * An Async wrapper for CreateDefaultVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a set of DHCP options for your VPC. After creating the set, you must
         * associate it with the VPC, causing all existing and new instances that you
         * launch in the VPC to use this set of DHCP options. The following are the
         * individual DHCP options you can specify. For more information about the options,
         * see <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> <ul> <li>
         * <p> <code>domain-name-servers</code> - The IP addresses of up to four domain
         * name servers, or AmazonProvidedDNS. The default DHCP option set specifies
         * AmazonProvidedDNS. If specifying more than one domain name server, specify the
         * IP addresses in a single parameter, separated by commas. To have your instance
         * receive a custom DNS hostname as specified in <code>domain-name</code>, you must
         * set <code>domain-name-servers</code> to a custom DNS server.</p> </li> <li> <p>
         * <code>domain-name</code> - If you're using AmazonProvidedDNS in
         * <code>us-east-1</code>, specify <code>ec2.internal</code>. If you're using
         * AmazonProvidedDNS in another Region, specify
         * <code>region.compute.internal</code> (for example,
         * <code>ap-northeast-1.compute.internal</code>). Otherwise, specify a domain name
         * (for example, <code>ExampleCompany.com</code>). This value is used to complete
         * unqualified DNS hostnames. <b>Important</b>: Some Linux operating systems accept
         * multiple domain names separated by spaces. However, Windows and other Linux
         * operating systems treat the value as a single domain, which results in
         * unexpected behavior. If your DHCP options set is associated with a VPC that has
         * instances with multiple operating systems, specify only one domain name.</p>
         * </li> <li> <p> <code>ntp-servers</code> - The IP addresses of up to four Network
         * Time Protocol (NTP) servers.</p> </li> <li> <p>
         * <code>netbios-name-servers</code> - The IP addresses of up to four NetBIOS name
         * servers.</p> </li> <li> <p> <code>netbios-node-type</code> - The NetBIOS node
         * type (1, 2, 4, or 8). We recommend that you specify 2 (broadcast and multicast
         * are not currently supported). For more information about these node types, see
         * <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> </li> </ul>
         * <p>Your VPC automatically starts out with a set of DHCP options that includes
         * only a DNS server that we provide (AmazonProvidedDNS). If you create a set of
         * options, and if your VPC has an internet gateway, make sure to set the
         * <code>domain-name-servers</code> option either to <code>AmazonProvidedDNS</code>
         * or to a domain name server of your choice. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_DHCP_Options.html">DHCP
         * options sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDhcpOptionsOutcome CreateDhcpOptions(const Model::CreateDhcpOptionsRequest& request) const;

        /**
         * A Callable wrapper for CreateDhcpOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDhcpOptionsOutcomeCallable CreateDhcpOptionsCallable(const Model::CreateDhcpOptionsRequest& request) const;

        /**
         * An Async wrapper for CreateDhcpOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDhcpOptionsAsync(const Model::CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[IPv6 only] Creates an egress-only internet gateway for your VPC. An
         * egress-only internet gateway is used to enable outbound communication over IPv6
         * from instances in your VPC to the internet, and prevents hosts outside of your
         * VPC from initiating an IPv6 connection with your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEgressOnlyInternetGatewayOutcome CreateEgressOnlyInternetGateway(const Model::CreateEgressOnlyInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateEgressOnlyInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEgressOnlyInternetGatewayOutcomeCallable CreateEgressOnlyInternetGatewayCallable(const Model::CreateEgressOnlyInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateEgressOnlyInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEgressOnlyInternetGatewayAsync(const Model::CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches an EC2 Fleet.</p> <p>You can create a single EC2 Fleet that includes
         * multiple launch specifications that vary by instance type, AMI, Availability
         * Zone, or subnet.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet.html">EC2
         * Fleet</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFleet">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more flow logs to capture information about IP traffic for a
         * specific network interface, subnet, or VPC. </p> <p>Flow log data for a
         * monitored network interface is recorded as flow log records, which are log
         * events consisting of fields that describe the traffic flow. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
         * log records</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>When publishing to CloudWatch Logs, flow log records are published to a log
         * group, and each network interface has a unique log stream in the log group. When
         * publishing to Amazon S3, flow log records for all of the monitored network
         * interfaces are published to a single log file object that is stored in the
         * specified bucket.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html">VPC Flow
         * Logs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowLogsOutcome CreateFlowLogs(const Model::CreateFlowLogsRequest& request) const;

        /**
         * A Callable wrapper for CreateFlowLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowLogsOutcomeCallable CreateFlowLogsCallable(const Model::CreateFlowLogsRequest& request) const;

        /**
         * An Async wrapper for CreateFlowLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowLogsAsync(const Model::CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon FPGA Image (AFI) from the specified design checkpoint
         * (DCP).</p> <p>The create operation is asynchronous. To verify that the AFI is
         * ready for use, check the output logs.</p> <p>An AFI contains the FPGA bitstream
         * that is ready to download to an FPGA. You can securely deploy an AFI on multiple
         * FPGA-accelerated instances. For more information, see the <a
         * href="https://github.com/aws/aws-fpga/">Amazon Web Services FPGA Hardware
         * Development Kit</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFpgaImageOutcome CreateFpgaImage(const Model::CreateFpgaImageRequest& request) const;

        /**
         * A Callable wrapper for CreateFpgaImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFpgaImageOutcomeCallable CreateFpgaImageCallable(const Model::CreateFpgaImageRequest& request) const;

        /**
         * An Async wrapper for CreateFpgaImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFpgaImageAsync(const Model::CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon EBS-backed AMI from an Amazon EBS-backed instance that is
         * either running or stopped.</p> <p>By default, when Amazon EC2 creates the new
         * AMI, it reboots the instance so that it can take snapshots of the attached
         * volumes while data is at rest, in order to ensure a consistent state. You can
         * set the <code>NoReboot</code> parameter to <code>true</code> in the API request,
         * or use the <code>--no-reboot</code> option in the CLI to prevent Amazon EC2 from
         * shutting down and rebooting the instance.</p>  <p>If you choose to
         * bypass the shutdown and reboot process by setting the <code>NoReboot</code>
         * parameter to <code>true</code> in the API request, or by using the
         * <code>--no-reboot</code> option in the CLI, we can't guarantee the file system
         * integrity of the created image.</p>  <p>If you customized your
         * instance with instance store volumes or Amazon EBS volumes in addition to the
         * root device volume, the new AMI contains block device mapping information for
         * those volumes. When you launch an instance from this new AMI, the instance
         * automatically launches with those additional volumes.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Create
         * an Amazon EBS-backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * A Callable wrapper for CreateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * An Async wrapper for CreateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an event window in which scheduled events for the associated Amazon
         * EC2 instances can run.</p> <p>You can define either a set of time ranges or a
         * cron expression when creating the event window, but not both. All event window
         * times are in UTC.</p> <p>You can create up to 200 event windows per Amazon Web
         * Services Region.</p> <p>When you create the event window, targets (instance IDs,
         * Dedicated Host IDs, or tags) are not yet associated with it. To ensure that the
         * event window can be used, you must associate one or more targets with it by
         * using the <a>AssociateInstanceEventWindow</a> API.</p>  <p>Event
         * windows are applicable only for scheduled events that stop, reboot, or terminate
         * instances.</p> <p>Event windows are <i>not</i> applicable for:</p> <ul> <li>
         * <p>Expedited scheduled events and network maintenance events. </p> </li> <li>
         * <p>Unscheduled maintenance such as AutoRecovery and unplanned reboots.</p> </li>
         * </ul>  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInstanceEventWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceEventWindowOutcome CreateInstanceEventWindow(const Model::CreateInstanceEventWindowRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceEventWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceEventWindowOutcomeCallable CreateInstanceEventWindowCallable(const Model::CreateInstanceEventWindowRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceEventWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceEventWindowAsync(const Model::CreateInstanceEventWindowRequest& request, const CreateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a running or stopped instance to an Amazon S3 bucket.</p> <p>For
         * information about the supported operating systems, image formats, and known
         * limitations for the types of instances you can export, see <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html">Exporting
         * an instance as a VM Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInstanceExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceExportTaskOutcome CreateInstanceExportTask(const Model::CreateInstanceExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceExportTaskOutcomeCallable CreateInstanceExportTaskCallable(const Model::CreateInstanceExportTaskRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceExportTaskAsync(const Model::CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an internet gateway for use with a VPC. After creating the internet
         * gateway, you attach it to a VPC using <a>AttachInternetGateway</a>.</p> <p>For
         * more information about your VPC and internet gateway, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon Virtual Private
         * Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInternetGatewayOutcome CreateInternetGateway(const Model::CreateInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInternetGatewayOutcomeCallable CreateInternetGatewayCallable(const Model::CreateInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInternetGatewayAsync(const Model::CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an IPAM. Amazon VPC IP Address Manager (IPAM) is a VPC feature that
         * you can use to automate your IP address management workflows including
         * assigning, tracking, troubleshooting, and auditing IP addresses across Amazon
         * Web Services Regions and accounts throughout your Amazon Web Services
         * Organization.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
         * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateIpam">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpamOutcome CreateIpam(const Model::CreateIpamRequest& request) const;

        /**
         * A Callable wrapper for CreateIpam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIpamOutcomeCallable CreateIpamCallable(const Model::CreateIpamRequest& request) const;

        /**
         * An Async wrapper for CreateIpam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIpamAsync(const Model::CreateIpamRequest& request, const CreateIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an IP address pool for Amazon VPC IP Address Manager (IPAM). In IPAM,
         * a pool is a collection of contiguous IP addresses CIDRs. Pools enable you to
         * organize your IP addresses according to your routing and security needs. For
         * example, if you have separate routing and security needs for development and
         * production applications, you can create a pool for each.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
         * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateIpamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpamPoolOutcome CreateIpamPool(const Model::CreateIpamPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateIpamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIpamPoolOutcomeCallable CreateIpamPoolCallable(const Model::CreateIpamPoolRequest& request) const;

        /**
         * An Async wrapper for CreateIpamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIpamPoolAsync(const Model::CreateIpamPoolRequest& request, const CreateIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an IPAM scope. In IPAM, a scope is the highest-level container within
         * IPAM. An IPAM contains two default scopes. Each scope represents the IP space
         * for a single network. The private scope is intended for all private IP address
         * space. The public scope is intended for all public IP address space. Scopes
         * enable you to reuse IP addresses across multiple unconnected networks without
         * causing IP address overlap or conflict.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/add-scope-ipam.html">Add a
         * scope</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateIpamScope">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpamScopeOutcome CreateIpamScope(const Model::CreateIpamScopeRequest& request) const;

        /**
         * A Callable wrapper for CreateIpamScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIpamScopeOutcomeCallable CreateIpamScopeCallable(const Model::CreateIpamScopeRequest& request) const;

        /**
         * An Async wrapper for CreateIpamScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIpamScopeAsync(const Model::CreateIpamScopeRequest& request, const CreateIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an ED25519 or 2048-bit RSA key pair with the specified name and in
         * the specified PEM or PPK format. Amazon EC2 stores the public key and displays
         * the private key for you to save to a file. The private key is returned as an
         * unencrypted PEM encoded PKCS#1 private key or an unencrypted PPK formatted
         * private key for use with PuTTY. If a key with the specified name already exists,
         * Amazon EC2 returns an error.</p> <p>The key pair returned to you is available
         * only in the Amazon Web Services Region in which you create it. If you prefer,
         * you can create your own key pair using a third-party tool and upload it to any
         * Region using <a>ImportKeyPair</a>.</p> <p>You can have up to 5,000 key pairs per
         * Amazon Web Services Region.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
         * EC2 key pairs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest& request) const;

        /**
         * A Callable wrapper for CreateKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request) const;

        /**
         * An Async wrapper for CreateKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a launch template.</p> <p>A launch template contains the parameters
         * to launch an instance. When you launch an instance using <a>RunInstances</a>,
         * you can specify a launch template instead of providing the launch parameters in
         * the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Launch
         * an instance from a launch template</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p> <p>If you want to clone an existing launch template as the
         * basis for creating a new launch template, you can use the Amazon EC2 console.
         * The API, SDKs, and CLI do not support cloning a template. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template-from-existing-launch-template">Create
         * a launch template from an existing launch template</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLaunchTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchTemplateOutcome CreateLaunchTemplate(const Model::CreateLaunchTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchTemplateOutcomeCallable CreateLaunchTemplateCallable(const Model::CreateLaunchTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateLaunchTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchTemplateAsync(const Model::CreateLaunchTemplateRequest& request, const CreateLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of a launch template. You can specify an existing
         * version of launch template from which to base the new version.</p> <p>Launch
         * template versions are numbered in the order in which they are created. You
         * cannot specify, change, or replace the numbering of launch template
         * versions.</p> <p>Launch templates are immutable; after you create a launch
         * template, you can't modify it. Instead, you can create a new version of the
         * launch template that includes any changes you require.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#manage-launch-template-versions">Modify
         * a launch template (manage launch template versions)</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLaunchTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchTemplateVersionOutcome CreateLaunchTemplateVersion(const Model::CreateLaunchTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchTemplateVersionOutcomeCallable CreateLaunchTemplateVersionCallable(const Model::CreateLaunchTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for CreateLaunchTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchTemplateVersionAsync(const Model::CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a static route for the specified local gateway route table. You must
         * specify one of the following targets: </p> <ul> <li> <p>
         * <code>LocalGatewayVirtualInterfaceGroupId</code> </p> </li> <li> <p>
         * <code>NetworkInterfaceId</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteOutcome CreateLocalGatewayRoute(const Model::CreateLocalGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateLocalGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocalGatewayRouteOutcomeCallable CreateLocalGatewayRouteCallable(const Model::CreateLocalGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for CreateLocalGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocalGatewayRouteAsync(const Model::CreateLocalGatewayRouteRequest& request, const CreateLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a local gateway route table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableOutcome CreateLocalGatewayRouteTable(const Model::CreateLocalGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for CreateLocalGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocalGatewayRouteTableOutcomeCallable CreateLocalGatewayRouteTableCallable(const Model::CreateLocalGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for CreateLocalGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocalGatewayRouteTableAsync(const Model::CreateLocalGatewayRouteTableRequest& request, const CreateLocalGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a local gateway route table virtual interface group association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request, const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified VPC with the specified local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTableVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableVpcAssociationOutcome CreateLocalGatewayRouteTableVpcAssociation(const Model::CreateLocalGatewayRouteTableVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateLocalGatewayRouteTableVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocalGatewayRouteTableVpcAssociationOutcomeCallable CreateLocalGatewayRouteTableVpcAssociationCallable(const Model::CreateLocalGatewayRouteTableVpcAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateLocalGatewayRouteTableVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocalGatewayRouteTableVpcAssociationAsync(const Model::CreateLocalGatewayRouteTableVpcAssociationRequest& request, const CreateLocalGatewayRouteTableVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a managed prefix list. You can specify one or more entries for the
         * prefix list. Each entry consists of a CIDR block and an optional
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateManagedPrefixList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedPrefixListOutcome CreateManagedPrefixList(const Model::CreateManagedPrefixListRequest& request) const;

        /**
         * A Callable wrapper for CreateManagedPrefixList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateManagedPrefixListOutcomeCallable CreateManagedPrefixListCallable(const Model::CreateManagedPrefixListRequest& request) const;

        /**
         * An Async wrapper for CreateManagedPrefixList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateManagedPrefixListAsync(const Model::CreateManagedPrefixListRequest& request, const CreateManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a NAT gateway in the specified subnet. This action creates a network
         * interface in the specified subnet with a private IP address from the IP address
         * range of the subnet. You can create either a public NAT gateway or a private NAT
         * gateway.</p> <p>With a public NAT gateway, internet-bound traffic from a private
         * subnet can be routed to the NAT gateway, so that instances in a private subnet
         * can connect to the internet.</p> <p>With a private NAT gateway, private
         * communication is routed across VPCs and on-premises networks through a transit
         * gateway or virtual private gateway. Common use cases include running large
         * workloads behind a small pool of allowlisted IPv4 addresses, preserving private
         * IPv4 addresses, and communicating between overlapping networks.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">NAT
         * gateways</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNatGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateNatGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateNatGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network ACL in a VPC. Network ACLs provide an optional layer of
         * security (in addition to security groups) for the instances in your VPC.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAcl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAclOutcome CreateNetworkAcl(const Model::CreateNetworkAclRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkAcl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkAclOutcomeCallable CreateNetworkAclCallable(const Model::CreateNetworkAclRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkAcl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an entry (a rule) in a network ACL with the specified rule number.
         * Each network ACL has a set of numbered ingress rules and a separate set of
         * numbered egress rules. When determining whether a packet should be allowed in or
         * out of a subnet associated with the ACL, we process the entries in the ACL
         * according to the rule numbers, in ascending order. Each network ACL has a set of
         * ingress rules and a separate set of egress rules.</p> <p>We recommend that you
         * leave room between the rule numbers (for example, 100, 110, 120, ...), and not
         * number them one right after the other (for example, 101, 102, 103, ...). This
         * makes it easier to add a rule between existing ones without having to renumber
         * the rules.</p> <p>After you add an entry, you can't modify it; you must either
         * replace it, or create an entry and delete the old one.</p> <p>For more
         * information about network ACLs, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAclEntryOutcome CreateNetworkAclEntry(const Model::CreateNetworkAclEntryRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkAclEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkAclEntryOutcomeCallable CreateNetworkAclEntryCallable(const Model::CreateNetworkAclEntryRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkAclEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAclEntryAsync(const Model::CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Network Access Scope.</p> <p>Amazon Web Services Network Access
         * Analyzer enables cloud networking and cloud operations teams to verify that
         * their networks on Amazon Web Services conform to their network security and
         * governance objectives. For more information, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/network-access-analyzer/">Amazon
         * Web Services Network Access Analyzer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInsightsAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInsightsAccessScopeOutcome CreateNetworkInsightsAccessScope(const Model::CreateNetworkInsightsAccessScopeRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkInsightsAccessScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInsightsAccessScopeOutcomeCallable CreateNetworkInsightsAccessScopeCallable(const Model::CreateNetworkInsightsAccessScopeRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkInsightsAccessScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInsightsAccessScopeAsync(const Model::CreateNetworkInsightsAccessScopeRequest& request, const CreateNetworkInsightsAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a path to analyze for reachability.</p> <p>Reachability Analyzer
         * enables you to analyze and debug network reachability between two resources in
         * your virtual private cloud (VPC). For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/reachability/">What is Reachability
         * Analyzer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInsightsPath">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInsightsPathOutcome CreateNetworkInsightsPath(const Model::CreateNetworkInsightsPathRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkInsightsPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInsightsPathOutcomeCallable CreateNetworkInsightsPathCallable(const Model::CreateNetworkInsightsPathRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkInsightsPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInsightsPathAsync(const Model::CreateNetworkInsightsPathRequest& request, const CreateNetworkInsightsPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network interface in the specified subnet.</p> <p>The number of IP
         * addresses you can assign to a network interface varies by instance type. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
         * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
         * User Guide</i>.</p> <p>For more information about network interfaces, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
         * network interfaces</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants an Amazon Web Services-authorized account permission to attach the
         * specified network interface to an instance in their account.</p> <p>You can
         * grant permission to a single Amazon Web Services account only, and only one
         * account at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInterfacePermissionOutcome CreateNetworkInterfacePermission(const Model::CreateNetworkInterfacePermissionRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkInterfacePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInterfacePermissionOutcomeCallable CreateNetworkInterfacePermissionCallable(const Model::CreateNetworkInterfacePermissionRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkInterfacePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInterfacePermissionAsync(const Model::CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a placement group in which to launch instances. The strategy of the
         * placement group determines how the instances are organized within the group.
         * </p> <p>A <code>cluster</code> placement group is a logical grouping of
         * instances within a single Availability Zone that benefit from low network
         * latency, high network throughput. A <code>spread</code> placement group places
         * instances on distinct hardware. A <code>partition</code> placement group places
         * groups of instances in different partitions, where instances in one partition do
         * not share the same hardware with instances in another partition.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
         * groups</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementGroupOutcome CreatePlacementGroup(const Model::CreatePlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for CreatePlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlacementGroupOutcomeCallable CreatePlacementGroupCallable(const Model::CreatePlacementGroupRequest& request) const;

        /**
         * An Async wrapper for CreatePlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlacementGroupAsync(const Model::CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a public IPv4 address pool. A public IPv4 pool is an EC2 IP address
         * pool required for the public IPv4 CIDRs that you own and bring to Amazon Web
         * Services to manage with IPAM. IPv6 addresses you bring to Amazon Web Services,
         * however, use IPAM pools only. To monitor the status of pool creation, use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribePublicIpv4Pools.html">DescribePublicIpv4Pools</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePublicIpv4Pool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicIpv4PoolOutcome CreatePublicIpv4Pool(const Model::CreatePublicIpv4PoolRequest& request) const;

        /**
         * A Callable wrapper for CreatePublicIpv4Pool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicIpv4PoolOutcomeCallable CreatePublicIpv4PoolCallable(const Model::CreatePublicIpv4PoolRequest& request) const;

        /**
         * An Async wrapper for CreatePublicIpv4Pool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicIpv4PoolAsync(const Model::CreatePublicIpv4PoolRequest& request, const CreatePublicIpv4PoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the EBS-backed root volume for a <code>running</code> instance with
         * a new volume that is restored to the original root volume's launch state, that
         * is restored to a specific snapshot taken from the original root volume, or that
         * is restored from an AMI that has the same key characteristics as that of the
         * instance.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/replace-root.html">Replace
         * a root volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReplaceRootVolumeTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplaceRootVolumeTaskOutcome CreateReplaceRootVolumeTask(const Model::CreateReplaceRootVolumeTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateReplaceRootVolumeTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplaceRootVolumeTaskOutcomeCallable CreateReplaceRootVolumeTaskCallable(const Model::CreateReplaceRootVolumeTaskRequest& request) const;

        /**
         * An Async wrapper for CreateReplaceRootVolumeTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplaceRootVolumeTaskAsync(const Model::CreateReplaceRootVolumeTaskRequest& request, const CreateReplaceRootVolumeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a listing for Amazon EC2 Standard Reserved Instances to be sold in
         * the Reserved Instance Marketplace. You can submit one Standard Reserved Instance
         * listing at a time. To get a list of your Standard Reserved Instances, you can
         * use the <a>DescribeReservedInstances</a> operation.</p>  <p>Only Standard
         * Reserved Instances can be sold in the Reserved Instance Marketplace. Convertible
         * Reserved Instances cannot be sold.</p>  <p>The Reserved Instance
         * Marketplace matches sellers who want to resell Standard Reserved Instance
         * capacity that they no longer need with buyers who want to purchase additional
         * capacity. Reserved Instances bought and sold through the Reserved Instance
         * Marketplace work like any other Reserved Instances.</p> <p>To sell your Standard
         * Reserved Instances, you must first register as a seller in the Reserved Instance
         * Marketplace. After completing the registration process, you can create a
         * Reserved Instance Marketplace listing of some or all of your Standard Reserved
         * Instances, and specify the upfront price to receive for them. Your Standard
         * Reserved Instance listings then become available for purchase. To view the
         * details of your Standard Reserved Instance listing, you can use the
         * <a>DescribeReservedInstancesListings</a> operation.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReservedInstancesListing">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReservedInstancesListingOutcome CreateReservedInstancesListing(const Model::CreateReservedInstancesListingRequest& request) const;

        /**
         * A Callable wrapper for CreateReservedInstancesListing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReservedInstancesListingOutcomeCallable CreateReservedInstancesListingCallable(const Model::CreateReservedInstancesListingRequest& request) const;

        /**
         * An Async wrapper for CreateReservedInstancesListing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReservedInstancesListingAsync(const Model::CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a task that restores an AMI from an Amazon S3 object that was
         * previously created by using <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateStoreImageTask.html">CreateStoreImageTask</a>.</p>
         * <p>To use this API, you must have the required permissions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html#ami-s3-permissions">Permissions
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRestoreImageTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestoreImageTaskOutcome CreateRestoreImageTask(const Model::CreateRestoreImageTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateRestoreImageTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRestoreImageTaskOutcomeCallable CreateRestoreImageTaskCallable(const Model::CreateRestoreImageTaskRequest& request) const;

        /**
         * An Async wrapper for CreateRestoreImageTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRestoreImageTaskAsync(const Model::CreateRestoreImageTaskRequest& request, const CreateRestoreImageTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route in a route table within a VPC.</p> <p>You must specify either
         * a destination CIDR block or a prefix list ID. You must also specify exactly one
         * of the resources from the parameter list.</p> <p>When determining how to route
         * traffic, we use the route with the most specific match. For example, traffic is
         * destined for the IPv4 address <code>192.0.2.3</code>, and the route table
         * includes the following two IPv4 routes:</p> <ul> <li> <p>
         * <code>192.0.2.0/24</code> (goes to some target A)</p> </li> <li> <p>
         * <code>192.0.2.0/28</code> (goes to some target B)</p> </li> </ul> <p>Both routes
         * apply to the traffic destined for <code>192.0.2.3</code>. However, the second
         * route in the list covers a smaller number of IP addresses and is therefore more
         * specific, so we use that route to determine where to target the traffic.</p>
         * <p>For more information about route tables, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRoute">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route table for the specified VPC. After you create a route table,
         * you can add routes and associate the table with a subnet.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest& request) const;

        /**
         * A Callable wrapper for CreateRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request) const;

        /**
         * An Async wrapper for CreateRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a security group.</p> <p>A security group acts as a virtual firewall
         * for your instance to control inbound and outbound traffic. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 security groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * groups for your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p> <p>When you create a security group, you specify a friendly name
         * of your choice. You can have a security group for use in EC2-Classic with the
         * same name as a security group for use in a VPC. However, you can't have two
         * security groups for use in EC2-Classic with the same name or two security groups
         * for use in a VPC with the same name.</p> <p>You have a default security group
         * for use in EC2-Classic and a default security group for use in your VPC. If you
         * don't specify a security group when you launch an instance, the instance is
         * launched into the appropriate default security group. A default security group
         * includes a default rule that grants instances unrestricted network access to
         * each other.</p> <p>You can add or remove rules from your security groups using
         * <a>AuthorizeSecurityGroupIngress</a>, <a>AuthorizeSecurityGroupEgress</a>,
         * <a>RevokeSecurityGroupIngress</a>, and <a>RevokeSecurityGroupEgress</a>.</p>
         * <p>For more information about VPC security group limits, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html">Amazon
         * VPC Limits</a>.</p>  <p>We are retiring EC2-Classic. We recommend that you
         * migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of an EBS volume and stores it in Amazon S3. You can use
         * snapshots for backups, to make copies of EBS volumes, and to save data before
         * shutting down an instance.</p> <p>You can create snapshots of volumes in a
         * Region and volumes on an Outpost. If you create a snapshot of a volume in a
         * Region, the snapshot must be stored in the same Region as the volume. If you
         * create a snapshot of a volume on an Outpost, the snapshot can be stored on the
         * same Outpost as the volume, or in the Region for that Outpost.</p> <p>When a
         * snapshot is created, any Amazon Web Services Marketplace product codes that are
         * associated with the source volume are propagated to the snapshot.</p> <p>You can
         * take a snapshot of an attached volume that is in use. However, snapshots only
         * capture data that has been written to your Amazon EBS volume at the time the
         * snapshot command is issued; this might exclude any data that has been cached by
         * any applications or the operating system. If you can pause any file systems on
         * the volume long enough to take a snapshot, your snapshot should be complete.
         * However, if you cannot pause all file writes to the volume, you should unmount
         * the volume from within the instance, issue the snapshot command, and then
         * remount the volume to ensure a consistent and complete snapshot. You may remount
         * and use your volume while the snapshot status is <code>pending</code>.</p> <p>To
         * create a snapshot for Amazon EBS volumes that serve as root devices, you should
         * stop the instance before taking the snapshot.</p> <p>Snapshots that are taken
         * from encrypted volumes are automatically encrypted. Volumes that are created
         * from encrypted snapshots are also automatically encrypted. Your encrypted
         * volumes and any associated snapshots always remain protected.</p> <p>You can tag
         * your snapshots during creation. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tag
         * your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon
         * Elastic Block Store</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates crash-consistent snapshots of multiple EBS volumes and stores the
         * data in S3. Volumes are chosen by specifying an instance. Any attached volumes
         * will produce one snapshot each that is crash-consistent across the instance.</p>
         * <p>You can include all of the volumes currently attached to the instance, or you
         * can exclude the root volume or specific data (non-root) volumes from the
         * multi-volume snapshot set.</p> <p>You can create multi-volume snapshots of
         * instances in a Region and instances on an Outpost. If you create snapshots from
         * an instance in a Region, the snapshots must be stored in the same Region as the
         * instance. If you create snapshots from an instance on an Outpost, the snapshots
         * can be stored on the same Outpost as the instance, or in the Region for that
         * Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotsOutcome CreateSnapshots(const Model::CreateSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotsOutcomeCallable CreateSnapshotsCallable(const Model::CreateSnapshotsRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotsAsync(const Model::CreateSnapshotsRequest& request, const CreateSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data feed for Spot Instances, enabling you to view Spot Instance
         * usage logs. You can create one data feed per Amazon Web Services account. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance data feed</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSpotDatafeedSubscriptionOutcome CreateSpotDatafeedSubscription(const Model::CreateSpotDatafeedSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateSpotDatafeedSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSpotDatafeedSubscriptionOutcomeCallable CreateSpotDatafeedSubscriptionCallable(const Model::CreateSpotDatafeedSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateSpotDatafeedSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSpotDatafeedSubscriptionAsync(const Model::CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores an AMI as a single object in an Amazon S3 bucket.</p> <p>To use this
         * API, you must have the required permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html#ami-s3-permissions">Permissions
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateStoreImageTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStoreImageTaskOutcome CreateStoreImageTask(const Model::CreateStoreImageTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateStoreImageTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStoreImageTaskOutcomeCallable CreateStoreImageTaskCallable(const Model::CreateStoreImageTaskRequest& request) const;

        /**
         * An Async wrapper for CreateStoreImageTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStoreImageTaskAsync(const Model::CreateStoreImageTaskRequest& request, const CreateStoreImageTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subnet in a specified VPC.</p> <p>You must specify an IPv4 CIDR
         * block for the subnet. After you create a subnet, you can't change its CIDR
         * block. The allowed block size is between a /16 netmask (65,536 IP addresses) and
         * /28 netmask (16 IP addresses). The CIDR block must not overlap with the CIDR
         * block of an existing subnet in the VPC.</p> <p>If you've associated an IPv6 CIDR
         * block with your VPC, you can create a subnet with an IPv6 CIDR block that uses a
         * /64 prefix length. </p>  <p>Amazon Web Services reserves both the
         * first four and the last IPv4 address in each subnet's CIDR block. They're not
         * available for use.</p>  <p>If you add more than one subnet to a VPC,
         * they're set up in a star topology with a logical router in the middle.</p>
         * <p>When you stop an instance in a subnet, it retains its private IPv4 address.
         * It's therefore possible to have a subnet with no running instances (they're all
         * stopped), but no remaining IP addresses available.</p> <p>For more information
         * about subnets, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Your
         * VPC and subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest& request) const;

        /**
         * A Callable wrapper for CreateSubnet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request) const;

        /**
         * An Async wrapper for CreateSubnet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subnet CIDR reservation. For information about subnet CIDR
         * reservations, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/subnet-cidr-reservation.html">Subnet
         * CIDR reservations</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnetCidrReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetCidrReservationOutcome CreateSubnetCidrReservation(const Model::CreateSubnetCidrReservationRequest& request) const;

        /**
         * A Callable wrapper for CreateSubnetCidrReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetCidrReservationOutcomeCallable CreateSubnetCidrReservationCallable(const Model::CreateSubnetCidrReservationRequest& request) const;

        /**
         * An Async wrapper for CreateSubnetCidrReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubnetCidrReservationAsync(const Model::CreateSubnetCidrReservationRequest& request, const CreateSubnetCidrReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Amazon EC2
         * resource or resources. When you specify an existing tag key, the value is
         * overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and optional value. Tag keys must be unique per
         * resource.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tag
         * your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>. For more information about creating IAM policies that control users'
         * access to resources based on tags, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-iam-actions-resources.html">Supported
         * resource-level permissions for Amazon EC2 API actions</a> in the <i>Amazon
         * Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTags">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Traffic Mirror filter.</p> <p>A Traffic Mirror filter is a set of
         * rules that defines the traffic to mirror.</p> <p>By default, no traffic is
         * mirrored. To mirror traffic, use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTrafficMirrorFilterRule.htm">CreateTrafficMirrorFilterRule</a>
         * to add Traffic Mirror rules to the filter. The rules you add define what traffic
         * gets mirrored. You can also use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyTrafficMirrorFilterNetworkServices.html">ModifyTrafficMirrorFilterNetworkServices</a>
         * to mirror supported network services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTrafficMirrorFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficMirrorFilterOutcome CreateTrafficMirrorFilter(const Model::CreateTrafficMirrorFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficMirrorFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficMirrorFilterOutcomeCallable CreateTrafficMirrorFilterCallable(const Model::CreateTrafficMirrorFilterRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficMirrorFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficMirrorFilterAsync(const Model::CreateTrafficMirrorFilterRequest& request, const CreateTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Traffic Mirror filter rule.</p> <p>A Traffic Mirror rule defines
         * the Traffic Mirror source traffic to mirror.</p> <p>You need the Traffic Mirror
         * filter ID when you create the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficMirrorFilterRuleOutcome CreateTrafficMirrorFilterRule(const Model::CreateTrafficMirrorFilterRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficMirrorFilterRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficMirrorFilterRuleOutcomeCallable CreateTrafficMirrorFilterRuleCallable(const Model::CreateTrafficMirrorFilterRuleRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficMirrorFilterRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficMirrorFilterRuleAsync(const Model::CreateTrafficMirrorFilterRuleRequest& request, const CreateTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Traffic Mirror session.</p> <p>A Traffic Mirror session actively
         * copies packets from a Traffic Mirror source to a Traffic Mirror target. Create a
         * filter, and then assign it to the session to define a subset of the traffic to
         * mirror, for example all TCP traffic.</p> <p>The Traffic Mirror source and the
         * Traffic Mirror target (monitoring appliances) can be in the same VPC, or in a
         * different VPC connected via VPC peering or a transit gateway. </p> <p>By
         * default, no traffic is mirrored. Use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTrafficMirrorFilter.htm">CreateTrafficMirrorFilter</a>
         * to create filter rules that specify the traffic to mirror.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTrafficMirrorSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficMirrorSessionOutcome CreateTrafficMirrorSession(const Model::CreateTrafficMirrorSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficMirrorSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficMirrorSessionOutcomeCallable CreateTrafficMirrorSessionCallable(const Model::CreateTrafficMirrorSessionRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficMirrorSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficMirrorSessionAsync(const Model::CreateTrafficMirrorSessionRequest& request, const CreateTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a target for your Traffic Mirror session.</p> <p>A Traffic Mirror
         * target is the destination for mirrored traffic. The Traffic Mirror source and
         * the Traffic Mirror target (monitoring appliances) can be in the same VPC, or in
         * different VPCs connected via VPC peering or a transit gateway.</p> <p>A Traffic
         * Mirror target can be a network interface, a Network Load Balancer, or a Gateway
         * Load Balancer endpoint.</p> <p>To use the target in a Traffic Mirror session,
         * use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTrafficMirrorSession.htm">CreateTrafficMirrorSession</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTrafficMirrorTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficMirrorTargetOutcome CreateTrafficMirrorTarget(const Model::CreateTrafficMirrorTargetRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficMirrorTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficMirrorTargetOutcomeCallable CreateTrafficMirrorTargetCallable(const Model::CreateTrafficMirrorTargetRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficMirrorTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficMirrorTargetAsync(const Model::CreateTrafficMirrorTargetRequest& request, const CreateTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a transit gateway.</p> <p>You can use a transit gateway to
         * interconnect your virtual private clouds (VPC) and on-premises networks. After
         * the transit gateway enters the <code>available</code> state, you can attach your
         * VPCs and VPN connections to the transit gateway.</p> <p>To attach your VPCs, use
         * <a>CreateTransitGatewayVpcAttachment</a>.</p> <p>To attach a VPN connection, use
         * <a>CreateCustomerGateway</a> to create a customer gateway and specify the ID of
         * the customer gateway and the ID of the transit gateway in a call to
         * <a>CreateVpnConnection</a>.</p> <p>When you create a transit gateway, we create
         * a default transit gateway route table and use it as the default association
         * route table and the default propagation route table. You can use
         * <a>CreateTransitGatewayRouteTable</a> to create additional transit gateway route
         * tables. If you disable automatic route propagation, we do not create a default
         * transit gateway route table. You can use
         * <a>EnableTransitGatewayRouteTablePropagation</a> to propagate routes from a
         * resource attachment to a transit gateway route table. If you disable automatic
         * associations, you can use <a>AssociateTransitGatewayRouteTable</a> to associate
         * a resource attachment with a transit gateway route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayOutcome CreateTransitGateway(const Model::CreateTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayOutcomeCallable CreateTransitGatewayCallable(const Model::CreateTransitGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayAsync(const Model::CreateTransitGatewayRequest& request, const CreateTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Connect attachment from a specified transit gateway attachment. A
         * Connect attachment is a GRE-based tunnel attachment that you can use to
         * establish a connection between a transit gateway and an appliance.</p> <p>A
         * Connect attachment uses an existing VPC or Amazon Web Services Direct Connect
         * attachment as the underlying transport mechanism.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayConnectOutcome CreateTransitGatewayConnect(const Model::CreateTransitGatewayConnectRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayConnectOutcomeCallable CreateTransitGatewayConnectCallable(const Model::CreateTransitGatewayConnectRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayConnectAsync(const Model::CreateTransitGatewayConnectRequest& request, const CreateTransitGatewayConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Connect peer for a specified transit gateway Connect attachment
         * between a transit gateway and an appliance.</p> <p>The peer address and transit
         * gateway address must be the same IP address family (IPv4 or IPv6).</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-connect.html#tgw-connect-peer">Connect
         * peers</a> in the <i>Transit Gateways Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayConnectPeerOutcome CreateTransitGatewayConnectPeer(const Model::CreateTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayConnectPeerOutcomeCallable CreateTransitGatewayConnectPeerCallable(const Model::CreateTransitGatewayConnectPeerRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayConnectPeerAsync(const Model::CreateTransitGatewayConnectPeerRequest& request, const CreateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multicast domain using the specified transit gateway.</p> <p>The
         * transit gateway must be in the available state before you create a domain. Use
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeTransitGateways.html">DescribeTransitGateways</a>
         * to see the state of transit gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayMulticastDomainOutcome CreateTransitGatewayMulticastDomain(const Model::CreateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayMulticastDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayMulticastDomainOutcomeCallable CreateTransitGatewayMulticastDomainCallable(const Model::CreateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayMulticastDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayMulticastDomainAsync(const Model::CreateTransitGatewayMulticastDomainRequest& request, const CreateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a transit gateway peering attachment between the specified transit
         * gateway (requester) and a peer transit gateway (accepter). The peer transit
         * gateway can be in your account or a different Amazon Web Services account.</p>
         * <p>After you create the peering attachment, the owner of the accepter transit
         * gateway must accept the attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPeeringAttachmentOutcome CreateTransitGatewayPeeringAttachment(const Model::CreateTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayPeeringAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayPeeringAttachmentOutcomeCallable CreateTransitGatewayPeeringAttachmentCallable(const Model::CreateTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayPeeringAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayPeeringAttachmentAsync(const Model::CreateTransitGatewayPeeringAttachmentRequest& request, const CreateTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a transit gateway policy table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPolicyTableOutcome CreateTransitGatewayPolicyTable(const Model::CreateTransitGatewayPolicyTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayPolicyTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayPolicyTableOutcomeCallable CreateTransitGatewayPolicyTableCallable(const Model::CreateTransitGatewayPolicyTableRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayPolicyTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayPolicyTableAsync(const Model::CreateTransitGatewayPolicyTableRequest& request, const CreateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPrefixListReferenceOutcome CreateTransitGatewayPrefixListReference(const Model::CreateTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayPrefixListReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayPrefixListReferenceOutcomeCallable CreateTransitGatewayPrefixListReferenceCallable(const Model::CreateTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayPrefixListReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayPrefixListReferenceAsync(const Model::CreateTransitGatewayPrefixListReferenceRequest& request, const CreateTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a static route for the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteOutcome CreateTransitGatewayRoute(const Model::CreateTransitGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayRouteOutcomeCallable CreateTransitGatewayRouteCallable(const Model::CreateTransitGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayRouteAsync(const Model::CreateTransitGatewayRouteRequest& request, const CreateTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route table for the specified transit gateway.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableOutcome CreateTransitGatewayRouteTable(const Model::CreateTransitGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayRouteTableOutcomeCallable CreateTransitGatewayRouteTableCallable(const Model::CreateTransitGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayRouteTableAsync(const Model::CreateTransitGatewayRouteTableRequest& request, const CreateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Advertises a new transit gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRouteTableAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableAnnouncementOutcome CreateTransitGatewayRouteTableAnnouncement(const Model::CreateTransitGatewayRouteTableAnnouncementRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayRouteTableAnnouncement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayRouteTableAnnouncementOutcomeCallable CreateTransitGatewayRouteTableAnnouncementCallable(const Model::CreateTransitGatewayRouteTableAnnouncementRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayRouteTableAnnouncement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayRouteTableAnnouncementAsync(const Model::CreateTransitGatewayRouteTableAnnouncementRequest& request, const CreateTransitGatewayRouteTableAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified VPC to the specified transit gateway.</p> <p>If you
         * attach a VPC with a CIDR range that overlaps the CIDR range of a VPC that is
         * already attached, the new VPC CIDR range is not propagated to the default
         * propagation route table.</p> <p>To send VPC traffic to an attached transit
         * gateway, add a route to the VPC route table using
         * <a>CreateRoute</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayVpcAttachmentOutcome CreateTransitGatewayVpcAttachment(const Model::CreateTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitGatewayVpcAttachmentOutcomeCallable CreateTransitGatewayVpcAttachmentCallable(const Model::CreateTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for CreateTransitGatewayVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitGatewayVpcAttachmentAsync(const Model::CreateTransitGatewayVpcAttachmentRequest& request, const CreateTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An Amazon Web Services Verified Access endpoint is where you define your
         * application along with an optional endpoint-level access policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVerifiedAccessEndpointOutcome CreateVerifiedAccessEndpoint(const Model::CreateVerifiedAccessEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVerifiedAccessEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVerifiedAccessEndpointOutcomeCallable CreateVerifiedAccessEndpointCallable(const Model::CreateVerifiedAccessEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateVerifiedAccessEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVerifiedAccessEndpointAsync(const Model::CreateVerifiedAccessEndpointRequest& request, const CreateVerifiedAccessEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An Amazon Web Services Verified Access group is a collection of Amazon Web
         * Services Verified Access endpoints who's associated applications have similar
         * security requirements. Each instance within an Amazon Web Services Verified
         * Access group shares an Amazon Web Services Verified Access policy. For example,
         * you can group all Amazon Web Services Verified Access instances associated with
         * “sales” applications together and use one common Amazon Web Services Verified
         * Access policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVerifiedAccessGroupOutcome CreateVerifiedAccessGroup(const Model::CreateVerifiedAccessGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateVerifiedAccessGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVerifiedAccessGroupOutcomeCallable CreateVerifiedAccessGroupCallable(const Model::CreateVerifiedAccessGroupRequest& request) const;

        /**
         * An Async wrapper for CreateVerifiedAccessGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVerifiedAccessGroupAsync(const Model::CreateVerifiedAccessGroupRequest& request, const CreateVerifiedAccessGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An Amazon Web Services Verified Access instance is a regional entity that
         * evaluates application requests and grants access only when your security
         * requirements are met.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVerifiedAccessInstanceOutcome CreateVerifiedAccessInstance(const Model::CreateVerifiedAccessInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateVerifiedAccessInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVerifiedAccessInstanceOutcomeCallable CreateVerifiedAccessInstanceCallable(const Model::CreateVerifiedAccessInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateVerifiedAccessInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVerifiedAccessInstanceAsync(const Model::CreateVerifiedAccessInstanceRequest& request, const CreateVerifiedAccessInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A trust provider is a third-party entity that creates, maintains, and manages
         * identity information for users and devices. When an application request is made,
         * the identity information sent by the trust provider will be evaluated by Amazon
         * Web Services Verified Access, before allowing or denying the application
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessTrustProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVerifiedAccessTrustProviderOutcome CreateVerifiedAccessTrustProvider(const Model::CreateVerifiedAccessTrustProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateVerifiedAccessTrustProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVerifiedAccessTrustProviderOutcomeCallable CreateVerifiedAccessTrustProviderCallable(const Model::CreateVerifiedAccessTrustProviderRequest& request) const;

        /**
         * An Async wrapper for CreateVerifiedAccessTrustProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVerifiedAccessTrustProviderAsync(const Model::CreateVerifiedAccessTrustProviderRequest& request, const CreateVerifiedAccessTrustProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an EBS volume that can be attached to an instance in the same
         * Availability Zone.</p> <p>You can create a new empty volume or restore a volume
         * from an EBS snapshot. Any Amazon Web Services Marketplace product codes from the
         * snapshot are propagated to the volume.</p> <p>You can create encrypted volumes.
         * Encrypted volumes must be attached to instances that support Amazon EBS
         * encryption. Volumes that are created from encrypted snapshots are also
         * automatically encrypted. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can tag your volumes during creation. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tag
         * your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-creating-volume.html">Create
         * an Amazon EBS volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVolumeOutcomeCallable CreateVolumeCallable(const Model::CreateVolumeRequest& request) const;

        /**
         * An Async wrapper for CreateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVolumeAsync(const Model::CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC with the specified IPv4 CIDR block. The smallest VPC you can
         * create uses a /28 netmask (16 IPv4 addresses), and the largest uses a /16
         * netmask (65,536 IPv4 addresses). For more information about how large to make
         * your VPC, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Your
         * VPC and subnets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can optionally request an IPv6 CIDR block for the VPC. You can request an
         * Amazon-provided IPv6 CIDR block from Amazon's pool of IPv6 addresses, or an IPv6
         * CIDR block from an IPv6 address pool that you provisioned through bring your own
         * IP addresses (<a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html">BYOIP</a>).</p>
         * <p>By default, each instance you launch in the VPC has the default DHCP options,
         * which include only a default DNS server that we provide (AmazonProvidedDNS). For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_DHCP_Options.html">DHCP
         * options sets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can specify the instance tenancy value for the VPC when you create it.
         * You can't change this value for the VPC after you create it. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpc">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest& request) const;

        /**
         * A Callable wrapper for CreateVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request) const;

        /**
         * An Async wrapper for CreateVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC endpoint for a specified service. An endpoint enables you to
         * create a private connection between your VPC and the service. The service may be
         * provided by Amazon Web Services, an Amazon Web Services Marketplace Partner, or
         * another Amazon Web Services account. For more information, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/privatelink/">Amazon Web Services
         * PrivateLink Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection notification for a specified VPC endpoint or VPC
         * endpoint service. A connection notification notifies you of specific endpoint
         * events. You must create an SNS topic to receive notifications. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Create a
         * Topic</a> in the <i>Amazon Simple Notification Service Developer Guide</i>.</p>
         * <p>You can create a connection notification for interface endpoints
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpointConnectionNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointConnectionNotificationOutcome CreateVpcEndpointConnectionNotification(const Model::CreateVpcEndpointConnectionNotificationRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpointConnectionNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointConnectionNotificationOutcomeCallable CreateVpcEndpointConnectionNotificationCallable(const Model::CreateVpcEndpointConnectionNotificationRequest& request) const;

        /**
         * An Async wrapper for CreateVpcEndpointConnectionNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointConnectionNotificationAsync(const Model::CreateVpcEndpointConnectionNotificationRequest& request, const CreateVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC endpoint service to which service consumers (Amazon Web
         * Services accounts, IAM users, and IAM roles) can connect.</p> <p>Before you
         * create an endpoint service, you must create one of the following for your
         * service:</p> <ul> <li> <p>A <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/">Network
         * Load Balancer</a>. Service consumers connect to your service using an interface
         * endpoint.</p> </li> <li> <p>A <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/">Gateway
         * Load Balancer</a>. Service consumers connect to your service using a Gateway
         * Load Balancer endpoint.</p> </li> </ul> <p>If you set the private DNS name, you
         * must prove that you own the private DNS domain name.</p> <p>For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/privatelink/">Amazon Web Services
         * PrivateLink Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpointServiceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointServiceConfigurationOutcome CreateVpcEndpointServiceConfiguration(const Model::CreateVpcEndpointServiceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpointServiceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointServiceConfigurationOutcomeCallable CreateVpcEndpointServiceConfigurationCallable(const Model::CreateVpcEndpointServiceConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateVpcEndpointServiceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointServiceConfigurationAsync(const Model::CreateVpcEndpointServiceConfigurationRequest& request, const CreateVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a VPC peering connection between two VPCs: a requester VPC that you
         * own and an accepter VPC with which to create the connection. The accepter VPC
         * can belong to another Amazon Web Services account and can be in a different
         * Region to the requester VPC. The requester VPC and accepter VPC cannot have
         * overlapping CIDR blocks.</p>  <p>Limitations and rules apply to a VPC
         * peering connection. For more information, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/peering/vpc-peering-basics.html#vpc-peering-limitations">limitations</a>
         * section in the <i>VPC Peering Guide</i>.</p>  <p>The owner of the
         * accepter VPC must accept the peering request to activate the peering connection.
         * The VPC peering connection request expires after 7 days, after which it cannot
         * be accepted or rejected.</p> <p>If you create a VPC peering connection request
         * between VPCs with overlapping CIDR blocks, the VPC peering connection has a
         * status of <code>failed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringConnectionOutcome CreateVpcPeeringConnection(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringConnectionOutcomeCallable CreateVpcPeeringConnectionCallable(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringConnectionAsync(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPN connection between an existing virtual private gateway or
         * transit gateway and a customer gateway. The supported connection type is
         * <code>ipsec.1</code>.</p> <p>The response includes information that you need to
         * give to your network administrator to configure your customer gateway.</p>
         *  <p>We strongly recommend that you use HTTPS when calling this
         * operation because the response contains sensitive cryptographic information for
         * configuring your customer gateway device.</p>  <p>If you decide to
         * shut down your VPN connection for any reason and later create a new VPN
         * connection, you must reconfigure your customer gateway with the new information
         * returned from this call.</p> <p>This is an idempotent operation. If you perform
         * the operation more than once, Amazon EC2 doesn't return an error.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnConnectionOutcome CreateVpnConnection(const Model::CreateVpnConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVpnConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnConnectionOutcomeCallable CreateVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateVpnConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a static route associated with a VPN connection between an existing
         * virtual private gateway and a VPN customer gateway. The static route allows
         * traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnConnectionRouteOutcome CreateVpnConnectionRoute(const Model::CreateVpnConnectionRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateVpnConnectionRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnConnectionRouteOutcomeCallable CreateVpnConnectionRouteCallable(const Model::CreateVpnConnectionRouteRequest& request) const;

        /**
         * An Async wrapper for CreateVpnConnectionRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnConnectionRouteAsync(const Model::CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual private gateway. A virtual private gateway is the endpoint
         * on the VPC side of your VPN connection. You can create a virtual private gateway
         * before creating the VPC itself.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnGatewayOutcome CreateVpnGateway(const Model::CreateVpnGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateVpnGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnGatewayOutcomeCallable CreateVpnGatewayCallable(const Model::CreateVpnGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateVpnGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnGatewayAsync(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a carrier gateway.</p>  <p>If you do not delete the route
         * that contains the carrier gateway as the Target, the route is a blackhole route.
         * For information about how to delete a route, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DeleteRoute.html">DeleteRoute</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCarrierGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCarrierGatewayOutcome DeleteCarrierGateway(const Model::DeleteCarrierGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteCarrierGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCarrierGatewayOutcomeCallable DeleteCarrierGatewayCallable(const Model::DeleteCarrierGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteCarrierGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCarrierGatewayAsync(const Model::DeleteCarrierGatewayRequest& request, const DeleteCarrierGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Client VPN endpoint. You must disassociate all target
         * networks before you can delete a Client VPN endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientVpnEndpointOutcome DeleteClientVpnEndpoint(const Model::DeleteClientVpnEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteClientVpnEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClientVpnEndpointOutcomeCallable DeleteClientVpnEndpointCallable(const Model::DeleteClientVpnEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteClientVpnEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClientVpnEndpointAsync(const Model::DeleteClientVpnEndpointRequest& request, const DeleteClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a route from a Client VPN endpoint. You can only delete routes that
         * you manually added using the <b>CreateClientVpnRoute</b> action. You cannot
         * delete routes that were automatically added when associating a subnet. To remove
         * routes that have been automatically added, disassociate the target subnet from
         * the Client VPN endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteClientVpnRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientVpnRouteOutcome DeleteClientVpnRoute(const Model::DeleteClientVpnRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteClientVpnRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClientVpnRouteOutcomeCallable DeleteClientVpnRouteCallable(const Model::DeleteClientVpnRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteClientVpnRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClientVpnRouteAsync(const Model::DeleteClientVpnRouteRequest& request, const DeleteClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a range of customer-owned IP addresses. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoipCidrOutcome DeleteCoipCidr(const Model::DeleteCoipCidrRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoipCidrOutcomeCallable DeleteCoipCidrCallable(const Model::DeleteCoipCidrRequest& request) const;

        /**
         * An Async wrapper for DeleteCoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoipCidrAsync(const Model::DeleteCoipCidrRequest& request, const DeleteCoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a pool of customer-owned IP (CoIP) addresses. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCoipPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoipPoolOutcome DeleteCoipPool(const Model::DeleteCoipPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoipPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoipPoolOutcomeCallable DeleteCoipPoolCallable(const Model::DeleteCoipPoolRequest& request) const;

        /**
         * An Async wrapper for DeleteCoipPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoipPoolAsync(const Model::DeleteCoipPoolRequest& request, const DeleteCoipPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified customer gateway. You must delete the VPN connection
         * before you can delete the customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of DHCP options. You must disassociate the set of
         * DHCP options before you can delete it. You can disassociate the set of DHCP
         * options by associating either a new set of options or the default set of options
         * with the VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDhcpOptionsOutcome DeleteDhcpOptions(const Model::DeleteDhcpOptionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteDhcpOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDhcpOptionsOutcomeCallable DeleteDhcpOptionsCallable(const Model::DeleteDhcpOptionsRequest& request) const;

        /**
         * An Async wrapper for DeleteDhcpOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDhcpOptionsAsync(const Model::DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an egress-only internet gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEgressOnlyInternetGatewayOutcome DeleteEgressOnlyInternetGateway(const Model::DeleteEgressOnlyInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteEgressOnlyInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEgressOnlyInternetGatewayOutcomeCallable DeleteEgressOnlyInternetGatewayCallable(const Model::DeleteEgressOnlyInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteEgressOnlyInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEgressOnlyInternetGatewayAsync(const Model::DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified EC2 Fleet.</p> <p>After you delete an EC2 Fleet, it
         * launches no new instances.</p> <p>You must specify whether a deleted EC2 Fleet
         * should also terminate its instances. If you choose to terminate the instances,
         * the EC2 Fleet enters the <code>deleted_terminating</code> state. Otherwise, the
         * EC2 Fleet enters the <code>deleted_running</code> state, and the instances
         * continue to run until they are interrupted or you terminate them manually.</p>
         * <p>For <code>instant</code> fleets, EC2 Fleet must terminate the instances when
         * the fleet is deleted. A deleted <code>instant</code> fleet with running
         * instances is not supported.</p> <p class="title"> <b>Restrictions</b> </p> <ul>
         * <li> <p>You can delete up to 25 <code>instant</code> fleets in a single request.
         * If you exceed this number, no <code>instant</code> fleets are deleted and an
         * error is returned. There is no restriction on the number of fleets of type
         * <code>maintain</code> or <code>request</code> that can be deleted in a single
         * request.</p> </li> <li> <p>Up to 1000 instances can be terminated in a single
         * request to delete <code>instant</code> fleets.</p> </li> </ul> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#delete-fleet">Delete
         * an EC2 Fleet</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetsOutcome DeleteFleets(const Model::DeleteFleetsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetsOutcomeCallable DeleteFleetsCallable(const Model::DeleteFleetsRequest& request) const;

        /**
         * An Async wrapper for DeleteFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetsAsync(const Model::DeleteFleetsRequest& request, const DeleteFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more flow logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowLogsOutcome DeleteFlowLogs(const Model::DeleteFlowLogsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlowLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowLogsOutcomeCallable DeleteFlowLogsCallable(const Model::DeleteFlowLogsRequest& request) const;

        /**
         * An Async wrapper for DeleteFlowLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowLogsAsync(const Model::DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon FPGA Image (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFpgaImageOutcome DeleteFpgaImage(const Model::DeleteFpgaImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteFpgaImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFpgaImageOutcomeCallable DeleteFpgaImageCallable(const Model::DeleteFpgaImageRequest& request) const;

        /**
         * An Async wrapper for DeleteFpgaImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFpgaImageAsync(const Model::DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified event window.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInstanceEventWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceEventWindowOutcome DeleteInstanceEventWindow(const Model::DeleteInstanceEventWindowRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceEventWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceEventWindowOutcomeCallable DeleteInstanceEventWindowCallable(const Model::DeleteInstanceEventWindowRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceEventWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceEventWindowAsync(const Model::DeleteInstanceEventWindowRequest& request, const DeleteInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified internet gateway. You must detach the internet gateway
         * from the VPC before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInternetGatewayOutcome DeleteInternetGateway(const Model::DeleteInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInternetGatewayOutcomeCallable DeleteInternetGatewayCallable(const Model::DeleteInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInternetGatewayAsync(const Model::DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an IPAM. Deleting an IPAM removes all monitored data associated with
         * the IPAM including the historical data for CIDRs.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/delete-ipam.html">Delete an
         * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteIpam">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpamOutcome DeleteIpam(const Model::DeleteIpamRequest& request) const;

        /**
         * A Callable wrapper for DeleteIpam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIpamOutcomeCallable DeleteIpamCallable(const Model::DeleteIpamRequest& request) const;

        /**
         * An Async wrapper for DeleteIpam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIpamAsync(const Model::DeleteIpamRequest& request, const DeleteIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an IPAM pool.</p>  <p>You cannot delete an IPAM pool if there
         * are allocations in it or CIDRs provisioned to it. To release allocations, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ReleaseIpamPoolAllocation.html">ReleaseIpamPoolAllocation</a>.
         * To deprovision pool CIDRs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DeprovisionIpamPoolCidr.html">DeprovisionIpamPoolCidr</a>.</p>
         *  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/delete-pool-ipam.html">Delete
         * a pool</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteIpamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpamPoolOutcome DeleteIpamPool(const Model::DeleteIpamPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteIpamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIpamPoolOutcomeCallable DeleteIpamPoolCallable(const Model::DeleteIpamPoolRequest& request) const;

        /**
         * An Async wrapper for DeleteIpamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIpamPoolAsync(const Model::DeleteIpamPoolRequest& request, const DeleteIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the scope for an IPAM. You cannot delete the default scopes.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/delete-scope-ipam.html">Delete
         * a scope</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteIpamScope">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpamScopeOutcome DeleteIpamScope(const Model::DeleteIpamScopeRequest& request) const;

        /**
         * A Callable wrapper for DeleteIpamScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIpamScopeOutcomeCallable DeleteIpamScopeCallable(const Model::DeleteIpamScopeRequest& request) const;

        /**
         * An Async wrapper for DeleteIpamScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIpamScopeAsync(const Model::DeleteIpamScopeRequest& request, const DeleteIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified key pair, by removing the public key from Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeyPairOutcomeCallable DeleteKeyPairCallable(const Model::DeleteKeyPairRequest& request) const;

        /**
         * An Async wrapper for DeleteKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeyPairAsync(const Model::DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a launch template. Deleting a launch template deletes all of its
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLaunchTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchTemplateOutcome DeleteLaunchTemplate(const Model::DeleteLaunchTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchTemplateOutcomeCallable DeleteLaunchTemplateCallable(const Model::DeleteLaunchTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteLaunchTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchTemplateAsync(const Model::DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more versions of a launch template. You cannot delete the
         * default version of a launch template; you must first assign a different version
         * as the default. If the default version is the only version for the launch
         * template, you must delete the entire launch template using
         * <a>DeleteLaunchTemplate</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLaunchTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchTemplateVersionsOutcome DeleteLaunchTemplateVersions(const Model::DeleteLaunchTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchTemplateVersionsOutcomeCallable DeleteLaunchTemplateVersionsCallable(const Model::DeleteLaunchTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for DeleteLaunchTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchTemplateVersionsAsync(const Model::DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route from the specified local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteOutcome DeleteLocalGatewayRoute(const Model::DeleteLocalGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocalGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocalGatewayRouteOutcomeCallable DeleteLocalGatewayRouteCallable(const Model::DeleteLocalGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteLocalGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocalGatewayRouteAsync(const Model::DeleteLocalGatewayRouteRequest& request, const DeleteLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a local gateway route table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableOutcome DeleteLocalGatewayRouteTable(const Model::DeleteLocalGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocalGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocalGatewayRouteTableOutcomeCallable DeleteLocalGatewayRouteTableCallable(const Model::DeleteLocalGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for DeleteLocalGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocalGatewayRouteTableAsync(const Model::DeleteLocalGatewayRouteTableRequest& request, const DeleteLocalGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a local gateway route table virtual interface group association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request, const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified association between a VPC and local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTableVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableVpcAssociationOutcome DeleteLocalGatewayRouteTableVpcAssociation(const Model::DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocalGatewayRouteTableVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocalGatewayRouteTableVpcAssociationOutcomeCallable DeleteLocalGatewayRouteTableVpcAssociationCallable(const Model::DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteLocalGatewayRouteTableVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocalGatewayRouteTableVpcAssociationAsync(const Model::DeleteLocalGatewayRouteTableVpcAssociationRequest& request, const DeleteLocalGatewayRouteTableVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified managed prefix list. You must first remove all
         * references to the prefix list in your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteManagedPrefixList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedPrefixListOutcome DeleteManagedPrefixList(const Model::DeleteManagedPrefixListRequest& request) const;

        /**
         * A Callable wrapper for DeleteManagedPrefixList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteManagedPrefixListOutcomeCallable DeleteManagedPrefixListCallable(const Model::DeleteManagedPrefixListRequest& request) const;

        /**
         * An Async wrapper for DeleteManagedPrefixList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteManagedPrefixListAsync(const Model::DeleteManagedPrefixListRequest& request, const DeleteManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified NAT gateway. Deleting a public NAT gateway
         * disassociates its Elastic IP address, but does not release the address from your
         * account. Deleting a NAT gateway does not delete any NAT gateway routes in your
         * route tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNatGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteNatGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteNatGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified network ACL. You can't delete the ACL if it's
         * associated with any subnets. You can't delete the default network
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAcl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclOutcome DeleteNetworkAcl(const Model::DeleteNetworkAclRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkAcl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkAclOutcomeCallable DeleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkAcl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified ingress or egress entry (rule) from the specified
         * network ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclEntryOutcome DeleteNetworkAclEntry(const Model::DeleteNetworkAclEntryRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkAclEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkAclEntryOutcomeCallable DeleteNetworkAclEntryCallable(const Model::DeleteNetworkAclEntryRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkAclEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAclEntryAsync(const Model::DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Network Access Scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAccessScopeOutcome DeleteNetworkInsightsAccessScope(const Model::DeleteNetworkInsightsAccessScopeRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInsightsAccessScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInsightsAccessScopeOutcomeCallable DeleteNetworkInsightsAccessScopeCallable(const Model::DeleteNetworkInsightsAccessScopeRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInsightsAccessScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInsightsAccessScopeAsync(const Model::DeleteNetworkInsightsAccessScopeRequest& request, const DeleteNetworkInsightsAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Network Access Scope analysis.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAccessScopeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAccessScopeAnalysisOutcome DeleteNetworkInsightsAccessScopeAnalysis(const Model::DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInsightsAccessScopeAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInsightsAccessScopeAnalysisOutcomeCallable DeleteNetworkInsightsAccessScopeAnalysisCallable(const Model::DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInsightsAccessScopeAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInsightsAccessScopeAnalysisAsync(const Model::DeleteNetworkInsightsAccessScopeAnalysisRequest& request, const DeleteNetworkInsightsAccessScopeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified network insights analysis.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAnalysisOutcome DeleteNetworkInsightsAnalysis(const Model::DeleteNetworkInsightsAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInsightsAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInsightsAnalysisOutcomeCallable DeleteNetworkInsightsAnalysisCallable(const Model::DeleteNetworkInsightsAnalysisRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInsightsAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInsightsAnalysisAsync(const Model::DeleteNetworkInsightsAnalysisRequest& request, const DeleteNetworkInsightsAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsPath">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsPathOutcome DeleteNetworkInsightsPath(const Model::DeleteNetworkInsightsPathRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInsightsPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInsightsPathOutcomeCallable DeleteNetworkInsightsPathCallable(const Model::DeleteNetworkInsightsPathRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInsightsPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInsightsPathAsync(const Model::DeleteNetworkInsightsPathRequest& request, const DeleteNetworkInsightsPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified network interface. You must detach the network
         * interface before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a permission for a network interface. By default, you cannot delete
         * the permission if the account for which you're removing the permission has
         * attached the network interface to an instance. However, you can force delete the
         * permission, regardless of any attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterfacePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInterfacePermissionOutcome DeleteNetworkInterfacePermission(const Model::DeleteNetworkInterfacePermissionRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkInterfacePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInterfacePermissionOutcomeCallable DeleteNetworkInterfacePermissionCallable(const Model::DeleteNetworkInterfacePermissionRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkInterfacePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInterfacePermissionAsync(const Model::DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified placement group. You must terminate all instances in
         * the placement group before you can delete the placement group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
         * groups</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlacementGroupOutcome DeletePlacementGroup(const Model::DeletePlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for DeletePlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlacementGroupOutcomeCallable DeletePlacementGroupCallable(const Model::DeletePlacementGroupRequest& request) const;

        /**
         * An Async wrapper for DeletePlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlacementGroupAsync(const Model::DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a public IPv4 pool. A public IPv4 pool is an EC2 IP address pool
         * required for the public IPv4 CIDRs that you own and bring to Amazon Web Services
         * to manage with IPAM. IPv6 addresses you bring to Amazon Web Services, however,
         * use IPAM pools only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePublicIpv4Pool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicIpv4PoolOutcome DeletePublicIpv4Pool(const Model::DeletePublicIpv4PoolRequest& request) const;

        /**
         * A Callable wrapper for DeletePublicIpv4Pool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicIpv4PoolOutcomeCallable DeletePublicIpv4PoolCallable(const Model::DeletePublicIpv4PoolRequest& request) const;

        /**
         * An Async wrapper for DeletePublicIpv4Pool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicIpv4PoolAsync(const Model::DeletePublicIpv4PoolRequest& request, const DeletePublicIpv4PoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the queued purchases for the specified Reserved
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteQueuedReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedReservedInstancesOutcome DeleteQueuedReservedInstances(const Model::DeleteQueuedReservedInstancesRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueuedReservedInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueuedReservedInstancesOutcomeCallable DeleteQueuedReservedInstancesCallable(const Model::DeleteQueuedReservedInstancesRequest& request) const;

        /**
         * An Async wrapper for DeleteQueuedReservedInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueuedReservedInstancesAsync(const Model::DeleteQueuedReservedInstancesRequest& request, const DeleteQueuedReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route from the specified route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRoute">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route table. You must disassociate the route table from
         * any subnets before you can delete it. You can't delete the main route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteTableOutcomeCallable DeleteRouteTableCallable(const Model::DeleteRouteTableRequest& request) const;

        /**
         * An Async wrapper for DeleteRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a security group.</p> <p>If you attempt to delete a security group
         * that is associated with an instance, or is referenced by another security group,
         * the operation fails with <code>InvalidGroup.InUse</code> in EC2-Classic or
         * <code>DependencyViolation</code> in EC2-VPC.</p>  <p>We are retiring
         * EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified snapshot.</p> <p>When you make periodic snapshots of a
         * volume, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the volume.</p> <p>You
         * cannot delete a snapshot of the root device of an EBS volume used by a
         * registered AMI. You must first de-register the AMI before you can delete the
         * snapshot.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-snapshot.html">Delete
         * an Amazon EBS snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the data feed for Spot Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpotDatafeedSubscriptionOutcome DeleteSpotDatafeedSubscription(const Model::DeleteSpotDatafeedSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpotDatafeedSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSpotDatafeedSubscriptionOutcomeCallable DeleteSpotDatafeedSubscriptionCallable(const Model::DeleteSpotDatafeedSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteSpotDatafeedSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSpotDatafeedSubscriptionAsync(const Model::DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified subnet. You must terminate all running instances in the
         * subnet before you can delete the subnet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubnet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request) const;

        /**
         * An Async wrapper for DeleteSubnet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subnet CIDR reservation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnetCidrReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetCidrReservationOutcome DeleteSubnetCidrReservation(const Model::DeleteSubnetCidrReservationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubnetCidrReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetCidrReservationOutcomeCallable DeleteSubnetCidrReservationCallable(const Model::DeleteSubnetCidrReservationRequest& request) const;

        /**
         * An Async wrapper for DeleteSubnetCidrReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubnetCidrReservationAsync(const Model::DeleteSubnetCidrReservationRequest& request, const DeleteSubnetCidrReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of resources.</p>
         * <p>To list the current tags, use <a>DescribeTags</a>. For more information about
         * tags, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tag
         * your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTags">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Traffic Mirror filter.</p> <p>You cannot delete a
         * Traffic Mirror filter that is in use by a Traffic Mirror session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorFilterOutcome DeleteTrafficMirrorFilter(const Model::DeleteTrafficMirrorFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficMirrorFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficMirrorFilterOutcomeCallable DeleteTrafficMirrorFilterCallable(const Model::DeleteTrafficMirrorFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficMirrorFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficMirrorFilterAsync(const Model::DeleteTrafficMirrorFilterRequest& request, const DeleteTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Traffic Mirror rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorFilterRuleOutcome DeleteTrafficMirrorFilterRule(const Model::DeleteTrafficMirrorFilterRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficMirrorFilterRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficMirrorFilterRuleOutcomeCallable DeleteTrafficMirrorFilterRuleCallable(const Model::DeleteTrafficMirrorFilterRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficMirrorFilterRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficMirrorFilterRuleAsync(const Model::DeleteTrafficMirrorFilterRuleRequest& request, const DeleteTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Traffic Mirror session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorSessionOutcome DeleteTrafficMirrorSession(const Model::DeleteTrafficMirrorSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficMirrorSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficMirrorSessionOutcomeCallable DeleteTrafficMirrorSessionCallable(const Model::DeleteTrafficMirrorSessionRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficMirrorSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficMirrorSessionAsync(const Model::DeleteTrafficMirrorSessionRequest& request, const DeleteTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Traffic Mirror target.</p> <p>You cannot delete a
         * Traffic Mirror target that is in use by a Traffic Mirror session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorTargetOutcome DeleteTrafficMirrorTarget(const Model::DeleteTrafficMirrorTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficMirrorTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficMirrorTargetOutcomeCallable DeleteTrafficMirrorTargetCallable(const Model::DeleteTrafficMirrorTargetRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficMirrorTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficMirrorTargetAsync(const Model::DeleteTrafficMirrorTargetRequest& request, const DeleteTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified transit gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayOutcome DeleteTransitGateway(const Model::DeleteTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayOutcomeCallable DeleteTransitGatewayCallable(const Model::DeleteTransitGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayAsync(const Model::DeleteTransitGatewayRequest& request, const DeleteTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Connect attachment. You must first delete any Connect
         * peers for the attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayConnectOutcome DeleteTransitGatewayConnect(const Model::DeleteTransitGatewayConnectRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayConnectOutcomeCallable DeleteTransitGatewayConnectCallable(const Model::DeleteTransitGatewayConnectRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayConnectAsync(const Model::DeleteTransitGatewayConnectRequest& request, const DeleteTransitGatewayConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Connect peer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayConnectPeerOutcome DeleteTransitGatewayConnectPeer(const Model::DeleteTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayConnectPeerOutcomeCallable DeleteTransitGatewayConnectPeerCallable(const Model::DeleteTransitGatewayConnectPeerRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayConnectPeerAsync(const Model::DeleteTransitGatewayConnectPeerRequest& request, const DeleteTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified transit gateway multicast domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayMulticastDomainOutcome DeleteTransitGatewayMulticastDomain(const Model::DeleteTransitGatewayMulticastDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayMulticastDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayMulticastDomainOutcomeCallable DeleteTransitGatewayMulticastDomainCallable(const Model::DeleteTransitGatewayMulticastDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayMulticastDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayMulticastDomainAsync(const Model::DeleteTransitGatewayMulticastDomainRequest& request, const DeleteTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a transit gateway peering attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPeeringAttachmentOutcome DeleteTransitGatewayPeeringAttachment(const Model::DeleteTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayPeeringAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayPeeringAttachmentOutcomeCallable DeleteTransitGatewayPeeringAttachmentCallable(const Model::DeleteTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayPeeringAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayPeeringAttachmentAsync(const Model::DeleteTransitGatewayPeeringAttachmentRequest& request, const DeleteTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified transit gateway policy table.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPolicyTableOutcome DeleteTransitGatewayPolicyTable(const Model::DeleteTransitGatewayPolicyTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayPolicyTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayPolicyTableOutcomeCallable DeleteTransitGatewayPolicyTableCallable(const Model::DeleteTransitGatewayPolicyTableRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayPolicyTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayPolicyTableAsync(const Model::DeleteTransitGatewayPolicyTableRequest& request, const DeleteTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPrefixListReferenceOutcome DeleteTransitGatewayPrefixListReference(const Model::DeleteTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayPrefixListReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayPrefixListReferenceOutcomeCallable DeleteTransitGatewayPrefixListReferenceCallable(const Model::DeleteTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayPrefixListReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayPrefixListReferenceAsync(const Model::DeleteTransitGatewayPrefixListReferenceRequest& request, const DeleteTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route from the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteOutcome DeleteTransitGatewayRoute(const Model::DeleteTransitGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayRouteOutcomeCallable DeleteTransitGatewayRouteCallable(const Model::DeleteTransitGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayRouteAsync(const Model::DeleteTransitGatewayRouteRequest& request, const DeleteTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified transit gateway route table. You must disassociate the
         * route table from any transit gateway route tables before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteTableOutcome DeleteTransitGatewayRouteTable(const Model::DeleteTransitGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayRouteTableOutcomeCallable DeleteTransitGatewayRouteTableCallable(const Model::DeleteTransitGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayRouteTableAsync(const Model::DeleteTransitGatewayRouteTableRequest& request, const DeleteTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Advertises to the transit gateway that a transit gateway route table is
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRouteTableAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteTableAnnouncementOutcome DeleteTransitGatewayRouteTableAnnouncement(const Model::DeleteTransitGatewayRouteTableAnnouncementRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayRouteTableAnnouncement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayRouteTableAnnouncementOutcomeCallable DeleteTransitGatewayRouteTableAnnouncementCallable(const Model::DeleteTransitGatewayRouteTableAnnouncementRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayRouteTableAnnouncement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayRouteTableAnnouncementAsync(const Model::DeleteTransitGatewayRouteTableAnnouncementRequest& request, const DeleteTransitGatewayRouteTableAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayVpcAttachmentOutcome DeleteTransitGatewayVpcAttachment(const Model::DeleteTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransitGatewayVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTransitGatewayVpcAttachmentOutcomeCallable DeleteTransitGatewayVpcAttachmentCallable(const Model::DeleteTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for DeleteTransitGatewayVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTransitGatewayVpcAttachmentAsync(const Model::DeleteTransitGatewayVpcAttachmentRequest& request, const DeleteTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an Amazon Web Services Verified Access endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVerifiedAccessEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedAccessEndpointOutcome DeleteVerifiedAccessEndpoint(const Model::DeleteVerifiedAccessEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedAccessEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedAccessEndpointOutcomeCallable DeleteVerifiedAccessEndpointCallable(const Model::DeleteVerifiedAccessEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteVerifiedAccessEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedAccessEndpointAsync(const Model::DeleteVerifiedAccessEndpointRequest& request, const DeleteVerifiedAccessEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an Amazon Web Services Verified Access group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVerifiedAccessGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedAccessGroupOutcome DeleteVerifiedAccessGroup(const Model::DeleteVerifiedAccessGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedAccessGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedAccessGroupOutcomeCallable DeleteVerifiedAccessGroupCallable(const Model::DeleteVerifiedAccessGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteVerifiedAccessGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedAccessGroupAsync(const Model::DeleteVerifiedAccessGroupRequest& request, const DeleteVerifiedAccessGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an Amazon Web Services Verified Access instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVerifiedAccessInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedAccessInstanceOutcome DeleteVerifiedAccessInstance(const Model::DeleteVerifiedAccessInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedAccessInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedAccessInstanceOutcomeCallable DeleteVerifiedAccessInstanceCallable(const Model::DeleteVerifiedAccessInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteVerifiedAccessInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedAccessInstanceAsync(const Model::DeleteVerifiedAccessInstanceRequest& request, const DeleteVerifiedAccessInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an Amazon Web Services Verified Access trust provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVerifiedAccessTrustProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedAccessTrustProviderOutcome DeleteVerifiedAccessTrustProvider(const Model::DeleteVerifiedAccessTrustProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedAccessTrustProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedAccessTrustProviderOutcomeCallable DeleteVerifiedAccessTrustProviderCallable(const Model::DeleteVerifiedAccessTrustProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteVerifiedAccessTrustProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedAccessTrustProviderAsync(const Model::DeleteVerifiedAccessTrustProviderRequest& request, const DeleteVerifiedAccessTrustProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified EBS volume. The volume must be in the
         * <code>available</code> state (not attached to an instance).</p> <p>The volume
         * can remain in the <code>deleting</code> state for several minutes.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-volume.html">Delete
         * an Amazon EBS volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeleteVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request) const;

        /**
         * An Async wrapper for DeleteVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified VPC. You must detach or delete all gateways and
         * resources that are associated with the VPC before you can delete it. For
         * example, you must terminate all instances running in the VPC, delete all
         * security groups associated with the VPC (except the default one), delete all
         * route tables associated with the VPC (except the default one), and so
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpc">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request) const;

        /**
         * An Async wrapper for DeleteVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more VPC endpoint connection notifications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpointConnectionNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointConnectionNotificationsOutcome DeleteVpcEndpointConnectionNotifications(const Model::DeleteVpcEndpointConnectionNotificationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpointConnectionNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointConnectionNotificationsOutcomeCallable DeleteVpcEndpointConnectionNotificationsCallable(const Model::DeleteVpcEndpointConnectionNotificationsRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcEndpointConnectionNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointConnectionNotificationsAsync(const Model::DeleteVpcEndpointConnectionNotificationsRequest& request, const DeleteVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more VPC endpoint service configurations in your account.
         * Before you delete the endpoint service configuration, you must reject any
         * <code>Available</code> or <code>PendingAcceptance</code> interface endpoint
         * connections that are attached to the service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpointServiceConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointServiceConfigurationsOutcome DeleteVpcEndpointServiceConfigurations(const Model::DeleteVpcEndpointServiceConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpointServiceConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointServiceConfigurationsOutcomeCallable DeleteVpcEndpointServiceConfigurationsCallable(const Model::DeleteVpcEndpointServiceConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcEndpointServiceConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointServiceConfigurationsAsync(const Model::DeleteVpcEndpointServiceConfigurationsRequest& request, const DeleteVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more specified VPC endpoints. You can delete any of the
         * following types of VPC endpoints. </p> <ul> <li> <p>Gateway endpoint,</p> </li>
         * <li> <p>Gateway Load Balancer endpoint,</p> </li> <li> <p>Interface endpoint</p>
         * </li> </ul> <p>The following rules apply when you delete a VPC endpoint:</p>
         * <ul> <li> <p>When you delete a gateway endpoint, we delete the endpoint routes
         * in the route tables that are associated with the endpoint.</p> </li> <li>
         * <p>When you delete a Gateway Load Balancer endpoint, we delete the endpoint
         * network interfaces. </p> <p>You can only delete Gateway Load Balancer endpoints
         * when the routes that are associated with the endpoint are deleted.</p> </li>
         * <li> <p>When you delete an interface endpoint, we delete the endpoint network
         * interfaces.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointsOutcome DeleteVpcEndpoints(const Model::DeleteVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointsOutcomeCallable DeleteVpcEndpointsCallable(const Model::DeleteVpcEndpointsRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointsAsync(const Model::DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a VPC peering connection. Either the owner of the requester VPC or
         * the owner of the accepter VPC can delete the VPC peering connection if it's in
         * the <code>active</code> state. The owner of the requester VPC can delete a VPC
         * peering connection in the <code>pending-acceptance</code> state. You cannot
         * delete a VPC peering connection that's in the <code>failed</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringConnectionOutcome DeleteVpcPeeringConnection(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringConnectionOutcomeCallable DeleteVpcPeeringConnectionCallable(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringConnectionAsync(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified VPN connection.</p> <p>If you're deleting the VPC and
         * its associated components, we recommend that you detach the virtual private
         * gateway from the VPC and delete the VPC before deleting the VPN connection. If
         * you believe that the tunnel credentials for your VPN connection have been
         * compromised, you can delete the VPN connection and create a new one that has new
         * keys, without needing to delete the VPC or virtual private gateway. If you
         * create a new VPN connection, you must reconfigure the customer gateway device
         * using the new configuration information returned with the new VPN connection
         * ID.</p> <p>For certificate-based authentication, delete all Certificate Manager
         * (ACM) private certificates used for the Amazon Web Services-side tunnel
         * endpoints for the VPN connection before deleting the VPN
         * connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnConnectionOutcome DeleteVpnConnection(const Model::DeleteVpnConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpnConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnConnectionOutcomeCallable DeleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteVpnConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified static route associated with a VPN connection between
         * an existing virtual private gateway and a VPN customer gateway. The static route
         * allows traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnectionRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnConnectionRouteOutcome DeleteVpnConnectionRoute(const Model::DeleteVpnConnectionRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpnConnectionRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnConnectionRouteOutcomeCallable DeleteVpnConnectionRouteCallable(const Model::DeleteVpnConnectionRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteVpnConnectionRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnConnectionRouteAsync(const Model::DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual private gateway. You must first detach the
         * virtual private gateway from the VPC. Note that you don't need to delete the
         * virtual private gateway if you plan to delete and recreate the VPN connection
         * between your VPC and your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnGatewayOutcome DeleteVpnGateway(const Model::DeleteVpnGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpnGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnGatewayOutcomeCallable DeleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteVpnGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases the specified address range that you provisioned for use with your
         * Amazon Web Services resources through bring your own IP addresses (BYOIP) and
         * deletes the corresponding address pool.</p> <p>Before you can release an address
         * range, you must stop advertising it using <a>WithdrawByoipCidr</a> and you must
         * not have any IP addresses allocated from its address range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeprovisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionByoipCidrOutcome DeprovisionByoipCidr(const Model::DeprovisionByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for DeprovisionByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprovisionByoipCidrOutcomeCallable DeprovisionByoipCidrCallable(const Model::DeprovisionByoipCidrRequest& request) const;

        /**
         * An Async wrapper for DeprovisionByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprovisionByoipCidrAsync(const Model::DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprovision a CIDR provisioned from an IPAM pool. If you deprovision a CIDR
         * from a pool that has a source pool, the CIDR is recycled back into the source
         * pool. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/depro-pool-cidr-ipam.html">Deprovision
         * pool CIDRs</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeprovisionIpamPoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionIpamPoolCidrOutcome DeprovisionIpamPoolCidr(const Model::DeprovisionIpamPoolCidrRequest& request) const;

        /**
         * A Callable wrapper for DeprovisionIpamPoolCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprovisionIpamPoolCidrOutcomeCallable DeprovisionIpamPoolCidrCallable(const Model::DeprovisionIpamPoolCidrRequest& request) const;

        /**
         * An Async wrapper for DeprovisionIpamPoolCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprovisionIpamPoolCidrAsync(const Model::DeprovisionIpamPoolCidrRequest& request, const DeprovisionIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprovision a CIDR from a public IPv4 pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeprovisionPublicIpv4PoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionPublicIpv4PoolCidrOutcome DeprovisionPublicIpv4PoolCidr(const Model::DeprovisionPublicIpv4PoolCidrRequest& request) const;

        /**
         * A Callable wrapper for DeprovisionPublicIpv4PoolCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprovisionPublicIpv4PoolCidrOutcomeCallable DeprovisionPublicIpv4PoolCidrCallable(const Model::DeprovisionPublicIpv4PoolCidrRequest& request) const;

        /**
         * An Async wrapper for DeprovisionPublicIpv4PoolCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprovisionPublicIpv4PoolCidrAsync(const Model::DeprovisionPublicIpv4PoolCidrRequest& request, const DeprovisionPublicIpv4PoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified AMI. After you deregister an AMI, it can't be used
         * to launch new instances.</p> <p>If you deregister an AMI that matches a Recycle
         * Bin retention rule, the AMI is retained in the Recycle Bin for the specified
         * retention period. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>When you deregister an AMI,
         * it doesn't affect any instances that you've already launched from the AMI.
         * You'll continue to incur usage costs for those instances until you terminate
         * them.</p> <p>When you deregister an Amazon EBS-backed AMI, it doesn't affect the
         * snapshot that was created for the root volume of the instance during the AMI
         * creation process. When you deregister an instance store-backed AMI, it doesn't
         * affect the files that you uploaded to Amazon S3 when you created the
         * AMI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterImageOutcome DeregisterImage(const Model::DeregisterImageRequest& request) const;

        /**
         * A Callable wrapper for DeregisterImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterImageOutcomeCallable DeregisterImageCallable(const Model::DeregisterImageRequest& request) const;

        /**
         * An Async wrapper for DeregisterImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterImageAsync(const Model::DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters tag keys to prevent tags that have the specified tag keys from
         * being included in scheduled event notifications for resources in the
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterInstanceEventNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceEventNotificationAttributesOutcome DeregisterInstanceEventNotificationAttributes(const Model::DeregisterInstanceEventNotificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for DeregisterInstanceEventNotificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterInstanceEventNotificationAttributesOutcomeCallable DeregisterInstanceEventNotificationAttributesCallable(const Model::DeregisterInstanceEventNotificationAttributesRequest& request) const;

        /**
         * An Async wrapper for DeregisterInstanceEventNotificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterInstanceEventNotificationAttributesAsync(const Model::DeregisterInstanceEventNotificationAttributesRequest& request, const DeregisterInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified members (network interfaces) from the transit
         * gateway multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterTransitGatewayMulticastGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupMembersOutcome DeregisterTransitGatewayMulticastGroupMembers(const Model::DeregisterTransitGatewayMulticastGroupMembersRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTransitGatewayMulticastGroupMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupMembersOutcomeCallable DeregisterTransitGatewayMulticastGroupMembersCallable(const Model::DeregisterTransitGatewayMulticastGroupMembersRequest& request) const;

        /**
         * An Async wrapper for DeregisterTransitGatewayMulticastGroupMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTransitGatewayMulticastGroupMembersAsync(const Model::DeregisterTransitGatewayMulticastGroupMembersRequest& request, const DeregisterTransitGatewayMulticastGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified sources (network interfaces) from the transit
         * gateway multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterTransitGatewayMulticastGroupSources">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupSourcesOutcome DeregisterTransitGatewayMulticastGroupSources(const Model::DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTransitGatewayMulticastGroupSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupSourcesOutcomeCallable DeregisterTransitGatewayMulticastGroupSourcesCallable(const Model::DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const;

        /**
         * An Async wrapper for DeregisterTransitGatewayMulticastGroupSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTransitGatewayMulticastGroupSourcesAsync(const Model::DeregisterTransitGatewayMulticastGroupSourcesRequest& request, const DeregisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes attributes of your Amazon Web Services account. The following are
         * the supported account attributes:</p> <ul> <li> <p>
         * <code>supported-platforms</code>: Indicates whether your account can launch
         * instances into EC2-Classic and EC2-VPC, or only into EC2-VPC.</p> </li> <li> <p>
         * <code>default-vpc</code>: The ID of the default VPC for your account, or
         * <code>none</code>.</p> </li> <li> <p> <code>max-instances</code>: This attribute
         * is no longer supported. The returned value does not reflect your actual vCPU
         * limit for running On-Demand Instances. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-on-demand-instances.html#ec2-on-demand-instances-limits">On-Demand
         * Instance Limits</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * </li> <li> <p> <code>vpc-max-security-groups-per-interface</code>: The maximum
         * number of security groups that you can assign to a network interface.</p> </li>
         * <li> <p> <code>max-elastic-ips</code>: The maximum number of Elastic IP
         * addresses that you can allocate for use with EC2-Classic. </p> </li> <li> <p>
         * <code>vpc-max-elastic-ips</code>: The maximum number of Elastic IP addresses
         * that you can allocate for use with EC2-VPC.</p> </li> </ul>  <p>We are
         * retiring EC2-Classic on August 15, 2022. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddressTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressTransfersOutcome DescribeAddressTransfers(const Model::DescribeAddressTransfersRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddressTransfers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressTransfersOutcomeCallable DescribeAddressTransfersCallable(const Model::DescribeAddressTransfersRequest& request) const;

        /**
         * An Async wrapper for DescribeAddressTransfers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressTransfersAsync(const Model::DescribeAddressTransfersRequest& request, const DescribeAddressTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Elastic IP addresses or all of your Elastic IP
         * addresses.</p> <p>An Elastic IP address is for use in either the EC2-Classic
         * platform or in a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request) const;

        /**
         * An Async wrapper for DescribeAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes of the specified Elastic IP addresses. For
         * requirements, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html#Using_Elastic_Addressing_Reverse_DNS">Using
         * reverse DNS for email applications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddressesAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesAttributeOutcome DescribeAddressesAttribute(const Model::DescribeAddressesAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddressesAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressesAttributeOutcomeCallable DescribeAddressesAttributeCallable(const Model::DescribeAddressesAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeAddressesAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressesAttributeAsync(const Model::DescribeAddressesAttributeRequest& request, const DescribeAddressesAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the longer ID format settings for all resource types in a specific
         * Region. This request is useful for performing a quick audit to determine whether
         * a specific Region is fully opted in for longer IDs (17-character IDs).</p>
         * <p>This request only returns information about resource types that support
         * longer IDs.</p> <p>The following resource types support longer IDs:
         * <code>bundle</code> | <code>conversion-task</code> |
         * <code>customer-gateway</code> | <code>dhcp-options</code> |
         * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
         * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
         * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code>
         * | <code>network-acl</code> | <code>network-acl-association</code> |
         * <code>network-interface</code> | <code>network-interface-attachment</code> |
         * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> |
         * <code>route-table-association</code> | <code>security-group</code> |
         * <code>snapshot</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>volume</code> |
         * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
         * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
         * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAggregateIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregateIdFormatOutcome DescribeAggregateIdFormat(const Model::DescribeAggregateIdFormatRequest& request) const;

        /**
         * A Callable wrapper for DescribeAggregateIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAggregateIdFormatOutcomeCallable DescribeAggregateIdFormatCallable(const Model::DescribeAggregateIdFormatRequest& request) const;

        /**
         * An Async wrapper for DescribeAggregateIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAggregateIdFormatAsync(const Model::DescribeAggregateIdFormatRequest& request, const DescribeAggregateIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Availability Zones, Local Zones, and Wavelength Zones that are
         * available to you. If there is an event impacting a zone, you can use this
         * request to view the state and any provided messages for that zone.</p> <p>For
         * more information about Availability Zones, Local Zones, and Wavelength Zones,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
         * and zones</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAvailabilityZones">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailabilityZonesOutcome DescribeAvailabilityZones(const Model::DescribeAvailabilityZonesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAvailabilityZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailabilityZonesOutcomeCallable DescribeAvailabilityZonesCallable(const Model::DescribeAvailabilityZonesRequest& request) const;

        /**
         * An Async wrapper for DescribeAvailabilityZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailabilityZonesAsync(const Model::DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Infrastructure Performance metric
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAwsNetworkPerformanceMetricSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome DescribeAwsNetworkPerformanceMetricSubscriptions(const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAwsNetworkPerformanceMetricSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAwsNetworkPerformanceMetricSubscriptionsOutcomeCallable DescribeAwsNetworkPerformanceMetricSubscriptionsCallable(const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeAwsNetworkPerformanceMetricSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAwsNetworkPerformanceMetricSubscriptionsAsync(const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request, const DescribeAwsNetworkPerformanceMetricSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified bundle tasks or all of your bundle tasks.</p> 
         * <p>Completed bundle tasks are listed for only a limited time. If your bundle
         * task is no longer in the list, you can still register an AMI from it. Just use
         * <code>RegisterImage</code> with the Amazon S3 bucket name and image manifest
         * name you provided to the bundle task.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeBundleTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleTasksOutcome DescribeBundleTasks(const Model::DescribeBundleTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeBundleTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBundleTasksOutcomeCallable DescribeBundleTasksCallable(const Model::DescribeBundleTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeBundleTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBundleTasksAsync(const Model::DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the IP address ranges that were specified in calls to
         * <a>ProvisionByoipCidr</a>.</p> <p>To describe the address pools that were
         * created when you provisioned the address ranges, use
         * <a>DescribePublicIpv4Pools</a> or <a>DescribeIpv6Pools</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeByoipCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeByoipCidrsOutcome DescribeByoipCidrs(const Model::DescribeByoipCidrsRequest& request) const;

        /**
         * A Callable wrapper for DescribeByoipCidrs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeByoipCidrsOutcomeCallable DescribeByoipCidrsCallable(const Model::DescribeByoipCidrsRequest& request) const;

        /**
         * An Async wrapper for DescribeByoipCidrs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeByoipCidrsAsync(const Model::DescribeByoipCidrsRequest& request, const DescribeByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Capacity Reservation Fleets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCapacityReservationFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCapacityReservationFleetsOutcome DescribeCapacityReservationFleets(const Model::DescribeCapacityReservationFleetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCapacityReservationFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCapacityReservationFleetsOutcomeCallable DescribeCapacityReservationFleetsCallable(const Model::DescribeCapacityReservationFleetsRequest& request) const;

        /**
         * An Async wrapper for DescribeCapacityReservationFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCapacityReservationFleetsAsync(const Model::DescribeCapacityReservationFleetsRequest& request, const DescribeCapacityReservationFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your Capacity Reservations. The results describe
         * only the Capacity Reservations in the Amazon Web Services Region that you're
         * currently using.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCapacityReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCapacityReservationsOutcome DescribeCapacityReservations(const Model::DescribeCapacityReservationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCapacityReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCapacityReservationsOutcomeCallable DescribeCapacityReservationsCallable(const Model::DescribeCapacityReservationsRequest& request) const;

        /**
         * An Async wrapper for DescribeCapacityReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCapacityReservationsAsync(const Model::DescribeCapacityReservationsRequest& request, const DescribeCapacityReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your carrier gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCarrierGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCarrierGatewaysOutcome DescribeCarrierGateways(const Model::DescribeCarrierGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeCarrierGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCarrierGatewaysOutcomeCallable DescribeCarrierGatewaysCallable(const Model::DescribeCarrierGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeCarrierGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCarrierGatewaysAsync(const Model::DescribeCarrierGatewaysRequest& request, const DescribeCarrierGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your linked EC2-Classic instances. This request only
         * returns information about EC2-Classic instances linked to a VPC through
         * ClassicLink. You cannot use this request to return information about other
         * instances.</p>  <p>We are retiring EC2-Classic. We recommend that you
         * migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClassicLinkInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClassicLinkInstancesOutcome DescribeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeClassicLinkInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClassicLinkInstancesOutcomeCallable DescribeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeClassicLinkInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the authorization rules for a specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnAuthorizationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnAuthorizationRulesOutcome DescribeClientVpnAuthorizationRules(const Model::DescribeClientVpnAuthorizationRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientVpnAuthorizationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientVpnAuthorizationRulesOutcomeCallable DescribeClientVpnAuthorizationRulesCallable(const Model::DescribeClientVpnAuthorizationRulesRequest& request) const;

        /**
         * An Async wrapper for DescribeClientVpnAuthorizationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientVpnAuthorizationRulesAsync(const Model::DescribeClientVpnAuthorizationRulesRequest& request, const DescribeClientVpnAuthorizationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes active client connections and connections that have been terminated
         * within the last 60 minutes for the specified Client VPN endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnConnectionsOutcome DescribeClientVpnConnections(const Model::DescribeClientVpnConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientVpnConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientVpnConnectionsOutcomeCallable DescribeClientVpnConnectionsCallable(const Model::DescribeClientVpnConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeClientVpnConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientVpnConnectionsAsync(const Model::DescribeClientVpnConnectionsRequest& request, const DescribeClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Client VPN endpoints in the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnEndpointsOutcome DescribeClientVpnEndpoints(const Model::DescribeClientVpnEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientVpnEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientVpnEndpointsOutcomeCallable DescribeClientVpnEndpointsCallable(const Model::DescribeClientVpnEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeClientVpnEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientVpnEndpointsAsync(const Model::DescribeClientVpnEndpointsRequest& request, const DescribeClientVpnEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the routes for the specified Client VPN endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnRoutesOutcome DescribeClientVpnRoutes(const Model::DescribeClientVpnRoutesRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientVpnRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientVpnRoutesOutcomeCallable DescribeClientVpnRoutesCallable(const Model::DescribeClientVpnRoutesRequest& request) const;

        /**
         * An Async wrapper for DescribeClientVpnRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientVpnRoutesAsync(const Model::DescribeClientVpnRoutesRequest& request, const DescribeClientVpnRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the target networks associated with the specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnTargetNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnTargetNetworksOutcome DescribeClientVpnTargetNetworks(const Model::DescribeClientVpnTargetNetworksRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientVpnTargetNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientVpnTargetNetworksOutcomeCallable DescribeClientVpnTargetNetworksCallable(const Model::DescribeClientVpnTargetNetworksRequest& request) const;

        /**
         * An Async wrapper for DescribeClientVpnTargetNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientVpnTargetNetworksAsync(const Model::DescribeClientVpnTargetNetworksRequest& request, const DescribeClientVpnTargetNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified customer-owned address pools or all of your
         * customer-owned address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCoipPools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCoipPoolsOutcome DescribeCoipPools(const Model::DescribeCoipPoolsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCoipPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCoipPoolsOutcomeCallable DescribeCoipPoolsCallable(const Model::DescribeCoipPoolsRequest& request) const;

        /**
         * An Async wrapper for DescribeCoipPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCoipPoolsAsync(const Model::DescribeCoipPoolsRequest& request, const DescribeCoipPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified conversion tasks or all your conversion tasks. For
         * more information, see the <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/">VM Import/Export
         * User Guide</a>.</p> <p>For information about the import manifest referenced by
         * this API action, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeConversionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConversionTasksOutcome DescribeConversionTasks(const Model::DescribeConversionTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeConversionTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConversionTasksOutcomeCallable DescribeConversionTasksCallable(const Model::DescribeConversionTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeConversionTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConversionTasksAsync(const Model::DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPN customer gateways.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomerGatewaysOutcome DescribeCustomerGateways(const Model::DescribeCustomerGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomerGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomerGatewaysOutcomeCallable DescribeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomerGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your DHCP options sets.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_DHCP_Options.html">DHCP
         * options sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDhcpOptionsOutcome DescribeDhcpOptions(const Model::DescribeDhcpOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDhcpOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDhcpOptionsOutcomeCallable DescribeDhcpOptionsCallable(const Model::DescribeDhcpOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDhcpOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDhcpOptionsAsync(const Model::DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your egress-only internet gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeEgressOnlyInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEgressOnlyInternetGatewaysOutcome DescribeEgressOnlyInternetGateways(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeEgressOnlyInternetGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEgressOnlyInternetGatewaysOutcomeCallable DescribeEgressOnlyInternetGatewaysCallable(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeEgressOnlyInternetGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEgressOnlyInternetGatewaysAsync(const Model::DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Elastic Graphics accelerator associated with your instances.
         * For more information about Elastic Graphics, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/elastic-graphics.html">Amazon
         * Elastic Graphics</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeElasticGpus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticGpusOutcome DescribeElasticGpus(const Model::DescribeElasticGpusRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticGpus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticGpusOutcomeCallable DescribeElasticGpusCallable(const Model::DescribeElasticGpusRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticGpus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticGpusAsync(const Model::DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified export image tasks or all of your export image
         * tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportImageTasksOutcome DescribeExportImageTasks(const Model::DescribeExportImageTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportImageTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportImageTasksOutcomeCallable DescribeExportImageTasksCallable(const Model::DescribeExportImageTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeExportImageTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportImageTasksAsync(const Model::DescribeExportImageTasksRequest& request, const DescribeExportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified export instance tasks or all of your export instance
         * tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeExportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe details for Windows AMIs that are configured for faster
         * launching.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFastLaunchImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFastLaunchImagesOutcome DescribeFastLaunchImages(const Model::DescribeFastLaunchImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFastLaunchImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFastLaunchImagesOutcomeCallable DescribeFastLaunchImagesCallable(const Model::DescribeFastLaunchImagesRequest& request) const;

        /**
         * An Async wrapper for DescribeFastLaunchImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFastLaunchImagesAsync(const Model::DescribeFastLaunchImagesRequest& request, const DescribeFastLaunchImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the state of fast snapshot restores for your
         * snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFastSnapshotRestores">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFastSnapshotRestoresOutcome DescribeFastSnapshotRestores(const Model::DescribeFastSnapshotRestoresRequest& request) const;

        /**
         * A Callable wrapper for DescribeFastSnapshotRestores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFastSnapshotRestoresOutcomeCallable DescribeFastSnapshotRestoresCallable(const Model::DescribeFastSnapshotRestoresRequest& request) const;

        /**
         * An Async wrapper for DescribeFastSnapshotRestores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFastSnapshotRestoresAsync(const Model::DescribeFastSnapshotRestoresRequest& request, const DescribeFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the events for the specified EC2 Fleet during the specified
         * time.</p> <p>EC2 Fleet events are delayed by up to 30 seconds before they can be
         * described. This ensures that you can query by the last evaluated time and not
         * miss a recorded event. EC2 Fleet events are available for 48 hours.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-monitor.html">Monitor
         * fleet events using Amazon EventBridge</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleetHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetHistoryOutcome DescribeFleetHistory(const Model::DescribeFleetHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetHistoryOutcomeCallable DescribeFleetHistoryCallable(const Model::DescribeFleetHistoryRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetHistoryAsync(const Model::DescribeFleetHistoryRequest& request, const DescribeFleetHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the running instances for the specified EC2 Fleet.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#monitor-ec2-fleet">Monitor
         * your EC2 Fleet</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetInstancesOutcome DescribeFleetInstances(const Model::DescribeFleetInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetInstancesOutcomeCallable DescribeFleetInstancesCallable(const Model::DescribeFleetInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetInstancesAsync(const Model::DescribeFleetInstancesRequest& request, const DescribeFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified EC2 Fleets or all of your EC2 Fleets.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#monitor-ec2-fleet">Monitor
         * your EC2 Fleet</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetsOutcome DescribeFleets(const Model::DescribeFleetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetsOutcomeCallable DescribeFleetsCallable(const Model::DescribeFleetsRequest& request) const;

        /**
         * An Async wrapper for DescribeFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetsAsync(const Model::DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more flow logs.</p> <p>To view the published flow log
         * records, you must view the log destination. For example, the CloudWatch Logs log
         * group, the Amazon S3 bucket, or the Kinesis Data Firehose delivery
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowLogsOutcome DescribeFlowLogs(const Model::DescribeFlowLogsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowLogsOutcomeCallable DescribeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request) const;

        /**
         * An Async wrapper for DescribeFlowLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFpgaImageAttributeOutcome DescribeFpgaImageAttribute(const Model::DescribeFpgaImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeFpgaImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFpgaImageAttributeOutcomeCallable DescribeFpgaImageAttributeCallable(const Model::DescribeFpgaImageAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeFpgaImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFpgaImageAttributeAsync(const Model::DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Amazon FPGA Images (AFIs) available to you. These include
         * public AFIs, private AFIs that you own, and AFIs owned by other Amazon Web
         * Services accounts for which you have load permissions.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFpgaImagesOutcome DescribeFpgaImages(const Model::DescribeFpgaImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFpgaImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFpgaImagesOutcomeCallable DescribeFpgaImagesCallable(const Model::DescribeFpgaImagesRequest& request) const;

        /**
         * An Async wrapper for DescribeFpgaImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFpgaImagesAsync(const Model::DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Dedicated Host reservations that are available to purchase.</p>
         * <p>The results describe all of the Dedicated Host reservation offerings,
         * including offerings that might not match the instance family and Region of your
         * Dedicated Hosts. When purchasing an offering, ensure that the instance family
         * and Region of the offering matches that of the Dedicated Hosts with which it is
         * to be associated. For more information about supported instance types, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated
         * Hosts</a> in the <i>Amazon EC2 User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservationOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostReservationOfferingsOutcome DescribeHostReservationOfferings(const Model::DescribeHostReservationOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeHostReservationOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostReservationOfferingsOutcomeCallable DescribeHostReservationOfferingsCallable(const Model::DescribeHostReservationOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeHostReservationOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostReservationOfferingsAsync(const Model::DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes reservations that are associated with Dedicated Hosts in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostReservationsOutcome DescribeHostReservations(const Model::DescribeHostReservationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeHostReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostReservationsOutcomeCallable DescribeHostReservationsCallable(const Model::DescribeHostReservationsRequest& request) const;

        /**
         * An Async wrapper for DescribeHostReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostReservationsAsync(const Model::DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Dedicated Hosts or all your Dedicated Hosts.</p>
         * <p>The results describe only the Dedicated Hosts in the Region you're currently
         * using. All listed instances consume capacity on your Dedicated Host. Dedicated
         * Hosts that have recently been released are listed with the state
         * <code>released</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest& request) const;

        /**
         * A Callable wrapper for DescribeHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request) const;

        /**
         * An Async wrapper for DescribeHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your IAM instance profile associations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIamInstanceProfileAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIamInstanceProfileAssociationsOutcome DescribeIamInstanceProfileAssociations(const Model::DescribeIamInstanceProfileAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIamInstanceProfileAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIamInstanceProfileAssociationsOutcomeCallable DescribeIamInstanceProfileAssociationsCallable(const Model::DescribeIamInstanceProfileAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeIamInstanceProfileAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIamInstanceProfileAssociationsAsync(const Model::DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ID format settings for your resources on a per-Region basis,
         * for example, to view which resource types are enabled for longer IDs. This
         * request only returns information about resource types whose ID formats can be
         * modified; it does not return information about other resource types.</p> <p>The
         * following resource types support longer IDs: <code>bundle</code> |
         * <code>conversion-task</code> | <code>customer-gateway</code> |
         * <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
         * <code>elastic-ip-association</code> | <code>export-task</code> |
         * <code>flow-log</code> | <code>image</code> | <code>import-task</code> |
         * <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code>
         * | <code>network-acl-association</code> | <code>network-interface</code> |
         * <code>network-interface-attachment</code> | <code>prefix-list</code> |
         * <code>reservation</code> | <code>route-table</code> |
         * <code>route-table-association</code> | <code>security-group</code> |
         * <code>snapshot</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>volume</code> |
         * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
         * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
         * <code>vpn-connection</code> | <code>vpn-gateway</code>. </p> <p>These settings
         * apply to the IAM user who makes the request; they do not apply to the entire
         * Amazon Web Services account. By default, an IAM user defaults to the same
         * settings as the root user, unless they explicitly override the settings by
         * running the <a>ModifyIdFormat</a> command. Resources created with longer IDs are
         * visible to all IAM users, regardless of these settings and provided that they
         * have permission to use the relevant <code>Describe</code> command for the
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdFormatOutcome DescribeIdFormat(const Model::DescribeIdFormatRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdFormatOutcomeCallable DescribeIdFormatCallable(const Model::DescribeIdFormatRequest& request) const;

        /**
         * An Async wrapper for DescribeIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdFormatAsync(const Model::DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ID format settings for resources for the specified IAM user,
         * IAM role, or root user. For example, you can view the resource types that are
         * enabled for longer IDs. This request only returns information about resource
         * types whose ID formats can be modified; it does not return information about
         * other resource types. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>The
         * following resource types support longer IDs: <code>bundle</code> |
         * <code>conversion-task</code> | <code>customer-gateway</code> |
         * <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
         * <code>elastic-ip-association</code> | <code>export-task</code> |
         * <code>flow-log</code> | <code>image</code> | <code>import-task</code> |
         * <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code>
         * | <code>network-acl-association</code> | <code>network-interface</code> |
         * <code>network-interface-attachment</code> | <code>prefix-list</code> |
         * <code>reservation</code> | <code>route-table</code> |
         * <code>route-table-association</code> | <code>security-group</code> |
         * <code>snapshot</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>volume</code> |
         * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
         * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
         * <code>vpn-connection</code> | <code>vpn-gateway</code>. </p> <p>These settings
         * apply to the principal specified in the request. They do not apply to the
         * principal that makes the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdentityIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityIdFormatOutcome DescribeIdentityIdFormat(const Model::DescribeIdentityIdFormatRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentityIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityIdFormatOutcomeCallable DescribeIdentityIdFormatCallable(const Model::DescribeIdentityIdFormatRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentityIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityIdFormatAsync(const Model::DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageAttributeOutcome DescribeImageAttribute(const Model::DescribeImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageAttributeOutcomeCallable DescribeImageAttributeCallable(const Model::DescribeImageAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageAttributeAsync(const Model::DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified images (AMIs, AKIs, and ARIs) available to you or all
         * of the images available to you.</p> <p>The images available to you include
         * public images, private images that you own, and private images owned by other
         * Amazon Web Services accounts for which you have explicit launch permissions.</p>
         * <p>Recently deregistered images appear in the returned results for a short
         * interval and then return empty results. After all instances that reference a
         * deregistered AMI are terminated, specifying the ID of the image will eventually
         * return an error indicating that the AMI ID cannot be found.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * An Async wrapper for DescribeImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about an import virtual machine or import snapshot tasks
         * that are already created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportImageTasksOutcome DescribeImportImageTasks(const Model::DescribeImportImageTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeImportImageTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportImageTasksOutcomeCallable DescribeImportImageTasksCallable(const Model::DescribeImportImageTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeImportImageTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportImageTasksAsync(const Model::DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your import snapshot tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportSnapshotTasksOutcome DescribeImportSnapshotTasks(const Model::DescribeImportSnapshotTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeImportSnapshotTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportSnapshotTasksOutcomeCallable DescribeImportSnapshotTasksCallable(const Model::DescribeImportSnapshotTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeImportSnapshotTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportSnapshotTasksAsync(const Model::DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified instance. You can specify
         * only one attribute at a time. Valid attribute values are:
         * <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> |
         * <code>userData</code> | <code>disableApiTermination</code> |
         * <code>instanceInitiatedShutdownBehavior</code> | <code>rootDeviceName</code> |
         * <code>blockDeviceMapping</code> | <code>productCodes</code> |
         * <code>sourceDestCheck</code> | <code>groupSet</code> | <code>ebsOptimized</code>
         * | <code>sriovNetSupport</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAttributeOutcomeCallable DescribeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the credit option for CPU usage of the specified burstable
         * performance instances. The credit options are <code>standard</code> and
         * <code>unlimited</code>.</p> <p>If you do not specify an instance ID, Amazon EC2
         * returns burstable performance instances with the <code>unlimited</code> credit
         * option, as well as instances that were previously configured as T2, T3, and T3a
         * with the <code>unlimited</code> credit option. For example, if you resize a T2
         * instance, while it is configured as <code>unlimited</code>, to an M4 instance,
         * Amazon EC2 returns the M4 instance.</p> <p>If you specify one or more instance
         * IDs, Amazon EC2 returns the credit option (<code>standard</code> or
         * <code>unlimited</code>) of those instances. If you specify an instance ID that
         * is not valid, such as an instance that is not a burstable performance instance,
         * an error is returned.</p> <p>Recently terminated instances might appear in the
         * returned results. This interval is usually less than one hour.</p> <p>If an
         * Availability Zone is experiencing a service disruption and you specify instance
         * IDs in the affected zone, or do not specify any instance IDs at all, the call
         * fails. If you specify only instance IDs in an unaffected zone, the call works
         * normally.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
         * performance instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceCreditSpecifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceCreditSpecificationsOutcome DescribeInstanceCreditSpecifications(const Model::DescribeInstanceCreditSpecificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceCreditSpecifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceCreditSpecificationsOutcomeCallable DescribeInstanceCreditSpecificationsCallable(const Model::DescribeInstanceCreditSpecificationsRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceCreditSpecifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceCreditSpecificationsAsync(const Model::DescribeInstanceCreditSpecificationsRequest& request, const DescribeInstanceCreditSpecificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the tag keys that are registered to appear in scheduled event
         * notifications for resources in the current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceEventNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceEventNotificationAttributesOutcome DescribeInstanceEventNotificationAttributes(const Model::DescribeInstanceEventNotificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceEventNotificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceEventNotificationAttributesOutcomeCallable DescribeInstanceEventNotificationAttributesCallable(const Model::DescribeInstanceEventNotificationAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceEventNotificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceEventNotificationAttributesAsync(const Model::DescribeInstanceEventNotificationAttributesRequest& request, const DescribeInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified event windows or all event windows.</p> <p>If you
         * specify event window IDs, the output includes information for only the specified
         * event windows. If you specify filters, the output includes information for only
         * those event windows that meet the filter criteria. If you do not specify event
         * windows IDs or filters, the output includes information for all event windows,
         * which can affect performance. We recommend that you use pagination to ensure
         * that the operation returns quickly and successfully. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceEventWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceEventWindowsOutcome DescribeInstanceEventWindows(const Model::DescribeInstanceEventWindowsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceEventWindows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceEventWindowsOutcomeCallable DescribeInstanceEventWindowsCallable(const Model::DescribeInstanceEventWindowsRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceEventWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceEventWindowsAsync(const Model::DescribeInstanceEventWindowsRequest& request, const DescribeInstanceEventWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the specified instances or all of your instances. By
         * default, only running instances are described, unless you specifically indicate
         * to return the status of all instances.</p> <p>Instance status includes the
         * following components:</p> <ul> <li> <p> <b>Status checks</b> - Amazon EC2
         * performs status checks on running EC2 instances to identify hardware and
         * software issues. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-system-instance-status-check.html">Status
         * checks for your instances</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstances.html">Troubleshoot
         * instances with failed status checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
         * </li> <li> <p> <b>Scheduled events</b> - Amazon EC2 can schedule events (such as
         * reboot, stop, or terminate) for your instances related to hardware issues,
         * software updates, or system maintenance. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-instances-status-check_sched.html">Scheduled
         * events for your instances</a> in the <i>Amazon EC2 User Guide</i>.</p> </li>
         * <li> <p> <b>Instance state</b> - You can manage your instances from the moment
         * you launch them through their termination. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * lifecycle</a> in the <i>Amazon EC2 User Guide</i>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStatusOutcome DescribeInstanceStatus(const Model::DescribeInstanceStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceStatusOutcomeCallable DescribeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all instance types offered. The results can be filtered by
         * location (Region or Availability Zone). If no location is specified, the
         * instance types offered in the current Region are returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceTypeOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypeOfferingsOutcome DescribeInstanceTypeOfferings(const Model::DescribeInstanceTypeOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceTypeOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceTypeOfferingsOutcomeCallable DescribeInstanceTypeOfferingsCallable(const Model::DescribeInstanceTypeOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceTypeOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceTypeOfferingsAsync(const Model::DescribeInstanceTypeOfferingsRequest& request, const DescribeInstanceTypeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of the instance types that are offered in a location.
         * The results can be filtered by the attributes of the instance
         * types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified instances or all instances.</p> <p>If you specify
         * instance IDs, the output includes information for only the specified instances.
         * If you specify filters, the output includes information for only those instances
         * that meet the filter criteria. If you do not specify instance IDs or filters,
         * the output includes information for all instances, which can affect performance.
         * We recommend that you use pagination to ensure that the operation returns
         * quickly and successfully.</p> <p>If you specify an instance ID that is not
         * valid, an error is returned. If you specify an instance that you do not own, it
         * is not included in the output.</p> <p>Recently terminated instances might appear
         * in the returned results. This interval is usually less than one hour.</p> <p>If
         * you describe instances in the rare case where an Availability Zone is
         * experiencing a service disruption and you specify instance IDs that are in the
         * affected zone, or do not specify any instance IDs at all, the call fails. If you
         * describe instances and specify only instance IDs that are in an unaffected zone,
         * the call works normally.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your internet gateways.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInternetGatewaysOutcome DescribeInternetGateways(const Model::DescribeInternetGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeInternetGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInternetGatewaysOutcomeCallable DescribeInternetGatewaysCallable(const Model::DescribeInternetGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeInternetGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInternetGatewaysAsync(const Model::DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about your IPAM pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpamPools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpamPoolsOutcome DescribeIpamPools(const Model::DescribeIpamPoolsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpamPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpamPoolsOutcomeCallable DescribeIpamPoolsCallable(const Model::DescribeIpamPoolsRequest& request) const;

        /**
         * An Async wrapper for DescribeIpamPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpamPoolsAsync(const Model::DescribeIpamPoolsRequest& request, const DescribeIpamPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about your IPAM scopes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpamScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpamScopesOutcome DescribeIpamScopes(const Model::DescribeIpamScopesRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpamScopes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpamScopesOutcomeCallable DescribeIpamScopesCallable(const Model::DescribeIpamScopesRequest& request) const;

        /**
         * An Async wrapper for DescribeIpamScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpamScopesAsync(const Model::DescribeIpamScopesRequest& request, const DescribeIpamScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about your IPAM pools.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
         * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpams">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpamsOutcome DescribeIpams(const Model::DescribeIpamsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpamsOutcomeCallable DescribeIpamsCallable(const Model::DescribeIpamsRequest& request) const;

        /**
         * An Async wrapper for DescribeIpams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpamsAsync(const Model::DescribeIpamsRequest& request, const DescribeIpamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your IPv6 address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpv6Pools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpv6PoolsOutcome DescribeIpv6Pools(const Model::DescribeIpv6PoolsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpv6Pools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpv6PoolsOutcomeCallable DescribeIpv6PoolsCallable(const Model::DescribeIpv6PoolsRequest& request) const;

        /**
         * An Async wrapper for DescribeIpv6Pools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpv6PoolsAsync(const Model::DescribeIpv6PoolsRequest& request, const DescribeIpv6PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified key pairs or all of your key pairs.</p> <p>For more
         * information about key pairs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
         * EC2 key pairs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeKeyPairs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest& request) const;

        /**
         * A Callable wrapper for DescribeKeyPairs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request) const;

        /**
         * An Async wrapper for DescribeKeyPairs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more versions of a specified launch template. You can
         * describe all versions, individual versions, or a range of versions. You can also
         * describe all the latest versions or all the default versions of all the launch
         * templates in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLaunchTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchTemplateVersionsOutcome DescribeLaunchTemplateVersions(const Model::DescribeLaunchTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLaunchTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLaunchTemplateVersionsOutcomeCallable DescribeLaunchTemplateVersionsCallable(const Model::DescribeLaunchTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeLaunchTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLaunchTemplateVersionsAsync(const Model::DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more launch templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLaunchTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchTemplatesOutcome DescribeLaunchTemplates(const Model::DescribeLaunchTemplatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLaunchTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLaunchTemplatesOutcomeCallable DescribeLaunchTemplatesCallable(const Model::DescribeLaunchTemplatesRequest& request) const;

        /**
         * An Async wrapper for DescribeLaunchTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLaunchTemplatesAsync(const Model::DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the associations between virtual interface groups and local gateway
         * route tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcomeCallable DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsCallable(const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAsync(const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request, const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified associations between VPCs and local gateway route
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTableVpcAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTableVpcAssociationsOutcome DescribeLocalGatewayRouteTableVpcAssociations(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGatewayRouteTableVpcAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewayRouteTableVpcAssociationsOutcomeCallable DescribeLocalGatewayRouteTableVpcAssociationsCallable(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGatewayRouteTableVpcAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewayRouteTableVpcAssociationsAsync(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request, const DescribeLocalGatewayRouteTableVpcAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more local gateway route tables. By default, all local
         * gateway route tables are described. Alternatively, you can filter the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTablesOutcome DescribeLocalGatewayRouteTables(const Model::DescribeLocalGatewayRouteTablesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGatewayRouteTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewayRouteTablesOutcomeCallable DescribeLocalGatewayRouteTablesCallable(const Model::DescribeLocalGatewayRouteTablesRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGatewayRouteTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewayRouteTablesAsync(const Model::DescribeLocalGatewayRouteTablesRequest& request, const DescribeLocalGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified local gateway virtual interface groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayVirtualInterfaceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayVirtualInterfaceGroupsOutcome DescribeLocalGatewayVirtualInterfaceGroups(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGatewayVirtualInterfaceGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewayVirtualInterfaceGroupsOutcomeCallable DescribeLocalGatewayVirtualInterfaceGroupsCallable(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGatewayVirtualInterfaceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewayVirtualInterfaceGroupsAsync(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request, const DescribeLocalGatewayVirtualInterfaceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified local gateway virtual interfaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayVirtualInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayVirtualInterfacesOutcome DescribeLocalGatewayVirtualInterfaces(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGatewayVirtualInterfaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewayVirtualInterfacesOutcomeCallable DescribeLocalGatewayVirtualInterfacesCallable(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGatewayVirtualInterfaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewayVirtualInterfacesAsync(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request, const DescribeLocalGatewayVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more local gateways. By default, all local gateways are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewaysOutcome DescribeLocalGateways(const Model::DescribeLocalGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocalGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocalGatewaysOutcomeCallable DescribeLocalGatewaysCallable(const Model::DescribeLocalGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeLocalGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocalGatewaysAsync(const Model::DescribeLocalGatewaysRequest& request, const DescribeLocalGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your managed prefix lists and any Amazon Web Services-managed
         * prefix lists.</p> <p>To view the entries for your prefix list, use
         * <a>GetManagedPrefixListEntries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeManagedPrefixLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedPrefixListsOutcome DescribeManagedPrefixLists(const Model::DescribeManagedPrefixListsRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedPrefixLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeManagedPrefixListsOutcomeCallable DescribeManagedPrefixListsCallable(const Model::DescribeManagedPrefixListsRequest& request) const;

        /**
         * An Async wrapper for DescribeManagedPrefixLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeManagedPrefixListsAsync(const Model::DescribeManagedPrefixListsRequest& request, const DescribeManagedPrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your Elastic IP addresses that are being moved to the EC2-VPC
         * platform, or that are being restored to the EC2-Classic platform. This request
         * does not return information about any other Elastic IP addresses in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeMovingAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMovingAddressesOutcome DescribeMovingAddresses(const Model::DescribeMovingAddressesRequest& request) const;

        /**
         * A Callable wrapper for DescribeMovingAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMovingAddressesOutcomeCallable DescribeMovingAddressesCallable(const Model::DescribeMovingAddressesRequest& request) const;

        /**
         * An Async wrapper for DescribeMovingAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMovingAddressesAsync(const Model::DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your NAT gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeNatGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNatGatewaysOutcomeCallable DescribeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeNatGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your network ACLs.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAcls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkAclsOutcome DescribeNetworkAcls(const Model::DescribeNetworkAclsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkAcls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkAclsOutcomeCallable DescribeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkAcls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Network Access Scope analyses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAccessScopeAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAccessScopeAnalysesOutcome DescribeNetworkInsightsAccessScopeAnalyses(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInsightsAccessScopeAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInsightsAccessScopeAnalysesOutcomeCallable DescribeNetworkInsightsAccessScopeAnalysesCallable(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInsightsAccessScopeAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInsightsAccessScopeAnalysesAsync(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request, const DescribeNetworkInsightsAccessScopeAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Network Access Scopes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAccessScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAccessScopesOutcome DescribeNetworkInsightsAccessScopes(const Model::DescribeNetworkInsightsAccessScopesRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInsightsAccessScopes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInsightsAccessScopesOutcomeCallable DescribeNetworkInsightsAccessScopesCallable(const Model::DescribeNetworkInsightsAccessScopesRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInsightsAccessScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInsightsAccessScopesAsync(const Model::DescribeNetworkInsightsAccessScopesRequest& request, const DescribeNetworkInsightsAccessScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your network insights analyses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAnalysesOutcome DescribeNetworkInsightsAnalyses(const Model::DescribeNetworkInsightsAnalysesRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInsightsAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInsightsAnalysesOutcomeCallable DescribeNetworkInsightsAnalysesCallable(const Model::DescribeNetworkInsightsAnalysesRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInsightsAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInsightsAnalysesAsync(const Model::DescribeNetworkInsightsAnalysesRequest& request, const DescribeNetworkInsightsAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your paths.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsPathsOutcome DescribeNetworkInsightsPaths(const Model::DescribeNetworkInsightsPathsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInsightsPaths that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInsightsPathsOutcomeCallable DescribeNetworkInsightsPathsCallable(const Model::DescribeNetworkInsightsPathsRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInsightsPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInsightsPathsAsync(const Model::DescribeNetworkInsightsPathsRequest& request, const DescribeNetworkInsightsPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a network interface attribute. You can specify only one attribute
         * at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfaceAttributeOutcome DescribeNetworkInterfaceAttribute(const Model::DescribeNetworkInterfaceAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInterfaceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfaceAttributeOutcomeCallable DescribeNetworkInterfaceAttributeCallable(const Model::DescribeNetworkInterfaceAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInterfaceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfaceAttributeAsync(const Model::DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for your network interfaces. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacePermissionsOutcome DescribeNetworkInterfacePermissions(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInterfacePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfacePermissionsOutcomeCallable DescribeNetworkInterfacePermissionsCallable(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInterfacePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfacePermissionsAsync(const Model::DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your network interfaces.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetworkInterfaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request) const;

        /**
         * An Async wrapper for DescribeNetworkInterfaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified placement groups or all of your placement groups. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
         * groups</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePlacementGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementGroupsOutcome DescribePlacementGroups(const Model::DescribePlacementGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribePlacementGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlacementGroupsOutcomeCallable DescribePlacementGroupsCallable(const Model::DescribePlacementGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribePlacementGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlacementGroupsAsync(const Model::DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes available Amazon Web Services services in a prefix list format,
         * which includes the prefix list name and prefix list ID of the service and the IP
         * address range for the service.</p> <p>We recommend that you use
         * <a>DescribeManagedPrefixLists</a> instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrefixLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePrefixListsOutcome DescribePrefixLists(const Model::DescribePrefixListsRequest& request) const;

        /**
         * A Callable wrapper for DescribePrefixLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePrefixListsOutcomeCallable DescribePrefixListsCallable(const Model::DescribePrefixListsRequest& request) const;

        /**
         * An Async wrapper for DescribePrefixLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePrefixListsAsync(const Model::DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ID format settings for the root user and all IAM roles and IAM
         * users that have explicitly specified a longer ID (17-character ID) preference.
         * </p> <p>By default, all IAM roles and IAM users default to the same ID settings
         * as the root user, unless they explicitly override the settings. This request is
         * useful for identifying those IAM users and IAM roles that have overridden the
         * default ID settings.</p> <p>The following resource types support longer IDs:
         * <code>bundle</code> | <code>conversion-task</code> |
         * <code>customer-gateway</code> | <code>dhcp-options</code> |
         * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
         * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
         * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code>
         * | <code>network-acl</code> | <code>network-acl-association</code> |
         * <code>network-interface</code> | <code>network-interface-attachment</code> |
         * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> |
         * <code>route-table-association</code> | <code>security-group</code> |
         * <code>snapshot</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>volume</code> |
         * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
         * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
         * <code>vpn-connection</code> | <code>vpn-gateway</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrincipalIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePrincipalIdFormatOutcome DescribePrincipalIdFormat(const Model::DescribePrincipalIdFormatRequest& request) const;

        /**
         * A Callable wrapper for DescribePrincipalIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePrincipalIdFormatOutcomeCallable DescribePrincipalIdFormatCallable(const Model::DescribePrincipalIdFormatRequest& request) const;

        /**
         * An Async wrapper for DescribePrincipalIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePrincipalIdFormatAsync(const Model::DescribePrincipalIdFormatRequest& request, const DescribePrincipalIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified IPv4 address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePublicIpv4Pools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublicIpv4PoolsOutcome DescribePublicIpv4Pools(const Model::DescribePublicIpv4PoolsRequest& request) const;

        /**
         * A Callable wrapper for DescribePublicIpv4Pools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePublicIpv4PoolsOutcomeCallable DescribePublicIpv4PoolsCallable(const Model::DescribePublicIpv4PoolsRequest& request) const;

        /**
         * An Async wrapper for DescribePublicIpv4Pools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePublicIpv4PoolsAsync(const Model::DescribePublicIpv4PoolsRequest& request, const DescribePublicIpv4PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Regions that are enabled for your account, or all Regions.</p>
         * <p>For a list of the Regions supported by Amazon EC2, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/ec2-service.html"> Amazon
         * Elastic Compute Cloud endpoints and quotas</a>.</p> <p>For information about
         * enabling and disabling Regions for your account, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing
         * Amazon Web Services Regions</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request) const;

        /**
         * An Async wrapper for DescribeRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a root volume replacement task. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/replace-root.html">Replace
         * a root volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReplaceRootVolumeTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplaceRootVolumeTasksOutcome DescribeReplaceRootVolumeTasks(const Model::DescribeReplaceRootVolumeTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplaceRootVolumeTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplaceRootVolumeTasksOutcomeCallable DescribeReplaceRootVolumeTasksCallable(const Model::DescribeReplaceRootVolumeTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeReplaceRootVolumeTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplaceRootVolumeTasksAsync(const Model::DescribeReplaceRootVolumeTasksRequest& request, const DescribeReplaceRootVolumeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the Reserved Instances that you purchased.</p>
         * <p>For more information about Reserved Instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesOutcomeCallable DescribeReservedInstancesCallable(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesAsync(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your account's Reserved Instance listings in the Reserved Instance
         * Marketplace.</p> <p>The Reserved Instance Marketplace matches sellers who want
         * to resell Reserved Instance capacity that they no longer need with buyers who
         * want to purchase additional capacity. Reserved Instances bought and sold through
         * the Reserved Instance Marketplace work like any other Reserved Instances.</p>
         * <p>As a seller, you choose to list some or all of your Reserved Instances, and
         * you specify the upfront price to receive for them. Your Reserved Instances are
         * then listed in the Reserved Instance Marketplace and are available for
         * purchase.</p> <p>As a buyer, you specify the configuration of the Reserved
         * Instance to purchase, and the Marketplace matches what you're searching for with
         * what's available. The Marketplace first sells the lowest priced Reserved
         * Instances to you, and continues to sell available Reserved Instance listings to
         * you until your demand is met. You are charged based on the total price of all of
         * the listings that you purchase.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesListingsOutcome DescribeReservedInstancesListings(const Model::DescribeReservedInstancesListingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstancesListings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesListingsOutcomeCallable DescribeReservedInstancesListingsCallable(const Model::DescribeReservedInstancesListingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstancesListings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesListingsAsync(const Model::DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the modifications made to your Reserved Instances. If no parameter
         * is specified, information about all your Reserved Instances modification
         * requests is returned. If a modification ID is specified, only information about
         * the specific modification is returned.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesModificationsOutcome DescribeReservedInstancesModifications(const Model::DescribeReservedInstancesModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstancesModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesModificationsOutcomeCallable DescribeReservedInstancesModificationsCallable(const Model::DescribeReservedInstancesModificationsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstancesModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesModificationsAsync(const Model::DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Reserved Instance offerings that are available for purchase. With
         * Reserved Instances, you purchase the right to launch instances for a period of
         * time. During that time period, you do not receive insufficient capacity errors,
         * and you pay a lower usage rate than the rate charged for On-Demand instances for
         * the actual time used.</p> <p>If you have listed your own Reserved Instances for
         * sale in the Reserved Instance Marketplace, they will be excluded from these
         * results. This is to ensure that you do not purchase your own Reserved
         * Instances.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOfferingsOutcome DescribeReservedInstancesOfferings(const Model::DescribeReservedInstancesOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstancesOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesOfferingsOutcomeCallable DescribeReservedInstancesOfferingsCallable(const Model::DescribeReservedInstancesOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstancesOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesOfferingsAsync(const Model::DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your route tables.</p> <p>Each subnet in your VPC
         * must be associated with a route table. If a subnet is not explicitly associated
         * with any route table, it is implicitly associated with the main route table.
         * This command does not return the subnet ID for implicit associations.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRouteTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request) const;

        /**
         * An Async wrapper for DescribeRouteTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds available schedules that meet the specified criteria.</p> <p>You can
         * search for an available schedule no more than 3 months in advance. You must meet
         * the minimum required duration of 1,200 hours per year. For example, the minimum
         * daily schedule is 4 hours, the minimum weekly schedule is 24 hours, and the
         * minimum monthly schedule is 100 hours.</p> <p>After you find a schedule that
         * meets your needs, call <a>PurchaseScheduledInstances</a> to purchase Scheduled
         * Instances with that schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledInstanceAvailabilityOutcome DescribeScheduledInstanceAvailability(const Model::DescribeScheduledInstanceAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledInstanceAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledInstanceAvailabilityOutcomeCallable DescribeScheduledInstanceAvailabilityCallable(const Model::DescribeScheduledInstanceAvailabilityRequest& request) const;

        /**
         * An Async wrapper for DescribeScheduledInstanceAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledInstanceAvailabilityAsync(const Model::DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Scheduled Instances or all your Scheduled
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledInstancesOutcome DescribeScheduledInstances(const Model::DescribeScheduledInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledInstancesOutcomeCallable DescribeScheduledInstancesCallable(const Model::DescribeScheduledInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeScheduledInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledInstancesAsync(const Model::DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[VPC only] Describes the VPCs on the other side of a VPC peering connection
         * that are referencing the security groups you've specified in this
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupReferencesOutcome DescribeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityGroupReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityGroupReferencesOutcomeCallable DescribeSecurityGroupReferencesCallable(const Model::DescribeSecurityGroupReferencesRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityGroupReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityGroupReferencesAsync(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your security group rules.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupRulesOutcome DescribeSecurityGroupRules(const Model::DescribeSecurityGroupRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityGroupRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityGroupRulesOutcomeCallable DescribeSecurityGroupRulesCallable(const Model::DescribeSecurityGroupRulesRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityGroupRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityGroupRulesAsync(const Model::DescribeSecurityGroupRulesRequest& request, const DescribeSecurityGroupRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified security groups or all of your security groups.</p>
         * <p>A security group is for use with instances either in the EC2-Classic platform
         * or in a specific VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 security groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * groups for your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p>  <p>We are retiring EC2-Classic. We recommend that you
         * migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified snapshot. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS snapshots,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotAttributeOutcome DescribeSnapshotAttribute(const Model::DescribeSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotAttributeOutcomeCallable DescribeSnapshotAttributeCallable(const Model::DescribeSnapshotAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotAttributeAsync(const Model::DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the storage tier status of one or more Amazon EBS
         * snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotTierStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotTierStatusOutcome DescribeSnapshotTierStatus(const Model::DescribeSnapshotTierStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshotTierStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotTierStatusOutcomeCallable DescribeSnapshotTierStatusCallable(const Model::DescribeSnapshotTierStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshotTierStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotTierStatusAsync(const Model::DescribeSnapshotTierStatusRequest& request, const DescribeSnapshotTierStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified EBS snapshots available to you or all of the EBS
         * snapshots available to you.</p> <p>The snapshots available to you include public
         * snapshots, private snapshots that you own, and private snapshots owned by other
         * Amazon Web Services accounts for which you have explicit create volume
         * permissions.</p> <p>The create volume permissions fall into the following
         * categories:</p> <ul> <li> <p> <i>public</i>: The owner of the snapshot granted
         * create volume permissions for the snapshot to the <code>all</code> group. All
         * Amazon Web Services accounts have create volume permissions for these
         * snapshots.</p> </li> <li> <p> <i>explicit</i>: The owner of the snapshot granted
         * create volume permissions to a specific Amazon Web Services account.</p> </li>
         * <li> <p> <i>implicit</i>: An Amazon Web Services account has implicit create
         * volume permissions for all snapshots it owns.</p> </li> </ul> <p>The list of
         * snapshots returned can be filtered by specifying snapshot IDs, snapshot owners,
         * or Amazon Web Services accounts with create volume permissions. If no options
         * are specified, Amazon EC2 returns all snapshots for which you have create volume
         * permissions.</p> <p>If you specify one or more snapshot IDs, only snapshots that
         * have the specified IDs are returned. If you specify an invalid snapshot ID, an
         * error is returned. If you specify a snapshot ID for which you do not have
         * access, it is not included in the returned results.</p> <p>If you specify one or
         * more snapshot owners using the <code>OwnerIds</code> option, only snapshots from
         * the specified owners and for which you have access are returned. The results can
         * include the Amazon Web Services account IDs of the specified owners,
         * <code>amazon</code> for snapshots owned by Amazon, or <code>self</code> for
         * snapshots that you own.</p> <p>If you specify a list of restorable users, only
         * snapshots with create snapshot permissions for those users are returned. You can
         * specify Amazon Web Services account IDs (if you own the snapshots),
         * <code>self</code> for snapshots for which you own or have explicit permissions,
         * or <code>all</code> for public snapshots.</p> <p>If you are describing a long
         * list of snapshots, we recommend that you paginate the output to make the list
         * more manageable. The <code>MaxResults</code> parameter sets the maximum number
         * of results returned in a single page. If the list of results exceeds your
         * <code>MaxResults</code> value, then that number of results is returned along
         * with a <code>NextToken</code> value that can be passed to a subsequent
         * <code>DescribeSnapshots</code> request to retrieve the remaining results.</p>
         * <p>To get the state of fast snapshot restores for a snapshot, use
         * <a>DescribeFastSnapshotRestores</a>.</p> <p>For more information about EBS
         * snapshots, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the data feed for Spot Instances. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance data feed</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotDatafeedSubscriptionOutcome DescribeSpotDatafeedSubscription(const Model::DescribeSpotDatafeedSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotDatafeedSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotDatafeedSubscriptionOutcomeCallable DescribeSpotDatafeedSubscriptionCallable(const Model::DescribeSpotDatafeedSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotDatafeedSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotDatafeedSubscriptionAsync(const Model::DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the running instances for the specified Spot Fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetInstancesOutcome DescribeSpotFleetInstances(const Model::DescribeSpotFleetInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotFleetInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetInstancesOutcomeCallable DescribeSpotFleetInstancesCallable(const Model::DescribeSpotFleetInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotFleetInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetInstancesAsync(const Model::DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the events for the specified Spot Fleet request during the
         * specified time.</p> <p>Spot Fleet events are delayed by up to 30 seconds before
         * they can be described. This ensures that you can query by the last evaluated
         * time and not miss a recorded event. Spot Fleet events are available for 48
         * hours.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-monitor.html">Monitor
         * fleet events using Amazon EventBridge</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetRequestHistoryOutcome DescribeSpotFleetRequestHistory(const Model::DescribeSpotFleetRequestHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotFleetRequestHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetRequestHistoryOutcomeCallable DescribeSpotFleetRequestHistoryCallable(const Model::DescribeSpotFleetRequestHistoryRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotFleetRequestHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetRequestHistoryAsync(const Model::DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your Spot Fleet requests.</p> <p>Spot Fleet requests are deleted 48
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetRequestsOutcome DescribeSpotFleetRequests(const Model::DescribeSpotFleetRequestsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotFleetRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetRequestsOutcomeCallable DescribeSpotFleetRequestsCallable(const Model::DescribeSpotFleetRequestsRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotFleetRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetRequestsAsync(const Model::DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Spot Instance requests.</p> <p>You can use
         * <code>DescribeSpotInstanceRequests</code> to find a running Spot Instance by
         * examining the response. If the status of the Spot Instance is
         * <code>fulfilled</code>, the instance ID appears in the response and contains the
         * identifier of the instance. Alternatively, you can use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances">DescribeInstances</a>
         * with a filter to look for instances where the instance lifecycle is
         * <code>spot</code>.</p> <p>We recommend that you set <code>MaxResults</code> to a
         * value between 5 and 1000 to limit the number of results returned. This paginates
         * the output, which makes the list more manageable and returns the results faster.
         * If the list of results exceeds your <code>MaxResults</code> value, then that
         * number of results is returned along with a <code>NextToken</code> value that can
         * be passed to a subsequent <code>DescribeSpotInstanceRequests</code> request to
         * retrieve the remaining results.</p> <p>Spot Instance requests are deleted four
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotInstanceRequestsOutcome DescribeSpotInstanceRequests(const Model::DescribeSpotInstanceRequestsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotInstanceRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotInstanceRequestsOutcomeCallable DescribeSpotInstanceRequestsCallable(const Model::DescribeSpotInstanceRequestsRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotInstanceRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotInstanceRequestsAsync(const Model::DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Spot price history. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-spot-instances-history.html">Spot
         * Instance pricing history</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p> <p>When you specify a start and end time, the operation
         * returns the prices of the instance types within that time range. It also returns
         * the last price change before the start time, which is the effective price as of
         * the start time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotPriceHistoryOutcome DescribeSpotPriceHistory(const Model::DescribeSpotPriceHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpotPriceHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotPriceHistoryOutcomeCallable DescribeSpotPriceHistoryCallable(const Model::DescribeSpotPriceHistoryRequest& request) const;

        /**
         * An Async wrapper for DescribeSpotPriceHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotPriceHistoryAsync(const Model::DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[VPC only] Describes the stale security group rules for security groups in a
         * specified VPC. Rules are stale when they reference a deleted security group in
         * the same VPC or in a peer VPC, or if they reference a security group in a peer
         * VPC for which the VPC peering connection has been deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStaleSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStaleSecurityGroupsOutcome DescribeStaleSecurityGroups(const Model::DescribeStaleSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeStaleSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStaleSecurityGroupsOutcomeCallable DescribeStaleSecurityGroupsCallable(const Model::DescribeStaleSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeStaleSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStaleSecurityGroupsAsync(const Model::DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the progress of the AMI store tasks. You can describe the store
         * tasks for specified AMIs. If you don't specify the AMIs, you get a paginated
         * list of store tasks from the last 31 days.</p> <p>For each AMI task, the
         * response indicates if the task is <code>InProgress</code>,
         * <code>Completed</code>, or <code>Failed</code>. For tasks
         * <code>InProgress</code>, the response shows the estimated progress as a
         * percentage.</p> <p>Tasks are listed in reverse chronological order. Currently,
         * only tasks from the past 31 days can be viewed.</p> <p>To use this API, you must
         * have the required permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html#ami-s3-permissions">Permissions
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStoreImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStoreImageTasksOutcome DescribeStoreImageTasks(const Model::DescribeStoreImageTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeStoreImageTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStoreImageTasksOutcomeCallable DescribeStoreImageTasksCallable(const Model::DescribeStoreImageTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeStoreImageTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStoreImageTasksAsync(const Model::DescribeStoreImageTasksRequest& request, const DescribeStoreImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your subnets.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Your
         * VPC and subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request) const;

        /**
         * An Async wrapper for DescribeSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified tags for your EC2 resources.</p> <p>For more
         * information about tags, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tag
         * your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTags">AWS
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
         * <p>Describes one or more Traffic Mirror filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorFiltersOutcome DescribeTrafficMirrorFilters(const Model::DescribeTrafficMirrorFiltersRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrafficMirrorFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrafficMirrorFiltersOutcomeCallable DescribeTrafficMirrorFiltersCallable(const Model::DescribeTrafficMirrorFiltersRequest& request) const;

        /**
         * An Async wrapper for DescribeTrafficMirrorFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrafficMirrorFiltersAsync(const Model::DescribeTrafficMirrorFiltersRequest& request, const DescribeTrafficMirrorFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Traffic Mirror sessions. By default, all Traffic Mirror
         * sessions are described. Alternatively, you can filter the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorSessionsOutcome DescribeTrafficMirrorSessions(const Model::DescribeTrafficMirrorSessionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrafficMirrorSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrafficMirrorSessionsOutcomeCallable DescribeTrafficMirrorSessionsCallable(const Model::DescribeTrafficMirrorSessionsRequest& request) const;

        /**
         * An Async wrapper for DescribeTrafficMirrorSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrafficMirrorSessionsAsync(const Model::DescribeTrafficMirrorSessionsRequest& request, const DescribeTrafficMirrorSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about one or more Traffic Mirror targets.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorTargetsOutcome DescribeTrafficMirrorTargets(const Model::DescribeTrafficMirrorTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrafficMirrorTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrafficMirrorTargetsOutcomeCallable DescribeTrafficMirrorTargetsCallable(const Model::DescribeTrafficMirrorTargetsRequest& request) const;

        /**
         * An Async wrapper for DescribeTrafficMirrorTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrafficMirrorTargetsAsync(const Model::DescribeTrafficMirrorTargetsRequest& request, const DescribeTrafficMirrorTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more attachments between resources and transit gateways. By
         * default, all attachments are described. Alternatively, you can filter the
         * results by attachment ID, attachment state, resource ID, or resource
         * owner.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayAttachmentsOutcome DescribeTransitGatewayAttachments(const Model::DescribeTransitGatewayAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayAttachmentsOutcomeCallable DescribeTransitGatewayAttachmentsCallable(const Model::DescribeTransitGatewayAttachmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayAttachmentsAsync(const Model::DescribeTransitGatewayAttachmentsRequest& request, const DescribeTransitGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Connect peers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayConnectPeers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayConnectPeersOutcome DescribeTransitGatewayConnectPeers(const Model::DescribeTransitGatewayConnectPeersRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayConnectPeers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayConnectPeersOutcomeCallable DescribeTransitGatewayConnectPeersCallable(const Model::DescribeTransitGatewayConnectPeersRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayConnectPeers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayConnectPeersAsync(const Model::DescribeTransitGatewayConnectPeersRequest& request, const DescribeTransitGatewayConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Connect attachments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayConnectsOutcome DescribeTransitGatewayConnects(const Model::DescribeTransitGatewayConnectsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayConnectsOutcomeCallable DescribeTransitGatewayConnectsCallable(const Model::DescribeTransitGatewayConnectsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayConnectsAsync(const Model::DescribeTransitGatewayConnectsRequest& request, const DescribeTransitGatewayConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more transit gateway multicast domains.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayMulticastDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayMulticastDomainsOutcome DescribeTransitGatewayMulticastDomains(const Model::DescribeTransitGatewayMulticastDomainsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayMulticastDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayMulticastDomainsOutcomeCallable DescribeTransitGatewayMulticastDomainsCallable(const Model::DescribeTransitGatewayMulticastDomainsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayMulticastDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayMulticastDomainsAsync(const Model::DescribeTransitGatewayMulticastDomainsRequest& request, const DescribeTransitGatewayMulticastDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your transit gateway peering attachments.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayPeeringAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayPeeringAttachmentsOutcome DescribeTransitGatewayPeeringAttachments(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayPeeringAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayPeeringAttachmentsOutcomeCallable DescribeTransitGatewayPeeringAttachmentsCallable(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayPeeringAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayPeeringAttachmentsAsync(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request, const DescribeTransitGatewayPeeringAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more transit gateway route policy tables. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayPolicyTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayPolicyTablesOutcome DescribeTransitGatewayPolicyTables(const Model::DescribeTransitGatewayPolicyTablesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayPolicyTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayPolicyTablesOutcomeCallable DescribeTransitGatewayPolicyTablesCallable(const Model::DescribeTransitGatewayPolicyTablesRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayPolicyTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayPolicyTablesAsync(const Model::DescribeTransitGatewayPolicyTablesRequest& request, const DescribeTransitGatewayPolicyTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more transit gateway route table
         * advertisements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayRouteTableAnnouncements">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayRouteTableAnnouncementsOutcome DescribeTransitGatewayRouteTableAnnouncements(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayRouteTableAnnouncements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayRouteTableAnnouncementsOutcomeCallable DescribeTransitGatewayRouteTableAnnouncementsCallable(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayRouteTableAnnouncements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayRouteTableAnnouncementsAsync(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request, const DescribeTransitGatewayRouteTableAnnouncementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more transit gateway route tables. By default, all transit
         * gateway route tables are described. Alternatively, you can filter the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayRouteTablesOutcome DescribeTransitGatewayRouteTables(const Model::DescribeTransitGatewayRouteTablesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayRouteTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayRouteTablesOutcomeCallable DescribeTransitGatewayRouteTablesCallable(const Model::DescribeTransitGatewayRouteTablesRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayRouteTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayRouteTablesAsync(const Model::DescribeTransitGatewayRouteTablesRequest& request, const DescribeTransitGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more VPC attachments. By default, all VPC attachments are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayVpcAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayVpcAttachmentsOutcome DescribeTransitGatewayVpcAttachments(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGatewayVpcAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewayVpcAttachmentsOutcomeCallable DescribeTransitGatewayVpcAttachmentsCallable(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGatewayVpcAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewayVpcAttachmentsAsync(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request, const DescribeTransitGatewayVpcAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more transit gateways. By default, all transit gateways are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewaysOutcome DescribeTransitGateways(const Model::DescribeTransitGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransitGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransitGatewaysOutcomeCallable DescribeTransitGatewaysCallable(const Model::DescribeTransitGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeTransitGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransitGatewaysAsync(const Model::DescribeTransitGatewaysRequest& request, const DescribeTransitGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This API action is currently in <b>limited preview only</b>. If you
         * are interested in using this feature, contact your account manager.</p> 
         * <p>Describes one or more network interface trunk associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrunkInterfaceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrunkInterfaceAssociationsOutcome DescribeTrunkInterfaceAssociations(const Model::DescribeTrunkInterfaceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrunkInterfaceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrunkInterfaceAssociationsOutcomeCallable DescribeTrunkInterfaceAssociationsCallable(const Model::DescribeTrunkInterfaceAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeTrunkInterfaceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrunkInterfaceAssociationsAsync(const Model::DescribeTrunkInterfaceAssociationsRequest& request, const DescribeTrunkInterfaceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe Amazon Web Services Verified Access endpoints.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVerifiedAccessEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedAccessEndpointsOutcome DescribeVerifiedAccessEndpoints(const Model::DescribeVerifiedAccessEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedAccessEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVerifiedAccessEndpointsOutcomeCallable DescribeVerifiedAccessEndpointsCallable(const Model::DescribeVerifiedAccessEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeVerifiedAccessEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVerifiedAccessEndpointsAsync(const Model::DescribeVerifiedAccessEndpointsRequest& request, const DescribeVerifiedAccessEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe details of existing Verified Access groups.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVerifiedAccessGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedAccessGroupsOutcome DescribeVerifiedAccessGroups(const Model::DescribeVerifiedAccessGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedAccessGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVerifiedAccessGroupsOutcomeCallable DescribeVerifiedAccessGroupsCallable(const Model::DescribeVerifiedAccessGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeVerifiedAccessGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVerifiedAccessGroupsAsync(const Model::DescribeVerifiedAccessGroupsRequest& request, const DescribeVerifiedAccessGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current logging configuration for the Amazon Web Services
         * Verified Access instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVerifiedAccessInstanceLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome DescribeVerifiedAccessInstanceLoggingConfigurations(const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedAccessInstanceLoggingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVerifiedAccessInstanceLoggingConfigurationsOutcomeCallable DescribeVerifiedAccessInstanceLoggingConfigurationsCallable(const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeVerifiedAccessInstanceLoggingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVerifiedAccessInstanceLoggingConfigurationsAsync(const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request, const DescribeVerifiedAccessInstanceLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe Verified Access instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVerifiedAccessInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedAccessInstancesOutcome DescribeVerifiedAccessInstances(const Model::DescribeVerifiedAccessInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedAccessInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVerifiedAccessInstancesOutcomeCallable DescribeVerifiedAccessInstancesCallable(const Model::DescribeVerifiedAccessInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeVerifiedAccessInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVerifiedAccessInstancesAsync(const Model::DescribeVerifiedAccessInstancesRequest& request, const DescribeVerifiedAccessInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe details of existing Verified Access trust providers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVerifiedAccessTrustProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedAccessTrustProvidersOutcome DescribeVerifiedAccessTrustProviders(const Model::DescribeVerifiedAccessTrustProvidersRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedAccessTrustProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVerifiedAccessTrustProvidersOutcomeCallable DescribeVerifiedAccessTrustProvidersCallable(const Model::DescribeVerifiedAccessTrustProvidersRequest& request) const;

        /**
         * An Async wrapper for DescribeVerifiedAccessTrustProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVerifiedAccessTrustProvidersAsync(const Model::DescribeVerifiedAccessTrustProvidersRequest& request, const DescribeVerifiedAccessTrustProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified volume. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS volumes, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumeAttributeOutcome DescribeVolumeAttribute(const Model::DescribeVolumeAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeVolumeAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumeAttributeOutcomeCallable DescribeVolumeAttributeCallable(const Model::DescribeVolumeAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeVolumeAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumeAttributeAsync(const Model::DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the specified volumes. Volume status provides the
         * result of the checks performed on your volumes to determine events that can
         * impair the performance of your volumes. The performance of a volume can be
         * affected if an issue occurs on the volume's underlying host. If the volume's
         * underlying host experiences a power outage or system issue, after the system is
         * restored, there could be data inconsistencies on the volume. Volume events
         * notify you if this occurs. Volume actions notify you if any action needs to be
         * taken in response to the event.</p> <p>The <code>DescribeVolumeStatus</code>
         * operation provides the following information about the specified volumes:</p>
         * <p> <i>Status</i>: Reflects the current status of the volume. The possible
         * values are <code>ok</code>, <code>impaired</code> , <code>warning</code>, or
         * <code>insufficient-data</code>. If all checks pass, the overall status of the
         * volume is <code>ok</code>. If the check fails, the overall status is
         * <code>impaired</code>. If the status is <code>insufficient-data</code>, then the
         * checks might still be taking place on your volume at the time. We recommend that
         * you retry the request. For more information about volume status, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-status.html">Monitor
         * the status of your volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p> <i>Events</i>: Reflect the cause of a volume status and might
         * require you to take action. For example, if your volume returns an
         * <code>impaired</code> status, then the volume event might be
         * <code>potential-data-inconsistency</code>. This means that your volume has been
         * affected by an issue with the underlying host, has all I/O operations disabled,
         * and might have inconsistent data.</p> <p> <i>Actions</i>: Reflect the actions
         * you might have to take in response to an event. For example, if the status of
         * the volume is <code>impaired</code> and the volume event shows
         * <code>potential-data-inconsistency</code>, then the action shows
         * <code>enable-volume-io</code>. This means that you may want to enable the I/O
         * operations for the volume by calling the <a>EnableVolumeIO</a> action and then
         * check the volume for data consistency.</p> <p>Volume status is based on the
         * volume status checks, and does not reflect the volume state. Therefore, volume
         * status does not indicate volumes in the <code>error</code> state (for example,
         * when a volume is incapable of accepting I/O.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumeStatusOutcome DescribeVolumeStatus(const Model::DescribeVolumeStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeVolumeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumeStatusOutcomeCallable DescribeVolumeStatusCallable(const Model::DescribeVolumeStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeVolumeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumeStatusAsync(const Model::DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified EBS volumes or all of your EBS volumes.</p> <p>If you
         * are describing a long list of volumes, we recommend that you paginate the output
         * to make the list more manageable. The <code>MaxResults</code> parameter sets the
         * maximum number of results returned in a single page. If the list of results
         * exceeds your <code>MaxResults</code> value, then that number of results is
         * returned along with a <code>NextToken</code> value that can be passed to a
         * subsequent <code>DescribeVolumes</code> request to retrieve the remaining
         * results.</p> <p>For more information about EBS volumes, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request) const;

        /**
         * A Callable wrapper for DescribeVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request) const;

        /**
         * An Async wrapper for DescribeVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the most recent volume modification request for the specified EBS
         * volumes.</p> <p>If a volume has never been modified, some information in the
         * output will be null. If a volume has been modified more than once, the output
         * includes only the most recent modification request.</p> <p>You can also use
         * CloudWatch Events to check the status of a modification to an EBS volume. For
         * information about CloudWatch Events, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-modifications.html">Monitor
         * the progress of volume modifications</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumesModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesModificationsOutcome DescribeVolumesModifications(const Model::DescribeVolumesModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVolumesModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesModificationsOutcomeCallable DescribeVolumesModificationsCallable(const Model::DescribeVolumesModificationsRequest& request) const;

        /**
         * An Async wrapper for DescribeVolumesModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesModificationsAsync(const Model::DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified VPC. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcAttributeOutcome DescribeVpcAttribute(const Model::DescribeVpcAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcAttributeOutcomeCallable DescribeVpcAttributeCallable(const Model::DescribeVpcAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcAttributeAsync(const Model::DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ClassicLink status of one or more VPCs.</p>  <p>We are
         * retiring EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcClassicLinkOutcome DescribeVpcClassicLink(const Model::DescribeVpcClassicLinkRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcClassicLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcClassicLinkOutcomeCallable DescribeVpcClassicLinkCallable(const Model::DescribeVpcClassicLinkRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcClassicLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcClassicLinkAsync(const Model::DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Describes the ClassicLink DNS support status of one or
         * more VPCs. If enabled, the DNS hostname of a linked EC2-Classic instance
         * resolves to its private IP address when addressed from an instance in the VPC to
         * which it's linked. Similarly, the DNS hostname of an instance in a VPC resolves
         * to its private IP address when addressed from a linked EC2-Classic instance. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcClassicLinkDnsSupportOutcome DescribeVpcClassicLinkDnsSupport(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcClassicLinkDnsSupport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcClassicLinkDnsSupportOutcomeCallable DescribeVpcClassicLinkDnsSupportCallable(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcClassicLinkDnsSupport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcClassicLinkDnsSupportAsync(const Model::DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the connection notifications for VPC endpoints and VPC endpoint
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointConnectionNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointConnectionNotificationsOutcome DescribeVpcEndpointConnectionNotifications(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointConnectionNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointConnectionNotificationsOutcomeCallable DescribeVpcEndpointConnectionNotificationsCallable(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpointConnectionNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointConnectionNotificationsAsync(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request, const DescribeVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the VPC endpoint connections to your VPC endpoint services,
         * including any endpoints that are pending your acceptance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointConnectionsOutcome DescribeVpcEndpointConnections(const Model::DescribeVpcEndpointConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointConnectionsOutcomeCallable DescribeVpcEndpointConnectionsCallable(const Model::DescribeVpcEndpointConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpointConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointConnectionsAsync(const Model::DescribeVpcEndpointConnectionsRequest& request, const DescribeVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the VPC endpoint service configurations in your account (your
         * services).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServiceConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServiceConfigurationsOutcome DescribeVpcEndpointServiceConfigurations(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointServiceConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointServiceConfigurationsOutcomeCallable DescribeVpcEndpointServiceConfigurationsCallable(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpointServiceConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointServiceConfigurationsAsync(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request, const DescribeVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the principals (service consumers) that are permitted to discover
         * your VPC endpoint service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServicePermissionsOutcome DescribeVpcEndpointServicePermissions(const Model::DescribeVpcEndpointServicePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointServicePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointServicePermissionsOutcomeCallable DescribeVpcEndpointServicePermissionsCallable(const Model::DescribeVpcEndpointServicePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpointServicePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointServicePermissionsAsync(const Model::DescribeVpcEndpointServicePermissionsRequest& request, const DescribeVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes available services to which you can create a VPC endpoint.</p>
         * <p>When the service provider and the consumer have different accounts in
         * multiple Availability Zones, and the consumer views the VPC endpoint service
         * information, the response only includes the common Availability Zones. For
         * example, when the service provider account uses <code>us-east-1a</code> and
         * <code>us-east-1c</code> and the consumer uses <code>us-east-1a</code> and
         * <code>us-east-1b</code>, the response includes the VPC endpoint services in the
         * common Availability Zone, <code>us-east-1a</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServicesOutcome DescribeVpcEndpointServices(const Model::DescribeVpcEndpointServicesRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointServicesOutcomeCallable DescribeVpcEndpointServicesCallable(const Model::DescribeVpcEndpointServicesRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpointServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointServicesAsync(const Model::DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPC endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointsOutcomeCallable DescribeVpcEndpointsCallable(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointsAsync(const Model::DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPC peering connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcPeeringConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcomeCallable DescribeVpcPeeringConnectionsCallable(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcPeeringConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringConnectionsAsync(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPN connections.</p> <p>For more information,
         * see <a href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon
         * Web Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpnConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpnConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your virtual private gateways.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPC_VPN.html">Amazon Web
         * Services Site-to-Site VPN</a> in the <i>Amazon Web Services Site-to-Site VPN
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpnGatewaysOutcome DescribeVpnGateways(const Model::DescribeVpnGatewaysRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpnGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpnGatewaysOutcomeCallable DescribeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request) const;

        /**
         * An Async wrapper for DescribeVpnGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Unlinks (detaches) a linked EC2-Classic instance from
         * a VPC. After the instance has been unlinked, the VPC security groups are no
         * longer associated with it. An instance is automatically unlinked from a VPC when
         * it's stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachClassicLinkVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest& request) const;

        /**
         * A Callable wrapper for DetachClassicLinkVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request) const;

        /**
         * An Async wrapper for DetachClassicLinkVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an internet gateway from a VPC, disabling connectivity between the
         * internet and the VPC. The VPC must not contain any running instances with
         * Elastic IP addresses or public IPv4 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInternetGatewayOutcome DetachInternetGateway(const Model::DetachInternetGatewayRequest& request) const;

        /**
         * A Callable wrapper for DetachInternetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachInternetGatewayOutcomeCallable DetachInternetGatewayCallable(const Model::DetachInternetGatewayRequest& request) const;

        /**
         * An Async wrapper for DetachInternetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachInternetGatewayAsync(const Model::DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a network interface from an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for DetachNetworkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request) const;

        /**
         * An Async wrapper for DetachNetworkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detach a trust provider from an Amazon Web Services Verified Access
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVerifiedAccessTrustProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVerifiedAccessTrustProviderOutcome DetachVerifiedAccessTrustProvider(const Model::DetachVerifiedAccessTrustProviderRequest& request) const;

        /**
         * A Callable wrapper for DetachVerifiedAccessTrustProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVerifiedAccessTrustProviderOutcomeCallable DetachVerifiedAccessTrustProviderCallable(const Model::DetachVerifiedAccessTrustProviderRequest& request) const;

        /**
         * An Async wrapper for DetachVerifiedAccessTrustProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVerifiedAccessTrustProviderAsync(const Model::DetachVerifiedAccessTrustProviderRequest& request, const DetachVerifiedAccessTrustProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an EBS volume from an instance. Make sure to unmount any file
         * systems on the device within your operating system before detaching the volume.
         * Failure to do so can result in the volume becoming stuck in the
         * <code>busy</code> state while detaching. If this happens, detachment can be
         * delayed indefinitely until you unmount the volume, force detachment, reboot the
         * instance, or all three. If an EBS volume is the root device of an instance, it
         * can't be detached while the instance is running. To detach the root volume, stop
         * the instance first.</p> <p>When a volume with an Amazon Web Services Marketplace
         * product code is detached from an instance, the product code is no longer
         * associated with the instance.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-detaching-volume.html">Detach
         * an Amazon EBS volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVolumeOutcome DetachVolume(const Model::DetachVolumeRequest& request) const;

        /**
         * A Callable wrapper for DetachVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVolumeOutcomeCallable DetachVolumeCallable(const Model::DetachVolumeRequest& request) const;

        /**
         * An Async wrapper for DetachVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVolumeAsync(const Model::DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a virtual private gateway from a VPC. You do this if you're planning
         * to turn off the VPC and not use it anymore. You can confirm a virtual private
         * gateway has been completely detached from a VPC by describing the virtual
         * private gateway (any attachments to the virtual private gateway are also
         * described).</p> <p>You must wait for the attachment's state to switch to
         * <code>detached</code> before you can delete the VPC or attach a different VPC to
         * the virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVpnGatewayOutcome DetachVpnGateway(const Model::DetachVpnGatewayRequest& request) const;

        /**
         * A Callable wrapper for DetachVpnGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVpnGatewayOutcomeCallable DetachVpnGatewayCallable(const Model::DetachVpnGatewayRequest& request) const;

        /**
         * An Async wrapper for DetachVpnGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVpnGatewayAsync(const Model::DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAddressTransferOutcome DisableAddressTransfer(const Model::DisableAddressTransferRequest& request) const;

        /**
         * A Callable wrapper for DisableAddressTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAddressTransferOutcomeCallable DisableAddressTransferCallable(const Model::DisableAddressTransferRequest& request) const;

        /**
         * An Async wrapper for DisableAddressTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAddressTransferAsync(const Model::DisableAddressTransferRequest& request, const DisableAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Infrastructure Performance metric subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableAwsNetworkPerformanceMetricSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAwsNetworkPerformanceMetricSubscriptionOutcome DisableAwsNetworkPerformanceMetricSubscription(const Model::DisableAwsNetworkPerformanceMetricSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DisableAwsNetworkPerformanceMetricSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAwsNetworkPerformanceMetricSubscriptionOutcomeCallable DisableAwsNetworkPerformanceMetricSubscriptionCallable(const Model::DisableAwsNetworkPerformanceMetricSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DisableAwsNetworkPerformanceMetricSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAwsNetworkPerformanceMetricSubscriptionAsync(const Model::DisableAwsNetworkPerformanceMetricSubscriptionRequest& request, const DisableAwsNetworkPerformanceMetricSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables EBS encryption by default for your account in the current
         * Region.</p> <p>After you disable encryption by default, you can still create
         * encrypted volumes by enabling encryption when you create each volume.</p>
         * <p>Disabling encryption by default does not change the encryption status of your
         * existing volumes.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableEbsEncryptionByDefault">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableEbsEncryptionByDefaultOutcome DisableEbsEncryptionByDefault(const Model::DisableEbsEncryptionByDefaultRequest& request) const;

        /**
         * A Callable wrapper for DisableEbsEncryptionByDefault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableEbsEncryptionByDefaultOutcomeCallable DisableEbsEncryptionByDefaultCallable(const Model::DisableEbsEncryptionByDefaultRequest& request) const;

        /**
         * An Async wrapper for DisableEbsEncryptionByDefault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableEbsEncryptionByDefaultAsync(const Model::DisableEbsEncryptionByDefaultRequest& request, const DisableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Discontinue faster launching for a Windows AMI, and clean up existing
         * pre-provisioned snapshots. When you disable faster launching, the AMI uses the
         * standard launch process for each instance. All pre-provisioned snapshots must be
         * removed before you can enable faster launching again.</p>  <p>To change
         * these settings, you must own the AMI.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableFastLaunchOutcome DisableFastLaunch(const Model::DisableFastLaunchRequest& request) const;

        /**
         * A Callable wrapper for DisableFastLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableFastLaunchOutcomeCallable DisableFastLaunchCallable(const Model::DisableFastLaunchRequest& request) const;

        /**
         * An Async wrapper for DisableFastLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableFastLaunchAsync(const Model::DisableFastLaunchRequest& request, const DisableFastLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables fast snapshot restores for the specified snapshots in the specified
         * Availability Zones.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastSnapshotRestores">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableFastSnapshotRestoresOutcome DisableFastSnapshotRestores(const Model::DisableFastSnapshotRestoresRequest& request) const;

        /**
         * A Callable wrapper for DisableFastSnapshotRestores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableFastSnapshotRestoresOutcomeCallable DisableFastSnapshotRestoresCallable(const Model::DisableFastSnapshotRestoresRequest& request) const;

        /**
         * An Async wrapper for DisableFastSnapshotRestores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableFastSnapshotRestoresAsync(const Model::DisableFastSnapshotRestoresRequest& request, const DisableFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the deprecation of the specified AMI.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-deprecate.html">Deprecate
         * an AMI</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableImageDeprecation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImageDeprecationOutcome DisableImageDeprecation(const Model::DisableImageDeprecationRequest& request) const;

        /**
         * A Callable wrapper for DisableImageDeprecation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableImageDeprecationOutcomeCallable DisableImageDeprecationCallable(const Model::DisableImageDeprecationRequest& request) const;

        /**
         * An Async wrapper for DisableImageDeprecation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableImageDeprecationAsync(const Model::DisableImageDeprecationRequest& request, const DisableImageDeprecationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disable the IPAM account. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/enable-integ-ipam.html">Enable
         * integration with Organizations</a> in the <i>Amazon VPC IPAM User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableIpamOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableIpamOrganizationAdminAccountOutcome DisableIpamOrganizationAdminAccount(const Model::DisableIpamOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableIpamOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableIpamOrganizationAdminAccountOutcomeCallable DisableIpamOrganizationAdminAccountCallable(const Model::DisableIpamOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisableIpamOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableIpamOrganizationAdminAccountAsync(const Model::DisableIpamOrganizationAdminAccountRequest& request, const DisableIpamOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables access to the EC2 serial console of all instances for your account.
         * By default, access to the EC2 serial console is disabled for your account. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configure-access-to-serial-console.html#serial-console-account-access">Manage
         * account access to the EC2 serial console</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableSerialConsoleAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSerialConsoleAccessOutcome DisableSerialConsoleAccess(const Model::DisableSerialConsoleAccessRequest& request) const;

        /**
         * A Callable wrapper for DisableSerialConsoleAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSerialConsoleAccessOutcomeCallable DisableSerialConsoleAccessCallable(const Model::DisableSerialConsoleAccessRequest& request) const;

        /**
         * An Async wrapper for DisableSerialConsoleAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSerialConsoleAccessAsync(const Model::DisableSerialConsoleAccessRequest& request, const DisableSerialConsoleAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified resource attachment from propagating routes to the
         * specified propagation route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableTransitGatewayRouteTablePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTransitGatewayRouteTablePropagationOutcome DisableTransitGatewayRouteTablePropagation(const Model::DisableTransitGatewayRouteTablePropagationRequest& request) const;

        /**
         * A Callable wrapper for DisableTransitGatewayRouteTablePropagation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableTransitGatewayRouteTablePropagationOutcomeCallable DisableTransitGatewayRouteTablePropagationCallable(const Model::DisableTransitGatewayRouteTablePropagationRequest& request) const;

        /**
         * An Async wrapper for DisableTransitGatewayRouteTablePropagation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableTransitGatewayRouteTablePropagationAsync(const Model::DisableTransitGatewayRouteTablePropagationRequest& request, const DisableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a virtual private gateway (VGW) from propagating routes to a
         * specified route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVgwRoutePropagationOutcome DisableVgwRoutePropagation(const Model::DisableVgwRoutePropagationRequest& request) const;

        /**
         * A Callable wrapper for DisableVgwRoutePropagation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVgwRoutePropagationOutcomeCallable DisableVgwRoutePropagationCallable(const Model::DisableVgwRoutePropagationRequest& request) const;

        /**
         * An Async wrapper for DisableVgwRoutePropagation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVgwRoutePropagationAsync(const Model::DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables ClassicLink for a VPC. You cannot disable ClassicLink for a VPC that
         * has EC2-Classic instances linked to it.</p>  <p>We are retiring
         * EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVpcClassicLinkOutcome DisableVpcClassicLink(const Model::DisableVpcClassicLinkRequest& request) const;

        /**
         * A Callable wrapper for DisableVpcClassicLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVpcClassicLinkOutcomeCallable DisableVpcClassicLinkCallable(const Model::DisableVpcClassicLinkRequest& request) const;

        /**
         * An Async wrapper for DisableVpcClassicLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVpcClassicLinkAsync(const Model::DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables ClassicLink DNS support for a VPC. If disabled, DNS hostnames
         * resolve to public IP addresses when addressed between a linked EC2-Classic
         * instance and instances in the VPC to which it's linked. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You must specify a
         * VPC ID in the request.</p>  <p>We are retiring EC2-Classic. We recommend
         * that you migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVpcClassicLinkDnsSupportOutcome DisableVpcClassicLinkDnsSupport(const Model::DisableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * A Callable wrapper for DisableVpcClassicLinkDnsSupport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVpcClassicLinkDnsSupportOutcomeCallable DisableVpcClassicLinkDnsSupportCallable(const Model::DisableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * An Async wrapper for DisableVpcClassicLinkDnsSupport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVpcClassicLinkDnsSupportAsync(const Model::DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Elastic IP address from the instance or network interface
         * it's associated with.</p> <p>An Elastic IP address is for use in either the
         * EC2-Classic platform or in a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>This is an idempotent operation. If you perform the
         * operation more than once, Amazon EC2 doesn't return an error.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request) const;

        /**
         * An Async wrapper for DisassociateAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a target network from the specified Client VPN endpoint. When
         * you disassociate the last target network from a Client VPN, the following
         * happens:</p> <ul> <li> <p>The route that was automatically added for the VPC is
         * deleted</p> </li> <li> <p>All active client connections are terminated</p> </li>
         * <li> <p>New client connections are disallowed</p> </li> <li> <p>The Client VPN
         * endpoint's status changes to <code>pending-associate</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateClientVpnTargetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateClientVpnTargetNetworkOutcome DisassociateClientVpnTargetNetwork(const Model::DisassociateClientVpnTargetNetworkRequest& request) const;

        /**
         * A Callable wrapper for DisassociateClientVpnTargetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateClientVpnTargetNetworkOutcomeCallable DisassociateClientVpnTargetNetworkCallable(const Model::DisassociateClientVpnTargetNetworkRequest& request) const;

        /**
         * An Async wrapper for DisassociateClientVpnTargetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateClientVpnTargetNetworkAsync(const Model::DisassociateClientVpnTargetNetworkRequest& request, const DisassociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an IAM role from an Certificate Manager (ACM) certificate.
         * Disassociating an IAM role from an ACM certificate removes the Amazon S3 object
         * that contains the certificate, certificate chain, and encrypted private key from
         * the Amazon S3 bucket. It also revokes the IAM role's permission to use the KMS
         * key used to encrypt the private key. This effectively revokes the role's
         * permission to use the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateEnclaveCertificateIamRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateEnclaveCertificateIamRoleOutcome DisassociateEnclaveCertificateIamRole(const Model::DisassociateEnclaveCertificateIamRoleRequest& request) const;

        /**
         * A Callable wrapper for DisassociateEnclaveCertificateIamRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateEnclaveCertificateIamRoleOutcomeCallable DisassociateEnclaveCertificateIamRoleCallable(const Model::DisassociateEnclaveCertificateIamRoleRequest& request) const;

        /**
         * An Async wrapper for DisassociateEnclaveCertificateIamRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateEnclaveCertificateIamRoleAsync(const Model::DisassociateEnclaveCertificateIamRoleRequest& request, const DisassociateEnclaveCertificateIamRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an IAM instance profile from a running or stopped instance.</p>
         * <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIamInstanceProfileOutcome DisassociateIamInstanceProfile(const Model::DisassociateIamInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for DisassociateIamInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateIamInstanceProfileOutcomeCallable DisassociateIamInstanceProfileCallable(const Model::DisassociateIamInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for DisassociateIamInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateIamInstanceProfileAsync(const Model::DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates one or more targets from an event window.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateInstanceEventWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateInstanceEventWindowOutcome DisassociateInstanceEventWindow(const Model::DisassociateInstanceEventWindowRequest& request) const;

        /**
         * A Callable wrapper for DisassociateInstanceEventWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateInstanceEventWindowOutcomeCallable DisassociateInstanceEventWindowCallable(const Model::DisassociateInstanceEventWindowRequest& request) const;

        /**
         * An Async wrapper for DisassociateInstanceEventWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateInstanceEventWindowAsync(const Model::DisassociateInstanceEventWindowRequest& request, const DisassociateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a subnet or gateway from a route table.</p> <p>After you
         * perform this action, the subnet no longer uses the routes in the route table.
         * Instead, it uses the routes in the VPC's main route table. For more information
         * about route tables, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRouteTableOutcome DisassociateRouteTable(const Model::DisassociateRouteTableRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRouteTableOutcomeCallable DisassociateRouteTableCallable(const Model::DisassociateRouteTableRequest& request) const;

        /**
         * An Async wrapper for DisassociateRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRouteTableAsync(const Model::DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a CIDR block from a subnet. Currently, you can disassociate an
         * IPv6 CIDR block only. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetCidrBlockOutcome DisassociateSubnetCidrBlock(const Model::DisassociateSubnetCidrBlockRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSubnetCidrBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSubnetCidrBlockOutcomeCallable DisassociateSubnetCidrBlockCallable(const Model::DisassociateSubnetCidrBlockRequest& request) const;

        /**
         * An Async wrapper for DisassociateSubnetCidrBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSubnetCidrBlockAsync(const Model::DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified subnets from the transit gateway multicast
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayMulticastDomainOutcome DisassociateTransitGatewayMulticastDomain(const Model::DisassociateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTransitGatewayMulticastDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTransitGatewayMulticastDomainOutcomeCallable DisassociateTransitGatewayMulticastDomainCallable(const Model::DisassociateTransitGatewayMulticastDomainRequest& request) const;

        /**
         * An Async wrapper for DisassociateTransitGatewayMulticastDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTransitGatewayMulticastDomainAsync(const Model::DisassociateTransitGatewayMulticastDomainRequest& request, const DisassociateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between an an attachment and a policy
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayPolicyTableOutcome DisassociateTransitGatewayPolicyTable(const Model::DisassociateTransitGatewayPolicyTableRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTransitGatewayPolicyTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTransitGatewayPolicyTableOutcomeCallable DisassociateTransitGatewayPolicyTableCallable(const Model::DisassociateTransitGatewayPolicyTableRequest& request) const;

        /**
         * An Async wrapper for DisassociateTransitGatewayPolicyTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTransitGatewayPolicyTableAsync(const Model::DisassociateTransitGatewayPolicyTableRequest& request, const DisassociateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a resource attachment from a transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayRouteTableOutcome DisassociateTransitGatewayRouteTable(const Model::DisassociateTransitGatewayRouteTableRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTransitGatewayRouteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTransitGatewayRouteTableOutcomeCallable DisassociateTransitGatewayRouteTableCallable(const Model::DisassociateTransitGatewayRouteTableRequest& request) const;

        /**
         * An Async wrapper for DisassociateTransitGatewayRouteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTransitGatewayRouteTableAsync(const Model::DisassociateTransitGatewayRouteTableRequest& request, const DisassociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This API action is currently in <b>limited preview only</b>. If you
         * are interested in using this feature, contact your account manager.</p> 
         * <p>Removes an association between a branch network interface with a trunk
         * network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTrunkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrunkInterfaceOutcome DisassociateTrunkInterface(const Model::DisassociateTrunkInterfaceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrunkInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrunkInterfaceOutcomeCallable DisassociateTrunkInterfaceCallable(const Model::DisassociateTrunkInterfaceRequest& request) const;

        /**
         * An Async wrapper for DisassociateTrunkInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrunkInterfaceAsync(const Model::DisassociateTrunkInterfaceRequest& request, const DisassociateTrunkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a CIDR block from a VPC. To disassociate the CIDR block, you
         * must specify its association ID. You can get the association ID by using
         * <a>DescribeVpcs</a>. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it. </p> <p>You
         * cannot disassociate the CIDR block with which you originally created the VPC
         * (the primary CIDR block).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateVpcCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateVpcCidrBlockOutcome DisassociateVpcCidrBlock(const Model::DisassociateVpcCidrBlockRequest& request) const;

        /**
         * A Callable wrapper for DisassociateVpcCidrBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateVpcCidrBlockOutcomeCallable DisassociateVpcCidrBlockCallable(const Model::DisassociateVpcCidrBlockRequest& request) const;

        /**
         * An Async wrapper for DisassociateVpcCidrBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateVpcCidrBlockAsync(const Model::DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAddressTransferOutcome EnableAddressTransfer(const Model::EnableAddressTransferRequest& request) const;

        /**
         * A Callable wrapper for EnableAddressTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAddressTransferOutcomeCallable EnableAddressTransferCallable(const Model::EnableAddressTransferRequest& request) const;

        /**
         * An Async wrapper for EnableAddressTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAddressTransferAsync(const Model::EnableAddressTransferRequest& request, const EnableAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Infrastructure Performance subscriptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableAwsNetworkPerformanceMetricSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAwsNetworkPerformanceMetricSubscriptionOutcome EnableAwsNetworkPerformanceMetricSubscription(const Model::EnableAwsNetworkPerformanceMetricSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for EnableAwsNetworkPerformanceMetricSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAwsNetworkPerformanceMetricSubscriptionOutcomeCallable EnableAwsNetworkPerformanceMetricSubscriptionCallable(const Model::EnableAwsNetworkPerformanceMetricSubscriptionRequest& request) const;

        /**
         * An Async wrapper for EnableAwsNetworkPerformanceMetricSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAwsNetworkPerformanceMetricSubscriptionAsync(const Model::EnableAwsNetworkPerformanceMetricSubscriptionRequest& request, const EnableAwsNetworkPerformanceMetricSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables EBS encryption by default for your account in the current Region.</p>
         * <p>After you enable encryption by default, the EBS volumes that you create are
         * always encrypted, either using the default KMS key or the KMS key that you
         * specified when you created each volume. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can specify the default KMS key for encryption by default using
         * <a>ModifyEbsDefaultKmsKeyId</a> or <a>ResetEbsDefaultKmsKeyId</a>.</p>
         * <p>Enabling encryption by default has no effect on the encryption status of your
         * existing volumes.</p> <p>After you enable encryption by default, you can no
         * longer launch instances using instance types that do not support encryption. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
         * instance types</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableEbsEncryptionByDefault">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableEbsEncryptionByDefaultOutcome EnableEbsEncryptionByDefault(const Model::EnableEbsEncryptionByDefaultRequest& request) const;

        /**
         * A Callable wrapper for EnableEbsEncryptionByDefault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableEbsEncryptionByDefaultOutcomeCallable EnableEbsEncryptionByDefaultCallable(const Model::EnableEbsEncryptionByDefaultRequest& request) const;

        /**
         * An Async wrapper for EnableEbsEncryptionByDefault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableEbsEncryptionByDefaultAsync(const Model::EnableEbsEncryptionByDefaultRequest& request, const EnableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you enable faster launching for a Windows AMI, images are
         * pre-provisioned, using snapshots to launch instances up to 65% faster. To create
         * the optimized Windows image, Amazon EC2 launches an instance and runs through
         * Sysprep steps, rebooting as required. Then it creates a set of reserved
         * snapshots that are used for subsequent launches. The reserved snapshots are
         * automatically replenished as they are used, depending on your settings for
         * launch frequency.</p>  <p>To change these settings, you must own the
         * AMI.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableFastLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableFastLaunchOutcome EnableFastLaunch(const Model::EnableFastLaunchRequest& request) const;

        /**
         * A Callable wrapper for EnableFastLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableFastLaunchOutcomeCallable EnableFastLaunchCallable(const Model::EnableFastLaunchRequest& request) const;

        /**
         * An Async wrapper for EnableFastLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableFastLaunchAsync(const Model::EnableFastLaunchRequest& request, const EnableFastLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables fast snapshot restores for the specified snapshots in the specified
         * Availability Zones.</p> <p>You get the full benefit of fast snapshot restores
         * after they enter the <code>enabled</code> state. To get the current state of
         * fast snapshot restores, use <a>DescribeFastSnapshotRestores</a>. To disable fast
         * snapshot restores, use <a>DisableFastSnapshotRestores</a>.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-fast-snapshot-restore.html">Amazon
         * EBS fast snapshot restore</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableFastSnapshotRestores">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableFastSnapshotRestoresOutcome EnableFastSnapshotRestores(const Model::EnableFastSnapshotRestoresRequest& request) const;

        /**
         * A Callable wrapper for EnableFastSnapshotRestores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableFastSnapshotRestoresOutcomeCallable EnableFastSnapshotRestoresCallable(const Model::EnableFastSnapshotRestoresRequest& request) const;

        /**
         * An Async wrapper for EnableFastSnapshotRestores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableFastSnapshotRestoresAsync(const Model::EnableFastSnapshotRestoresRequest& request, const EnableFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables deprecation of the specified AMI at the specified date and time.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-deprecate.html">Deprecate
         * an AMI</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableImageDeprecation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImageDeprecationOutcome EnableImageDeprecation(const Model::EnableImageDeprecationRequest& request) const;

        /**
         * A Callable wrapper for EnableImageDeprecation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableImageDeprecationOutcomeCallable EnableImageDeprecationCallable(const Model::EnableImageDeprecationRequest& request) const;

        /**
         * An Async wrapper for EnableImageDeprecation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableImageDeprecationAsync(const Model::EnableImageDeprecationRequest& request, const EnableImageDeprecationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable an Organizations member account as the IPAM admin account. You cannot
         * select the Organizations management account as the IPAM admin account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/enable-integ-ipam.html">Enable
         * integration with Organizations</a> in the <i>Amazon VPC IPAM User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableIpamOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableIpamOrganizationAdminAccountOutcome EnableIpamOrganizationAdminAccount(const Model::EnableIpamOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableIpamOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableIpamOrganizationAdminAccountOutcomeCallable EnableIpamOrganizationAdminAccountCallable(const Model::EnableIpamOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableIpamOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableIpamOrganizationAdminAccountAsync(const Model::EnableIpamOrganizationAdminAccountRequest& request, const EnableIpamOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Establishes a trust relationship between Reachability Analyzer and
         * Organizations. This operation must be performed by the management account for
         * the organization.</p> <p>After you establish a trust relationship, a user in the
         * management account or a delegated administrator account can run a cross-account
         * analysis using resources from the member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableReachabilityAnalyzerOrganizationSharing">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableReachabilityAnalyzerOrganizationSharingOutcome EnableReachabilityAnalyzerOrganizationSharing(const Model::EnableReachabilityAnalyzerOrganizationSharingRequest& request) const;

        /**
         * A Callable wrapper for EnableReachabilityAnalyzerOrganizationSharing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableReachabilityAnalyzerOrganizationSharingOutcomeCallable EnableReachabilityAnalyzerOrganizationSharingCallable(const Model::EnableReachabilityAnalyzerOrganizationSharingRequest& request) const;

        /**
         * An Async wrapper for EnableReachabilityAnalyzerOrganizationSharing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableReachabilityAnalyzerOrganizationSharingAsync(const Model::EnableReachabilityAnalyzerOrganizationSharingRequest& request, const EnableReachabilityAnalyzerOrganizationSharingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables access to the EC2 serial console of all instances for your account.
         * By default, access to the EC2 serial console is disabled for your account. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configure-access-to-serial-console.html#serial-console-account-access">Manage
         * account access to the EC2 serial console</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableSerialConsoleAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSerialConsoleAccessOutcome EnableSerialConsoleAccess(const Model::EnableSerialConsoleAccessRequest& request) const;

        /**
         * A Callable wrapper for EnableSerialConsoleAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSerialConsoleAccessOutcomeCallable EnableSerialConsoleAccessCallable(const Model::EnableSerialConsoleAccessRequest& request) const;

        /**
         * An Async wrapper for EnableSerialConsoleAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSerialConsoleAccessAsync(const Model::EnableSerialConsoleAccessRequest& request, const EnableSerialConsoleAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified attachment to propagate routes to the specified
         * propagation route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableTransitGatewayRouteTablePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTransitGatewayRouteTablePropagationOutcome EnableTransitGatewayRouteTablePropagation(const Model::EnableTransitGatewayRouteTablePropagationRequest& request) const;

        /**
         * A Callable wrapper for EnableTransitGatewayRouteTablePropagation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableTransitGatewayRouteTablePropagationOutcomeCallable EnableTransitGatewayRouteTablePropagationCallable(const Model::EnableTransitGatewayRouteTablePropagationRequest& request) const;

        /**
         * An Async wrapper for EnableTransitGatewayRouteTablePropagation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableTransitGatewayRouteTablePropagationAsync(const Model::EnableTransitGatewayRouteTablePropagationRequest& request, const EnableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a virtual private gateway (VGW) to propagate routes to the specified
         * route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVgwRoutePropagationOutcome EnableVgwRoutePropagation(const Model::EnableVgwRoutePropagationRequest& request) const;

        /**
         * A Callable wrapper for EnableVgwRoutePropagation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVgwRoutePropagationOutcomeCallable EnableVgwRoutePropagationCallable(const Model::EnableVgwRoutePropagationRequest& request) const;

        /**
         * An Async wrapper for EnableVgwRoutePropagation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVgwRoutePropagationAsync(const Model::EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables I/O operations for a volume that had I/O operations disabled because
         * the data on the volume was potentially inconsistent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVolumeIO">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVolumeIOOutcome EnableVolumeIO(const Model::EnableVolumeIORequest& request) const;

        /**
         * A Callable wrapper for EnableVolumeIO that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVolumeIOOutcomeCallable EnableVolumeIOCallable(const Model::EnableVolumeIORequest& request) const;

        /**
         * An Async wrapper for EnableVolumeIO that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVolumeIOAsync(const Model::EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Enables a VPC for ClassicLink. You can then link
         * EC2-Classic instances to your ClassicLink-enabled VPC to allow communication
         * over private IP addresses. You cannot enable your VPC for ClassicLink if any of
         * your VPC route tables have existing routes for address ranges within the
         * <code>10.0.0.0/8</code> IP address range, excluding local routes for VPCs in the
         * <code>10.0.0.0/16</code> and <code>10.1.0.0/16</code> IP address ranges. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVpcClassicLinkOutcome EnableVpcClassicLink(const Model::EnableVpcClassicLinkRequest& request) const;

        /**
         * A Callable wrapper for EnableVpcClassicLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVpcClassicLinkOutcomeCallable EnableVpcClassicLinkCallable(const Model::EnableVpcClassicLinkRequest& request) const;

        /**
         * An Async wrapper for EnableVpcClassicLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVpcClassicLinkAsync(const Model::EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Enables a VPC to support DNS hostname resolution for
         * ClassicLink. If enabled, the DNS hostname of a linked EC2-Classic instance
         * resolves to its private IP address when addressed from an instance in the VPC to
         * which it's linked. Similarly, the DNS hostname of an instance in a VPC resolves
         * to its private IP address when addressed from a linked EC2-Classic instance. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You must specify a
         * VPC ID in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVpcClassicLinkDnsSupportOutcome EnableVpcClassicLinkDnsSupport(const Model::EnableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * A Callable wrapper for EnableVpcClassicLinkDnsSupport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVpcClassicLinkDnsSupportOutcomeCallable EnableVpcClassicLinkDnsSupportCallable(const Model::EnableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * An Async wrapper for EnableVpcClassicLinkDnsSupport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVpcClassicLinkDnsSupportAsync(const Model::EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads the client certificate revocation list for the specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportClientVpnClientCertificateRevocationList">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportClientVpnClientCertificateRevocationListOutcome ExportClientVpnClientCertificateRevocationList(const Model::ExportClientVpnClientCertificateRevocationListRequest& request) const;

        /**
         * A Callable wrapper for ExportClientVpnClientCertificateRevocationList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportClientVpnClientCertificateRevocationListOutcomeCallable ExportClientVpnClientCertificateRevocationListCallable(const Model::ExportClientVpnClientCertificateRevocationListRequest& request) const;

        /**
         * An Async wrapper for ExportClientVpnClientCertificateRevocationList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportClientVpnClientCertificateRevocationListAsync(const Model::ExportClientVpnClientCertificateRevocationListRequest& request, const ExportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads the contents of the Client VPN endpoint configuration file for the
         * specified Client VPN endpoint. The Client VPN endpoint configuration file
         * includes the Client VPN endpoint and certificate information clients need to
         * establish a connection with the Client VPN endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportClientVpnClientConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportClientVpnClientConfigurationOutcome ExportClientVpnClientConfiguration(const Model::ExportClientVpnClientConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ExportClientVpnClientConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportClientVpnClientConfigurationOutcomeCallable ExportClientVpnClientConfigurationCallable(const Model::ExportClientVpnClientConfigurationRequest& request) const;

        /**
         * An Async wrapper for ExportClientVpnClientConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportClientVpnClientConfigurationAsync(const Model::ExportClientVpnClientConfigurationRequest& request, const ExportClientVpnClientConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports an Amazon Machine Image (AMI) to a VM file. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport_image.html">Exporting
         * a VM directly from an Amazon Machine Image (AMI)</a> in the <i>VM Import/Export
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportImage">AWS API
         * Reference</a></p>
         */
        virtual Model::ExportImageOutcome ExportImage(const Model::ExportImageRequest& request) const;

        /**
         * A Callable wrapper for ExportImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportImageOutcomeCallable ExportImageCallable(const Model::ExportImageRequest& request) const;

        /**
         * An Async wrapper for ExportImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportImageAsync(const Model::ExportImageRequest& request, const ExportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports routes from the specified transit gateway route table to the
         * specified S3 bucket. By default, all routes are exported. Alternatively, you can
         * filter by CIDR range.</p> <p>The routes are saved to the specified bucket in a
         * JSON file. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-route-tables.html#tgw-export-route-tables">Export
         * Route Tables to Amazon S3</a> in <i>Transit Gateways</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportTransitGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportTransitGatewayRoutesOutcome ExportTransitGatewayRoutes(const Model::ExportTransitGatewayRoutesRequest& request) const;

        /**
         * A Callable wrapper for ExportTransitGatewayRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportTransitGatewayRoutesOutcomeCallable ExportTransitGatewayRoutesCallable(const Model::ExportTransitGatewayRoutesRequest& request) const;

        /**
         * An Async wrapper for ExportTransitGatewayRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportTransitGatewayRoutesAsync(const Model::ExportTransitGatewayRoutesRequest& request, const ExportTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the IAM roles that are associated with the specified ACM (ACM)
         * certificate. It also returns the name of the Amazon S3 bucket and the Amazon S3
         * object key where the certificate, certificate chain, and encrypted private key
         * bundle are stored, and the ARN of the KMS key that's used to encrypt the private
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetAssociatedEnclaveCertificateIamRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedEnclaveCertificateIamRolesOutcome GetAssociatedEnclaveCertificateIamRoles(const Model::GetAssociatedEnclaveCertificateIamRolesRequest& request) const;

        /**
         * A Callable wrapper for GetAssociatedEnclaveCertificateIamRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociatedEnclaveCertificateIamRolesOutcomeCallable GetAssociatedEnclaveCertificateIamRolesCallable(const Model::GetAssociatedEnclaveCertificateIamRolesRequest& request) const;

        /**
         * An Async wrapper for GetAssociatedEnclaveCertificateIamRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociatedEnclaveCertificateIamRolesAsync(const Model::GetAssociatedEnclaveCertificateIamRolesRequest& request, const GetAssociatedEnclaveCertificateIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the IPv6 CIDR block associations for a specified IPv6
         * address pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetAssociatedIpv6PoolCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedIpv6PoolCidrsOutcome GetAssociatedIpv6PoolCidrs(const Model::GetAssociatedIpv6PoolCidrsRequest& request) const;

        /**
         * A Callable wrapper for GetAssociatedIpv6PoolCidrs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociatedIpv6PoolCidrsOutcomeCallable GetAssociatedIpv6PoolCidrsCallable(const Model::GetAssociatedIpv6PoolCidrsRequest& request) const;

        /**
         * An Async wrapper for GetAssociatedIpv6PoolCidrs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociatedIpv6PoolCidrsAsync(const Model::GetAssociatedIpv6PoolCidrsRequest& request, const GetAssociatedIpv6PoolCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets network performance data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetAwsNetworkPerformanceData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAwsNetworkPerformanceDataOutcome GetAwsNetworkPerformanceData(const Model::GetAwsNetworkPerformanceDataRequest& request) const;

        /**
         * A Callable wrapper for GetAwsNetworkPerformanceData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAwsNetworkPerformanceDataOutcomeCallable GetAwsNetworkPerformanceDataCallable(const Model::GetAwsNetworkPerformanceDataRequest& request) const;

        /**
         * An Async wrapper for GetAwsNetworkPerformanceData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAwsNetworkPerformanceDataAsync(const Model::GetAwsNetworkPerformanceDataRequest& request, const GetAwsNetworkPerformanceDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets usage information about a Capacity Reservation. If the Capacity
         * Reservation is shared, it shows usage information for the Capacity Reservation
         * owner and each Amazon Web Services account that is currently using the shared
         * capacity. If the Capacity Reservation is not shared, it shows only the Capacity
         * Reservation owner's usage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetCapacityReservationUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCapacityReservationUsageOutcome GetCapacityReservationUsage(const Model::GetCapacityReservationUsageRequest& request) const;

        /**
         * A Callable wrapper for GetCapacityReservationUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCapacityReservationUsageOutcomeCallable GetCapacityReservationUsageCallable(const Model::GetCapacityReservationUsageRequest& request) const;

        /**
         * An Async wrapper for GetCapacityReservationUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCapacityReservationUsageAsync(const Model::GetCapacityReservationUsageRequest& request, const GetCapacityReservationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the allocations from the specified customer-owned address
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetCoipPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoipPoolUsageOutcome GetCoipPoolUsage(const Model::GetCoipPoolUsageRequest& request) const;

        /**
         * A Callable wrapper for GetCoipPoolUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoipPoolUsageOutcomeCallable GetCoipPoolUsageCallable(const Model::GetCoipPoolUsageRequest& request) const;

        /**
         * An Async wrapper for GetCoipPoolUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoipPoolUsageAsync(const Model::GetCoipPoolUsageRequest& request, const GetCoipPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the console output for the specified instance. For Linux instances, the
         * instance console output displays the exact console output that would normally be
         * displayed on a physical monitor attached to a computer. For Windows instances,
         * the instance console output includes the last three system event log errors.</p>
         * <p>By default, the console output returns buffered information that was posted
         * shortly after an instance transition state (start, stop, reboot, or terminate).
         * This information is available for at least one hour after the most recent post.
         * Only the most recent 64 KB of console output is available.</p> <p>You can
         * optionally retrieve the latest serial console output at any time during the
         * instance lifecycle. This option is supported on instance types that use the
         * Nitro hypervisor.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html#instance-console-console-output">Instance
         * console output</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsoleOutputOutcome GetConsoleOutput(const Model::GetConsoleOutputRequest& request) const;

        /**
         * A Callable wrapper for GetConsoleOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConsoleOutputOutcomeCallable GetConsoleOutputCallable(const Model::GetConsoleOutputRequest& request) const;

        /**
         * An Async wrapper for GetConsoleOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConsoleOutputAsync(const Model::GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a JPG-format screenshot of a running instance to help with
         * troubleshooting.</p> <p>The returned content is Base64-encoded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleScreenshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsoleScreenshotOutcome GetConsoleScreenshot(const Model::GetConsoleScreenshotRequest& request) const;

        /**
         * A Callable wrapper for GetConsoleScreenshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConsoleScreenshotOutcomeCallable GetConsoleScreenshotCallable(const Model::GetConsoleScreenshotRequest& request) const;

        /**
         * An Async wrapper for GetConsoleScreenshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConsoleScreenshotAsync(const Model::GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default credit option for CPU usage of a burstable performance
         * instance family.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
         * performance instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetDefaultCreditSpecification">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultCreditSpecificationOutcome GetDefaultCreditSpecification(const Model::GetDefaultCreditSpecificationRequest& request) const;

        /**
         * A Callable wrapper for GetDefaultCreditSpecification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDefaultCreditSpecificationOutcomeCallable GetDefaultCreditSpecificationCallable(const Model::GetDefaultCreditSpecificationRequest& request) const;

        /**
         * An Async wrapper for GetDefaultCreditSpecification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDefaultCreditSpecificationAsync(const Model::GetDefaultCreditSpecificationRequest& request, const GetDefaultCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default KMS key for EBS encryption by default for your account
         * in this Region. You can change the default KMS key for encryption by default
         * using <a>ModifyEbsDefaultKmsKeyId</a> or <a>ResetEbsDefaultKmsKeyId</a>.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetEbsDefaultKmsKeyId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEbsDefaultKmsKeyIdOutcome GetEbsDefaultKmsKeyId(const Model::GetEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * A Callable wrapper for GetEbsDefaultKmsKeyId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEbsDefaultKmsKeyIdOutcomeCallable GetEbsDefaultKmsKeyIdCallable(const Model::GetEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * An Async wrapper for GetEbsDefaultKmsKeyId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEbsDefaultKmsKeyIdAsync(const Model::GetEbsDefaultKmsKeyIdRequest& request, const GetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes whether EBS encryption by default is enabled for your account in
         * the current Region.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetEbsEncryptionByDefault">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEbsEncryptionByDefaultOutcome GetEbsEncryptionByDefault(const Model::GetEbsEncryptionByDefaultRequest& request) const;

        /**
         * A Callable wrapper for GetEbsEncryptionByDefault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEbsEncryptionByDefaultOutcomeCallable GetEbsEncryptionByDefaultCallable(const Model::GetEbsEncryptionByDefaultRequest& request) const;

        /**
         * An Async wrapper for GetEbsEncryptionByDefault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEbsEncryptionByDefaultAsync(const Model::GetEbsEncryptionByDefaultRequest& request, const GetEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a CloudFormation template that streamlines and automates the
         * integration of VPC flow logs with Amazon Athena. This make it easier for you to
         * query and gain insights from VPC flow logs data. Based on the information that
         * you provide, we configure resources in the template to do the following:</p>
         * <ul> <li> <p>Create a table in Athena that maps fields to a custom log
         * format</p> </li> <li> <p>Create a Lambda function that updates the table with
         * new partitions on a daily, weekly, or monthly basis</p> </li> <li> <p>Create a
         * table partitioned between two timestamps in the past</p> </li> <li> <p>Create a
         * set of named queries in Athena that you can use to get started quickly</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetFlowLogsIntegrationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowLogsIntegrationTemplateOutcome GetFlowLogsIntegrationTemplate(const Model::GetFlowLogsIntegrationTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetFlowLogsIntegrationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFlowLogsIntegrationTemplateOutcomeCallable GetFlowLogsIntegrationTemplateCallable(const Model::GetFlowLogsIntegrationTemplateRequest& request) const;

        /**
         * An Async wrapper for GetFlowLogsIntegrationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFlowLogsIntegrationTemplateAsync(const Model::GetFlowLogsIntegrationTemplateRequest& request, const GetFlowLogsIntegrationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource groups to which a Capacity Reservation has been
         * added.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetGroupsForCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupsForCapacityReservationOutcome GetGroupsForCapacityReservation(const Model::GetGroupsForCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for GetGroupsForCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupsForCapacityReservationOutcomeCallable GetGroupsForCapacityReservationCallable(const Model::GetGroupsForCapacityReservationRequest& request) const;

        /**
         * An Async wrapper for GetGroupsForCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupsForCapacityReservationAsync(const Model::GetGroupsForCapacityReservationRequest& request, const GetGroupsForCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Preview a reservation purchase with configurations that match those of your
         * Dedicated Host. You must have active Dedicated Hosts in your account before you
         * purchase a reservation.</p> <p>This is a preview of the
         * <a>PurchaseHostReservation</a> action and does not result in the offering being
         * purchased.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetHostReservationPurchasePreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostReservationPurchasePreviewOutcome GetHostReservationPurchasePreview(const Model::GetHostReservationPurchasePreviewRequest& request) const;

        /**
         * A Callable wrapper for GetHostReservationPurchasePreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostReservationPurchasePreviewOutcomeCallable GetHostReservationPurchasePreviewCallable(const Model::GetHostReservationPurchasePreviewRequest& request) const;

        /**
         * An Async wrapper for GetHostReservationPurchasePreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostReservationPurchasePreviewAsync(const Model::GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of instance types with the specified instance attributes. You
         * can use the response to preview the instance types without launching instances.
         * Note that the response does not consider capacity.</p> <p>When you specify
         * multiple parameters, you get instance types that satisfy all of the specified
         * parameters. If you specify multiple values for a parameter, you get instance
         * types that satisfy any of the specified values.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-attribute-based-instance-type-selection.html#spotfleet-get-instance-types-from-instance-requirements">Preview
         * instance types with specified attributes</a>, <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html">Attribute-based
         * instance type selection for EC2 Fleet</a>, <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-attribute-based-instance-type-selection.html">Attribute-based
         * instance type selection for Spot Fleet</a>, and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
         * placement score</a> in the <i>Amazon EC2 User Guide</i>, and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-asg-instance-type-requirements.html">Creating
         * an Auto Scaling group using attribute-based instance type selection</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetInstanceTypesFromInstanceRequirements">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceTypesFromInstanceRequirementsOutcome GetInstanceTypesFromInstanceRequirements(const Model::GetInstanceTypesFromInstanceRequirementsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceTypesFromInstanceRequirements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceTypesFromInstanceRequirementsOutcomeCallable GetInstanceTypesFromInstanceRequirementsCallable(const Model::GetInstanceTypesFromInstanceRequirementsRequest& request) const;

        /**
         * An Async wrapper for GetInstanceTypesFromInstanceRequirements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceTypesFromInstanceRequirementsAsync(const Model::GetInstanceTypesFromInstanceRequirementsRequest& request, const GetInstanceTypesFromInstanceRequirementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A binary representation of the UEFI variable store. Only non-volatile
         * variables are stored. This is a base64 encoded and zlib compressed binary value
         * that must be properly encoded.</p> <p>When you use <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/register-image.html">register-image</a>
         * to create an AMI, you can create an exact copy of your variable store by passing
         * the UEFI data in the <code>UefiData</code> parameter. You can modify the UEFI
         * data by using the <a
         * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
         * GitHub. You can use the tool to convert the UEFI data into a human-readable
         * format (JSON), which you can inspect and modify, and then convert back into the
         * binary format to use with register-image.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
         * Secure Boot</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetInstanceUefiData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceUefiDataOutcome GetInstanceUefiData(const Model::GetInstanceUefiDataRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceUefiData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceUefiDataOutcomeCallable GetInstanceUefiDataCallable(const Model::GetInstanceUefiDataRequest& request) const;

        /**
         * An Async wrapper for GetInstanceUefiData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceUefiDataAsync(const Model::GetInstanceUefiDataRequest& request, const GetInstanceUefiDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve historical information about a CIDR within an IPAM scope. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/view-history-cidr-ipam.html">View
         * the history of IP addresses</a> in the <i>Amazon VPC IPAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamAddressHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamAddressHistoryOutcome GetIpamAddressHistory(const Model::GetIpamAddressHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetIpamAddressHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIpamAddressHistoryOutcomeCallable GetIpamAddressHistoryCallable(const Model::GetIpamAddressHistoryRequest& request) const;

        /**
         * An Async wrapper for GetIpamAddressHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIpamAddressHistoryAsync(const Model::GetIpamAddressHistoryRequest& request, const GetIpamAddressHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of all the CIDR allocations in an IPAM pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamPoolAllocations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamPoolAllocationsOutcome GetIpamPoolAllocations(const Model::GetIpamPoolAllocationsRequest& request) const;

        /**
         * A Callable wrapper for GetIpamPoolAllocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIpamPoolAllocationsOutcomeCallable GetIpamPoolAllocationsCallable(const Model::GetIpamPoolAllocationsRequest& request) const;

        /**
         * An Async wrapper for GetIpamPoolAllocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIpamPoolAllocationsAsync(const Model::GetIpamPoolAllocationsRequest& request, const GetIpamPoolAllocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the CIDRs provisioned to an IPAM pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamPoolCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamPoolCidrsOutcome GetIpamPoolCidrs(const Model::GetIpamPoolCidrsRequest& request) const;

        /**
         * A Callable wrapper for GetIpamPoolCidrs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIpamPoolCidrsOutcomeCallable GetIpamPoolCidrsCallable(const Model::GetIpamPoolCidrsRequest& request) const;

        /**
         * An Async wrapper for GetIpamPoolCidrs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIpamPoolCidrsAsync(const Model::GetIpamPoolCidrsRequest& request, const GetIpamPoolCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about the resources in a scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamResourceCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamResourceCidrsOutcome GetIpamResourceCidrs(const Model::GetIpamResourceCidrsRequest& request) const;

        /**
         * A Callable wrapper for GetIpamResourceCidrs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIpamResourceCidrsOutcomeCallable GetIpamResourceCidrsCallable(const Model::GetIpamResourceCidrsRequest& request) const;

        /**
         * An Async wrapper for GetIpamResourceCidrs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIpamResourceCidrsAsync(const Model::GetIpamResourceCidrsRequest& request, const GetIpamResourceCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration data of the specified instance. You can use this
         * data to create a launch template. </p> <p>This action calls on other describe
         * actions to get instance information. Depending on your instance configuration,
         * you may need to allow the following actions in your IAM policy:
         * <code>DescribeSpotInstanceRequests</code>,
         * <code>DescribeInstanceCreditSpecifications</code>, <code>DescribeVolumes</code>,
         * <code>DescribeInstanceAttribute</code>, and <code>DescribeElasticGpus</code>.
         * Or, you can allow <code>describe*</code> depending on your instance
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetLaunchTemplateData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchTemplateDataOutcome GetLaunchTemplateData(const Model::GetLaunchTemplateDataRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchTemplateData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchTemplateDataOutcomeCallable GetLaunchTemplateDataCallable(const Model::GetLaunchTemplateDataRequest& request) const;

        /**
         * An Async wrapper for GetLaunchTemplateData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchTemplateDataAsync(const Model::GetLaunchTemplateDataRequest& request, const GetLaunchTemplateDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the resources that are associated with the specified
         * managed prefix list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetManagedPrefixListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedPrefixListAssociationsOutcome GetManagedPrefixListAssociations(const Model::GetManagedPrefixListAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetManagedPrefixListAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetManagedPrefixListAssociationsOutcomeCallable GetManagedPrefixListAssociationsCallable(const Model::GetManagedPrefixListAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetManagedPrefixListAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedPrefixListAssociationsAsync(const Model::GetManagedPrefixListAssociationsRequest& request, const GetManagedPrefixListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the entries for a specified managed prefix
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetManagedPrefixListEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedPrefixListEntriesOutcome GetManagedPrefixListEntries(const Model::GetManagedPrefixListEntriesRequest& request) const;

        /**
         * A Callable wrapper for GetManagedPrefixListEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetManagedPrefixListEntriesOutcomeCallable GetManagedPrefixListEntriesCallable(const Model::GetManagedPrefixListEntriesRequest& request) const;

        /**
         * An Async wrapper for GetManagedPrefixListEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedPrefixListEntriesAsync(const Model::GetManagedPrefixListEntriesRequest& request, const GetManagedPrefixListEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the findings for the specified Network Access Scope
         * analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetNetworkInsightsAccessScopeAnalysisFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkInsightsAccessScopeAnalysisFindingsOutcome GetNetworkInsightsAccessScopeAnalysisFindings(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkInsightsAccessScopeAnalysisFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkInsightsAccessScopeAnalysisFindingsOutcomeCallable GetNetworkInsightsAccessScopeAnalysisFindingsCallable(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const;

        /**
         * An Async wrapper for GetNetworkInsightsAccessScopeAnalysisFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkInsightsAccessScopeAnalysisFindingsAsync(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request, const GetNetworkInsightsAccessScopeAnalysisFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the content for the specified Network Access Scope.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetNetworkInsightsAccessScopeContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkInsightsAccessScopeContentOutcome GetNetworkInsightsAccessScopeContent(const Model::GetNetworkInsightsAccessScopeContentRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkInsightsAccessScopeContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkInsightsAccessScopeContentOutcomeCallable GetNetworkInsightsAccessScopeContentCallable(const Model::GetNetworkInsightsAccessScopeContentRequest& request) const;

        /**
         * An Async wrapper for GetNetworkInsightsAccessScopeContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkInsightsAccessScopeContentAsync(const Model::GetNetworkInsightsAccessScopeContentRequest& request, const GetNetworkInsightsAccessScopeContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the encrypted administrator password for a running Windows
         * instance.</p> <p>The Windows password is generated at boot by the
         * <code>EC2Config</code> service or <code>EC2Launch</code> scripts (Windows Server
         * 2016 and later). This usually only happens the first time an instance is
         * launched. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/UsingConfig_WinAMI.html">EC2Config</a>
         * and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2launch.html">EC2Launch</a>
         * in the <i>Amazon EC2 User Guide</i>.</p> <p>For the <code>EC2Config</code>
         * service, the password is not generated for rebundled AMIs unless
         * <code>Ec2SetPassword</code> is enabled before bundling.</p> <p>The password is
         * encrypted using the key pair that you specified when you launched the instance.
         * You must provide the corresponding key pair file.</p> <p>When you launch an
         * instance, password generation and encryption may take a few minutes. If you try
         * to retrieve the password before it's available, the output returns an empty
         * string. We recommend that you wait up to 15 minutes after launching an instance
         * before trying to retrieve the generated password.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetPasswordData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPasswordDataOutcome GetPasswordData(const Model::GetPasswordDataRequest& request) const;

        /**
         * A Callable wrapper for GetPasswordData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPasswordDataOutcomeCallable GetPasswordDataCallable(const Model::GetPasswordDataRequest& request) const;

        /**
         * An Async wrapper for GetPasswordData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPasswordDataAsync(const Model::GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a quote and exchange information for exchanging one or more specified
         * Convertible Reserved Instances for a new Convertible Reserved Instance. If the
         * exchange cannot be performed, the reason is returned in the response. Use
         * <a>AcceptReservedInstancesExchangeQuote</a> to perform the
         * exchange.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservedInstancesExchangeQuoteOutcome GetReservedInstancesExchangeQuote(const Model::GetReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * A Callable wrapper for GetReservedInstancesExchangeQuote that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservedInstancesExchangeQuoteOutcomeCallable GetReservedInstancesExchangeQuoteCallable(const Model::GetReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * An Async wrapper for GetReservedInstancesExchangeQuote that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservedInstancesExchangeQuoteAsync(const Model::GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the access status of your account to the EC2 serial console of all
         * instances. By default, access to the EC2 serial console is disabled for your
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configure-access-to-serial-console.html#serial-console-account-access">Manage
         * account access to the EC2 serial console</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetSerialConsoleAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSerialConsoleAccessStatusOutcome GetSerialConsoleAccessStatus(const Model::GetSerialConsoleAccessStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSerialConsoleAccessStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSerialConsoleAccessStatusOutcomeCallable GetSerialConsoleAccessStatusCallable(const Model::GetSerialConsoleAccessStatusRequest& request) const;

        /**
         * An Async wrapper for GetSerialConsoleAccessStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSerialConsoleAccessStatusAsync(const Model::GetSerialConsoleAccessStatusRequest& request, const GetSerialConsoleAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Calculates the Spot placement score for a Region or Availability Zone based
         * on the specified target capacity and compute requirements.</p> <p>You can
         * specify your compute requirements either by using
         * <code>InstanceRequirementsWithMetadata</code> and letting Amazon EC2 choose the
         * optimal instance types to fulfill your Spot request, or you can specify the
         * instance types by using <code>InstanceTypes</code>.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
         * placement score</a> in the Amazon EC2 User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetSpotPlacementScores">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpotPlacementScoresOutcome GetSpotPlacementScores(const Model::GetSpotPlacementScoresRequest& request) const;

        /**
         * A Callable wrapper for GetSpotPlacementScores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSpotPlacementScoresOutcomeCallable GetSpotPlacementScoresCallable(const Model::GetSpotPlacementScoresRequest& request) const;

        /**
         * An Async wrapper for GetSpotPlacementScores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSpotPlacementScoresAsync(const Model::GetSpotPlacementScoresRequest& request, const GetSpotPlacementScoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the subnet CIDR reservations.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetSubnetCidrReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubnetCidrReservationsOutcome GetSubnetCidrReservations(const Model::GetSubnetCidrReservationsRequest& request) const;

        /**
         * A Callable wrapper for GetSubnetCidrReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubnetCidrReservationsOutcomeCallable GetSubnetCidrReservationsCallable(const Model::GetSubnetCidrReservationsRequest& request) const;

        /**
         * An Async wrapper for GetSubnetCidrReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubnetCidrReservationsAsync(const Model::GetSubnetCidrReservationsRequest& request, const GetSubnetCidrReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the route tables to which the specified resource attachment propagates
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayAttachmentPropagations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayAttachmentPropagationsOutcome GetTransitGatewayAttachmentPropagations(const Model::GetTransitGatewayAttachmentPropagationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayAttachmentPropagations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayAttachmentPropagationsOutcomeCallable GetTransitGatewayAttachmentPropagationsCallable(const Model::GetTransitGatewayAttachmentPropagationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayAttachmentPropagations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayAttachmentPropagationsAsync(const Model::GetTransitGatewayAttachmentPropagationsRequest& request, const GetTransitGatewayAttachmentPropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the associations for the transit gateway multicast
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayMulticastDomainAssociationsOutcome GetTransitGatewayMulticastDomainAssociations(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayMulticastDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayMulticastDomainAssociationsOutcomeCallable GetTransitGatewayMulticastDomainAssociationsCallable(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayMulticastDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayMulticastDomainAssociationsAsync(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request, const GetTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the transit gateway policy table associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPolicyTableAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPolicyTableAssociationsOutcome GetTransitGatewayPolicyTableAssociations(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayPolicyTableAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayPolicyTableAssociationsOutcomeCallable GetTransitGatewayPolicyTableAssociationsCallable(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayPolicyTableAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayPolicyTableAssociationsAsync(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request, const GetTransitGatewayPolicyTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of transit gateway policy table entries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPolicyTableEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPolicyTableEntriesOutcome GetTransitGatewayPolicyTableEntries(const Model::GetTransitGatewayPolicyTableEntriesRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayPolicyTableEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayPolicyTableEntriesOutcomeCallable GetTransitGatewayPolicyTableEntriesCallable(const Model::GetTransitGatewayPolicyTableEntriesRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayPolicyTableEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayPolicyTableEntriesAsync(const Model::GetTransitGatewayPolicyTableEntriesRequest& request, const GetTransitGatewayPolicyTableEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the prefix list references in a specified transit
         * gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPrefixListReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPrefixListReferencesOutcome GetTransitGatewayPrefixListReferences(const Model::GetTransitGatewayPrefixListReferencesRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayPrefixListReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayPrefixListReferencesOutcomeCallable GetTransitGatewayPrefixListReferencesCallable(const Model::GetTransitGatewayPrefixListReferencesRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayPrefixListReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayPrefixListReferencesAsync(const Model::GetTransitGatewayPrefixListReferencesRequest& request, const GetTransitGatewayPrefixListReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the associations for the specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayRouteTableAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTableAssociationsOutcome GetTransitGatewayRouteTableAssociations(const Model::GetTransitGatewayRouteTableAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRouteTableAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayRouteTableAssociationsOutcomeCallable GetTransitGatewayRouteTableAssociationsCallable(const Model::GetTransitGatewayRouteTableAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayRouteTableAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayRouteTableAssociationsAsync(const Model::GetTransitGatewayRouteTableAssociationsRequest& request, const GetTransitGatewayRouteTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the route table propagations for the specified transit
         * gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayRouteTablePropagations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTablePropagationsOutcome GetTransitGatewayRouteTablePropagations(const Model::GetTransitGatewayRouteTablePropagationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRouteTablePropagations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayRouteTablePropagationsOutcomeCallable GetTransitGatewayRouteTablePropagationsCallable(const Model::GetTransitGatewayRouteTablePropagationsRequest& request) const;

        /**
         * An Async wrapper for GetTransitGatewayRouteTablePropagations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayRouteTablePropagationsAsync(const Model::GetTransitGatewayRouteTablePropagationsRequest& request, const GetTransitGatewayRouteTablePropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the Verified Access policy associated with the endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetVerifiedAccessEndpointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVerifiedAccessEndpointPolicyOutcome GetVerifiedAccessEndpointPolicy(const Model::GetVerifiedAccessEndpointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetVerifiedAccessEndpointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVerifiedAccessEndpointPolicyOutcomeCallable GetVerifiedAccessEndpointPolicyCallable(const Model::GetVerifiedAccessEndpointPolicyRequest& request) const;

        /**
         * An Async wrapper for GetVerifiedAccessEndpointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVerifiedAccessEndpointPolicyAsync(const Model::GetVerifiedAccessEndpointPolicyRequest& request, const GetVerifiedAccessEndpointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shows the contents of the Verified Access policy associated with the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetVerifiedAccessGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVerifiedAccessGroupPolicyOutcome GetVerifiedAccessGroupPolicy(const Model::GetVerifiedAccessGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetVerifiedAccessGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVerifiedAccessGroupPolicyOutcomeCallable GetVerifiedAccessGroupPolicyCallable(const Model::GetVerifiedAccessGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for GetVerifiedAccessGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVerifiedAccessGroupPolicyAsync(const Model::GetVerifiedAccessGroupPolicyRequest& request, const GetVerifiedAccessGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Download an Amazon Web Services-provided sample configuration file to be used
         * with the customer gateway device specified for your Site-to-Site VPN
         * connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetVpnConnectionDeviceSampleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpnConnectionDeviceSampleConfigurationOutcome GetVpnConnectionDeviceSampleConfiguration(const Model::GetVpnConnectionDeviceSampleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVpnConnectionDeviceSampleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVpnConnectionDeviceSampleConfigurationOutcomeCallable GetVpnConnectionDeviceSampleConfigurationCallable(const Model::GetVpnConnectionDeviceSampleConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVpnConnectionDeviceSampleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpnConnectionDeviceSampleConfigurationAsync(const Model::GetVpnConnectionDeviceSampleConfigurationRequest& request, const GetVpnConnectionDeviceSampleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtain a list of customer gateway devices for which sample configuration
         * files can be provided. The request has no additional parameters. You can also
         * see the list of device types with sample configuration files available under <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/your-cgw.html">Your customer
         * gateway device</a> in the <i>Amazon Web Services Site-to-Site VPN User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetVpnConnectionDeviceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpnConnectionDeviceTypesOutcome GetVpnConnectionDeviceTypes(const Model::GetVpnConnectionDeviceTypesRequest& request) const;

        /**
         * A Callable wrapper for GetVpnConnectionDeviceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVpnConnectionDeviceTypesOutcomeCallable GetVpnConnectionDeviceTypesCallable(const Model::GetVpnConnectionDeviceTypesRequest& request) const;

        /**
         * An Async wrapper for GetVpnConnectionDeviceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpnConnectionDeviceTypesAsync(const Model::GetVpnConnectionDeviceTypesRequest& request, const GetVpnConnectionDeviceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a client certificate revocation list to the specified Client VPN
         * endpoint. Uploading a client certificate revocation list overwrites the existing
         * client certificate revocation list.</p> <p>Uploading a client certificate
         * revocation list resets existing client connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportClientVpnClientCertificateRevocationList">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportClientVpnClientCertificateRevocationListOutcome ImportClientVpnClientCertificateRevocationList(const Model::ImportClientVpnClientCertificateRevocationListRequest& request) const;

        /**
         * A Callable wrapper for ImportClientVpnClientCertificateRevocationList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportClientVpnClientCertificateRevocationListOutcomeCallable ImportClientVpnClientCertificateRevocationListCallable(const Model::ImportClientVpnClientCertificateRevocationListRequest& request) const;

        /**
         * An Async wrapper for ImportClientVpnClientCertificateRevocationList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportClientVpnClientCertificateRevocationListAsync(const Model::ImportClientVpnClientCertificateRevocationListRequest& request, const ImportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Import single or multi-volume disk images or EBS snapshots into an Amazon
         * Machine Image (AMI).</p>  <p>Amazon Web Services VM Import/Export
         * strongly recommends specifying a value for either the
         * <code>--license-type</code> or <code>--usage-operation</code> parameter when you
         * create a new VM Import task. This ensures your operating system is licensed
         * appropriately and your billing is optimized.</p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html">Importing
         * a VM as an image using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImage">AWS API
         * Reference</a></p>
         */
        virtual Model::ImportImageOutcome ImportImage(const Model::ImportImageRequest& request) const;

        /**
         * A Callable wrapper for ImportImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request) const;

        /**
         * An Async wrapper for ImportImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import instance task using metadata from the specified disk
         * image.</p> <p>This API action supports only single-volume VMs. To import
         * multi-volume VMs, use <a>ImportImage</a> instead.</p> <p>This API action is not
         * supported by the Command Line Interface (CLI). For information about using the
         * Amazon EC2 CLI, which is deprecated, see <a
         * href="https://awsdocs.s3.amazonaws.com/EC2/ec2-clt.pdf#UsingVirtualMachinesinAmazonEC2">Importing
         * a VM to Amazon EC2</a> in the <i>Amazon EC2 CLI Reference</i> PDF file.</p>
         * <p>For information about the import manifest referenced by this API action, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportInstanceOutcome ImportInstance(const Model::ImportInstanceRequest& request) const;

        /**
         * A Callable wrapper for ImportInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportInstanceOutcomeCallable ImportInstanceCallable(const Model::ImportInstanceRequest& request) const;

        /**
         * An Async wrapper for ImportInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportInstanceAsync(const Model::ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the public key from an RSA or ED25519 key pair that you created with
         * a third-party tool. Compare this with <a>CreateKeyPair</a>, in which Amazon Web
         * Services creates the key pair and gives the keys to you (Amazon Web Services
         * keeps a copy of the public key). With ImportKeyPair, you create the key pair and
         * give Amazon Web Services just the public key. The private key is never
         * transferred between you and Amazon Web Services.</p> <p>For more information
         * about key pairs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
         * EC2 key pairs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest& request) const;

        /**
         * A Callable wrapper for ImportKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request) const;

        /**
         * An Async wrapper for ImportKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a disk into an EBS snapshot.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-import-snapshot.html">Importing
         * a disk as a snapshot using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSnapshotOutcome ImportSnapshot(const Model::ImportSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ImportSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportSnapshotOutcomeCallable ImportSnapshotCallable(const Model::ImportSnapshotRequest& request) const;

        /**
         * An Async wrapper for ImportSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportSnapshotAsync(const Model::ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import volume task using metadata from the specified disk
         * image.</p> <p>This API action supports only single-volume VMs. To import
         * multi-volume VMs, use <a>ImportImage</a> instead. To import a disk to a
         * snapshot, use <a>ImportSnapshot</a> instead.</p> <p>This API action is not
         * supported by the Command Line Interface (CLI). For information about using the
         * Amazon EC2 CLI, which is deprecated, see <a
         * href="https://awsdocs.s3.amazonaws.com/EC2/ec2-clt.pdf#importing-your-volumes-into-amazon-ebs">Importing
         * Disks to Amazon EBS</a> in the <i>Amazon EC2 CLI Reference</i> PDF file.</p>
         * <p>For information about the import manifest referenced by this API action, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportVolumeOutcome ImportVolume(const Model::ImportVolumeRequest& request) const;

        /**
         * A Callable wrapper for ImportVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportVolumeOutcomeCallable ImportVolumeCallable(const Model::ImportVolumeRequest& request) const;

        /**
         * An Async wrapper for ImportVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportVolumeAsync(const Model::ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists one or more AMIs that are currently in the Recycle Bin. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ListImagesInRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesInRecycleBinOutcome ListImagesInRecycleBin(const Model::ListImagesInRecycleBinRequest& request) const;

        /**
         * A Callable wrapper for ListImagesInRecycleBin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesInRecycleBinOutcomeCallable ListImagesInRecycleBinCallable(const Model::ListImagesInRecycleBinRequest& request) const;

        /**
         * An Async wrapper for ListImagesInRecycleBin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesInRecycleBinAsync(const Model::ListImagesInRecycleBinRequest& request, const ListImagesInRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists one or more snapshots that are currently in the Recycle
         * Bin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ListSnapshotsInRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsInRecycleBinOutcome ListSnapshotsInRecycleBin(const Model::ListSnapshotsInRecycleBinRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshotsInRecycleBin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSnapshotsInRecycleBinOutcomeCallable ListSnapshotsInRecycleBinCallable(const Model::ListSnapshotsInRecycleBinRequest& request) const;

        /**
         * An Async wrapper for ListSnapshotsInRecycleBin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSnapshotsInRecycleBinAsync(const Model::ListSnapshotsInRecycleBinRequest& request, const ListSnapshotsInRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an attribute of the specified Elastic IP address. For requirements,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html#Using_Elastic_Addressing_Reverse_DNS">Using
         * reverse DNS for email applications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyAddressAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAddressAttributeOutcome ModifyAddressAttribute(const Model::ModifyAddressAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyAddressAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAddressAttributeOutcomeCallable ModifyAddressAttributeCallable(const Model::ModifyAddressAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyAddressAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyAddressAttributeAsync(const Model::ModifyAddressAttributeRequest& request, const ModifyAddressAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the opt-in status of the Local Zone and Wavelength Zone group for
         * your account.</p> <p>Use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">
         * DescribeAvailabilityZones</a> to view the value for
         * <code>GroupName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyAvailabilityZoneGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAvailabilityZoneGroupOutcome ModifyAvailabilityZoneGroup(const Model::ModifyAvailabilityZoneGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyAvailabilityZoneGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAvailabilityZoneGroupOutcomeCallable ModifyAvailabilityZoneGroupCallable(const Model::ModifyAvailabilityZoneGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyAvailabilityZoneGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyAvailabilityZoneGroupAsync(const Model::ModifyAvailabilityZoneGroupRequest& request, const ModifyAvailabilityZoneGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a Capacity Reservation's capacity and the conditions under which it
         * is to be released. You cannot change a Capacity Reservation's instance type, EBS
         * optimization, instance store settings, platform, Availability Zone, or instance
         * eligibility. If you need to modify any of these attributes, we recommend that
         * you cancel the Capacity Reservation, and then create a new one with the required
         * attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCapacityReservationOutcome ModifyCapacityReservation(const Model::ModifyCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for ModifyCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCapacityReservationOutcomeCallable ModifyCapacityReservationCallable(const Model::ModifyCapacityReservationRequest& request) const;

        /**
         * An Async wrapper for ModifyCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCapacityReservationAsync(const Model::ModifyCapacityReservationRequest& request, const ModifyCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a Capacity Reservation Fleet.</p> <p>When you modify the total
         * target capacity of a Capacity Reservation Fleet, the Fleet automatically creates
         * new Capacity Reservations, or modifies or cancels existing Capacity Reservations
         * in the Fleet to meet the new total target capacity. When you modify the end date
         * for the Fleet, the end dates for all of the individual Capacity Reservations in
         * the Fleet are updated accordingly.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyCapacityReservationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCapacityReservationFleetOutcome ModifyCapacityReservationFleet(const Model::ModifyCapacityReservationFleetRequest& request) const;

        /**
         * A Callable wrapper for ModifyCapacityReservationFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCapacityReservationFleetOutcomeCallable ModifyCapacityReservationFleetCallable(const Model::ModifyCapacityReservationFleetRequest& request) const;

        /**
         * An Async wrapper for ModifyCapacityReservationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCapacityReservationFleetAsync(const Model::ModifyCapacityReservationFleetRequest& request, const ModifyCapacityReservationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Client VPN endpoint. Modifying the DNS server resets
         * existing client connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClientVpnEndpointOutcome ModifyClientVpnEndpoint(const Model::ModifyClientVpnEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyClientVpnEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClientVpnEndpointOutcomeCallable ModifyClientVpnEndpointCallable(const Model::ModifyClientVpnEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyClientVpnEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClientVpnEndpointAsync(const Model::ModifyClientVpnEndpointRequest& request, const ModifyClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the default credit option for CPU usage of burstable performance
         * instances. The default credit option is set at the account level per Amazon Web
         * Services Region, and is specified per instance family. All new burstable
         * performance instances in the account launch using the default credit option.</p>
         * <p> <code>ModifyDefaultCreditSpecification</code> is an asynchronous operation,
         * which works at an Amazon Web Services Region level and modifies the credit
         * option for each Availability Zone. All zones in a Region are updated within five
         * minutes. But if instances are launched during this operation, they might not get
         * the new credit option until the zone is updated. To verify whether the update
         * has occurred, you can call <code>GetDefaultCreditSpecification</code> and check
         * <code>DefaultCreditSpecification</code> for updates.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
         * performance instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyDefaultCreditSpecification">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDefaultCreditSpecificationOutcome ModifyDefaultCreditSpecification(const Model::ModifyDefaultCreditSpecificationRequest& request) const;

        /**
         * A Callable wrapper for ModifyDefaultCreditSpecification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDefaultCreditSpecificationOutcomeCallable ModifyDefaultCreditSpecificationCallable(const Model::ModifyDefaultCreditSpecificationRequest& request) const;

        /**
         * An Async wrapper for ModifyDefaultCreditSpecification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDefaultCreditSpecificationAsync(const Model::ModifyDefaultCreditSpecificationRequest& request, const ModifyDefaultCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the default KMS key for EBS encryption by default for your account in
         * this Region.</p> <p>Amazon Web Services creates a unique Amazon Web Services
         * managed KMS key in each Region for use with encryption by default. If you change
         * the default KMS key to a symmetric customer managed KMS key, it is used instead
         * of the Amazon Web Services managed KMS key. To reset the default KMS key to the
         * Amazon Web Services managed KMS key for EBS, use <a>ResetEbsDefaultKmsKeyId</a>.
         * Amazon EBS does not support asymmetric KMS keys.</p> <p>If you delete or disable
         * the customer managed KMS key that you specified for use with encryption by
         * default, your instances will fail to launch.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyEbsDefaultKmsKeyId">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEbsDefaultKmsKeyIdOutcome ModifyEbsDefaultKmsKeyId(const Model::ModifyEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * A Callable wrapper for ModifyEbsDefaultKmsKeyId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEbsDefaultKmsKeyIdOutcomeCallable ModifyEbsDefaultKmsKeyIdCallable(const Model::ModifyEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * An Async wrapper for ModifyEbsDefaultKmsKeyId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEbsDefaultKmsKeyIdAsync(const Model::ModifyEbsDefaultKmsKeyIdRequest& request, const ModifyEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified EC2 Fleet.</p> <p>You can only modify an EC2 Fleet
         * request of type <code>maintain</code>.</p> <p>While the EC2 Fleet is being
         * modified, it is in the <code>modifying</code> state.</p> <p>To scale up your EC2
         * Fleet, increase its target capacity. The EC2 Fleet launches the additional Spot
         * Instances according to the allocation strategy for the EC2 Fleet request. If the
         * allocation strategy is <code>lowest-price</code>, the EC2 Fleet launches
         * instances using the Spot Instance pool with the lowest price. If the allocation
         * strategy is <code>diversified</code>, the EC2 Fleet distributes the instances
         * across the Spot Instance pools. If the allocation strategy is
         * <code>capacity-optimized</code>, EC2 Fleet launches instances from Spot Instance
         * pools with optimal capacity for the number of instances that are launching.</p>
         * <p>To scale down your EC2 Fleet, decrease its target capacity. First, the EC2
         * Fleet cancels any open requests that exceed the new target capacity. You can
         * request that the EC2 Fleet terminate Spot Instances until the size of the fleet
         * no longer exceeds the new target capacity. If the allocation strategy is
         * <code>lowest-price</code>, the EC2 Fleet terminates the instances with the
         * highest price per unit. If the allocation strategy is
         * <code>capacity-optimized</code>, the EC2 Fleet terminates the instances in the
         * Spot Instance pools that have the least available Spot Instance capacity. If the
         * allocation strategy is <code>diversified</code>, the EC2 Fleet terminates
         * instances across the Spot Instance pools. Alternatively, you can request that
         * the EC2 Fleet keep the fleet at its current size, but not replace any Spot
         * Instances that are interrupted or that you terminate manually.</p> <p>If you are
         * finished with your EC2 Fleet for now, but will use it again later, you can set
         * the target capacity to 0.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFleet">AWS API
         * Reference</a></p>
         */
        virtual Model::ModifyFleetOutcome ModifyFleet(const Model::ModifyFleetRequest& request) const;

        /**
         * A Callable wrapper for ModifyFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyFleetOutcomeCallable ModifyFleetCallable(const Model::ModifyFleetRequest& request) const;

        /**
         * An Async wrapper for ModifyFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyFleetAsync(const Model::ModifyFleetRequest& request, const ModifyFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyFpgaImageAttributeOutcome ModifyFpgaImageAttribute(const Model::ModifyFpgaImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyFpgaImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyFpgaImageAttributeOutcomeCallable ModifyFpgaImageAttributeCallable(const Model::ModifyFpgaImageAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyFpgaImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyFpgaImageAttributeAsync(const Model::ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the auto-placement setting of a Dedicated Host. When auto-placement is
         * enabled, any instances that you launch with a tenancy of <code>host</code> but
         * without a specific host ID are placed onto any available Dedicated Host in your
         * account that has auto-placement enabled. When auto-placement is disabled, you
         * need to provide a host ID to have the instance launch onto a specific host. If
         * no host ID is provided, the instance is launched onto a suitable host with
         * auto-placement enabled.</p> <p>You can also use this API action to modify a
         * Dedicated Host to support either multiple instance types in an instance family,
         * or to support a specific instance type only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyHosts">AWS API
         * Reference</a></p>
         */
        virtual Model::ModifyHostsOutcome ModifyHosts(const Model::ModifyHostsRequest& request) const;

        /**
         * A Callable wrapper for ModifyHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyHostsOutcomeCallable ModifyHostsCallable(const Model::ModifyHostsRequest& request) const;

        /**
         * An Async wrapper for ModifyHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyHostsAsync(const Model::ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the ID format for the specified resource on a per-Region basis. You
         * can specify that resources should receive longer IDs (17-character IDs) when
         * they are created.</p> <p>This request can only be used to modify longer ID
         * settings for resource types that are within the opt-in period. Resources
         * currently in their opt-in period include: <code>bundle</code> |
         * <code>conversion-task</code> | <code>customer-gateway</code> |
         * <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
         * <code>elastic-ip-association</code> | <code>export-task</code> |
         * <code>flow-log</code> | <code>image</code> | <code>import-task</code> |
         * <code>internet-gateway</code> | <code>network-acl</code> |
         * <code>network-acl-association</code> | <code>network-interface</code> |
         * <code>network-interface-attachment</code> | <code>prefix-list</code> |
         * <code>route-table</code> | <code>route-table-association</code> |
         * <code>security-group</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>vpc</code> |
         * <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
         * <code>vpc-peering-connection</code> | <code>vpn-connection</code> |
         * <code>vpn-gateway</code>.</p> <p>This setting applies to the IAM user who makes
         * the request; it does not apply to the entire Amazon Web Services account. By
         * default, an IAM user defaults to the same settings as the root user. If you're
         * using this action as the root user, then these settings apply to the entire
         * account, unless an IAM user explicitly overrides these settings for themselves.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Resources
         * created with longer IDs are visible to all IAM roles and users, regardless of
         * these settings and provided that they have permission to use the relevant
         * <code>Describe</code> command for the resource type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIdFormatOutcome ModifyIdFormat(const Model::ModifyIdFormatRequest& request) const;

        /**
         * A Callable wrapper for ModifyIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIdFormatOutcomeCallable ModifyIdFormatCallable(const Model::ModifyIdFormatRequest& request) const;

        /**
         * An Async wrapper for ModifyIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIdFormatAsync(const Model::ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the ID format of a resource for a specified IAM user, IAM role, or
         * the root user for an account; or all IAM users, IAM roles, and the root user for
         * an account. You can specify that resources should receive longer IDs
         * (17-character IDs) when they are created. </p> <p>This request can only be used
         * to modify longer ID settings for resource types that are within the opt-in
         * period. Resources currently in their opt-in period include: <code>bundle</code>
         * | <code>conversion-task</code> | <code>customer-gateway</code> |
         * <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
         * <code>elastic-ip-association</code> | <code>export-task</code> |
         * <code>flow-log</code> | <code>image</code> | <code>import-task</code> |
         * <code>internet-gateway</code> | <code>network-acl</code> |
         * <code>network-acl-association</code> | <code>network-interface</code> |
         * <code>network-interface-attachment</code> | <code>prefix-list</code> |
         * <code>route-table</code> | <code>route-table-association</code> |
         * <code>security-group</code> | <code>subnet</code> |
         * <code>subnet-cidr-block-association</code> | <code>vpc</code> |
         * <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
         * <code>vpc-peering-connection</code> | <code>vpn-connection</code> |
         * <code>vpn-gateway</code>. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>This
         * setting applies to the principal specified in the request; it does not apply to
         * the principal that makes the request. </p> <p>Resources created with longer IDs
         * are visible to all IAM roles and users, regardless of these settings and
         * provided that they have permission to use the relevant <code>Describe</code>
         * command for the resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdentityIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIdentityIdFormatOutcome ModifyIdentityIdFormat(const Model::ModifyIdentityIdFormatRequest& request) const;

        /**
         * A Callable wrapper for ModifyIdentityIdFormat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIdentityIdFormatOutcomeCallable ModifyIdentityIdFormatCallable(const Model::ModifyIdentityIdFormatRequest& request) const;

        /**
         * An Async wrapper for ModifyIdentityIdFormat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIdentityIdFormatAsync(const Model::ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified AMI. You can specify only
         * one attribute at a time. You can use the <code>Attribute</code> parameter to
         * specify the attribute or one of the following parameters:
         * <code>Description</code> or <code>LaunchPermission</code>.</p> <p>Images with an
         * Amazon Web Services Marketplace product code cannot be made public.</p> <p>To
         * enable the SriovNetSupport enhanced networking attribute of an image, enable
         * SriovNetSupport on an instance and create an AMI from the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified instance. You can specify
         * only one attribute at a time.</p> <p> <b>Note: </b>Using this action to change
         * the security groups associated with an elastic network interface (ENI) attached
         * to an instance in a VPC can result in an error if the instance has more than one
         * ENI. To change the security groups associated with an ENI attached to an
         * instance that has multiple ENIs, we recommend that you use the
         * <a>ModifyNetworkInterfaceAttribute</a> action.</p> <p>To modify some attributes,
         * the instance must be stopped. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_ChangingAttributesWhileInstanceStopped.html">Modify
         * a stopped instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceAttributeOutcome ModifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceAttributeOutcomeCallable ModifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the Capacity Reservation settings for a stopped instance. Use this
         * action to configure an instance to target a specific Capacity Reservation, run
         * in any <code>open</code> Capacity Reservation with matching attributes, or run
         * On-Demand Instance capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceCapacityReservationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceCapacityReservationAttributesOutcome ModifyInstanceCapacityReservationAttributes(const Model::ModifyInstanceCapacityReservationAttributesRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceCapacityReservationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceCapacityReservationAttributesOutcomeCallable ModifyInstanceCapacityReservationAttributesCallable(const Model::ModifyInstanceCapacityReservationAttributesRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceCapacityReservationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceCapacityReservationAttributesAsync(const Model::ModifyInstanceCapacityReservationAttributesRequest& request, const ModifyInstanceCapacityReservationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the credit option for CPU usage on a running or stopped burstable
         * performance instance. The credit options are <code>standard</code> and
         * <code>unlimited</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
         * performance instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceCreditSpecification">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceCreditSpecificationOutcome ModifyInstanceCreditSpecification(const Model::ModifyInstanceCreditSpecificationRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceCreditSpecification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceCreditSpecificationOutcomeCallable ModifyInstanceCreditSpecificationCallable(const Model::ModifyInstanceCreditSpecificationRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceCreditSpecification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceCreditSpecificationAsync(const Model::ModifyInstanceCreditSpecificationRequest& request, const ModifyInstanceCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the start time for a scheduled Amazon EC2 instance
         * event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceEventStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceEventStartTimeOutcome ModifyInstanceEventStartTime(const Model::ModifyInstanceEventStartTimeRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceEventStartTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceEventStartTimeOutcomeCallable ModifyInstanceEventStartTimeCallable(const Model::ModifyInstanceEventStartTimeRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceEventStartTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceEventStartTimeAsync(const Model::ModifyInstanceEventStartTimeRequest& request, const ModifyInstanceEventStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified event window.</p> <p>You can define either a set of
         * time ranges or a cron expression when modifying the event window, but not
         * both.</p> <p>To modify the targets associated with the event window, use the
         * <a>AssociateInstanceEventWindow</a> and <a>DisassociateInstanceEventWindow</a>
         * API.</p> <p>If Amazon Web Services has already scheduled an event, modifying an
         * event window won't change the time of the scheduled event.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/event-windows.html">Define
         * event windows for scheduled events</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceEventWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceEventWindowOutcome ModifyInstanceEventWindow(const Model::ModifyInstanceEventWindowRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceEventWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceEventWindowOutcomeCallable ModifyInstanceEventWindowCallable(const Model::ModifyInstanceEventWindowRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceEventWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceEventWindowAsync(const Model::ModifyInstanceEventWindowRequest& request, const ModifyInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the recovery behavior of your instance to disable simplified
         * automatic recovery or set the recovery behavior to default. The default
         * configuration will not enable simplified automatic recovery for an unsupported
         * instance type. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-recover.html#instance-configuration-recovery">Simplified
         * automatic recovery</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceMaintenanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceMaintenanceOptionsOutcome ModifyInstanceMaintenanceOptions(const Model::ModifyInstanceMaintenanceOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceMaintenanceOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceMaintenanceOptionsOutcomeCallable ModifyInstanceMaintenanceOptionsCallable(const Model::ModifyInstanceMaintenanceOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceMaintenanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceMaintenanceOptionsAsync(const Model::ModifyInstanceMaintenanceOptionsRequest& request, const ModifyInstanceMaintenanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the instance metadata parameters on a running or stopped instance.
         * When you modify the parameters on a stopped instance, they are applied when the
         * instance is started. When you modify the parameters on a running instance, the
         * API responds with a state of “pending”. After the parameter modifications are
         * successfully applied to the instance, the state of the modifications changes
         * from “pending” to “applied” in subsequent describe-instances API calls. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
         * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceMetadataOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceMetadataOptionsOutcome ModifyInstanceMetadataOptions(const Model::ModifyInstanceMetadataOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceMetadataOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceMetadataOptionsOutcomeCallable ModifyInstanceMetadataOptionsCallable(const Model::ModifyInstanceMetadataOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceMetadataOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceMetadataOptionsAsync(const Model::ModifyInstanceMetadataOptionsRequest& request, const ModifyInstanceMetadataOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the placement attributes for a specified instance. You can do the
         * following:</p> <ul> <li> <p>Modify the affinity between an instance and a <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated
         * Host</a>. When affinity is set to <code>host</code> and the instance is not
         * associated with a specific Dedicated Host, the next time the instance is
         * launched, it is automatically associated with the host on which it lands. If the
         * instance is restarted or rebooted, this relationship persists.</p> </li> <li>
         * <p>Change the Dedicated Host with which an instance is associated.</p> </li>
         * <li> <p>Change the instance tenancy of an instance.</p> </li> <li> <p>Move an
         * instance to or from a <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">placement
         * group</a>.</p> </li> </ul> <p>At least one attribute for affinity, host ID,
         * tenancy, or placement group name must be specified in the request. Affinity and
         * tenancy can be modified in the same request.</p> <p>To modify the host ID,
         * tenancy, placement group, or partition for an instance, the instance must be in
         * the <code>stopped</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstancePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstancePlacementOutcome ModifyInstancePlacement(const Model::ModifyInstancePlacementRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstancePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstancePlacementOutcomeCallable ModifyInstancePlacementCallable(const Model::ModifyInstancePlacementRequest& request) const;

        /**
         * An Async wrapper for ModifyInstancePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstancePlacementAsync(const Model::ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the configurations of an IPAM. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpam">AWS API
         * Reference</a></p>
         */
        virtual Model::ModifyIpamOutcome ModifyIpam(const Model::ModifyIpamRequest& request) const;

        /**
         * A Callable wrapper for ModifyIpam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIpamOutcomeCallable ModifyIpamCallable(const Model::ModifyIpamRequest& request) const;

        /**
         * An Async wrapper for ModifyIpam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIpamAsync(const Model::ModifyIpamRequest& request, const ModifyIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the configurations of an IPAM pool.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/mod-pool-ipam.html">Modify
         * a pool</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIpamPoolOutcome ModifyIpamPool(const Model::ModifyIpamPoolRequest& request) const;

        /**
         * A Callable wrapper for ModifyIpamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIpamPoolOutcomeCallable ModifyIpamPoolCallable(const Model::ModifyIpamPoolRequest& request) const;

        /**
         * An Async wrapper for ModifyIpamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIpamPoolAsync(const Model::ModifyIpamPoolRequest& request, const ModifyIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify a resource CIDR. You can use this action to transfer resource CIDRs
         * between scopes and ignore resource CIDRs that you do not want to manage. If set
         * to false, the resource will not be tracked for overlap, it cannot be
         * auto-imported into a pool, and it will be removed from any pool it has an
         * allocation in.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/move-resource-ipam.html">Move
         * resource CIDRs between scopes</a> and <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/change-monitoring-state-ipam.html">Change
         * the monitoring state of resource CIDRs</a> in the <i>Amazon VPC IPAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpamResourceCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIpamResourceCidrOutcome ModifyIpamResourceCidr(const Model::ModifyIpamResourceCidrRequest& request) const;

        /**
         * A Callable wrapper for ModifyIpamResourceCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIpamResourceCidrOutcomeCallable ModifyIpamResourceCidrCallable(const Model::ModifyIpamResourceCidrRequest& request) const;

        /**
         * An Async wrapper for ModifyIpamResourceCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIpamResourceCidrAsync(const Model::ModifyIpamResourceCidrRequest& request, const ModifyIpamResourceCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify an IPAM scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpamScope">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIpamScopeOutcome ModifyIpamScope(const Model::ModifyIpamScopeRequest& request) const;

        /**
         * A Callable wrapper for ModifyIpamScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIpamScopeOutcomeCallable ModifyIpamScopeCallable(const Model::ModifyIpamScopeRequest& request) const;

        /**
         * An Async wrapper for ModifyIpamScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIpamScopeAsync(const Model::ModifyIpamScopeRequest& request, const ModifyIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a launch template. You can specify which version of the launch
         * template to set as the default version. When launching an instance, the default
         * version applies when a launch template version is not specified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyLaunchTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLaunchTemplateOutcome ModifyLaunchTemplate(const Model::ModifyLaunchTemplateRequest& request) const;

        /**
         * A Callable wrapper for ModifyLaunchTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLaunchTemplateOutcomeCallable ModifyLaunchTemplateCallable(const Model::ModifyLaunchTemplateRequest& request) const;

        /**
         * An Async wrapper for ModifyLaunchTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLaunchTemplateAsync(const Model::ModifyLaunchTemplateRequest& request, const ModifyLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified local gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLocalGatewayRouteOutcome ModifyLocalGatewayRoute(const Model::ModifyLocalGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for ModifyLocalGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLocalGatewayRouteOutcomeCallable ModifyLocalGatewayRouteCallable(const Model::ModifyLocalGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for ModifyLocalGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLocalGatewayRouteAsync(const Model::ModifyLocalGatewayRouteRequest& request, const ModifyLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified managed prefix list.</p> <p>Adding or removing entries
         * in a prefix list creates a new version of the prefix list. Changing the name of
         * the prefix list does not affect the version.</p> <p>If you specify a current
         * version number that does not match the true current version number, the request
         * fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyManagedPrefixList">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyManagedPrefixListOutcome ModifyManagedPrefixList(const Model::ModifyManagedPrefixListRequest& request) const;

        /**
         * A Callable wrapper for ModifyManagedPrefixList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyManagedPrefixListOutcomeCallable ModifyManagedPrefixListCallable(const Model::ModifyManagedPrefixListRequest& request) const;

        /**
         * An Async wrapper for ModifyManagedPrefixList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyManagedPrefixListAsync(const Model::ModifyManagedPrefixListRequest& request, const ModifyManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified network interface attribute. You can specify only one
         * attribute at a time. You can use this action to attach and detach security
         * groups from an existing EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyNetworkInterfaceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyNetworkInterfaceAttributeOutcomeCallable ModifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyNetworkInterfaceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the options for instance hostnames for the specified
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyPrivateDnsNameOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyPrivateDnsNameOptionsOutcome ModifyPrivateDnsNameOptions(const Model::ModifyPrivateDnsNameOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyPrivateDnsNameOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyPrivateDnsNameOptionsOutcomeCallable ModifyPrivateDnsNameOptionsCallable(const Model::ModifyPrivateDnsNameOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyPrivateDnsNameOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyPrivateDnsNameOptionsAsync(const Model::ModifyPrivateDnsNameOptionsRequest& request, const ModifyPrivateDnsNameOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of your Reserved Instances, such as the
         * Availability Zone, instance count, or instance type. The Reserved Instances to
         * be modified must be identical, except for Availability Zone, network platform,
         * and instance type.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the <i>Amazon EC2 User Guide</i>.</p>  <p>We are
         * retiring EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReservedInstancesOutcome ModifyReservedInstances(const Model::ModifyReservedInstancesRequest& request) const;

        /**
         * A Callable wrapper for ModifyReservedInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReservedInstancesOutcomeCallable ModifyReservedInstancesCallable(const Model::ModifyReservedInstancesRequest& request) const;

        /**
         * An Async wrapper for ModifyReservedInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReservedInstancesAsync(const Model::ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the rules of a security group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySecurityGroupRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySecurityGroupRulesOutcome ModifySecurityGroupRules(const Model::ModifySecurityGroupRulesRequest& request) const;

        /**
         * A Callable wrapper for ModifySecurityGroupRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySecurityGroupRulesOutcomeCallable ModifySecurityGroupRulesCallable(const Model::ModifySecurityGroupRulesRequest& request) const;

        /**
         * An Async wrapper for ModifySecurityGroupRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySecurityGroupRulesAsync(const Model::ModifySecurityGroupRulesRequest& request, const ModifySecurityGroupRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes permission settings for the specified snapshot. You may add
         * or remove specified Amazon Web Services account IDs from a snapshot's list of
         * create volume permissions, but you cannot do both in a single operation. If you
         * need to both add and remove account IDs for a snapshot, you must use multiple
         * operations. You can make up to 500 modifications to a snapshot in a single
         * operation.</p> <p>Encrypted snapshots and snapshots with Amazon Web Services
         * Marketplace product codes cannot be made public. Snapshots encrypted with your
         * default KMS key cannot be shared with other accounts.</p> <p>For more
         * information about modifying snapshot permissions, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Share
         * a snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifySnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifySnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Archives an Amazon EBS snapshot. When you archive a snapshot, it is converted
         * to a full snapshot that includes all of the blocks of data that were written to
         * the volume at the time the snapshot was created, and moved from the standard
         * tier to the archive tier. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-archive.html">Archive
         * Amazon EBS snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySnapshotTier">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySnapshotTierOutcome ModifySnapshotTier(const Model::ModifySnapshotTierRequest& request) const;

        /**
         * A Callable wrapper for ModifySnapshotTier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotTierOutcomeCallable ModifySnapshotTierCallable(const Model::ModifySnapshotTierRequest& request) const;

        /**
         * An Async wrapper for ModifySnapshotTier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotTierAsync(const Model::ModifySnapshotTierRequest& request, const ModifySnapshotTierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Spot Fleet request.</p> <p>You can only modify a Spot
         * Fleet request of type <code>maintain</code>.</p> <p>While the Spot Fleet request
         * is being modified, it is in the <code>modifying</code> state.</p> <p>To scale up
         * your Spot Fleet, increase its target capacity. The Spot Fleet launches the
         * additional Spot Instances according to the allocation strategy for the Spot
         * Fleet request. If the allocation strategy is <code>lowestPrice</code>, the Spot
         * Fleet launches instances using the Spot Instance pool with the lowest price. If
         * the allocation strategy is <code>diversified</code>, the Spot Fleet distributes
         * the instances across the Spot Instance pools. If the allocation strategy is
         * <code>capacityOptimized</code>, Spot Fleet launches instances from Spot Instance
         * pools with optimal capacity for the number of instances that are launching.</p>
         * <p>To scale down your Spot Fleet, decrease its target capacity. First, the Spot
         * Fleet cancels any open requests that exceed the new target capacity. You can
         * request that the Spot Fleet terminate Spot Instances until the size of the fleet
         * no longer exceeds the new target capacity. If the allocation strategy is
         * <code>lowestPrice</code>, the Spot Fleet terminates the instances with the
         * highest price per unit. If the allocation strategy is
         * <code>capacityOptimized</code>, the Spot Fleet terminates the instances in the
         * Spot Instance pools that have the least available Spot Instance capacity. If the
         * allocation strategy is <code>diversified</code>, the Spot Fleet terminates
         * instances across the Spot Instance pools. Alternatively, you can request that
         * the Spot Fleet keep the fleet at its current size, but not replace any Spot
         * Instances that are interrupted or that you terminate manually.</p> <p>If you are
         * finished with your Spot Fleet for now, but will use it again later, you can set
         * the target capacity to 0.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySpotFleetRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySpotFleetRequestOutcome ModifySpotFleetRequest(const Model::ModifySpotFleetRequestRequest& request) const;

        /**
         * A Callable wrapper for ModifySpotFleetRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySpotFleetRequestOutcomeCallable ModifySpotFleetRequestCallable(const Model::ModifySpotFleetRequestRequest& request) const;

        /**
         * An Async wrapper for ModifySpotFleetRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySpotFleetRequestAsync(const Model::ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a subnet attribute. You can only modify one attribute at a time.</p>
         * <p>Use this action to modify subnets on Amazon Web Services Outposts.</p> <ul>
         * <li> <p>To modify a subnet on an Outpost rack, set both
         * <code>MapCustomerOwnedIpOnLaunch</code> and <code>CustomerOwnedIpv4Pool</code>.
         * These two parameters act as a single attribute.</p> </li> <li> <p>To modify a
         * subnet on an Outpost server, set either <code>EnableLniAtDeviceIndex</code> or
         * <code>DisableLniAtDeviceIndex</code>.</p> </li> </ul> <p>For more information
         * about Amazon Web Services Outposts, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/how-servers-work.html">Outpost
         * servers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/how-racks-work.html">Outpost
         * racks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySubnetAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifySubnetAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifySubnetAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows or restricts mirroring network services.</p> <p> By default, Amazon
         * DNS network services are not eligible for Traffic Mirror. Use
         * <code>AddNetworkServices</code> to add network services to a Traffic Mirror
         * filter. When a network service is added to the Traffic Mirror filter, all
         * traffic related to that network service will be mirrored. When you no longer
         * want to mirror network services, use <code>RemoveNetworkServices</code> to
         * remove the network services from the Traffic Mirror filter. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTrafficMirrorFilterNetworkServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrafficMirrorFilterNetworkServicesOutcome ModifyTrafficMirrorFilterNetworkServices(const Model::ModifyTrafficMirrorFilterNetworkServicesRequest& request) const;

        /**
         * A Callable wrapper for ModifyTrafficMirrorFilterNetworkServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTrafficMirrorFilterNetworkServicesOutcomeCallable ModifyTrafficMirrorFilterNetworkServicesCallable(const Model::ModifyTrafficMirrorFilterNetworkServicesRequest& request) const;

        /**
         * An Async wrapper for ModifyTrafficMirrorFilterNetworkServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTrafficMirrorFilterNetworkServicesAsync(const Model::ModifyTrafficMirrorFilterNetworkServicesRequest& request, const ModifyTrafficMirrorFilterNetworkServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Traffic Mirror rule.</p> <p>
         * <code>DestinationCidrBlock</code> and <code>SourceCidrBlock</code> must both be
         * an IPv4 range or an IPv6 range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrafficMirrorFilterRuleOutcome ModifyTrafficMirrorFilterRule(const Model::ModifyTrafficMirrorFilterRuleRequest& request) const;

        /**
         * A Callable wrapper for ModifyTrafficMirrorFilterRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTrafficMirrorFilterRuleOutcomeCallable ModifyTrafficMirrorFilterRuleCallable(const Model::ModifyTrafficMirrorFilterRuleRequest& request) const;

        /**
         * An Async wrapper for ModifyTrafficMirrorFilterRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTrafficMirrorFilterRuleAsync(const Model::ModifyTrafficMirrorFilterRuleRequest& request, const ModifyTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a Traffic Mirror session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTrafficMirrorSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrafficMirrorSessionOutcome ModifyTrafficMirrorSession(const Model::ModifyTrafficMirrorSessionRequest& request) const;

        /**
         * A Callable wrapper for ModifyTrafficMirrorSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTrafficMirrorSessionOutcomeCallable ModifyTrafficMirrorSessionCallable(const Model::ModifyTrafficMirrorSessionRequest& request) const;

        /**
         * An Async wrapper for ModifyTrafficMirrorSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTrafficMirrorSessionAsync(const Model::ModifyTrafficMirrorSessionRequest& request, const ModifyTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified transit gateway. When you modify a transit gateway,
         * the modified options are applied to new transit gateway attachments only. Your
         * existing transit gateway attachments are not modified.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTransitGatewayOutcome ModifyTransitGateway(const Model::ModifyTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for ModifyTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTransitGatewayOutcomeCallable ModifyTransitGatewayCallable(const Model::ModifyTransitGatewayRequest& request) const;

        /**
         * An Async wrapper for ModifyTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTransitGatewayAsync(const Model::ModifyTransitGatewayRequest& request, const ModifyTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTransitGatewayPrefixListReferenceOutcome ModifyTransitGatewayPrefixListReference(const Model::ModifyTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * A Callable wrapper for ModifyTransitGatewayPrefixListReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTransitGatewayPrefixListReferenceOutcomeCallable ModifyTransitGatewayPrefixListReferenceCallable(const Model::ModifyTransitGatewayPrefixListReferenceRequest& request) const;

        /**
         * An Async wrapper for ModifyTransitGatewayPrefixListReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTransitGatewayPrefixListReferenceAsync(const Model::ModifyTransitGatewayPrefixListReferenceRequest& request, const ModifyTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTransitGatewayVpcAttachmentOutcome ModifyTransitGatewayVpcAttachment(const Model::ModifyTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for ModifyTransitGatewayVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTransitGatewayVpcAttachmentOutcomeCallable ModifyTransitGatewayVpcAttachmentCallable(const Model::ModifyTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for ModifyTransitGatewayVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTransitGatewayVpcAttachmentAsync(const Model::ModifyTransitGatewayVpcAttachmentRequest& request, const ModifyTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of an Amazon Web Services Verified Access
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessEndpointOutcome ModifyVerifiedAccessEndpoint(const Model::ModifyVerifiedAccessEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessEndpointOutcomeCallable ModifyVerifiedAccessEndpointCallable(const Model::ModifyVerifiedAccessEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessEndpointAsync(const Model::ModifyVerifiedAccessEndpointRequest& request, const ModifyVerifiedAccessEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Verified Access endpoint policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessEndpointPolicyOutcome ModifyVerifiedAccessEndpointPolicy(const Model::ModifyVerifiedAccessEndpointPolicyRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessEndpointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessEndpointPolicyOutcomeCallable ModifyVerifiedAccessEndpointPolicyCallable(const Model::ModifyVerifiedAccessEndpointPolicyRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessEndpointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessEndpointPolicyAsync(const Model::ModifyVerifiedAccessEndpointPolicyRequest& request, const ModifyVerifiedAccessEndpointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Verified Access group configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessGroupOutcome ModifyVerifiedAccessGroup(const Model::ModifyVerifiedAccessGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessGroupOutcomeCallable ModifyVerifiedAccessGroupCallable(const Model::ModifyVerifiedAccessGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessGroupAsync(const Model::ModifyVerifiedAccessGroupRequest& request, const ModifyVerifiedAccessGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Verified Access group policy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessGroupPolicyOutcome ModifyVerifiedAccessGroupPolicy(const Model::ModifyVerifiedAccessGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessGroupPolicyOutcomeCallable ModifyVerifiedAccessGroupPolicyCallable(const Model::ModifyVerifiedAccessGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessGroupPolicyAsync(const Model::ModifyVerifiedAccessGroupPolicyRequest& request, const ModifyVerifiedAccessGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of the specified Verified Access
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessInstanceOutcome ModifyVerifiedAccessInstance(const Model::ModifyVerifiedAccessInstanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessInstanceOutcomeCallable ModifyVerifiedAccessInstanceCallable(const Model::ModifyVerifiedAccessInstanceRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessInstanceAsync(const Model::ModifyVerifiedAccessInstanceRequest& request, const ModifyVerifiedAccessInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the logging configuration for the specified Amazon Web Services
         * Verified Access instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessInstanceLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessInstanceLoggingConfigurationOutcome ModifyVerifiedAccessInstanceLoggingConfiguration(const Model::ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessInstanceLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessInstanceLoggingConfigurationOutcomeCallable ModifyVerifiedAccessInstanceLoggingConfigurationCallable(const Model::ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessInstanceLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessInstanceLoggingConfigurationAsync(const Model::ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request, const ModifyVerifiedAccessInstanceLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of the specified Amazon Web Services Verified
         * Access trust provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessTrustProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVerifiedAccessTrustProviderOutcome ModifyVerifiedAccessTrustProvider(const Model::ModifyVerifiedAccessTrustProviderRequest& request) const;

        /**
         * A Callable wrapper for ModifyVerifiedAccessTrustProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVerifiedAccessTrustProviderOutcomeCallable ModifyVerifiedAccessTrustProviderCallable(const Model::ModifyVerifiedAccessTrustProviderRequest& request) const;

        /**
         * An Async wrapper for ModifyVerifiedAccessTrustProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVerifiedAccessTrustProviderAsync(const Model::ModifyVerifiedAccessTrustProviderRequest& request, const ModifyVerifiedAccessTrustProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can modify several parameters of an existing EBS volume, including volume
         * size, volume type, and IOPS capacity. If your EBS volume is attached to a
         * current-generation EC2 instance type, you might be able to apply these changes
         * without stopping the instance or detaching the volume from it. For more
         * information about modifying EBS volumes, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modify-volume.html">Amazon
         * EBS Elastic Volumes</a> (Linux instances) or <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-modify-volume.html">Amazon
         * EBS Elastic Volumes</a> (Windows instances).</p> <p>When you complete a resize
         * operation on your volume, you need to extend the volume's file-system size to
         * take advantage of the new storage capacity. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#recognize-expanded-volume-linux">Extend
         * a Linux file system</a> or <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html#recognize-expanded-volume-windows">Extend
         * a Windows file system</a>.</p> <p> You can use CloudWatch Events to check the
         * status of a modification to an EBS volume. For information about CloudWatch
         * Events, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. You can also track the status of a
         * modification using <a>DescribeVolumesModifications</a>. For information about
         * tracking status changes using either method, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-modifications.html">Monitor
         * the progress of volume modifications</a>.</p> <p>With previous-generation
         * instance types, resizing an EBS volume might require detaching and reattaching
         * the volume or stopping and restarting the instance.</p> <p>After modifying a
         * volume, you must wait at least six hours and ensure that the volume is in the
         * <code>in-use</code> or <code>available</code> state before you can modify the
         * same volume. This is sometimes referred to as a cooldown period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVolumeOutcome ModifyVolume(const Model::ModifyVolumeRequest& request) const;

        /**
         * A Callable wrapper for ModifyVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVolumeOutcomeCallable ModifyVolumeCallable(const Model::ModifyVolumeRequest& request) const;

        /**
         * An Async wrapper for ModifyVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVolumeAsync(const Model::ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a volume attribute.</p> <p>By default, all I/O operations for the
         * volume are suspended when the data on the volume is determined to be potentially
         * inconsistent, to prevent undetectable, latent data corruption. The I/O access to
         * the volume can be resumed by first enabling I/O access and then checking the
         * data consistency on your volume.</p> <p>You can change the default behavior to
         * resume I/O operations. We recommend that you change this only for boot volumes
         * or for volumes that are stateless or disposable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolumeAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVolumeAttributeOutcome ModifyVolumeAttribute(const Model::ModifyVolumeAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyVolumeAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVolumeAttributeOutcomeCallable ModifyVolumeAttributeCallable(const Model::ModifyVolumeAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyVolumeAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVolumeAttributeAsync(const Model::ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies attributes of a specified VPC endpoint. The attributes that you can
         * modify depend on the type of VPC endpoint (interface, gateway, or Gateway Load
         * Balancer). For more information, see the <a
         * href="https://docs.aws.amazon.com/vpc/latest/privatelink/">Amazon Web Services
         * PrivateLink Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointOutcome ModifyVpcEndpoint(const Model::ModifyVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointOutcomeCallable ModifyVpcEndpointCallable(const Model::ModifyVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointAsync(const Model::ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a connection notification for VPC endpoint or VPC endpoint service.
         * You can change the SNS topic for the notification, or the events for which to be
         * notified. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointConnectionNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointConnectionNotificationOutcome ModifyVpcEndpointConnectionNotification(const Model::ModifyVpcEndpointConnectionNotificationRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcEndpointConnectionNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointConnectionNotificationOutcomeCallable ModifyVpcEndpointConnectionNotificationCallable(const Model::ModifyVpcEndpointConnectionNotificationRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcEndpointConnectionNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointConnectionNotificationAsync(const Model::ModifyVpcEndpointConnectionNotificationRequest& request, const ModifyVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the attributes of your VPC endpoint service configuration. You can
         * change the Network Load Balancers or Gateway Load Balancers for your service,
         * and you can specify whether acceptance is required for requests to connect to
         * your endpoint service through an interface VPC endpoint.</p> <p>If you set or
         * modify the private DNS name, you must prove that you own the private DNS domain
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointServiceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointServiceConfigurationOutcome ModifyVpcEndpointServiceConfiguration(const Model::ModifyVpcEndpointServiceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcEndpointServiceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointServiceConfigurationOutcomeCallable ModifyVpcEndpointServiceConfigurationCallable(const Model::ModifyVpcEndpointServiceConfigurationRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcEndpointServiceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointServiceConfigurationAsync(const Model::ModifyVpcEndpointServiceConfigurationRequest& request, const ModifyVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the payer responsibility for your VPC endpoint
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointServicePayerResponsibility">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointServicePayerResponsibilityOutcome ModifyVpcEndpointServicePayerResponsibility(const Model::ModifyVpcEndpointServicePayerResponsibilityRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcEndpointServicePayerResponsibility that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointServicePayerResponsibilityOutcomeCallable ModifyVpcEndpointServicePayerResponsibilityCallable(const Model::ModifyVpcEndpointServicePayerResponsibilityRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcEndpointServicePayerResponsibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointServicePayerResponsibilityAsync(const Model::ModifyVpcEndpointServicePayerResponsibilityRequest& request, const ModifyVpcEndpointServicePayerResponsibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the permissions for your VPC endpoint service. You can add or remove
         * permissions for service consumers (IAM users, IAM roles, and Amazon Web Services
         * accounts) to connect to your endpoint service.</p> <p>If you grant permissions
         * to all principals, the service is public. Any users who know the name of a
         * public service can send a request to attach an endpoint. If the service does not
         * require manual approval, attachments are automatically approved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointServicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointServicePermissionsOutcome ModifyVpcEndpointServicePermissions(const Model::ModifyVpcEndpointServicePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcEndpointServicePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointServicePermissionsOutcomeCallable ModifyVpcEndpointServicePermissionsCallable(const Model::ModifyVpcEndpointServicePermissionsRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcEndpointServicePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointServicePermissionsAsync(const Model::ModifyVpcEndpointServicePermissionsRequest& request, const ModifyVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>We are retiring EC2-Classic. We recommend that you migrate from
         * EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>Modifies the VPC peering connection options on one
         * side of a VPC peering connection. You can do the following:</p> <ul> <li>
         * <p>Enable/disable communication over the peering connection between an
         * EC2-Classic instance that's linked to your VPC (using ClassicLink) and instances
         * in the peer VPC.</p> </li> <li> <p>Enable/disable communication over the peering
         * connection between instances in your VPC and an EC2-Classic instance that's
         * linked to the peer VPC.</p> </li> <li> <p>Enable/disable the ability to resolve
         * public DNS hostnames to private IP addresses when queried from instances in the
         * peer VPC.</p> </li> </ul> <p>If the peered VPCs are in the same Amazon Web
         * Services account, you can enable DNS resolution for queries from the local VPC.
         * This ensures that queries from the local VPC resolve to private IP addresses in
         * the peer VPC. This option is not available if the peered VPCs are in different
         * different Amazon Web Services accounts or different Regions. For peered VPCs in
         * different Amazon Web Services accounts, each Amazon Web Services account owner
         * must initiate a separate request to modify the peering connection options. For
         * inter-region peering connections, you must use the Region for the requester VPC
         * to modify the requester VPC peering options and the Region for the accepter VPC
         * to modify the accepter VPC peering options. To verify which VPCs are the
         * accepter and the requester for a VPC peering connection, use the
         * <a>DescribeVpcPeeringConnections</a> command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcPeeringConnectionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcPeeringConnectionOptionsOutcome ModifyVpcPeeringConnectionOptions(const Model::ModifyVpcPeeringConnectionOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcPeeringConnectionOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcPeeringConnectionOptionsOutcomeCallable ModifyVpcPeeringConnectionOptionsCallable(const Model::ModifyVpcPeeringConnectionOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcPeeringConnectionOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcPeeringConnectionOptionsAsync(const Model::ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the instance tenancy attribute of the specified VPC. You can change
         * the instance tenancy attribute of a VPC to <code>default</code> only. You cannot
         * change the instance tenancy attribute to <code>dedicated</code>.</p> <p>After
         * you modify the tenancy of the VPC, any new instances that you launch into the
         * VPC have a tenancy of <code>default</code>, unless you specify otherwise during
         * launch. The tenancy of any existing instances in the VPC is not affected.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcTenancy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcTenancyOutcome ModifyVpcTenancy(const Model::ModifyVpcTenancyRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpcTenancy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcTenancyOutcomeCallable ModifyVpcTenancyCallable(const Model::ModifyVpcTenancyRequest& request) const;

        /**
         * An Async wrapper for ModifyVpcTenancy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcTenancyAsync(const Model::ModifyVpcTenancyRequest& request, const ModifyVpcTenancyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the customer gateway or the target gateway of an Amazon Web Services
         * Site-to-Site VPN connection. To modify the target gateway, the following
         * migration options are available:</p> <ul> <li> <p>An existing virtual private
         * gateway to a new virtual private gateway</p> </li> <li> <p>An existing virtual
         * private gateway to a transit gateway</p> </li> <li> <p>An existing transit
         * gateway to a new transit gateway</p> </li> <li> <p>An existing transit gateway
         * to a virtual private gateway</p> </li> </ul> <p>Before you perform the migration
         * to the new gateway, you must configure the new gateway. Use
         * <a>CreateVpnGateway</a> to create a virtual private gateway, or
         * <a>CreateTransitGateway</a> to create a transit gateway.</p> <p>This step is
         * required when you migrate from a virtual private gateway with static routes to a
         * transit gateway. </p> <p>You must delete the static routes before you migrate to
         * the new gateway.</p> <p>Keep a copy of the static route before you delete it.
         * You will need to add back these routes to the transit gateway after the VPN
         * connection migration is complete.</p> <p>After you migrate to the new gateway,
         * you might need to modify your VPC route table. Use <a>CreateRoute</a> and
         * <a>DeleteRoute</a> to make the changes described in <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/modify-vpn-target.html#step-update-routing">Update
         * VPC route tables</a> in the <i>Amazon Web Services Site-to-Site VPN User
         * Guide</i>.</p> <p>When the new gateway is a transit gateway, modify the transit
         * gateway route table to allow traffic between the VPC and the Amazon Web Services
         * Site-to-Site VPN connection. Use <a>CreateTransitGatewayRoute</a> to add the
         * routes.</p> <p> If you deleted VPN static routes, you must add the static routes
         * to the transit gateway route table.</p> <p>After you perform this operation, the
         * VPN endpoint's IP addresses on the Amazon Web Services side and the tunnel
         * options remain intact. Your Amazon Web Services Site-to-Site VPN connection will
         * be temporarily unavailable for a brief period while we provision the new
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpnConnectionOutcome ModifyVpnConnection(const Model::ModifyVpnConnectionRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpnConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpnConnectionOutcomeCallable ModifyVpnConnectionCallable(const Model::ModifyVpnConnectionRequest& request) const;

        /**
         * An Async wrapper for ModifyVpnConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpnConnectionAsync(const Model::ModifyVpnConnectionRequest& request, const ModifyVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the connection options for your Site-to-Site VPN connection.</p>
         * <p>When you modify the VPN connection options, the VPN endpoint IP addresses on
         * the Amazon Web Services side do not change, and the tunnel options do not
         * change. Your VPN connection will be temporarily unavailable for a brief period
         * while the VPN connection is updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnConnectionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpnConnectionOptionsOutcome ModifyVpnConnectionOptions(const Model::ModifyVpnConnectionOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpnConnectionOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpnConnectionOptionsOutcomeCallable ModifyVpnConnectionOptionsCallable(const Model::ModifyVpnConnectionOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyVpnConnectionOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpnConnectionOptionsAsync(const Model::ModifyVpnConnectionOptionsRequest& request, const ModifyVpnConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the VPN tunnel endpoint certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnTunnelCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpnTunnelCertificateOutcome ModifyVpnTunnelCertificate(const Model::ModifyVpnTunnelCertificateRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpnTunnelCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpnTunnelCertificateOutcomeCallable ModifyVpnTunnelCertificateCallable(const Model::ModifyVpnTunnelCertificateRequest& request) const;

        /**
         * An Async wrapper for ModifyVpnTunnelCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpnTunnelCertificateAsync(const Model::ModifyVpnTunnelCertificateRequest& request, const ModifyVpnTunnelCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the options for a VPN tunnel in an Amazon Web Services Site-to-Site
         * VPN connection. You can modify multiple options for a tunnel in a single
         * request, but you can only modify one tunnel at a time. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/VPNTunnels.html">Site-to-Site
         * VPN tunnel options for your Site-to-Site VPN connection</a> in the <i>Amazon Web
         * Services Site-to-Site VPN User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnTunnelOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpnTunnelOptionsOutcome ModifyVpnTunnelOptions(const Model::ModifyVpnTunnelOptionsRequest& request) const;

        /**
         * A Callable wrapper for ModifyVpnTunnelOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpnTunnelOptionsOutcomeCallable ModifyVpnTunnelOptionsCallable(const Model::ModifyVpnTunnelOptionsRequest& request) const;

        /**
         * An Async wrapper for ModifyVpnTunnelOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpnTunnelOptionsAsync(const Model::ModifyVpnTunnelOptionsRequest& request, const ModifyVpnTunnelOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables detailed monitoring for a running instance. Otherwise, basic
         * monitoring is enabled. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitor
         * your instances using CloudWatch</a> in the <i>Amazon EC2 User Guide</i>.</p>
         * <p>To disable detailed monitoring, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_UnmonitorInstances.html">UnmonitorInstances</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MonitorInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::MonitorInstancesOutcome MonitorInstances(const Model::MonitorInstancesRequest& request) const;

        /**
         * A Callable wrapper for MonitorInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MonitorInstancesOutcomeCallable MonitorInstancesCallable(const Model::MonitorInstancesRequest& request) const;

        /**
         * An Async wrapper for MonitorInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MonitorInstancesAsync(const Model::MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves an Elastic IP address from the EC2-Classic platform to the EC2-VPC
         * platform. The Elastic IP address must be allocated to your account for more than
         * 24 hours, and it must not be associated with an instance. After the Elastic IP
         * address is moved, it is no longer available for use in the EC2-Classic platform,
         * unless you move it back using the <a>RestoreAddressToClassic</a> request. You
         * cannot move an Elastic IP address that was originally allocated for use in the
         * EC2-VPC platform to the EC2-Classic platform.</p>  <p>We are retiring
         * EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveAddressToVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveAddressToVpcOutcome MoveAddressToVpc(const Model::MoveAddressToVpcRequest& request) const;

        /**
         * A Callable wrapper for MoveAddressToVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveAddressToVpcOutcomeCallable MoveAddressToVpcCallable(const Model::MoveAddressToVpcRequest& request) const;

        /**
         * An Async wrapper for MoveAddressToVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveAddressToVpcAsync(const Model::MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Move an BYOIP IPv4 CIDR to IPAM from a public IPv4 pool.</p> <p>If you
         * already have an IPv4 BYOIP CIDR with Amazon Web Services, you can move the CIDR
         * to IPAM from a public IPv4 pool. You cannot move an IPv6 CIDR to IPAM. If you
         * are bringing a new IP address to Amazon Web Services for the first time,
         * complete the steps in <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/tutorials-byoip-ipam.html">Tutorial:
         * BYOIP address CIDRs to IPAM</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveByoipCidrToIpam">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveByoipCidrToIpamOutcome MoveByoipCidrToIpam(const Model::MoveByoipCidrToIpamRequest& request) const;

        /**
         * A Callable wrapper for MoveByoipCidrToIpam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveByoipCidrToIpamOutcomeCallable MoveByoipCidrToIpamCallable(const Model::MoveByoipCidrToIpamRequest& request) const;

        /**
         * An Async wrapper for MoveByoipCidrToIpam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveByoipCidrToIpamAsync(const Model::MoveByoipCidrToIpamRequest& request, const MoveByoipCidrToIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions an IPv4 or IPv6 address range for use with your Amazon Web
         * Services resources through bring your own IP addresses (BYOIP) and creates a
         * corresponding address pool. After the address range is provisioned, it is ready
         * to be advertised using <a>AdvertiseByoipCidr</a>.</p> <p>Amazon Web Services
         * verifies that you own the address range and are authorized to advertise it. You
         * must ensure that the address range is registered to you and that you created an
         * RPKI ROA to authorize Amazon ASNs 16509 and 14618 to advertise the address
         * range. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html">Bring
         * your own IP addresses (BYOIP)</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>Provisioning an address range is an asynchronous operation, so
         * the call returns immediately, but the address range is not ready to use until
         * its status changes from <code>pending-provision</code> to
         * <code>provisioned</code>. To monitor the status of an address range, use
         * <a>DescribeByoipCidrs</a>. To allocate an Elastic IP address from your IPv4
         * address pool, use <a>AllocateAddress</a> with either the specific address from
         * the address pool or the ID of the address pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionByoipCidrOutcome ProvisionByoipCidr(const Model::ProvisionByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for ProvisionByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionByoipCidrOutcomeCallable ProvisionByoipCidrCallable(const Model::ProvisionByoipCidrRequest& request) const;

        /**
         * An Async wrapper for ProvisionByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionByoipCidrAsync(const Model::ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provision a CIDR to an IPAM pool. You can use this action to provision new
         * CIDRs to a top-level pool or to transfer a CIDR from a top-level pool to a pool
         * within it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/prov-cidr-ipam.html">Provision
         * CIDRs to pools</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionIpamPoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionIpamPoolCidrOutcome ProvisionIpamPoolCidr(const Model::ProvisionIpamPoolCidrRequest& request) const;

        /**
         * A Callable wrapper for ProvisionIpamPoolCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionIpamPoolCidrOutcomeCallable ProvisionIpamPoolCidrCallable(const Model::ProvisionIpamPoolCidrRequest& request) const;

        /**
         * An Async wrapper for ProvisionIpamPoolCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionIpamPoolCidrAsync(const Model::ProvisionIpamPoolCidrRequest& request, const ProvisionIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provision a CIDR to a public IPv4 pool.</p> <p>For more information about
         * IPAM, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
         * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionPublicIpv4PoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionPublicIpv4PoolCidrOutcome ProvisionPublicIpv4PoolCidr(const Model::ProvisionPublicIpv4PoolCidrRequest& request) const;

        /**
         * A Callable wrapper for ProvisionPublicIpv4PoolCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionPublicIpv4PoolCidrOutcomeCallable ProvisionPublicIpv4PoolCidrCallable(const Model::ProvisionPublicIpv4PoolCidrRequest& request) const;

        /**
         * An Async wrapper for ProvisionPublicIpv4PoolCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionPublicIpv4PoolCidrAsync(const Model::ProvisionPublicIpv4PoolCidrRequest& request, const ProvisionPublicIpv4PoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchase a reservation with configurations that match those of your Dedicated
         * Host. You must have active Dedicated Hosts in your account before you purchase a
         * reservation. This action results in the specified reservation being purchased
         * and charged to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseHostReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseHostReservationOutcome PurchaseHostReservation(const Model::PurchaseHostReservationRequest& request) const;

        /**
         * A Callable wrapper for PurchaseHostReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseHostReservationOutcomeCallable PurchaseHostReservationCallable(const Model::PurchaseHostReservationRequest& request) const;

        /**
         * An Async wrapper for PurchaseHostReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseHostReservationAsync(const Model::PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases a Reserved Instance for use with your account. With Reserved
         * Instances, you pay a lower hourly rate compared to On-Demand instance
         * pricing.</p> <p>Use <a>DescribeReservedInstancesOfferings</a> to get a list of
         * Reserved Instance offerings that match your specifications. After you've
         * purchased a Reserved Instance, you can check for your new Reserved Instance with
         * <a>DescribeReservedInstances</a>.</p> <p>To queue a purchase for a future date
         * and time, specify a purchase time. If you do not specify a purchase time, the
         * default is the current time.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon EC2 User Guide</i>.</p>  <p>We
         * are retiring EC2-Classic. We recommend that you migrate from EC2-Classic to a
         * VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedInstancesOfferingOutcome PurchaseReservedInstancesOffering(const Model::PurchaseReservedInstancesOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedInstancesOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedInstancesOfferingOutcomeCallable PurchaseReservedInstancesOfferingCallable(const Model::PurchaseReservedInstancesOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedInstancesOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedInstancesOfferingAsync(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>You can no longer purchase Scheduled Instances.</p> 
         * <p>Purchases the Scheduled Instances with the specified schedule.</p>
         * <p>Scheduled Instances enable you to purchase Amazon EC2 compute capacity by the
         * hour for a one-year term. Before you can purchase a Scheduled Instance, you must
         * call <a>DescribeScheduledInstanceAvailability</a> to check for available
         * schedules and obtain a purchase token. After you purchase a Scheduled Instance,
         * you must call <a>RunScheduledInstances</a> during each scheduled time
         * period.</p> <p>After you purchase a Scheduled Instance, you can't cancel,
         * modify, or resell your purchase.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseScheduledInstancesOutcome PurchaseScheduledInstances(const Model::PurchaseScheduledInstancesRequest& request) const;

        /**
         * A Callable wrapper for PurchaseScheduledInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseScheduledInstancesOutcomeCallable PurchaseScheduledInstancesCallable(const Model::PurchaseScheduledInstancesRequest& request) const;

        /**
         * An Async wrapper for PurchaseScheduledInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseScheduledInstancesAsync(const Model::PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a reboot of the specified instances. This operation is asynchronous;
         * it only queues a request to reboot the specified instances. The operation
         * succeeds if the instances are valid and belong to you. Requests to reboot
         * terminated instances are ignored.</p> <p>If an instance does not cleanly shut
         * down within a few minutes, Amazon EC2 performs a hard reboot.</p> <p>For more
         * information about troubleshooting, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html">Troubleshoot
         * an unreachable instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RebootInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest& request) const;

        /**
         * A Callable wrapper for RebootInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request) const;

        /**
         * An Async wrapper for RebootInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an AMI. When you're creating an AMI, this is the final step you
         * must complete before you can launch an instance from the AMI. For more
         * information about creating AMIs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Create
         * your own AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         *  <p>For Amazon EBS-backed instances, <a>CreateImage</a> creates and
         * registers the AMI in a single request, so you don't have to register the AMI
         * yourself. We recommend that you always use <a>CreateImage</a> unless you have a
         * specific reason to use RegisterImage.</p>  <p>If needed, you can
         * deregister an AMI at any time. Any modifications you make to an AMI backed by an
         * instance store volume invalidates its registration. If you make changes to an
         * image, deregister the previous image and register the new image.</p> <p>
         * <b>Register a snapshot of a root device volume</b> </p> <p>You can use
         * <code>RegisterImage</code> to create an Amazon EBS-backed Linux AMI from a
         * snapshot of a root device volume. You specify the snapshot using a block device
         * mapping. You can't set the encryption state of the volume using the block device
         * mapping. If the snapshot is encrypted, or encryption by default is enabled, the
         * root volume of an instance launched from the AMI is encrypted.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html#creating-launching-ami-from-snapshot">Create
         * a Linux AMI from a snapshot</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Use
         * encryption with Amazon EBS-backed AMIs</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p> <p> <b>Amazon Web Services Marketplace product
         * codes</b> </p> <p>If any snapshots have Amazon Web Services Marketplace product
         * codes, they are copied to the new AMI.</p> <p>Windows and some Linux
         * distributions, such as Red Hat Enterprise Linux (RHEL) and SUSE Linux Enterprise
         * Server (SLES), use the Amazon EC2 billing product code associated with an AMI to
         * verify the subscription status for package updates. To create a new AMI for
         * operating systems that require a billing product code, instead of registering
         * the AMI, do the following to preserve the billing product code association:</p>
         * <ol> <li> <p>Launch an instance from an existing AMI with that billing product
         * code.</p> </li> <li> <p>Customize the instance.</p> </li> <li> <p>Create an AMI
         * from the instance using <a>CreateImage</a>.</p> </li> </ol> <p>If you purchase a
         * Reserved Instance to apply to an On-Demand Instance that was launched from an
         * AMI with a billing product code, make sure that the Reserved Instance has the
         * matching billing product code. If you purchase a Reserved Instance without the
         * matching billing product code, the Reserved Instance will not be applied to the
         * On-Demand Instance. For information about how to obtain the platform details and
         * billing information of an AMI, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
         * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterImageOutcome RegisterImage(const Model::RegisterImageRequest& request) const;

        /**
         * A Callable wrapper for RegisterImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterImageOutcomeCallable RegisterImageCallable(const Model::RegisterImageRequest& request) const;

        /**
         * An Async wrapper for RegisterImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterImageAsync(const Model::RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a set of tag keys to include in scheduled event notifications for
         * your resources. </p> <p>To remove tags, use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DeregisterInstanceEventNotificationAttributes.html">DeregisterInstanceEventNotificationAttributes</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterInstanceEventNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterInstanceEventNotificationAttributesOutcome RegisterInstanceEventNotificationAttributes(const Model::RegisterInstanceEventNotificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for RegisterInstanceEventNotificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterInstanceEventNotificationAttributesOutcomeCallable RegisterInstanceEventNotificationAttributesCallable(const Model::RegisterInstanceEventNotificationAttributesRequest& request) const;

        /**
         * An Async wrapper for RegisterInstanceEventNotificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterInstanceEventNotificationAttributesAsync(const Model::RegisterInstanceEventNotificationAttributesRequest& request, const RegisterInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers members (network interfaces) with the transit gateway multicast
         * group. A member is a network interface associated with a supported EC2 instance
         * that receives multicast traffic. For information about supported instances, see
         * <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/transit-gateway-limits.html#multicast-limits">Multicast
         * Consideration</a> in <i>Amazon VPC Transit Gateways</i>.</p> <p>After you add
         * the members, use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SearchTransitGatewayMulticastGroups.html">SearchTransitGatewayMulticastGroups</a>
         * to verify that the members were added to the transit gateway multicast
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterTransitGatewayMulticastGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTransitGatewayMulticastGroupMembersOutcome RegisterTransitGatewayMulticastGroupMembers(const Model::RegisterTransitGatewayMulticastGroupMembersRequest& request) const;

        /**
         * A Callable wrapper for RegisterTransitGatewayMulticastGroupMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTransitGatewayMulticastGroupMembersOutcomeCallable RegisterTransitGatewayMulticastGroupMembersCallable(const Model::RegisterTransitGatewayMulticastGroupMembersRequest& request) const;

        /**
         * An Async wrapper for RegisterTransitGatewayMulticastGroupMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTransitGatewayMulticastGroupMembersAsync(const Model::RegisterTransitGatewayMulticastGroupMembersRequest& request, const RegisterTransitGatewayMulticastGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers sources (network interfaces) with the specified transit gateway
         * multicast group.</p> <p>A multicast source is a network interface attached to a
         * supported instance that sends multicast traffic. For information about supported
         * instances, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/transit-gateway-limits.html#multicast-limits">Multicast
         * Considerations</a> in <i>Amazon VPC Transit Gateways</i>.</p> <p>After you add
         * the source, use <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SearchTransitGatewayMulticastGroups.html">SearchTransitGatewayMulticastGroups</a>
         * to verify that the source was added to the multicast group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterTransitGatewayMulticastGroupSources">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTransitGatewayMulticastGroupSourcesOutcome RegisterTransitGatewayMulticastGroupSources(const Model::RegisterTransitGatewayMulticastGroupSourcesRequest& request) const;

        /**
         * A Callable wrapper for RegisterTransitGatewayMulticastGroupSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTransitGatewayMulticastGroupSourcesOutcomeCallable RegisterTransitGatewayMulticastGroupSourcesCallable(const Model::RegisterTransitGatewayMulticastGroupSourcesRequest& request) const;

        /**
         * An Async wrapper for RegisterTransitGatewayMulticastGroupSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTransitGatewayMulticastGroupSourcesAsync(const Model::RegisterTransitGatewayMulticastGroupSourcesRequest& request, const RegisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a request to associate cross-account subnets with a transit gateway
         * multicast domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectTransitGatewayMulticastDomainAssociationsOutcome RejectTransitGatewayMulticastDomainAssociations(const Model::RejectTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for RejectTransitGatewayMulticastDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectTransitGatewayMulticastDomainAssociationsOutcomeCallable RejectTransitGatewayMulticastDomainAssociationsCallable(const Model::RejectTransitGatewayMulticastDomainAssociationsRequest& request) const;

        /**
         * An Async wrapper for RejectTransitGatewayMulticastDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectTransitGatewayMulticastDomainAssociationsAsync(const Model::RejectTransitGatewayMulticastDomainAssociationsRequest& request, const RejectTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a transit gateway peering attachment request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectTransitGatewayPeeringAttachmentOutcome RejectTransitGatewayPeeringAttachment(const Model::RejectTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * A Callable wrapper for RejectTransitGatewayPeeringAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectTransitGatewayPeeringAttachmentOutcomeCallable RejectTransitGatewayPeeringAttachmentCallable(const Model::RejectTransitGatewayPeeringAttachmentRequest& request) const;

        /**
         * An Async wrapper for RejectTransitGatewayPeeringAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectTransitGatewayPeeringAttachmentAsync(const Model::RejectTransitGatewayPeeringAttachmentRequest& request, const RejectTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a request to attach a VPC to a transit gateway.</p> <p>The VPC
         * attachment must be in the <code>pendingAcceptance</code> state. Use
         * <a>DescribeTransitGatewayVpcAttachments</a> to view your pending VPC attachment
         * requests. Use <a>AcceptTransitGatewayVpcAttachment</a> to accept a VPC
         * attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectTransitGatewayVpcAttachmentOutcome RejectTransitGatewayVpcAttachment(const Model::RejectTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for RejectTransitGatewayVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectTransitGatewayVpcAttachmentOutcomeCallable RejectTransitGatewayVpcAttachmentCallable(const Model::RejectTransitGatewayVpcAttachmentRequest& request) const;

        /**
         * An Async wrapper for RejectTransitGatewayVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectTransitGatewayVpcAttachmentAsync(const Model::RejectTransitGatewayVpcAttachmentRequest& request, const RejectTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects one or more VPC endpoint connection requests to your VPC endpoint
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectVpcEndpointConnectionsOutcome RejectVpcEndpointConnections(const Model::RejectVpcEndpointConnectionsRequest& request) const;

        /**
         * A Callable wrapper for RejectVpcEndpointConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectVpcEndpointConnectionsOutcomeCallable RejectVpcEndpointConnectionsCallable(const Model::RejectVpcEndpointConnectionsRequest& request) const;

        /**
         * An Async wrapper for RejectVpcEndpointConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectVpcEndpointConnectionsAsync(const Model::RejectVpcEndpointConnectionsRequest& request, const RejectVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a VPC peering connection request. The VPC peering connection must be
         * in the <code>pending-acceptance</code> state. Use the
         * <a>DescribeVpcPeeringConnections</a> request to view your outstanding VPC
         * peering connection requests. To delete an active VPC peering connection, or to
         * delete a VPC peering connection request that you initiated, use
         * <a>DeleteVpcPeeringConnection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectVpcPeeringConnectionOutcome RejectVpcPeeringConnection(const Model::RejectVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectVpcPeeringConnectionOutcomeCallable RejectVpcPeeringConnectionCallable(const Model::RejectVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for RejectVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectVpcPeeringConnectionAsync(const Model::RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases the specified Elastic IP address.</p> <p>[EC2-Classic, default VPC]
         * Releasing an Elastic IP address automatically disassociates it from any instance
         * that it's associated with. To disassociate an Elastic IP address without
         * releasing it, use <a>DisassociateAddress</a>.</p>  <p>We are retiring
         * EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p>  <p>[Nondefault VPC] You must use
         * <a>DisassociateAddress</a> to disassociate the Elastic IP address before you can
         * release it. Otherwise, Amazon EC2 returns an error
         * (<code>InvalidIPAddress.InUse</code>).</p> <p>After releasing an Elastic IP
         * address, it is released to the IP address pool. Be sure to update your DNS
         * records and any servers or devices that communicate with the address. If you
         * attempt to release an Elastic IP address that you already released, you'll get
         * an <code>AuthFailure</code> error if the address is already allocated to another
         * Amazon Web Services account.</p> <p>[EC2-VPC] After you release an Elastic IP
         * address for use in a VPC, you might be able to recover it. For more information,
         * see <a>AllocateAddress</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseAddressOutcome ReleaseAddress(const Model::ReleaseAddressRequest& request) const;

        /**
         * A Callable wrapper for ReleaseAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseAddressOutcomeCallable ReleaseAddressCallable(const Model::ReleaseAddressRequest& request) const;

        /**
         * An Async wrapper for ReleaseAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseAddressAsync(const Model::ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you no longer want to use an On-Demand Dedicated Host it can be
         * released. On-Demand billing is stopped and the host goes into
         * <code>released</code> state. The host ID of Dedicated Hosts that have been
         * released can no longer be specified in another request, for example, to modify
         * the host. You must stop or terminate all instances on a host before it can be
         * released.</p> <p>When Dedicated Hosts are released, it may take some time for
         * them to stop counting toward your limit and you may receive capacity errors when
         * trying to allocate new Dedicated Hosts. Wait a few minutes and then try
         * again.</p> <p>Released hosts still appear in a <a>DescribeHosts</a>
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseHostsOutcome ReleaseHosts(const Model::ReleaseHostsRequest& request) const;

        /**
         * A Callable wrapper for ReleaseHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseHostsOutcomeCallable ReleaseHostsCallable(const Model::ReleaseHostsRequest& request) const;

        /**
         * An Async wrapper for ReleaseHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseHostsAsync(const Model::ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Release an allocation within an IPAM pool. You can only use this action to
         * release manual allocations. To remove an allocation for a resource without
         * deleting the resource, set its monitored state to false using <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyIpamResourceCidr.html">ModifyIpamResourceCidr</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/ipam/release-pool-alloc-ipam.html">Release
         * an allocation</a> in the <i>Amazon VPC IPAM User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseIpamPoolAllocation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseIpamPoolAllocationOutcome ReleaseIpamPoolAllocation(const Model::ReleaseIpamPoolAllocationRequest& request) const;

        /**
         * A Callable wrapper for ReleaseIpamPoolAllocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseIpamPoolAllocationOutcomeCallable ReleaseIpamPoolAllocationCallable(const Model::ReleaseIpamPoolAllocationRequest& request) const;

        /**
         * An Async wrapper for ReleaseIpamPoolAllocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseIpamPoolAllocationAsync(const Model::ReleaseIpamPoolAllocationRequest& request, const ReleaseIpamPoolAllocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an IAM instance profile for the specified running instance. You can
         * use this action to change the IAM instance profile that's associated with an
         * instance without having to disassociate the existing IAM instance profile
         * first.</p> <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceIamInstanceProfileAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceIamInstanceProfileAssociationOutcome ReplaceIamInstanceProfileAssociation(const Model::ReplaceIamInstanceProfileAssociationRequest& request) const;

        /**
         * A Callable wrapper for ReplaceIamInstanceProfileAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceIamInstanceProfileAssociationOutcomeCallable ReplaceIamInstanceProfileAssociationCallable(const Model::ReplaceIamInstanceProfileAssociationRequest& request) const;

        /**
         * An Async wrapper for ReplaceIamInstanceProfileAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceIamInstanceProfileAssociationAsync(const Model::ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes which network ACL a subnet is associated with. By default when you
         * create a subnet, it's automatically associated with the default network ACL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p> <p>This is
         * an idempotent operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceNetworkAclAssociationOutcome ReplaceNetworkAclAssociation(const Model::ReplaceNetworkAclAssociationRequest& request) const;

        /**
         * A Callable wrapper for ReplaceNetworkAclAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceNetworkAclAssociationOutcomeCallable ReplaceNetworkAclAssociationCallable(const Model::ReplaceNetworkAclAssociationRequest& request) const;

        /**
         * An Async wrapper for ReplaceNetworkAclAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceNetworkAclAssociationAsync(const Model::ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an entry (rule) in a network ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceNetworkAclEntryOutcome ReplaceNetworkAclEntry(const Model::ReplaceNetworkAclEntryRequest& request) const;

        /**
         * A Callable wrapper for ReplaceNetworkAclEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceNetworkAclEntryOutcomeCallable ReplaceNetworkAclEntryCallable(const Model::ReplaceNetworkAclEntryRequest& request) const;

        /**
         * An Async wrapper for ReplaceNetworkAclEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceNetworkAclEntryAsync(const Model::ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an existing route within a route table in a VPC.</p> <p>You must
         * specify either a destination CIDR block or a prefix list ID. You must also
         * specify exactly one of the resources from the parameter list, or reset the local
         * route to its default target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceRouteOutcome ReplaceRoute(const Model::ReplaceRouteRequest& request) const;

        /**
         * A Callable wrapper for ReplaceRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceRouteOutcomeCallable ReplaceRouteCallable(const Model::ReplaceRouteRequest& request) const;

        /**
         * An Async wrapper for ReplaceRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceRouteAsync(const Model::ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the route table associated with a given subnet, internet gateway, or
         * virtual private gateway in a VPC. After the operation completes, the subnet or
         * gateway uses the routes in the new route table. For more information about route
         * tables, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Route_Tables.html">Route
         * tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p> <p>You can
         * also use this operation to change which table is the main route table in the
         * VPC. Specify the main route table's association ID and the route table ID of the
         * new main route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRouteTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for ReplaceRouteTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request) const;

        /**
         * An Async wrapper for ReplaceRouteTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the specified route in the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceTransitGatewayRouteOutcome ReplaceTransitGatewayRoute(const Model::ReplaceTransitGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for ReplaceTransitGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceTransitGatewayRouteOutcomeCallable ReplaceTransitGatewayRouteCallable(const Model::ReplaceTransitGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for ReplaceTransitGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceTransitGatewayRouteAsync(const Model::ReplaceTransitGatewayRouteRequest& request, const ReplaceTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits feedback about the status of an instance. The instance must be in the
         * <code>running</code> state. If your experience with the instance differs from
         * the instance status returned by <a>DescribeInstanceStatus</a>, use
         * <a>ReportInstanceStatus</a> to report your experience with the instance. Amazon
         * EC2 collects this information to improve the accuracy of status checks.</p>
         * <p>Use of this action does not change the value returned by
         * <a>DescribeInstanceStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReportInstanceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ReportInstanceStatusOutcome ReportInstanceStatus(const Model::ReportInstanceStatusRequest& request) const;

        /**
         * A Callable wrapper for ReportInstanceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReportInstanceStatusOutcomeCallable ReportInstanceStatusCallable(const Model::ReportInstanceStatusRequest& request) const;

        /**
         * An Async wrapper for ReportInstanceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReportInstanceStatusAsync(const Model::ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Spot Fleet request.</p> <p>The Spot Fleet request specifies the
         * total target capacity and the On-Demand target capacity. Amazon EC2 calculates
         * the difference between the total capacity and On-Demand capacity, and launches
         * the difference as Spot capacity.</p> <p>You can submit a single request that
         * includes multiple launch specifications that vary by instance type, AMI,
         * Availability Zone, or subnet.</p> <p>By default, the Spot Fleet requests Spot
         * Instances in the Spot Instance pool where the price per unit is the lowest. Each
         * launch specification can include its own instance weighting that reflects the
         * value of the instance type to your application workload.</p> <p>Alternatively,
         * you can specify that the Spot Fleet distribute the target capacity across the
         * Spot pools included in its launch specifications. By ensuring that the Spot
         * Instances in your Spot Fleet are in different Spot pools, you can improve the
         * availability of your fleet.</p> <p>You can specify tags for the Spot Fleet
         * request and instances launched by the fleet. You cannot tag other resource types
         * in a Spot Fleet request because only the <code>spot-fleet-request</code> and
         * <code>instance</code> resource types are supported.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html">Spot
         * Fleet requests</a> in the <i>Amazon EC2 User Guide</i>.</p>  <p>We
         * strongly discourage using the RequestSpotFleet API because it is a legacy API
         * with no planned investment. For options for requesting Spot Instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-best-practices.html#which-spot-request-method-to-use">Which
         * is the best Spot request method to use?</a> in the <i>Amazon EC2 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestSpotFleetOutcome RequestSpotFleet(const Model::RequestSpotFleetRequest& request) const;

        /**
         * A Callable wrapper for RequestSpotFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestSpotFleetOutcomeCallable RequestSpotFleetCallable(const Model::RequestSpotFleetRequest& request) const;

        /**
         * An Async wrapper for RequestSpotFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestSpotFleetAsync(const Model::RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Spot Instance request.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance requests</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p>  <p>We strongly discourage using the
         * RequestSpotInstances API because it is a legacy API with no planned investment.
         * For options for requesting Spot Instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-best-practices.html#which-spot-request-method-to-use">Which
         * is the best Spot request method to use?</a> in the <i>Amazon EC2 User Guide for
         * Linux Instances</i>.</p>   <p>We are retiring EC2-Classic. We
         * recommend that you migrate from EC2-Classic to a VPC. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestSpotInstancesOutcome RequestSpotInstances(const Model::RequestSpotInstancesRequest& request) const;

        /**
         * A Callable wrapper for RequestSpotInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestSpotInstancesOutcomeCallable RequestSpotInstancesCallable(const Model::RequestSpotInstancesRequest& request) const;

        /**
         * An Async wrapper for RequestSpotInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestSpotInstancesAsync(const Model::RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the attribute of the specified IP address. For requirements, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html#Using_Elastic_Addressing_Reverse_DNS">Using
         * reverse DNS for email applications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetAddressAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAddressAttributeOutcome ResetAddressAttribute(const Model::ResetAddressAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetAddressAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetAddressAttributeOutcomeCallable ResetAddressAttributeCallable(const Model::ResetAddressAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetAddressAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetAddressAttributeAsync(const Model::ResetAddressAttributeRequest& request, const ResetAddressAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the default KMS key for EBS encryption for your account in this Region
         * to the Amazon Web Services managed KMS key for EBS.</p> <p>After resetting the
         * default KMS key to the Amazon Web Services managed KMS key, you can continue to
         * encrypt by a customer managed KMS key by specifying it when you create the
         * volume. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetEbsDefaultKmsKeyId">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetEbsDefaultKmsKeyIdOutcome ResetEbsDefaultKmsKeyId(const Model::ResetEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * A Callable wrapper for ResetEbsDefaultKmsKeyId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetEbsDefaultKmsKeyIdOutcomeCallable ResetEbsDefaultKmsKeyIdCallable(const Model::ResetEbsDefaultKmsKeyIdRequest& request) const;

        /**
         * An Async wrapper for ResetEbsDefaultKmsKeyId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetEbsDefaultKmsKeyIdAsync(const Model::ResetEbsDefaultKmsKeyIdRequest& request, const ResetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the specified attribute of the specified Amazon FPGA Image (AFI) to
         * its default value. You can only reset the load permission
         * attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetFpgaImageAttributeOutcome ResetFpgaImageAttribute(const Model::ResetFpgaImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetFpgaImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetFpgaImageAttributeOutcomeCallable ResetFpgaImageAttributeCallable(const Model::ResetFpgaImageAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetFpgaImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetFpgaImageAttributeAsync(const Model::ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets an attribute of an AMI to its default value.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetImageAttributeOutcome ResetImageAttribute(const Model::ResetImageAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetImageAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetImageAttributeOutcomeCallable ResetImageAttributeCallable(const Model::ResetImageAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetImageAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetImageAttributeAsync(const Model::ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets an attribute of an instance to its default value. To reset the
         * <code>kernel</code> or <code>ramdisk</code>, the instance must be in a stopped
         * state. To reset the <code>sourceDestCheck</code>, the instance can be either
         * running or stopped.</p> <p>The <code>sourceDestCheck</code> attribute controls
         * whether source/destination checking is enabled. The default value is
         * <code>true</code>, which means checking is enabled. This value must be
         * <code>false</code> for a NAT instance to perform NAT. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
         * Instances</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetInstanceAttributeOutcome ResetInstanceAttribute(const Model::ResetInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetInstanceAttributeOutcomeCallable ResetInstanceAttributeCallable(const Model::ResetInstanceAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetInstanceAttributeAsync(const Model::ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets a network interface attribute. You can specify only one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetNetworkInterfaceAttributeOutcome ResetNetworkInterfaceAttribute(const Model::ResetNetworkInterfaceAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetNetworkInterfaceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetNetworkInterfaceAttributeOutcomeCallable ResetNetworkInterfaceAttributeCallable(const Model::ResetNetworkInterfaceAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetNetworkInterfaceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetNetworkInterfaceAttributeAsync(const Model::ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets permission settings for the specified snapshot.</p> <p>For more
         * information about modifying snapshot permissions, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Share
         * a snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetSnapshotAttributeOutcome ResetSnapshotAttribute(const Model::ResetSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ResetSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetSnapshotAttributeOutcomeCallable ResetSnapshotAttributeCallable(const Model::ResetSnapshotAttributeRequest& request) const;

        /**
         * An Async wrapper for ResetSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetSnapshotAttributeAsync(const Model::ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an Elastic IP address that was previously moved to the EC2-VPC
         * platform back to the EC2-Classic platform. You cannot move an Elastic IP address
         * that was originally allocated for use in EC2-VPC. The Elastic IP address must
         * not be associated with an instance or network interface.</p>  <p>We are
         * retiring EC2-Classic. We recommend that you migrate from EC2-Classic to a VPC.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreAddressToClassic">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreAddressToClassicOutcome RestoreAddressToClassic(const Model::RestoreAddressToClassicRequest& request) const;

        /**
         * A Callable wrapper for RestoreAddressToClassic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreAddressToClassicOutcomeCallable RestoreAddressToClassicCallable(const Model::RestoreAddressToClassicRequest& request) const;

        /**
         * An Async wrapper for RestoreAddressToClassic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreAddressToClassicAsync(const Model::RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an AMI from the Recycle Bin. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreImageFromRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreImageFromRecycleBinOutcome RestoreImageFromRecycleBin(const Model::RestoreImageFromRecycleBinRequest& request) const;

        /**
         * A Callable wrapper for RestoreImageFromRecycleBin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreImageFromRecycleBinOutcomeCallable RestoreImageFromRecycleBinCallable(const Model::RestoreImageFromRecycleBinRequest& request) const;

        /**
         * An Async wrapper for RestoreImageFromRecycleBin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreImageFromRecycleBinAsync(const Model::RestoreImageFromRecycleBinRequest& request, const RestoreImageFromRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores the entries from a previous version of a managed prefix list to a
         * new version of the prefix list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreManagedPrefixListVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreManagedPrefixListVersionOutcome RestoreManagedPrefixListVersion(const Model::RestoreManagedPrefixListVersionRequest& request) const;

        /**
         * A Callable wrapper for RestoreManagedPrefixListVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreManagedPrefixListVersionOutcomeCallable RestoreManagedPrefixListVersionCallable(const Model::RestoreManagedPrefixListVersionRequest& request) const;

        /**
         * An Async wrapper for RestoreManagedPrefixListVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreManagedPrefixListVersionAsync(const Model::RestoreManagedPrefixListVersionRequest& request, const RestoreManagedPrefixListVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a snapshot from the Recycle Bin. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-snaps.html#recycle-bin-restore-snaps">Restore
         * snapshots from the Recycle Bin</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreSnapshotFromRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreSnapshotFromRecycleBinOutcome RestoreSnapshotFromRecycleBin(const Model::RestoreSnapshotFromRecycleBinRequest& request) const;

        /**
         * A Callable wrapper for RestoreSnapshotFromRecycleBin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreSnapshotFromRecycleBinOutcomeCallable RestoreSnapshotFromRecycleBinCallable(const Model::RestoreSnapshotFromRecycleBinRequest& request) const;

        /**
         * An Async wrapper for RestoreSnapshotFromRecycleBin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreSnapshotFromRecycleBinAsync(const Model::RestoreSnapshotFromRecycleBinRequest& request, const RestoreSnapshotFromRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an archived Amazon EBS snapshot for use temporarily or permanently,
         * or modifies the restore period or restore type for a snapshot that was
         * previously temporarily restored.</p> <p>For more information see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/working-with-snapshot-archiving.html#restore-archived-snapshot">
         * Restore an archived snapshot</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/working-with-snapshot-archiving.html#modify-temp-restore-period">
         * modify the restore period or restore type for a temporarily restored
         * snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreSnapshotTier">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreSnapshotTierOutcome RestoreSnapshotTier(const Model::RestoreSnapshotTierRequest& request) const;

        /**
         * A Callable wrapper for RestoreSnapshotTier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreSnapshotTierOutcomeCallable RestoreSnapshotTierCallable(const Model::RestoreSnapshotTierRequest& request) const;

        /**
         * An Async wrapper for RestoreSnapshotTier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreSnapshotTierAsync(const Model::RestoreSnapshotTierRequest& request, const RestoreSnapshotTierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an ingress authorization rule from a Client VPN endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeClientVpnIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeClientVpnIngressOutcome RevokeClientVpnIngress(const Model::RevokeClientVpnIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeClientVpnIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeClientVpnIngressOutcomeCallable RevokeClientVpnIngressCallable(const Model::RevokeClientVpnIngressRequest& request) const;

        /**
         * An Async wrapper for RevokeClientVpnIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeClientVpnIngressAsync(const Model::RevokeClientVpnIngressRequest& request, const RevokeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[VPC only] Removes the specified outbound (egress) rules from a security
         * group for EC2-VPC. This action does not apply to security groups for use in
         * EC2-Classic.</p> <p>You can specify rules using either rule IDs or security
         * group rule properties. If you use rule properties, the values that you specify
         * (for example, ports) must match the existing rule's values exactly. Each rule
         * has a protocol, from and to ports, and destination (CIDR range, security group,
         * or prefix list). For the TCP and UDP protocols, you must also specify the
         * destination port or range of ports. For the ICMP protocol, you must also specify
         * the ICMP type and code. If the security group rule has a description, you do not
         * need to specify the description to revoke the rule.</p> <p>[Default VPC] If the
         * values you specify do not match the existing rule's values, no error is
         * returned, and the output describes the security group rules that were not
         * revoked.</p> <p>Amazon Web Services recommends that you describe the security
         * group to verify that the rules were removed.</p> <p>Rule changes are propagated
         * to instances within the security group as quickly as possible. However, a small
         * delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSecurityGroupEgressOutcome RevokeSecurityGroupEgress(const Model::RevokeSecurityGroupEgressRequest& request) const;

        /**
         * A Callable wrapper for RevokeSecurityGroupEgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSecurityGroupEgressOutcomeCallable RevokeSecurityGroupEgressCallable(const Model::RevokeSecurityGroupEgressRequest& request) const;

        /**
         * An Async wrapper for RevokeSecurityGroupEgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSecurityGroupEgressAsync(const Model::RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified inbound (ingress) rules from a security group.</p>
         * <p>You can specify rules using either rule IDs or security group rule
         * properties. If you use rule properties, the values that you specify (for
         * example, ports) must match the existing rule's values exactly. Each rule has a
         * protocol, from and to ports, and source (CIDR range, security group, or prefix
         * list). For the TCP and UDP protocols, you must also specify the destination port
         * or range of ports. For the ICMP protocol, you must also specify the ICMP type
         * and code. If the security group rule has a description, you do not need to
         * specify the description to revoke the rule.</p> <p>[EC2-Classic, default VPC] If
         * the values you specify do not match the existing rule's values, no error is
         * returned, and the output describes the security group rules that were not
         * revoked.</p> <p>Amazon Web Services recommends that you describe the security
         * group to verify that the rules were removed.</p> <p>Rule changes are propagated
         * to instances within the security group as quickly as possible. However, a small
         * delay might occur.</p>  <p>We are retiring EC2-Classic. We recommend that
         * you migrate from EC2-Classic to a VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSecurityGroupIngressOutcome RevokeSecurityGroupIngress(const Model::RevokeSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSecurityGroupIngressOutcomeCallable RevokeSecurityGroupIngressCallable(const Model::RevokeSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for RevokeSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSecurityGroupIngressAsync(const Model::RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified number of instances using an AMI for which you have
         * permissions.</p> <p>You can specify a number of options, or leave the default
         * options. The following rules apply:</p> <ul> <li> <p>[EC2-VPC] If you don't
         * specify a subnet ID, we choose a default subnet from your default VPC for you.
         * If you don't have a default VPC, you must specify a subnet ID in the
         * request.</p> </li> <li> <p>[EC2-Classic] If don't specify an Availability Zone,
         * we choose one for you.</p> </li> <li> <p>Some instance types must be launched
         * into a VPC. If you do not have a default VPC, or if you do not specify a subnet
         * ID, the request fails. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-vpc.html#vpc-only-instance-types">Instance
         * types available only in a VPC</a>.</p> </li> <li> <p>[EC2-VPC] All instances
         * have a network interface with a primary private IPv4 address. If you don't
         * specify this address, we choose one from the IPv4 range of your subnet.</p>
         * </li> <li> <p>Not all instance types support IPv6 addresses. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * types</a>.</p> </li> <li> <p>If you don't specify a security group ID, we use
         * the default security group. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Security
         * groups</a>.</p> </li> <li> <p>If any of the AMIs have a product code attached
         * for which the user has not subscribed, the request fails.</p> </li> </ul> <p>You
         * can create a <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
         * template</a>, which is a resource that contains the parameters to launch an
         * instance. When you launch an instance using <a>RunInstances</a>, you can specify
         * the launch template instead of specifying the launch parameters.</p> <p>To
         * ensure faster instance launches, break up large requests into smaller batches.
         * For example, create five separate launch requests for 100 instances each instead
         * of one launch request for 500 instances.</p> <p>An instance is ready for you to
         * use when it's in the <code>running</code> state. You can check the state of your
         * instance using <a>DescribeInstances</a>. You can tag instances and EBS volumes
         * during launch, after launch, or both. For more information, see
         * <a>CreateTags</a> and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a>.</p> <p>Linux instances have access to the public
         * key of the key pair at boot. You can use this key to provide secure access to
         * the instance. Amazon EC2 public images use this feature to provide secure access
         * without passwords. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * pairs</a>.</p> <p>For troubleshooting, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_InstanceStraightToTerminated.html">What
         * to do if an instance immediately terminates</a>, and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesConnecting.html">Troubleshooting
         * connecting to your instance</a>.</p>  <p>We are retiring EC2-Classic. We
         * recommend that you migrate from EC2-Classic to a VPC. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RunInstancesOutcome RunInstances(const Model::RunInstancesRequest& request) const;

        /**
         * A Callable wrapper for RunInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request) const;

        /**
         * An Async wrapper for RunInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified Scheduled Instances.</p> <p>Before you can launch a
         * Scheduled Instance, you must purchase it and obtain an identifier using
         * <a>PurchaseScheduledInstances</a>.</p> <p>You must launch a Scheduled Instance
         * during its scheduled time period. You can't stop or reboot a Scheduled Instance,
         * but you can terminate it as needed. If you terminate a Scheduled Instance before
         * the current scheduled time period ends, you can launch it again after a few
         * minutes. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-scheduled-instances.html">Scheduled
         * Instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RunScheduledInstancesOutcome RunScheduledInstances(const Model::RunScheduledInstancesRequest& request) const;

        /**
         * A Callable wrapper for RunScheduledInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunScheduledInstancesOutcomeCallable RunScheduledInstancesCallable(const Model::RunScheduledInstancesRequest& request) const;

        /**
         * An Async wrapper for RunScheduledInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunScheduledInstancesAsync(const Model::RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for routes in the specified local gateway route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchLocalGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchLocalGatewayRoutesOutcome SearchLocalGatewayRoutes(const Model::SearchLocalGatewayRoutesRequest& request) const;

        /**
         * A Callable wrapper for SearchLocalGatewayRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchLocalGatewayRoutesOutcomeCallable SearchLocalGatewayRoutesCallable(const Model::SearchLocalGatewayRoutesRequest& request) const;

        /**
         * An Async wrapper for SearchLocalGatewayRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchLocalGatewayRoutesAsync(const Model::SearchLocalGatewayRoutesRequest& request, const SearchLocalGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches one or more transit gateway multicast groups and returns the group
         * membership information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchTransitGatewayMulticastGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTransitGatewayMulticastGroupsOutcome SearchTransitGatewayMulticastGroups(const Model::SearchTransitGatewayMulticastGroupsRequest& request) const;

        /**
         * A Callable wrapper for SearchTransitGatewayMulticastGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchTransitGatewayMulticastGroupsOutcomeCallable SearchTransitGatewayMulticastGroupsCallable(const Model::SearchTransitGatewayMulticastGroupsRequest& request) const;

        /**
         * An Async wrapper for SearchTransitGatewayMulticastGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTransitGatewayMulticastGroupsAsync(const Model::SearchTransitGatewayMulticastGroupsRequest& request, const SearchTransitGatewayMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for routes in the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchTransitGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTransitGatewayRoutesOutcome SearchTransitGatewayRoutes(const Model::SearchTransitGatewayRoutesRequest& request) const;

        /**
         * A Callable wrapper for SearchTransitGatewayRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchTransitGatewayRoutesOutcomeCallable SearchTransitGatewayRoutesCallable(const Model::SearchTransitGatewayRoutesRequest& request) const;

        /**
         * An Async wrapper for SearchTransitGatewayRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTransitGatewayRoutesAsync(const Model::SearchTransitGatewayRoutesRequest& request, const SearchTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a diagnostic interrupt to the specified Amazon EC2 instance to trigger
         * a <i>kernel panic</i> (on Linux instances), or a <i>blue screen</i>/<i>stop
         * error</i> (on Windows instances). For instances based on Intel and AMD
         * processors, the interrupt is received as a <i>non-maskable interrupt</i>
         * (NMI).</p> <p>In general, the operating system crashes and reboots when a kernel
         * panic or stop error is triggered. The operating system can also be configured to
         * perform diagnostic tasks, such as generating a memory dump file, loading a
         * secondary kernel, or obtaining a call trace.</p> <p>Before sending a diagnostic
         * interrupt to your instance, ensure that its operating system is configured to
         * perform the required diagnostic tasks.</p> <p>For more information about
         * configuring your operating system to generate a crash dump when a kernel panic
         * or stop error occurs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/diagnostic-interrupt.html">Send
         * a diagnostic interrupt (for advanced users)</a> (Linux instances) or <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/diagnostic-interrupt.html">Send
         * a diagnostic interrupt (for advanced users)</a> (Windows
         * instances).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SendDiagnosticInterrupt">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDiagnosticInterruptOutcome SendDiagnosticInterrupt(const Model::SendDiagnosticInterruptRequest& request) const;

        /**
         * A Callable wrapper for SendDiagnosticInterrupt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendDiagnosticInterruptOutcomeCallable SendDiagnosticInterruptCallable(const Model::SendDiagnosticInterruptRequest& request) const;

        /**
         * An Async wrapper for SendDiagnosticInterrupt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendDiagnosticInterruptAsync(const Model::SendDiagnosticInterruptRequest& request, const SendDiagnosticInterruptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an Amazon EBS-backed instance that you've previously stopped.</p>
         * <p>Instances that use Amazon EBS volumes as their root devices can be quickly
         * stopped and started. When an instance is stopped, the compute resources are
         * released and you are not billed for instance usage. However, your root partition
         * Amazon EBS volume remains and continues to persist your data, and you are
         * charged for Amazon EBS volume usage. You can restart your instance at any time.
         * Every time you start your instance, Amazon EC2 charges a one-minute minimum for
         * instance usage, and thereafter charges per second for instance usage.</p>
         * <p>Before stopping an instance, make sure it is in a state from which it can be
         * restarted. Stopping an instance does not preserve data stored in RAM.</p>
         * <p>Performing this operation on an instance that uses an instance store as its
         * root device returns an error.</p> <p>If you attempt to start a T3 instance with
         * <code>host</code> tenancy and the <code>unlimted</code> CPU credit option, the
         * request fails. The <code>unlimited</code> CPU credit option is not supported on
         * Dedicated Hosts. Before you start the instance, either change its CPU credit
         * option to <code>standard</code>, or change its tenancy to <code>default</code>
         * or <code>dedicated</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stop
         * and start your instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstancesOutcome StartInstances(const Model::StartInstancesRequest& request) const;

        /**
         * A Callable wrapper for StartInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request) const;

        /**
         * An Async wrapper for StartInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts analyzing the specified Network Access Scope.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartNetworkInsightsAccessScopeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNetworkInsightsAccessScopeAnalysisOutcome StartNetworkInsightsAccessScopeAnalysis(const Model::StartNetworkInsightsAccessScopeAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartNetworkInsightsAccessScopeAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNetworkInsightsAccessScopeAnalysisOutcomeCallable StartNetworkInsightsAccessScopeAnalysisCallable(const Model::StartNetworkInsightsAccessScopeAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartNetworkInsightsAccessScopeAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNetworkInsightsAccessScopeAnalysisAsync(const Model::StartNetworkInsightsAccessScopeAnalysisRequest& request, const StartNetworkInsightsAccessScopeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts analyzing the specified path. If the path is reachable, the operation
         * returns the shortest feasible path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartNetworkInsightsAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNetworkInsightsAnalysisOutcome StartNetworkInsightsAnalysis(const Model::StartNetworkInsightsAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartNetworkInsightsAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNetworkInsightsAnalysisOutcomeCallable StartNetworkInsightsAnalysisCallable(const Model::StartNetworkInsightsAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartNetworkInsightsAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNetworkInsightsAnalysisAsync(const Model::StartNetworkInsightsAnalysisRequest& request, const StartNetworkInsightsAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the verification process to prove that the service provider owns
         * the private DNS name domain for the endpoint service.</p> <p>The service
         * provider must successfully perform the verification before the consumer can use
         * the name to access the service.</p> <p>Before the service provider runs this
         * command, they must add a record to the DNS server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartVpcEndpointServicePrivateDnsVerification">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVpcEndpointServicePrivateDnsVerificationOutcome StartVpcEndpointServicePrivateDnsVerification(const Model::StartVpcEndpointServicePrivateDnsVerificationRequest& request) const;

        /**
         * A Callable wrapper for StartVpcEndpointServicePrivateDnsVerification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartVpcEndpointServicePrivateDnsVerificationOutcomeCallable StartVpcEndpointServicePrivateDnsVerificationCallable(const Model::StartVpcEndpointServicePrivateDnsVerificationRequest& request) const;

        /**
         * An Async wrapper for StartVpcEndpointServicePrivateDnsVerification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartVpcEndpointServicePrivateDnsVerificationAsync(const Model::StartVpcEndpointServicePrivateDnsVerificationRequest& request, const StartVpcEndpointServicePrivateDnsVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an Amazon EBS-backed instance. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stop
         * and start your instance</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>You can
         * use the Stop action to hibernate an instance if the instance is <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html#enabling-hibernation">enabled
         * for hibernation</a> and it meets the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html#hibernating-prerequisites">hibernation
         * prerequisites</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
         * your instance</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>We don't charge
         * usage for a stopped instance, or data transfer fees; however, your root
         * partition Amazon EBS volume remains and continues to persist your data, and you
         * are charged for Amazon EBS volume usage. Every time you start your instance,
         * Amazon EC2 charges a one-minute minimum for instance usage, and thereafter
         * charges per second for instance usage.</p> <p>You can't stop or hibernate
         * instance store-backed instances. You can't use the Stop action to hibernate Spot
         * Instances, but you can specify that Amazon EC2 should hibernate Spot Instances
         * when they are interrupted. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-interruptions.html#hibernate-spot-instances">Hibernating
         * interrupted Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>When
         * you stop or hibernate an instance, we shut it down. You can restart your
         * instance at any time. Before stopping or hibernating an instance, make sure it
         * is in a state from which it can be restarted. Stopping an instance does not
         * preserve data stored in RAM, but hibernating an instance does preserve data
         * stored in RAM. If an instance cannot hibernate successfully, a normal shutdown
         * occurs.</p> <p>Stopping and hibernating an instance is different to rebooting or
         * terminating it. For example, when you stop or hibernate an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, the root device and any other devices attached during the
         * instance launch are automatically deleted. For more information about the
         * differences between rebooting, stopping, hibernating, and terminating instances,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * lifecycle</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>When you stop an
         * instance, we attempt to shut it down forcibly after a short while. If your
         * instance appears stuck in the stopping state after a period of time, there may
         * be an issue with the underlying host computer. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshoot
         * stopping your instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StopInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstancesOutcome StopInstances(const Model::StopInstancesRequest& request) const;

        /**
         * A Callable wrapper for StopInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request) const;

        /**
         * An Async wrapper for StopInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates active Client VPN endpoint connections. This action can be used to
         * terminate a specific client connection, or up to five connections established by
         * a specific user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateClientVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateClientVpnConnectionsOutcome TerminateClientVpnConnections(const Model::TerminateClientVpnConnectionsRequest& request) const;

        /**
         * A Callable wrapper for TerminateClientVpnConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateClientVpnConnectionsOutcomeCallable TerminateClientVpnConnectionsCallable(const Model::TerminateClientVpnConnectionsRequest& request) const;

        /**
         * An Async wrapper for TerminateClientVpnConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateClientVpnConnectionsAsync(const Model::TerminateClientVpnConnectionsRequest& request, const TerminateClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shuts down the specified instances. This operation is idempotent; if you
         * terminate an instance more than once, each call succeeds. </p> <p>If you specify
         * multiple instances and the request fails (for example, because of a single
         * incorrect instance ID), none of the instances are terminated.</p> <p>If you
         * terminate multiple instances across multiple Availability Zones, and one or more
         * of the specified instances are enabled for termination protection, the request
         * fails with the following results:</p> <ul> <li> <p>The specified instances that
         * are in the same Availability Zone as the protected instance are not
         * terminated.</p> </li> <li> <p>The specified instances that are in different
         * Availability Zones, where no other specified instances are protected, are
         * successfully terminated.</p> </li> </ul> <p>For example, say you have the
         * following instances:</p> <ul> <li> <p>Instance A: <code>us-east-1a</code>; Not
         * protected</p> </li> <li> <p>Instance B: <code>us-east-1a</code>; Not
         * protected</p> </li> <li> <p>Instance C: <code>us-east-1b</code>; Protected</p>
         * </li> <li> <p>Instance D: <code>us-east-1b</code>; not protected</p> </li> </ul>
         * <p>If you attempt to terminate all of these instances in the same request, the
         * request reports failure with the following results:</p> <ul> <li> <p>Instance A
         * and Instance B are successfully terminated because none of the specified
         * instances in <code>us-east-1a</code> are enabled for termination protection.</p>
         * </li> <li> <p>Instance C and Instance D fail to terminate because at least one
         * of the specified instances in <code>us-east-1b</code> (Instance C) is enabled
         * for termination protection.</p> </li> </ul> <p>Terminated instances remain
         * visible after termination (for approximately one hour).</p> <p>By default,
         * Amazon EC2 deletes all EBS volumes that were attached when the instance
         * launched. Volumes attached after instance launch continue running.</p> <p>You
         * can stop, start, and terminate EBS-backed instances. You can only terminate
         * instance store-backed instances. What happens to an instance differs if you stop
         * it or terminate it. For example, when you stop an instance, the root device and
         * any other devices attached to the instance persist. When you terminate an
         * instance, any attached EBS volumes with the <code>DeleteOnTermination</code>
         * block device mapping parameter set to <code>true</code> are automatically
         * deleted. For more information about the differences between stopping and
         * terminating instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * lifecycle</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For more information
         * about troubleshooting, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesShuttingDown.html">Troubleshooting
         * terminating your instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest& request) const;

        /**
         * A Callable wrapper for TerminateInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request) const;

        /**
         * An Async wrapper for TerminateInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns one or more IPv6 addresses IPv4 Prefix Delegation prefixes from a
         * network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignIpv6Addresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignIpv6AddressesOutcome UnassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest& request) const;

        /**
         * A Callable wrapper for UnassignIpv6Addresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignIpv6AddressesOutcomeCallable UnassignIpv6AddressesCallable(const Model::UnassignIpv6AddressesRequest& request) const;

        /**
         * An Async wrapper for UnassignIpv6Addresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignIpv6AddressesAsync(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns one or more secondary private IP addresses, or IPv4 Prefix
         * Delegation prefixes from a network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest& request) const;

        /**
         * A Callable wrapper for UnassignPrivateIpAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request) const;

        /**
         * An Async wrapper for UnassignPrivateIpAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables detailed monitoring for a running instance. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * your instances and volumes</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnmonitorInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::UnmonitorInstancesOutcome UnmonitorInstances(const Model::UnmonitorInstancesRequest& request) const;

        /**
         * A Callable wrapper for UnmonitorInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnmonitorInstancesOutcomeCallable UnmonitorInstancesCallable(const Model::UnmonitorInstancesRequest& request) const;

        /**
         * An Async wrapper for UnmonitorInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnmonitorInstancesAsync(const Model::UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[VPC only] Updates the description of an egress (outbound) security group
         * rule. You can replace an existing description, or add a description to a rule
         * that did not have one previously. You can remove a description for a security
         * group rule by omitting the description parameter in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsEgressOutcome UpdateSecurityGroupRuleDescriptionsEgress(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityGroupRuleDescriptionsEgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable UpdateSecurityGroupRuleDescriptionsEgressCallable(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityGroupRuleDescriptionsEgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityGroupRuleDescriptionsEgressAsync(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of an ingress (inbound) security group rule. You can
         * replace an existing description, or add a description to a rule that did not
         * have one previously. You can remove a description for a security group rule by
         * omitting the description parameter in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsIngressOutcome UpdateSecurityGroupRuleDescriptionsIngress(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityGroupRuleDescriptionsIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable UpdateSecurityGroupRuleDescriptionsIngressCallable(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityGroupRuleDescriptionsIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityGroupRuleDescriptionsIngressAsync(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops advertising an address range that is provisioned as an address
         * pool.</p> <p>You can perform this operation at most once every 10 seconds, even
         * if you specify different address ranges each time.</p> <p>It can take a few
         * minutes before traffic to the specified addresses stops routing to Amazon Web
         * Services because of BGP propagation delays.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/WithdrawByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::WithdrawByoipCidrOutcome WithdrawByoipCidr(const Model::WithdrawByoipCidrRequest& request) const;

        /**
         * A Callable wrapper for WithdrawByoipCidr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::WithdrawByoipCidrOutcomeCallable WithdrawByoipCidrCallable(const Model::WithdrawByoipCidrRequest& request) const;

        /**
         * An Async wrapper for WithdrawByoipCidr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void WithdrawByoipCidrAsync(const Model::WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<EC2EndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<EC2Client>;
        void init(const EC2ClientConfiguration& clientConfiguration);

        EC2ClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<EC2EndpointProviderBase> m_endpointProvider;
  };

} // namespace EC2
} // namespace Aws
