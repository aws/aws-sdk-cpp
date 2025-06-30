/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/Domain.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ProtocolDetails.h>
#include <aws/awstransfer/model/WorkflowDetails.h>
#include <aws/awstransfer/model/S3StorageOptions.h>
#include <aws/awstransfer/model/IpAddressType.h>
#include <aws/awstransfer/model/Protocol.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateServerRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServer"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager (ACM) certificate.
     * Required when <code>Protocols</code> is set to <code>FTPS</code>.</p> <p>To
     * request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i>Certificate Manager User Guide</i>.</p> <p>To
     * import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i>Certificate Manager User Guide</i>.</p>
     * <p>To request a private certificate to use FTPS through private IP addresses,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i>Certificate Manager User Guide</i>.</p>
     * <p>Certificates with the following cryptographic algorithms and key sizes are
     * supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li> <p>4096-bit
     * RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    CreateServerRequest& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of the storage system that is used for file transfers. There are
     * two domains available: Amazon Simple Storage Service (Amazon S3) and Amazon
     * Elastic File System (Amazon EFS). The default value is S3.</p>  <p>After
     * the server is created, the domain cannot be changed.</p> 
     */
    inline Domain GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(Domain value) { m_domainHasBeenSet = true; m_domain = value; }
    inline CreateServerRequest& WithDomain(Domain value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const { return m_endpointDetails; }
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }
    template<typename EndpointDetailsT = EndpointDetails>
    void SetEndpointDetails(EndpointDetailsT&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::forward<EndpointDetailsT>(value); }
    template<typename EndpointDetailsT = EndpointDetails>
    CreateServerRequest& WithEndpointDetails(EndpointDetailsT&& value) { SetEndpointDetails(std::forward<EndpointDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Services account if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Services account on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline CreateServerRequest& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Manage
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHostKey() const { return m_hostKey; }
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }
    template<typename HostKeyT = Aws::String>
    void SetHostKey(HostKeyT&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::forward<HostKeyT>(value); }
    template<typename HostKeyT = Aws::String>
    CreateServerRequest& WithHostKey(HostKeyT&& value) { SetHostKey(std::forward<HostKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>IdentityProviderType</code> is set to
     * <code>AWS_DIRECTORY_SERVICE</code>, <code>Amazon Web Services_LAMBDA</code> or
     * <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to use a directory in <code>AWS_DIRECTORY_SERVICE</code> or invoke a
     * customer-supplied authentication API, including the API Gateway URL. Cannot be
     * specified when <code>IdentityProviderType</code> is set to
     * <code>SERVICE_MANAGED</code>.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const { return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    template<typename IdentityProviderDetailsT = IdentityProviderDetails>
    void SetIdentityProviderDetails(IdentityProviderDetailsT&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::forward<IdentityProviderDetailsT>(value); }
    template<typename IdentityProviderDetailsT = IdentityProviderDetails>
    CreateServerRequest& WithIdentityProviderDetails(IdentityProviderDetailsT&& value) { SetIdentityProviderDetails(std::forward<IdentityProviderDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline IdentityProviderType GetIdentityProviderType() const { return m_identityProviderType; }
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }
    inline void SetIdentityProviderType(IdentityProviderType value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }
    inline CreateServerRequest& WithIdentityProviderType(IdentityProviderType value) { SetIdentityProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFS events. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const { return m_loggingRole; }
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }
    template<typename LoggingRoleT = Aws::String>
    void SetLoggingRole(LoggingRoleT&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::forward<LoggingRoleT>(value); }
    template<typename LoggingRoleT = Aws::String>
    CreateServerRequest& WithLoggingRole(LoggingRoleT&& value) { SetLoggingRole(std::forward<LoggingRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline const Aws::String& GetPostAuthenticationLoginBanner() const { return m_postAuthenticationLoginBanner; }
    inline bool PostAuthenticationLoginBannerHasBeenSet() const { return m_postAuthenticationLoginBannerHasBeenSet; }
    template<typename PostAuthenticationLoginBannerT = Aws::String>
    void SetPostAuthenticationLoginBanner(PostAuthenticationLoginBannerT&& value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner = std::forward<PostAuthenticationLoginBannerT>(value); }
    template<typename PostAuthenticationLoginBannerT = Aws::String>
    CreateServerRequest& WithPostAuthenticationLoginBanner(PostAuthenticationLoginBannerT&& value) { SetPostAuthenticationLoginBanner(std::forward<PostAuthenticationLoginBannerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline const Aws::String& GetPreAuthenticationLoginBanner() const { return m_preAuthenticationLoginBanner; }
    inline bool PreAuthenticationLoginBannerHasBeenSet() const { return m_preAuthenticationLoginBannerHasBeenSet; }
    template<typename PreAuthenticationLoginBannerT = Aws::String>
    void SetPreAuthenticationLoginBanner(PreAuthenticationLoginBannerT&& value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner = std::forward<PreAuthenticationLoginBannerT>(value); }
    template<typename PreAuthenticationLoginBannerT = Aws::String>
    CreateServerRequest& WithPreAuthenticationLoginBanner(PreAuthenticationLoginBannerT&& value) { SetPreAuthenticationLoginBanner(std::forward<PreAuthenticationLoginBannerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be either
     * <code>AWS_DIRECTORY_SERVICE</code>, <code>AWS_LAMBDA</code>, or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set any of
     * the supported identity types: <code>SERVICE_MANAGED</code>,
     * <code>AWS_DIRECTORY_SERVICE</code>, <code>AWS_LAMBDA</code>, or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>AS2</code>, then the <code>EndpointType</code> must be <code>VPC</code>,
     * and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    CreateServerRequest& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline CreateServerRequest& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline const ProtocolDetails& GetProtocolDetails() const { return m_protocolDetails; }
    inline bool ProtocolDetailsHasBeenSet() const { return m_protocolDetailsHasBeenSet; }
    template<typename ProtocolDetailsT = ProtocolDetails>
    void SetProtocolDetails(ProtocolDetailsT&& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = std::forward<ProtocolDetailsT>(value); }
    template<typename ProtocolDetailsT = ProtocolDetails>
    CreateServerRequest& WithProtocolDetails(ProtocolDetailsT&& value) { SetProtocolDetails(std::forward<ProtocolDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the security policy for the server.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const { return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    template<typename SecurityPolicyNameT = Aws::String>
    void SetSecurityPolicyName(SecurityPolicyNameT&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::forward<SecurityPolicyNameT>(value); }
    template<typename SecurityPolicyNameT = Aws::String>
    CreateServerRequest& WithSecurityPolicyName(SecurityPolicyNameT&& value) { SetSecurityPolicyName(std::forward<SecurityPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In addition to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDetails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when the server session disconnects
     * while the file is still being uploaded.</p>
     */
    inline const WorkflowDetails& GetWorkflowDetails() const { return m_workflowDetails; }
    inline bool WorkflowDetailsHasBeenSet() const { return m_workflowDetailsHasBeenSet; }
    template<typename WorkflowDetailsT = WorkflowDetails>
    void SetWorkflowDetails(WorkflowDetailsT&& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = std::forward<WorkflowDetailsT>(value); }
    template<typename WorkflowDetailsT = WorkflowDetails>
    CreateServerRequest& WithWorkflowDetails(WorkflowDetailsT&& value) { SetWorkflowDetails(std::forward<WorkflowDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the log groups to which your server logs are sent.</p> <p>To
     * specify a log group, you must provide the ARN for an existing log group. In this
     * case, the format of the log group is as follows:</p> <p>
     * <code>arn:aws:logs:region-name:amazon-account-id:log-group:log-group-name:*</code>
     * </p> <p>For example,
     * <code>arn:aws:logs:us-east-1:111122223333:log-group:mytestgroup:*</code> </p>
     * <p>If you have previously specified a log group for a server, you can clear it,
     * and in effect turn off structured logging, by providing an empty value for this
     * parameter in an <code>update-server</code> call. For example:</p> <p>
     * <code>update-server --server-id s-1234567890abcdef0
     * --structured-log-destinations</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetStructuredLogDestinations() const { return m_structuredLogDestinations; }
    inline bool StructuredLogDestinationsHasBeenSet() const { return m_structuredLogDestinationsHasBeenSet; }
    template<typename StructuredLogDestinationsT = Aws::Vector<Aws::String>>
    void SetStructuredLogDestinations(StructuredLogDestinationsT&& value) { m_structuredLogDestinationsHasBeenSet = true; m_structuredLogDestinations = std::forward<StructuredLogDestinationsT>(value); }
    template<typename StructuredLogDestinationsT = Aws::Vector<Aws::String>>
    CreateServerRequest& WithStructuredLogDestinations(StructuredLogDestinationsT&& value) { SetStructuredLogDestinations(std::forward<StructuredLogDestinationsT>(value)); return *this;}
    template<typename StructuredLogDestinationsT = Aws::String>
    CreateServerRequest& AddStructuredLogDestinations(StructuredLogDestinationsT&& value) { m_structuredLogDestinationsHasBeenSet = true; m_structuredLogDestinations.emplace_back(std::forward<StructuredLogDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline const S3StorageOptions& GetS3StorageOptions() const { return m_s3StorageOptions; }
    inline bool S3StorageOptionsHasBeenSet() const { return m_s3StorageOptionsHasBeenSet; }
    template<typename S3StorageOptionsT = S3StorageOptions>
    void SetS3StorageOptions(S3StorageOptionsT&& value) { m_s3StorageOptionsHasBeenSet = true; m_s3StorageOptions = std::forward<S3StorageOptionsT>(value); }
    template<typename S3StorageOptionsT = S3StorageOptions>
    CreateServerRequest& WithS3StorageOptions(S3StorageOptionsT&& value) { SetS3StorageOptions(std::forward<S3StorageOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use IPv4 only, or to use dual-stack (IPv4 and IPv6) for
     * your Transfer Family endpoint. The default value is <code>IPV4</code>.</p>
     *  <p>The <code>IpAddressType</code> parameter has the following
     * limitations:</p> <ul> <li> <p>It cannot be changed while the server is online.
     * You must stop the server before modifying this parameter.</p> </li> <li> <p>It
     * cannot be updated to <code>DUALSTACK</code> if the server has
     * <code>AddressAllocationIds</code> specified.</p> </li> </ul>  
     * <p>When using <code>DUALSTACK</code> as the <code>IpAddressType</code>, you
     * cannot set the <code>AddressAllocationIds</code> parameter for the <a
     * href="https://docs.aws.amazon.com/transfer/latest/APIReference/API_EndpointDetails.html">EndpointDetails</a>
     * for the server.</p> 
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateServerRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Domain m_domain{Domain::NOT_SET};
    bool m_domainHasBeenSet = false;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet = false;

    EndpointType m_endpointType{EndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet = false;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    IdentityProviderType m_identityProviderType{IdentityProviderType::NOT_SET};
    bool m_identityProviderTypeHasBeenSet = false;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;

    Aws::String m_postAuthenticationLoginBanner;
    bool m_postAuthenticationLoginBannerHasBeenSet = false;

    Aws::String m_preAuthenticationLoginBanner;
    bool m_preAuthenticationLoginBannerHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    ProtocolDetails m_protocolDetails;
    bool m_protocolDetailsHasBeenSet = false;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    WorkflowDetails m_workflowDetails;
    bool m_workflowDetailsHasBeenSet = false;

    Aws::Vector<Aws::String> m_structuredLogDestinations;
    bool m_structuredLogDestinationsHasBeenSet = false;

    S3StorageOptions m_s3StorageOptions;
    bool m_s3StorageOptionsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
