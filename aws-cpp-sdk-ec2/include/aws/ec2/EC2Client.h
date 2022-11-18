/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/EC2ServiceClientModel.h>
#include <aws/ec2/EC2LegacyAsyncMacros.h>

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
  class AWS_EC2_API EC2Client : public Aws::Client::AWSXMLClient
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
         * <p>Accepts an Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#using-instance-addressing-eips-transfer-accept">Accept
         * a transferred Elastic IP address</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAddressTransferOutcome AcceptAddressTransfer(const Model::AcceptAddressTransferRequest& request) const;


        /**
         * <p>Accepts the Convertible Reserved Instance exchange quote described in the
         * <a>GetReservedInstancesExchangeQuote</a> call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptReservedInstancesExchangeQuoteOutcome AcceptReservedInstancesExchangeQuote(const Model::AcceptReservedInstancesExchangeQuoteRequest& request) const;


        /**
         * <p>Accepts a request to associate subnets with a transit gateway multicast
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptTransitGatewayMulticastDomainAssociationsOutcome AcceptTransitGatewayMulticastDomainAssociations(const Model::AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const;


        /**
         * <p>Accepts a transit gateway peering attachment request. The peering attachment
         * must be in the <code>pendingAcceptance</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptTransitGatewayPeeringAttachmentOutcome AcceptTransitGatewayPeeringAttachment(const Model::AcceptTransitGatewayPeeringAttachmentRequest& request) const;


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
         * <p>Accepts one or more interface VPC endpoint connection requests to your VPC
         * endpoint service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptVpcEndpointConnectionsOutcome AcceptVpcEndpointConnections(const Model::AcceptVpcEndpointConnectionsRequest& request) const;


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
         * <p>Allocates a Dedicated Host to your account. At a minimum, specify the
         * supported instance type or instance family, the Availability Zone in which to
         * allocate the host, and the number of hosts to allocate.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostsOutcome AllocateHosts(const Model::AllocateHostsRequest& request) const;


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
         * <p>Applies a security group to the association between the target network and
         * the Client VPN endpoint. This action replaces the existing security groups with
         * the specified security groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplySecurityGroupsToClientVpnTargetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplySecurityGroupsToClientVpnTargetNetworkOutcome ApplySecurityGroupsToClientVpnTargetNetwork(const Model::ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const;


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
         * <p>Associates an IAM instance profile with a running or stopped instance. You
         * cannot associate more than one IAM instance profile with an
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIamInstanceProfileOutcome AssociateIamInstanceProfile(const Model::AssociateIamInstanceProfileRequest& request) const;


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
         * <p>Associates a CIDR block with your subnet. You can only associate a single
         * IPv6 CIDR block with your subnet. An IPv6 CIDR block must have a prefix length
         * of /64.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetCidrBlockOutcome AssociateSubnetCidrBlock(const Model::AssociateSubnetCidrBlockRequest& request) const;


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
         * <p>Associates the specified transit gateway attachment with a transit gateway
         * policy table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayPolicyTableOutcome AssociateTransitGatewayPolicyTable(const Model::AssociateTransitGatewayPolicyTableRequest& request) const;


        /**
         * <p>Associates the specified attachment with the specified transit gateway route
         * table. You can associate only one route table with an attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayRouteTableOutcome AssociateTransitGatewayRouteTable(const Model::AssociateTransitGatewayRouteTableRequest& request) const;


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
         * <p>Attaches a network interface to an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest& request) const;


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
         * <p>Adds an ingress authorization rule to a Client VPN endpoint. Ingress
         * authorization rules act as firewall rules that grant access to networks. You
         * must configure ingress authorization rules to enable clients to access resources
         * in Amazon Web Services or on-premises networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeClientVpnIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeClientVpnIngressOutcome AuthorizeClientVpnIngress(const Model::AuthorizeClientVpnIngressRequest& request) const;


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
         * <p>Cancels a bundling operation for an instance store-backed Windows
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBundleTaskOutcome CancelBundleTask(const Model::CancelBundleTaskRequest& request) const;


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
         * <p>Cancels an active export task. The request removes all artifacts of the
         * export, including any partially-created Amazon S3 objects. If the export task is
         * complete or is in the process of transferring the final disk image, the command
         * fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;


        /**
         * <p>Removes your Amazon Web Services account from the launch permissions for the
         * specified AMI. For more information, see <a
         * href="https://docs.aws.amazon.com/">Cancel sharing an AMI with your Amazon Web
         * Services account</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImageLaunchPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImageLaunchPermissionOutcome CancelImageLaunchPermission(const Model::CancelImageLaunchPermissionRequest& request) const;


        /**
         * <p>Cancels an in-process import virtual machine or import snapshot
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImportTaskOutcome CancelImportTask(const Model::CancelImportTaskRequest& request) const;


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
         * <p>Cancels one or more Spot Instance requests.</p>  <p>Canceling a
         * Spot Instance request does not terminate running Spot Instances associated with
         * the request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSpotInstanceRequestsOutcome CancelSpotInstanceRequests(const Model::CancelSpotInstanceRequestsRequest& request) const;


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
         * <p>Copies the specified Amazon FPGA Image (AFI) to the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyFpgaImageOutcome CopyFpgaImage(const Model::CopyFpgaImageRequest& request) const;


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
         * Amazon EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p> <p>For more information about the prerequisites and
         * limits when copying an AMI, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copying
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;


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
         * <p>Creates a Capacity Reservation Fleet. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/work-with-cr-fleets.html#create-crfleet">Create
         * a Capacity Reservation Fleet</a> in the Amazon EC2 User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCapacityReservationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapacityReservationFleetOutcome CreateCapacityReservationFleet(const Model::CreateCapacityReservationFleetRequest& request) const;


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
         * <p>Creates a Client VPN endpoint. A Client VPN endpoint is the resource you
         * create and configure to enable and manage client VPN sessions. It is the
         * destination endpoint at which all client VPN sessions are
         * terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClientVpnEndpointOutcome CreateClientVpnEndpoint(const Model::CreateClientVpnEndpointRequest& request) const;


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
         * <p> Creates a range of customer-owned IP addresses. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoipCidrOutcome CreateCoipCidr(const Model::CreateCoipCidrRequest& request) const;


        /**
         * <p> Creates a pool of customer-owned IP (CoIP) addresses. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCoipPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoipPoolOutcome CreateCoipPool(const Model::CreateCoipPoolRequest& request) const;


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
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
         * Amazon EBS-Backed Linux AMIs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;


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
         * <p>Creates a static route for the specified local gateway route table. You must
         * specify one of the following targets: </p> <ul> <li> <p>
         * <code>LocalGatewayVirtualInterfaceGroupId</code> </p> </li> <li> <p>
         * <code>NetworkInterfaceId</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteOutcome CreateLocalGatewayRoute(const Model::CreateLocalGatewayRouteRequest& request) const;


        /**
         * <p> Creates a local gateway route table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableOutcome CreateLocalGatewayRouteTable(const Model::CreateLocalGatewayRouteTableRequest& request) const;


        /**
         * <p> Creates a local gateway route table virtual interface group association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;


        /**
         * <p>Associates the specified VPC with the specified local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateLocalGatewayRouteTableVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocalGatewayRouteTableVpcAssociationOutcome CreateLocalGatewayRouteTableVpcAssociation(const Model::CreateLocalGatewayRouteTableVpcAssociationRequest& request) const;


        /**
         * <p>Creates a managed prefix list. You can specify one or more entries for the
         * prefix list. Each entry consists of a CIDR block and an optional
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateManagedPrefixList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedPrefixListOutcome CreateManagedPrefixList(const Model::CreateManagedPrefixListRequest& request) const;


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
         * <p>Grants an Amazon Web Services-authorized account permission to attach the
         * specified network interface to an instance in their account.</p> <p>You can
         * grant permission to a single Amazon Web Services account only, and only one
         * account at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInterfacePermissionOutcome CreateNetworkInterfacePermission(const Model::CreateNetworkInterfacePermissionRequest& request) const;


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
         * <p>Replaces the EBS-backed root volume for a <code>running</code> instance with
         * a new volume that is restored to the original root volume's launch state, that
         * is restored to a specific snapshot taken from the original root volume, or that
         * is restored from an AMI that has the same key characteristics as that of the
         * instance.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-restoring-volume.html#replace-root">Replace
         * a root volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReplaceRootVolumeTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplaceRootVolumeTaskOutcome CreateReplaceRootVolumeTask(const Model::CreateReplaceRootVolumeTaskRequest& request) const;


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
         * <p>Starts a task that restores an AMI from an Amazon S3 object that was
         * previously created by using <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateStoreImageTask.html">CreateStoreImageTask</a>.</p>
         * <p>To use this API, you must have the required permissions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html#ami-s3-permissions">Permissions
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRestoreImageTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestoreImageTaskOutcome CreateRestoreImageTask(const Model::CreateRestoreImageTaskRequest& request) const;


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
         * <p>Stores an AMI as a single object in an Amazon S3 bucket.</p> <p>To use this
         * API, you must have the required permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html#ami-s3-permissions">Permissions
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateStoreImageTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStoreImageTaskOutcome CreateStoreImageTask(const Model::CreateStoreImageTaskRequest& request) const;


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
         * <p>Creates a Traffic Mirror filter rule.</p> <p>A Traffic Mirror rule defines
         * the Traffic Mirror source traffic to mirror.</p> <p>You need the Traffic Mirror
         * filter ID when you create the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficMirrorFilterRuleOutcome CreateTrafficMirrorFilterRule(const Model::CreateTrafficMirrorFilterRuleRequest& request) const;


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
         * <p>Creates a transit gateway policy table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPolicyTableOutcome CreateTransitGatewayPolicyTable(const Model::CreateTransitGatewayPolicyTableRequest& request) const;


        /**
         * <p>Creates a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPrefixListReferenceOutcome CreateTransitGatewayPrefixListReference(const Model::CreateTransitGatewayPrefixListReferenceRequest& request) const;


        /**
         * <p>Creates a static route for the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteOutcome CreateTransitGatewayRoute(const Model::CreateTransitGatewayRouteRequest& request) const;


        /**
         * <p>Creates a route table for the specified transit gateway.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableOutcome CreateTransitGatewayRouteTable(const Model::CreateTransitGatewayRouteTableRequest& request) const;


        /**
         * <p>Advertises a new transit gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayRouteTableAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableAnnouncementOutcome CreateTransitGatewayRouteTableAnnouncement(const Model::CreateTransitGatewayRouteTableAnnouncementRequest& request) const;


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
         * <p>Deletes the specified Client VPN endpoint. You must disassociate all target
         * networks before you can delete a Client VPN endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientVpnEndpointOutcome DeleteClientVpnEndpoint(const Model::DeleteClientVpnEndpointRequest& request) const;


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
         * <p> Deletes a range of customer-owned IP addresses. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoipCidrOutcome DeleteCoipCidr(const Model::DeleteCoipCidrRequest& request) const;


        /**
         * <p>Deletes a pool of customer-owned IP (CoIP) addresses. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCoipPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoipPoolOutcome DeleteCoipPool(const Model::DeleteCoipPoolRequest& request) const;


        /**
         * <p>Deletes the specified customer gateway. You must delete the VPN connection
         * before you can delete the customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest& request) const;


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
         * <p>Deletes an egress-only internet gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEgressOnlyInternetGatewayOutcome DeleteEgressOnlyInternetGateway(const Model::DeleteEgressOnlyInternetGatewayRequest& request) const;


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
         * <p>Deletes one or more flow logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowLogsOutcome DeleteFlowLogs(const Model::DeleteFlowLogsRequest& request) const;


        /**
         * <p>Deletes the specified Amazon FPGA Image (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFpgaImageOutcome DeleteFpgaImage(const Model::DeleteFpgaImageRequest& request) const;


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
         * <p>Deletes the specified internet gateway. You must detach the internet gateway
         * from the VPC before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInternetGatewayOutcome DeleteInternetGateway(const Model::DeleteInternetGatewayRequest& request) const;


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
         * <p>Deletes the specified key pair, by removing the public key from Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;


        /**
         * <p>Deletes a launch template. Deleting a launch template deletes all of its
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLaunchTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchTemplateOutcome DeleteLaunchTemplate(const Model::DeleteLaunchTemplateRequest& request) const;


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
         * <p>Deletes the specified route from the specified local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteOutcome DeleteLocalGatewayRoute(const Model::DeleteLocalGatewayRouteRequest& request) const;


        /**
         * <p> Deletes a local gateway route table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableOutcome DeleteLocalGatewayRouteTable(const Model::DeleteLocalGatewayRouteTableRequest& request) const;


        /**
         * <p> Deletes a local gateway route table virtual interface group association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const;


        /**
         * <p>Deletes the specified association between a VPC and local gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLocalGatewayRouteTableVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocalGatewayRouteTableVpcAssociationOutcome DeleteLocalGatewayRouteTableVpcAssociation(const Model::DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const;


        /**
         * <p>Deletes the specified managed prefix list. You must first remove all
         * references to the prefix list in your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteManagedPrefixList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedPrefixListOutcome DeleteManagedPrefixList(const Model::DeleteManagedPrefixListRequest& request) const;


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
         * <p>Deletes the specified network ACL. You can't delete the ACL if it's
         * associated with any subnets. You can't delete the default network
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAcl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclOutcome DeleteNetworkAcl(const Model::DeleteNetworkAclRequest& request) const;


        /**
         * <p>Deletes the specified ingress or egress entry (rule) from the specified
         * network ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclEntryOutcome DeleteNetworkAclEntry(const Model::DeleteNetworkAclEntryRequest& request) const;


        /**
         * <p>Deletes the specified Network Access Scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAccessScopeOutcome DeleteNetworkInsightsAccessScope(const Model::DeleteNetworkInsightsAccessScopeRequest& request) const;


        /**
         * <p>Deletes the specified Network Access Scope analysis.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAccessScopeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAccessScopeAnalysisOutcome DeleteNetworkInsightsAccessScopeAnalysis(const Model::DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const;


        /**
         * <p>Deletes the specified network insights analysis.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsAnalysisOutcome DeleteNetworkInsightsAnalysis(const Model::DeleteNetworkInsightsAnalysisRequest& request) const;


        /**
         * <p>Deletes the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInsightsPath">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInsightsPathOutcome DeleteNetworkInsightsPath(const Model::DeleteNetworkInsightsPathRequest& request) const;


        /**
         * <p>Deletes the specified network interface. You must detach the network
         * interface before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest& request) const;


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
         * <p>Delete a public IPv4 pool. A public IPv4 pool is an EC2 IP address pool
         * required for the public IPv4 CIDRs that you own and bring to Amazon Web Services
         * to manage with IPAM. IPv6 addresses you bring to Amazon Web Services, however,
         * use IPAM pools only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePublicIpv4Pool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicIpv4PoolOutcome DeletePublicIpv4Pool(const Model::DeletePublicIpv4PoolRequest& request) const;


        /**
         * <p>Deletes the queued purchases for the specified Reserved
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteQueuedReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedReservedInstancesOutcome DeleteQueuedReservedInstances(const Model::DeleteQueuedReservedInstancesRequest& request) const;


        /**
         * <p>Deletes the specified route from the specified route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRoute">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;


        /**
         * <p>Deletes the specified route table. You must disassociate the route table from
         * any subnets before you can delete it. You can't delete the main route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest& request) const;


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
         * <p>Deletes the data feed for Spot Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpotDatafeedSubscriptionOutcome DeleteSpotDatafeedSubscription(const Model::DeleteSpotDatafeedSubscriptionRequest& request) const;


        /**
         * <p>Deletes the specified subnet. You must terminate all running instances in the
         * subnet before you can delete the subnet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest& request) const;


        /**
         * <p>Deletes a subnet CIDR reservation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnetCidrReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetCidrReservationOutcome DeleteSubnetCidrReservation(const Model::DeleteSubnetCidrReservationRequest& request) const;


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
         * <p>Deletes the specified Traffic Mirror filter.</p> <p>You cannot delete a
         * Traffic Mirror filter that is in use by a Traffic Mirror session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorFilterOutcome DeleteTrafficMirrorFilter(const Model::DeleteTrafficMirrorFilterRequest& request) const;


        /**
         * <p>Deletes the specified Traffic Mirror rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorFilterRuleOutcome DeleteTrafficMirrorFilterRule(const Model::DeleteTrafficMirrorFilterRuleRequest& request) const;


        /**
         * <p>Deletes the specified Traffic Mirror session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorSessionOutcome DeleteTrafficMirrorSession(const Model::DeleteTrafficMirrorSessionRequest& request) const;


        /**
         * <p>Deletes the specified Traffic Mirror target.</p> <p>You cannot delete a
         * Traffic Mirror target that is in use by a Traffic Mirror session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTrafficMirrorTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficMirrorTargetOutcome DeleteTrafficMirrorTarget(const Model::DeleteTrafficMirrorTargetRequest& request) const;


        /**
         * <p>Deletes the specified transit gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayOutcome DeleteTransitGateway(const Model::DeleteTransitGatewayRequest& request) const;


        /**
         * <p>Deletes the specified Connect attachment. You must first delete any Connect
         * peers for the attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayConnectOutcome DeleteTransitGatewayConnect(const Model::DeleteTransitGatewayConnectRequest& request) const;


        /**
         * <p>Deletes the specified Connect peer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayConnectPeerOutcome DeleteTransitGatewayConnectPeer(const Model::DeleteTransitGatewayConnectPeerRequest& request) const;


        /**
         * <p>Deletes the specified transit gateway multicast domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayMulticastDomainOutcome DeleteTransitGatewayMulticastDomain(const Model::DeleteTransitGatewayMulticastDomainRequest& request) const;


        /**
         * <p>Deletes a transit gateway peering attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPeeringAttachmentOutcome DeleteTransitGatewayPeeringAttachment(const Model::DeleteTransitGatewayPeeringAttachmentRequest& request) const;


        /**
         * <p>Deletes the specified transit gateway policy table.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPolicyTableOutcome DeleteTransitGatewayPolicyTable(const Model::DeleteTransitGatewayPolicyTableRequest& request) const;


        /**
         * <p>Deletes a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayPrefixListReferenceOutcome DeleteTransitGatewayPrefixListReference(const Model::DeleteTransitGatewayPrefixListReferenceRequest& request) const;


        /**
         * <p>Deletes the specified route from the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteOutcome DeleteTransitGatewayRoute(const Model::DeleteTransitGatewayRouteRequest& request) const;


        /**
         * <p>Deletes the specified transit gateway route table. You must disassociate the
         * route table from any transit gateway route tables before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteTableOutcome DeleteTransitGatewayRouteTable(const Model::DeleteTransitGatewayRouteTableRequest& request) const;


        /**
         * <p>Advertises to the transit gateway that a transit gateway route table is
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayRouteTableAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayRouteTableAnnouncementOutcome DeleteTransitGatewayRouteTableAnnouncement(const Model::DeleteTransitGatewayRouteTableAnnouncementRequest& request) const;


        /**
         * <p>Deletes the specified VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransitGatewayVpcAttachmentOutcome DeleteTransitGatewayVpcAttachment(const Model::DeleteTransitGatewayVpcAttachmentRequest& request) const;


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
         * <p>Deletes one or more VPC endpoint connection notifications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpointConnectionNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointConnectionNotificationsOutcome DeleteVpcEndpointConnectionNotifications(const Model::DeleteVpcEndpointConnectionNotificationsRequest& request) const;


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
         * <p>Deletes the specified static route associated with a VPN connection between
         * an existing virtual private gateway and a VPN customer gateway. The static route
         * allows traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnectionRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnConnectionRouteOutcome DeleteVpnConnectionRoute(const Model::DeleteVpnConnectionRouteRequest& request) const;


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
         * <p>Deprovision a CIDR from a public IPv4 pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeprovisionPublicIpv4PoolCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionPublicIpv4PoolCidrOutcome DeprovisionPublicIpv4PoolCidr(const Model::DeprovisionPublicIpv4PoolCidrRequest& request) const;


        /**
         * <p>Deregisters the specified AMI. After you deregister an AMI, it can't be used
         * to launch new instances.</p> <p>If you deregister an AMI that matches a Recycle
         * Bin retention rule, the AMI is retained in the Recycle Bin for the specified
         * retention period. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the Amazon Elastic Compute Cloud User Guide.</p> <p>When you
         * deregister an AMI, it doesn't affect any instances that you've already launched
         * from the AMI. You'll continue to incur usage costs for those instances until you
         * terminate them.</p> <p>When you deregister an Amazon EBS-backed AMI, it doesn't
         * affect the snapshot that was created for the root volume of the instance during
         * the AMI creation process. When you deregister an instance store-backed AMI, it
         * doesn't affect the files that you uploaded to Amazon S3 when you created the
         * AMI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterImageOutcome DeregisterImage(const Model::DeregisterImageRequest& request) const;


        /**
         * <p>Deregisters tag keys to prevent tags that have the specified tag keys from
         * being included in scheduled event notifications for resources in the
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterInstanceEventNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceEventNotificationAttributesOutcome DeregisterInstanceEventNotificationAttributes(const Model::DeregisterInstanceEventNotificationAttributesRequest& request) const;


        /**
         * <p>Deregisters the specified members (network interfaces) from the transit
         * gateway multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterTransitGatewayMulticastGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupMembersOutcome DeregisterTransitGatewayMulticastGroupMembers(const Model::DeregisterTransitGatewayMulticastGroupMembersRequest& request) const;


        /**
         * <p>Deregisters the specified sources (network interfaces) from the transit
         * gateway multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterTransitGatewayMulticastGroupSources">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayMulticastGroupSourcesOutcome DeregisterTransitGatewayMulticastGroupSources(const Model::DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const;


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
         * <p>Describes an Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddressTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressTransfersOutcome DescribeAddressTransfers(const Model::DescribeAddressTransfersRequest& request) const;


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
         * <p>Describes the attributes of the specified Elastic IP addresses. For
         * requirements, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html#Using_Elastic_Addressing_Reverse_DNS">Using
         * reverse DNS for email applications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddressesAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesAttributeOutcome DescribeAddressesAttribute(const Model::DescribeAddressesAttributeRequest& request) const;


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
         * <p>Describes one or more Capacity Reservation Fleets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCapacityReservationFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCapacityReservationFleetsOutcome DescribeCapacityReservationFleets(const Model::DescribeCapacityReservationFleetsRequest& request) const;


        /**
         * <p>Describes one or more of your Capacity Reservations. The results describe
         * only the Capacity Reservations in the Amazon Web Services Region that you're
         * currently using.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCapacityReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCapacityReservationsOutcome DescribeCapacityReservations(const Model::DescribeCapacityReservationsRequest& request) const;


        /**
         * <p>Describes one or more of your carrier gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCarrierGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCarrierGatewaysOutcome DescribeCarrierGateways(const Model::DescribeCarrierGatewaysRequest& request) const;


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
         * <p>Describes the authorization rules for a specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnAuthorizationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnAuthorizationRulesOutcome DescribeClientVpnAuthorizationRules(const Model::DescribeClientVpnAuthorizationRulesRequest& request) const;


        /**
         * <p>Describes active client connections and connections that have been terminated
         * within the last 60 minutes for the specified Client VPN endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnConnectionsOutcome DescribeClientVpnConnections(const Model::DescribeClientVpnConnectionsRequest& request) const;


        /**
         * <p>Describes one or more Client VPN endpoints in the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnEndpointsOutcome DescribeClientVpnEndpoints(const Model::DescribeClientVpnEndpointsRequest& request) const;


        /**
         * <p>Describes the routes for the specified Client VPN endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnRoutesOutcome DescribeClientVpnRoutes(const Model::DescribeClientVpnRoutesRequest& request) const;


        /**
         * <p>Describes the target networks associated with the specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClientVpnTargetNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientVpnTargetNetworksOutcome DescribeClientVpnTargetNetworks(const Model::DescribeClientVpnTargetNetworksRequest& request) const;


        /**
         * <p>Describes the specified customer-owned address pools or all of your
         * customer-owned address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCoipPools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCoipPoolsOutcome DescribeCoipPools(const Model::DescribeCoipPoolsRequest& request) const;


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
         * <p>Describes one or more of your egress-only internet gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeEgressOnlyInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEgressOnlyInternetGatewaysOutcome DescribeEgressOnlyInternetGateways(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) const;


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
         * <p>Describes the specified export image tasks or all of your export image
         * tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportImageTasksOutcome DescribeExportImageTasks(const Model::DescribeExportImageTasksRequest& request) const;


        /**
         * <p>Describes the specified export instance tasks or all of your export instance
         * tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;


        /**
         * <p>Describe details for Windows AMIs that are configured for faster
         * launching.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFastLaunchImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFastLaunchImagesOutcome DescribeFastLaunchImages(const Model::DescribeFastLaunchImagesRequest& request) const;


        /**
         * <p>Describes the state of fast snapshot restores for your
         * snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFastSnapshotRestores">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFastSnapshotRestoresOutcome DescribeFastSnapshotRestores(const Model::DescribeFastSnapshotRestoresRequest& request) const;


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
         * <p>Describes one or more flow logs.</p> <p>To view the published flow log
         * records, you must view the log destination. For example, the CloudWatch Logs log
         * group, the Amazon S3 bucket, or the Kinesis Data Firehose delivery
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowLogsOutcome DescribeFlowLogs(const Model::DescribeFlowLogsRequest& request) const;


        /**
         * <p>Describes the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFpgaImageAttributeOutcome DescribeFpgaImageAttribute(const Model::DescribeFpgaImageAttributeRequest& request) const;


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
         * <p>Describes reservations that are associated with Dedicated Hosts in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostReservationsOutcome DescribeHostReservations(const Model::DescribeHostReservationsRequest& request) const;


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
         * <p>Describes your IAM instance profile associations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIamInstanceProfileAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIamInstanceProfileAssociationsOutcome DescribeIamInstanceProfileAssociations(const Model::DescribeIamInstanceProfileAssociationsRequest& request) const;


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
         * <p>Describes the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageAttributeOutcome DescribeImageAttribute(const Model::DescribeImageAttributeRequest& request) const;


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
         * <p>Displays details about an import virtual machine or import snapshot tasks
         * that are already created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportImageTasksOutcome DescribeImportImageTasks(const Model::DescribeImportImageTasksRequest& request) const;


        /**
         * <p>Describes your import snapshot tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportSnapshotTasksOutcome DescribeImportSnapshotTasks(const Model::DescribeImportSnapshotTasksRequest& request) const;


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
         * <p>Describes the tag keys that are registered to appear in scheduled event
         * notifications for resources in the current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceEventNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceEventNotificationAttributesOutcome DescribeInstanceEventNotificationAttributes(const Model::DescribeInstanceEventNotificationAttributesRequest& request) const;


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
         * <p>Returns a list of all instance types offered. The results can be filtered by
         * location (Region or Availability Zone). If no location is specified, the
         * instance types offered in the current Region are returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceTypeOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypeOfferingsOutcome DescribeInstanceTypeOfferings(const Model::DescribeInstanceTypeOfferingsRequest& request) const;


        /**
         * <p>Describes the details of the instance types that are offered in a location.
         * The results can be filtered by the attributes of the instance
         * types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest& request) const;


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
         * <p>Describes one or more of your internet gateways.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInternetGatewaysOutcome DescribeInternetGateways(const Model::DescribeInternetGatewaysRequest& request) const;


        /**
         * <p>Get information about your IPAM pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpamPools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpamPoolsOutcome DescribeIpamPools(const Model::DescribeIpamPoolsRequest& request) const;


        /**
         * <p>Get information about your IPAM scopes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpamScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpamScopesOutcome DescribeIpamScopes(const Model::DescribeIpamScopesRequest& request) const;


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
         * <p>Describes your IPv6 address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIpv6Pools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpv6PoolsOutcome DescribeIpv6Pools(const Model::DescribeIpv6PoolsRequest& request) const;


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
         * <p>Describes one or more versions of a specified launch template. You can
         * describe all versions, individual versions, or a range of versions. You can also
         * describe all the latest versions or all the default versions of all the launch
         * templates in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLaunchTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchTemplateVersionsOutcome DescribeLaunchTemplateVersions(const Model::DescribeLaunchTemplateVersionsRequest& request) const;


        /**
         * <p>Describes one or more launch templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLaunchTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchTemplatesOutcome DescribeLaunchTemplates(const Model::DescribeLaunchTemplatesRequest& request) const;


        /**
         * <p>Describes the associations between virtual interface groups and local gateway
         * route tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const;


        /**
         * <p>Describes the specified associations between VPCs and local gateway route
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTableVpcAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTableVpcAssociationsOutcome DescribeLocalGatewayRouteTableVpcAssociations(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const;


        /**
         * <p>Describes one or more local gateway route tables. By default, all local
         * gateway route tables are described. Alternatively, you can filter the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayRouteTablesOutcome DescribeLocalGatewayRouteTables(const Model::DescribeLocalGatewayRouteTablesRequest& request) const;


        /**
         * <p>Describes the specified local gateway virtual interface groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayVirtualInterfaceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayVirtualInterfaceGroupsOutcome DescribeLocalGatewayVirtualInterfaceGroups(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const;


        /**
         * <p>Describes the specified local gateway virtual interfaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGatewayVirtualInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewayVirtualInterfacesOutcome DescribeLocalGatewayVirtualInterfaces(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request) const;


        /**
         * <p>Describes one or more local gateways. By default, all local gateways are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeLocalGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocalGatewaysOutcome DescribeLocalGateways(const Model::DescribeLocalGatewaysRequest& request) const;


        /**
         * <p>Describes your managed prefix lists and any Amazon Web Services-managed
         * prefix lists.</p> <p>To view the entries for your prefix list, use
         * <a>GetManagedPrefixListEntries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeManagedPrefixLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedPrefixListsOutcome DescribeManagedPrefixLists(const Model::DescribeManagedPrefixListsRequest& request) const;


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
         * <p>Describes one or more of your NAT gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest& request) const;


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
         * <p>Describes the specified Network Access Scope analyses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAccessScopeAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAccessScopeAnalysesOutcome DescribeNetworkInsightsAccessScopeAnalyses(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const;


        /**
         * <p>Describes the specified Network Access Scopes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAccessScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAccessScopesOutcome DescribeNetworkInsightsAccessScopes(const Model::DescribeNetworkInsightsAccessScopesRequest& request) const;


        /**
         * <p>Describes one or more of your network insights analyses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsAnalysesOutcome DescribeNetworkInsightsAnalyses(const Model::DescribeNetworkInsightsAnalysesRequest& request) const;


        /**
         * <p>Describes one or more of your paths.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInsightsPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInsightsPathsOutcome DescribeNetworkInsightsPaths(const Model::DescribeNetworkInsightsPathsRequest& request) const;


        /**
         * <p>Describes a network interface attribute. You can specify only one attribute
         * at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfaceAttributeOutcome DescribeNetworkInterfaceAttribute(const Model::DescribeNetworkInterfaceAttributeRequest& request) const;


        /**
         * <p>Describes the permissions for your network interfaces. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacePermissionsOutcome DescribeNetworkInterfacePermissions(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;


        /**
         * <p>Describes one or more of your network interfaces.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest& request) const;


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
         * <p>Describes available Amazon Web Services services in a prefix list format,
         * which includes the prefix list name and prefix list ID of the service and the IP
         * address range for the service.</p> <p>We recommend that you use
         * <a>DescribeManagedPrefixLists</a> instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrefixLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePrefixListsOutcome DescribePrefixLists(const Model::DescribePrefixListsRequest& request) const;


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
         * <p>Describes the specified IPv4 address pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePublicIpv4Pools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublicIpv4PoolsOutcome DescribePublicIpv4Pools(const Model::DescribePublicIpv4PoolsRequest& request) const;


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
         * <p>Describes a root volume replacement task. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-restoring-volume.html#replace-root">Replace
         * a root volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReplaceRootVolumeTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplaceRootVolumeTasksOutcome DescribeReplaceRootVolumeTasks(const Model::DescribeReplaceRootVolumeTasksRequest& request) const;


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
         * <p>Describes the specified Scheduled Instances or all your Scheduled
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledInstancesOutcome DescribeScheduledInstances(const Model::DescribeScheduledInstancesRequest& request) const;


        /**
         * <p>[VPC only] Describes the VPCs on the other side of a VPC peering connection
         * that are referencing the security groups you've specified in this
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupReferencesOutcome DescribeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest& request) const;


        /**
         * <p>Describes one or more of your security group rules.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupRulesOutcome DescribeSecurityGroupRules(const Model::DescribeSecurityGroupRulesRequest& request) const;


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
         * <p>Describes the storage tier status of one or more Amazon EBS
         * snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotTierStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotTierStatusOutcome DescribeSnapshotTierStatus(const Model::DescribeSnapshotTierStatusRequest& request) const;


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
         * <p>Describes the data feed for Spot Instances. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance data feed</a> in the <i>Amazon EC2 User Guide for Linux
         * Instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotDatafeedSubscriptionOutcome DescribeSpotDatafeedSubscription(const Model::DescribeSpotDatafeedSubscriptionRequest& request) const;


        /**
         * <p>Describes the running instances for the specified Spot Fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetInstancesOutcome DescribeSpotFleetInstances(const Model::DescribeSpotFleetInstancesRequest& request) const;


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
         * <p>Describes your Spot Fleet requests.</p> <p>Spot Fleet requests are deleted 48
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetRequestsOutcome DescribeSpotFleetRequests(const Model::DescribeSpotFleetRequestsRequest& request) const;


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
         * for storing and restoring AMIs using Amazon S3</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-store-restore.html">Store
         * and restore an AMI using Amazon S3</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStoreImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStoreImageTasksOutcome DescribeStoreImageTasks(const Model::DescribeStoreImageTasksRequest& request) const;


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
         * <p>Describes one or more Traffic Mirror filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorFiltersOutcome DescribeTrafficMirrorFilters(const Model::DescribeTrafficMirrorFiltersRequest& request) const;


        /**
         * <p>Describes one or more Traffic Mirror sessions. By default, all Traffic Mirror
         * sessions are described. Alternatively, you can filter the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorSessionsOutcome DescribeTrafficMirrorSessions(const Model::DescribeTrafficMirrorSessionsRequest& request) const;


        /**
         * <p>Information about one or more Traffic Mirror targets.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTrafficMirrorTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficMirrorTargetsOutcome DescribeTrafficMirrorTargets(const Model::DescribeTrafficMirrorTargetsRequest& request) const;


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
         * <p>Describes one or more Connect peers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayConnectPeers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayConnectPeersOutcome DescribeTransitGatewayConnectPeers(const Model::DescribeTransitGatewayConnectPeersRequest& request) const;


        /**
         * <p>Describes one or more Connect attachments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayConnectsOutcome DescribeTransitGatewayConnects(const Model::DescribeTransitGatewayConnectsRequest& request) const;


        /**
         * <p>Describes one or more transit gateway multicast domains.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayMulticastDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayMulticastDomainsOutcome DescribeTransitGatewayMulticastDomains(const Model::DescribeTransitGatewayMulticastDomainsRequest& request) const;


        /**
         * <p>Describes your transit gateway peering attachments.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayPeeringAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayPeeringAttachmentsOutcome DescribeTransitGatewayPeeringAttachments(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request) const;


        /**
         * <p>Describes one or more transit gateway route policy tables. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayPolicyTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayPolicyTablesOutcome DescribeTransitGatewayPolicyTables(const Model::DescribeTransitGatewayPolicyTablesRequest& request) const;


        /**
         * <p>Describes one or more transit gateway route table
         * advertisements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayRouteTableAnnouncements">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayRouteTableAnnouncementsOutcome DescribeTransitGatewayRouteTableAnnouncements(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const;


        /**
         * <p>Describes one or more transit gateway route tables. By default, all transit
         * gateway route tables are described. Alternatively, you can filter the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayRouteTablesOutcome DescribeTransitGatewayRouteTables(const Model::DescribeTransitGatewayRouteTablesRequest& request) const;


        /**
         * <p>Describes one or more VPC attachments. By default, all VPC attachments are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGatewayVpcAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewayVpcAttachmentsOutcome DescribeTransitGatewayVpcAttachments(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request) const;


        /**
         * <p>Describes one or more transit gateways. By default, all transit gateways are
         * described. Alternatively, you can filter the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTransitGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransitGatewaysOutcome DescribeTransitGateways(const Model::DescribeTransitGatewaysRequest& request) const;


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
         * <p>Describes the specified attribute of the specified VPC. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcAttributeOutcome DescribeVpcAttribute(const Model::DescribeVpcAttributeRequest& request) const;


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
         * <p>Describes the connection notifications for VPC endpoints and VPC endpoint
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointConnectionNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointConnectionNotificationsOutcome DescribeVpcEndpointConnectionNotifications(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request) const;


        /**
         * <p>Describes the VPC endpoint connections to your VPC endpoint services,
         * including any endpoints that are pending your acceptance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointConnectionsOutcome DescribeVpcEndpointConnections(const Model::DescribeVpcEndpointConnectionsRequest& request) const;


        /**
         * <p>Describes the VPC endpoint service configurations in your account (your
         * services).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServiceConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServiceConfigurationsOutcome DescribeVpcEndpointServiceConfigurations(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request) const;


        /**
         * <p>Describes the principals (service consumers) that are permitted to discover
         * your VPC endpoint service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServicePermissionsOutcome DescribeVpcEndpointServicePermissions(const Model::DescribeVpcEndpointServicePermissionsRequest& request) const;


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
         * <p>Describes one or more of your VPC endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;


        /**
         * <p>Describes one or more of your VPC peering connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest& request) const;


        /**
         * <p>Describes one or more of your VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest& request) const;


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
         * <p>Detaches an internet gateway from a VPC, disabling connectivity between the
         * internet and the VPC. The VPC must not contain any running instances with
         * Elastic IP addresses or public IPv4 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInternetGatewayOutcome DetachInternetGateway(const Model::DetachInternetGatewayRequest& request) const;


        /**
         * <p>Detaches a network interface from an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest& request) const;


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
         * <p>Disables Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAddressTransferOutcome DisableAddressTransfer(const Model::DisableAddressTransferRequest& request) const;


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
         * <p>Disables fast snapshot restores for the specified snapshots in the specified
         * Availability Zones.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastSnapshotRestores">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableFastSnapshotRestoresOutcome DisableFastSnapshotRestores(const Model::DisableFastSnapshotRestoresRequest& request) const;


        /**
         * <p>Cancels the deprecation of the specified AMI.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-deprecate.html">Deprecate
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableImageDeprecation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImageDeprecationOutcome DisableImageDeprecation(const Model::DisableImageDeprecationRequest& request) const;


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
         * <p>Disables the specified resource attachment from propagating routes to the
         * specified propagation route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableTransitGatewayRouteTablePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTransitGatewayRouteTablePropagationOutcome DisableTransitGatewayRouteTablePropagation(const Model::DisableTransitGatewayRouteTablePropagationRequest& request) const;


        /**
         * <p>Disables a virtual private gateway (VGW) from propagating routes to a
         * specified route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVgwRoutePropagationOutcome DisableVgwRoutePropagation(const Model::DisableVgwRoutePropagationRequest& request) const;


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
         * <p>Disassociates an IAM instance profile from a running or stopped instance.</p>
         * <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIamInstanceProfileOutcome DisassociateIamInstanceProfile(const Model::DisassociateIamInstanceProfileRequest& request) const;


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
         * <p>Disassociates a CIDR block from a subnet. Currently, you can disassociate an
         * IPv6 CIDR block only. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetCidrBlockOutcome DisassociateSubnetCidrBlock(const Model::DisassociateSubnetCidrBlockRequest& request) const;


        /**
         * <p>Disassociates the specified subnets from the transit gateway multicast
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayMulticastDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayMulticastDomainOutcome DisassociateTransitGatewayMulticastDomain(const Model::DisassociateTransitGatewayMulticastDomainRequest& request) const;


        /**
         * <p>Removes the association between an an attachment and a policy
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayPolicyTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayPolicyTableOutcome DisassociateTransitGatewayPolicyTable(const Model::DisassociateTransitGatewayPolicyTableRequest& request) const;


        /**
         * <p>Disassociates a resource attachment from a transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateTransitGatewayRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayRouteTableOutcome DisassociateTransitGatewayRouteTable(const Model::DisassociateTransitGatewayRouteTableRequest& request) const;


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
         * <p>Enables Elastic IP address transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
         * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableAddressTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAddressTransferOutcome EnableAddressTransfer(const Model::EnableAddressTransferRequest& request) const;


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
         * <p>Enables deprecation of the specified AMI at the specified date and time.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-deprecate.html">Deprecate
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableImageDeprecation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImageDeprecationOutcome EnableImageDeprecation(const Model::EnableImageDeprecationRequest& request) const;


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
         * <p>Enables the specified attachment to propagate routes to the specified
         * propagation route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableTransitGatewayRouteTablePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTransitGatewayRouteTablePropagationOutcome EnableTransitGatewayRouteTablePropagation(const Model::EnableTransitGatewayRouteTablePropagationRequest& request) const;


        /**
         * <p>Enables a virtual private gateway (VGW) to propagate routes to the specified
         * route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVgwRoutePropagationOutcome EnableVgwRoutePropagation(const Model::EnableVgwRoutePropagationRequest& request) const;


        /**
         * <p>Enables I/O operations for a volume that had I/O operations disabled because
         * the data on the volume was potentially inconsistent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVolumeIO">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVolumeIOOutcome EnableVolumeIO(const Model::EnableVolumeIORequest& request) const;


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
         * <p>Downloads the client certificate revocation list for the specified Client VPN
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportClientVpnClientCertificateRevocationList">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportClientVpnClientCertificateRevocationListOutcome ExportClientVpnClientCertificateRevocationList(const Model::ExportClientVpnClientCertificateRevocationListRequest& request) const;


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
         * <p>Gets information about the IPv6 CIDR block associations for a specified IPv6
         * address pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetAssociatedIpv6PoolCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedIpv6PoolCidrsOutcome GetAssociatedIpv6PoolCidrs(const Model::GetAssociatedIpv6PoolCidrsRequest& request) const;


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
         * <p>Describes the allocations from the specified customer-owned address
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetCoipPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoipPoolUsageOutcome GetCoipPoolUsage(const Model::GetCoipPoolUsageRequest& request) const;


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
         * <p>Retrieve a JPG-format screenshot of a running instance to help with
         * troubleshooting.</p> <p>The returned content is Base64-encoded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleScreenshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsoleScreenshotOutcome GetConsoleScreenshot(const Model::GetConsoleScreenshotRequest& request) const;


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
         * <p>Lists the resource groups to which a Capacity Reservation has been
         * added.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetGroupsForCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupsForCapacityReservationOutcome GetGroupsForCapacityReservation(const Model::GetGroupsForCapacityReservationRequest& request) const;


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
         * <p>Get a list of all the CIDR allocations in an IPAM pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamPoolAllocations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamPoolAllocationsOutcome GetIpamPoolAllocations(const Model::GetIpamPoolAllocationsRequest& request) const;


        /**
         * <p>Get the CIDRs provisioned to an IPAM pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamPoolCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamPoolCidrsOutcome GetIpamPoolCidrs(const Model::GetIpamPoolCidrsRequest& request) const;


        /**
         * <p>Get information about the resources in a scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetIpamResourceCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpamResourceCidrsOutcome GetIpamResourceCidrs(const Model::GetIpamResourceCidrsRequest& request) const;


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
         * <p>Gets information about the resources that are associated with the specified
         * managed prefix list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetManagedPrefixListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedPrefixListAssociationsOutcome GetManagedPrefixListAssociations(const Model::GetManagedPrefixListAssociationsRequest& request) const;


        /**
         * <p>Gets information about the entries for a specified managed prefix
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetManagedPrefixListEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedPrefixListEntriesOutcome GetManagedPrefixListEntries(const Model::GetManagedPrefixListEntriesRequest& request) const;


        /**
         * <p>Gets the findings for the specified Network Access Scope
         * analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetNetworkInsightsAccessScopeAnalysisFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkInsightsAccessScopeAnalysisFindingsOutcome GetNetworkInsightsAccessScopeAnalysisFindings(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const;


        /**
         * <p>Gets the content for the specified Network Access Scope.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetNetworkInsightsAccessScopeContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkInsightsAccessScopeContentOutcome GetNetworkInsightsAccessScopeContent(const Model::GetNetworkInsightsAccessScopeContentRequest& request) const;


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
         * <p>Gets information about the subnet CIDR reservations.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetSubnetCidrReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubnetCidrReservationsOutcome GetSubnetCidrReservations(const Model::GetSubnetCidrReservationsRequest& request) const;


        /**
         * <p>Lists the route tables to which the specified resource attachment propagates
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayAttachmentPropagations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayAttachmentPropagationsOutcome GetTransitGatewayAttachmentPropagations(const Model::GetTransitGatewayAttachmentPropagationsRequest& request) const;


        /**
         * <p>Gets information about the associations for the transit gateway multicast
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayMulticastDomainAssociationsOutcome GetTransitGatewayMulticastDomainAssociations(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request) const;


        /**
         * <p>Gets a list of the transit gateway policy table associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPolicyTableAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPolicyTableAssociationsOutcome GetTransitGatewayPolicyTableAssociations(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request) const;


        /**
         * <p>Returns a list of transit gateway policy table entries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPolicyTableEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPolicyTableEntriesOutcome GetTransitGatewayPolicyTableEntries(const Model::GetTransitGatewayPolicyTableEntriesRequest& request) const;


        /**
         * <p>Gets information about the prefix list references in a specified transit
         * gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayPrefixListReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPrefixListReferencesOutcome GetTransitGatewayPrefixListReferences(const Model::GetTransitGatewayPrefixListReferencesRequest& request) const;


        /**
         * <p>Gets information about the associations for the specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayRouteTableAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTableAssociationsOutcome GetTransitGatewayRouteTableAssociations(const Model::GetTransitGatewayRouteTableAssociationsRequest& request) const;


        /**
         * <p>Gets information about the route table propagations for the specified transit
         * gateway route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetTransitGatewayRouteTablePropagations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTablePropagationsOutcome GetTransitGatewayRouteTablePropagations(const Model::GetTransitGatewayRouteTablePropagationsRequest& request) const;


        /**
         * <p>Download an Amazon Web Services-provided sample configuration file to be used
         * with the customer gateway device specified for your Site-to-Site VPN
         * connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetVpnConnectionDeviceSampleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpnConnectionDeviceSampleConfigurationOutcome GetVpnConnectionDeviceSampleConfiguration(const Model::GetVpnConnectionDeviceSampleConfigurationRequest& request) const;


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
         * <p>Imports a disk into an EBS snapshot.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-import-snapshot.html">Importing
         * a disk as a snapshot using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSnapshotOutcome ImportSnapshot(const Model::ImportSnapshotRequest& request) const;


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
         * <p>Lists one or more AMIs that are currently in the Recycle Bin. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the Amazon Elastic Compute Cloud User Guide.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ListImagesInRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesInRecycleBinOutcome ListImagesInRecycleBin(const Model::ListImagesInRecycleBinRequest& request) const;


        /**
         * <p>Lists one or more snapshots that are currently in the Recycle
         * Bin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ListSnapshotsInRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsInRecycleBinOutcome ListSnapshotsInRecycleBin(const Model::ListSnapshotsInRecycleBinRequest& request) const;


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
         * <p>Modifies the specified Client VPN endpoint. Modifying the DNS server resets
         * existing client connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyClientVpnEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClientVpnEndpointOutcome ModifyClientVpnEndpoint(const Model::ModifyClientVpnEndpointRequest& request) const;


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
         * <p>Modifies the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyFpgaImageAttributeOutcome ModifyFpgaImageAttribute(const Model::ModifyFpgaImageAttributeRequest& request) const;


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
         * <p>Modifies the Capacity Reservation settings for a stopped instance. Use this
         * action to configure an instance to target a specific Capacity Reservation, run
         * in any <code>open</code> Capacity Reservation with matching attributes, or run
         * On-Demand Instance capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceCapacityReservationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceCapacityReservationAttributesOutcome ModifyInstanceCapacityReservationAttributes(const Model::ModifyInstanceCapacityReservationAttributesRequest& request) const;


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
         * <p>Modifies the start time for a scheduled Amazon EC2 instance
         * event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceEventStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceEventStartTimeOutcome ModifyInstanceEventStartTime(const Model::ModifyInstanceEventStartTimeRequest& request) const;


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
         * <p>Modify the configurations of an IPAM. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpam">AWS API
         * Reference</a></p>
         */
        virtual Model::ModifyIpamOutcome ModifyIpam(const Model::ModifyIpamRequest& request) const;


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
         * <p>Modify an IPAM scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIpamScope">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIpamScopeOutcome ModifyIpamScope(const Model::ModifyIpamScopeRequest& request) const;


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
         * <p>Modifies the specified local gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyLocalGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLocalGatewayRouteOutcome ModifyLocalGatewayRoute(const Model::ModifyLocalGatewayRouteRequest& request) const;


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
         * <p>Modifies the specified network interface attribute. You can specify only one
         * attribute at a time. You can use this action to attach and detach security
         * groups from an existing EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;


        /**
         * <p>Modifies the options for instance hostnames for the specified
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyPrivateDnsNameOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyPrivateDnsNameOptionsOutcome ModifyPrivateDnsNameOptions(const Model::ModifyPrivateDnsNameOptionsRequest& request) const;


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
         * <p>Modifies the rules of a security group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySecurityGroupRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySecurityGroupRulesOutcome ModifySecurityGroupRules(const Model::ModifySecurityGroupRulesRequest& request) const;


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
         * <p>Modifies the specified Traffic Mirror rule.</p> <p>
         * <code>DestinationCidrBlock</code> and <code>SourceCidrBlock</code> must both be
         * an IPv4 range or an IPv6 range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTrafficMirrorFilterRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrafficMirrorFilterRuleOutcome ModifyTrafficMirrorFilterRule(const Model::ModifyTrafficMirrorFilterRuleRequest& request) const;


        /**
         * <p>Modifies a Traffic Mirror session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTrafficMirrorSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTrafficMirrorSessionOutcome ModifyTrafficMirrorSession(const Model::ModifyTrafficMirrorSessionRequest& request) const;


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
         * <p>Modifies a reference (route) to a prefix list in a specified transit gateway
         * route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayPrefixListReference">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTransitGatewayPrefixListReferenceOutcome ModifyTransitGatewayPrefixListReference(const Model::ModifyTransitGatewayPrefixListReferenceRequest& request) const;


        /**
         * <p>Modifies the specified VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTransitGatewayVpcAttachmentOutcome ModifyTransitGatewayVpcAttachment(const Model::ModifyTransitGatewayVpcAttachmentRequest& request) const;


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
         * <p>Modifies the specified attribute of the specified VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest& request) const;


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
         * <p>Modifies a connection notification for VPC endpoint or VPC endpoint service.
         * You can change the SNS topic for the notification, or the events for which to be
         * notified. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointConnectionNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointConnectionNotificationOutcome ModifyVpcEndpointConnectionNotification(const Model::ModifyVpcEndpointConnectionNotificationRequest& request) const;


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
         * <p>Modifies the payer responsibility for your VPC endpoint
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointServicePayerResponsibility">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointServicePayerResponsibilityOutcome ModifyVpcEndpointServicePayerResponsibility(const Model::ModifyVpcEndpointServicePayerResponsibilityRequest& request) const;


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
         * <p>Modifies the VPN tunnel endpoint certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnTunnelCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpnTunnelCertificateOutcome ModifyVpnTunnelCertificate(const Model::ModifyVpnTunnelCertificateRequest& request) const;


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
         * <p>Purchase a reservation with configurations that match those of your Dedicated
         * Host. You must have active Dedicated Hosts in your account before you purchase a
         * reservation. This action results in the specified reservation being purchased
         * and charged to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseHostReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseHostReservationOutcome PurchaseHostReservation(const Model::PurchaseHostReservationRequest& request) const;


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
         * <p>Registers an AMI. When you're creating an AMI, this is the final step you
         * must complete before you can launch an instance from the AMI. For more
         * information about creating AMIs, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Creating
         * your own AMIs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
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
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understanding
         * AMI billing</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterImageOutcome RegisterImage(const Model::RegisterImageRequest& request) const;


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
         * <p>Rejects a request to associate cross-account subnets with a transit gateway
         * multicast domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectTransitGatewayMulticastDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectTransitGatewayMulticastDomainAssociationsOutcome RejectTransitGatewayMulticastDomainAssociations(const Model::RejectTransitGatewayMulticastDomainAssociationsRequest& request) const;


        /**
         * <p>Rejects a transit gateway peering attachment request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectTransitGatewayPeeringAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectTransitGatewayPeeringAttachmentOutcome RejectTransitGatewayPeeringAttachment(const Model::RejectTransitGatewayPeeringAttachmentRequest& request) const;


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
         * <p>Rejects one or more VPC endpoint connection requests to your VPC endpoint
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcEndpointConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectVpcEndpointConnectionsOutcome RejectVpcEndpointConnections(const Model::RejectVpcEndpointConnectionsRequest& request) const;


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
         * <p>Replaces an entry (rule) in a network ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceNetworkAclEntryOutcome ReplaceNetworkAclEntry(const Model::ReplaceNetworkAclEntryRequest& request) const;


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
         * <p>Replaces the specified route in the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceTransitGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceTransitGatewayRouteOutcome ReplaceTransitGatewayRoute(const Model::ReplaceTransitGatewayRouteRequest& request) const;


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
         * <p>Resets the attribute of the specified IP address. For requirements, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html#Using_Elastic_Addressing_Reverse_DNS">Using
         * reverse DNS for email applications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetAddressAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAddressAttributeOutcome ResetAddressAttribute(const Model::ResetAddressAttributeRequest& request) const;


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
         * <p>Resets the specified attribute of the specified Amazon FPGA Image (AFI) to
         * its default value. You can only reset the load permission
         * attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetFpgaImageAttributeOutcome ResetFpgaImageAttribute(const Model::ResetFpgaImageAttributeRequest& request) const;


        /**
         * <p>Resets an attribute of an AMI to its default value.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetImageAttributeOutcome ResetImageAttribute(const Model::ResetImageAttributeRequest& request) const;


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
         * <p>Resets a network interface attribute. You can specify only one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetNetworkInterfaceAttributeOutcome ResetNetworkInterfaceAttribute(const Model::ResetNetworkInterfaceAttributeRequest& request) const;


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
         * <p>Restores an AMI from the Recycle Bin. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">Recycle
         * Bin</a> in the Amazon Elastic Compute Cloud User Guide.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreImageFromRecycleBin">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreImageFromRecycleBinOutcome RestoreImageFromRecycleBin(const Model::RestoreImageFromRecycleBinRequest& request) const;


        /**
         * <p>Restores the entries from a previous version of a managed prefix list to a
         * new version of the prefix list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreManagedPrefixListVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreManagedPrefixListVersionOutcome RestoreManagedPrefixListVersion(const Model::RestoreManagedPrefixListVersionRequest& request) const;


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
         * <p>Removes an ingress authorization rule from a Client VPN endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeClientVpnIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeClientVpnIngressOutcome RevokeClientVpnIngress(const Model::RevokeClientVpnIngressRequest& request) const;


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
         * <p>Searches for routes in the specified local gateway route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchLocalGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchLocalGatewayRoutesOutcome SearchLocalGatewayRoutes(const Model::SearchLocalGatewayRoutesRequest& request) const;


        /**
         * <p>Searches one or more transit gateway multicast groups and returns the group
         * membership information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchTransitGatewayMulticastGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTransitGatewayMulticastGroupsOutcome SearchTransitGatewayMulticastGroups(const Model::SearchTransitGatewayMulticastGroupsRequest& request) const;


        /**
         * <p>Searches for routes in the specified transit gateway route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SearchTransitGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTransitGatewayRoutesOutcome SearchTransitGatewayRoutes(const Model::SearchTransitGatewayRoutesRequest& request) const;


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
         * <p>Starts analyzing the specified Network Access Scope.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartNetworkInsightsAccessScopeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNetworkInsightsAccessScopeAnalysisOutcome StartNetworkInsightsAccessScopeAnalysis(const Model::StartNetworkInsightsAccessScopeAnalysisRequest& request) const;


        /**
         * <p>Starts analyzing the specified path. If the path is reachable, the operation
         * returns the shortest feasible path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartNetworkInsightsAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNetworkInsightsAnalysisOutcome StartNetworkInsightsAnalysis(const Model::StartNetworkInsightsAnalysisRequest& request) const;


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
         * <p>Terminates active Client VPN endpoint connections. This action can be used to
         * terminate a specific client connection, or up to five connections established by
         * a specific user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateClientVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateClientVpnConnectionsOutcome TerminateClientVpnConnections(const Model::TerminateClientVpnConnectionsRequest& request) const;


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
         * <p>Unassigns one or more IPv6 addresses IPv4 Prefix Delegation prefixes from a
         * network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignIpv6Addresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignIpv6AddressesOutcome UnassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest& request) const;


        /**
         * <p>Unassigns one or more secondary private IP addresses, or IPv4 Prefix
         * Delegation prefixes from a network interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest& request) const;


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
         * <p>Updates the description of an ingress (inbound) security group rule. You can
         * replace an existing description, or add a description to a rule that did not
         * have one previously. You can remove a description for a security group rule by
         * omitting the description parameter in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsIngressOutcome UpdateSecurityGroupRuleDescriptionsIngress(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const;


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



        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<EC2EndpointProviderBase>& accessEndpointProvider();
  private:
        void init(const EC2ClientConfiguration& clientConfiguration);

        EC2ClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<EC2EndpointProviderBase> m_endpointProvider;
  };

} // namespace EC2
} // namespace Aws
