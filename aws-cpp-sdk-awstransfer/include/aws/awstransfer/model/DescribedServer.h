﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProtocolDetails.h>
#include <aws/awstransfer/model/Domain.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/State.h>
#include <aws/awstransfer/model/WorkflowDetails.h>
#include <aws/awstransfer/model/Protocol.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the properties of a file transfer protocol-enabled server that was
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedServer">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API DescribedServer
  {
  public:
    DescribedServer();
    DescribedServer(Aws::Utils::Json::JsonView jsonValue);
    DescribedServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline DescribedServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline DescribedServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the server.</p>
     */
    inline DescribedServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline DescribedServer& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline DescribedServer& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon Web ServicesCertificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline DescribedServer& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline const ProtocolDetails& GetProtocolDetails() const{ return m_protocolDetails; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline bool ProtocolDetailsHasBeenSet() const { return m_protocolDetailsHasBeenSet; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline void SetProtocolDetails(const ProtocolDetails& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = value; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline void SetProtocolDetails(ProtocolDetails&& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = std::move(value); }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline DescribedServer& WithProtocolDetails(const ProtocolDetails& value) { SetProtocolDetails(value); return *this;}

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. </p>
     */
    inline DescribedServer& WithProtocolDetails(ProtocolDetails&& value) { SetProtocolDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline DescribedServer& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline DescribedServer& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline DescribedServer& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline DescribedServer& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline DescribedServer& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>Defines the type of endpoint that your server is connected to. If your server
     * is connected to a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline DescribedServer& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline const Aws::String& GetHostKeyFingerprint() const{ return m_hostKeyFingerprint; }

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline bool HostKeyFingerprintHasBeenSet() const { return m_hostKeyFingerprintHasBeenSet; }

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const Aws::String& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = value; }

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(Aws::String&& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = std::move(value); }

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const char* value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint.assign(value); }

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const Aws::String& value) { SetHostKeyFingerprint(value); return *this;}

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(Aws::String&& value) { SetHostKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>Specifies the Base64-encoded SHA256 fingerprint of the server's host key.
     * This value is equivalent to the output of the <code>ssh-keygen -l -f
     * my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const char* value) { SetHostKeyFingerprint(value); return *this;}


    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a server is
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>SERVICE_MANAGED</code>.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline DescribedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>Specifies the mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Amazon Web Services Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Amazon Web Services Managed Active Directory or Microsoft Active Directory in
     * your on-premises environment or in Amazon Web Services using AD Connectors. This
     * option also requires you to provide a Directory ID using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use a Lambda function as your identity
     * provider. If you choose this value, you must specify the ARN for the lambda
     * function in the <code>Function</code> parameter for the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline DescribedServer& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline const Aws::String& GetPostAuthenticationLoginBanner() const{ return m_postAuthenticationLoginBanner; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline bool PostAuthenticationLoginBannerHasBeenSet() const { return m_postAuthenticationLoginBannerHasBeenSet; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(const Aws::String& value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner = value; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(Aws::String&& value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner = std::move(value); }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(const char* value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner.assign(value); }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline DescribedServer& WithPostAuthenticationLoginBanner(const Aws::String& value) { SetPostAuthenticationLoginBanner(value); return *this;}

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline DescribedServer& WithPostAuthenticationLoginBanner(Aws::String&& value) { SetPostAuthenticationLoginBanner(std::move(value)); return *this;}

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline DescribedServer& WithPostAuthenticationLoginBanner(const char* value) { SetPostAuthenticationLoginBanner(value); return *this;}


    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline const Aws::String& GetPreAuthenticationLoginBanner() const{ return m_preAuthenticationLoginBanner; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline bool PreAuthenticationLoginBannerHasBeenSet() const { return m_preAuthenticationLoginBannerHasBeenSet; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(const Aws::String& value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner = value; }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(Aws::String&& value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner = std::move(value); }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(const char* value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner.assign(value); }

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline DescribedServer& WithPreAuthenticationLoginBanner(const Aws::String& value) { SetPreAuthenticationLoginBanner(value); return *this;}

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline DescribedServer& WithPreAuthenticationLoginBanner(Aws::String&& value) { SetPreAuthenticationLoginBanner(std::move(value)); return *this;}

    /**
     * <p>Specify a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system.</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline DescribedServer& WithPreAuthenticationLoginBanner(const char* value) { SetPreAuthenticationLoginBanner(value); return *this;}


    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline DescribedServer& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline DescribedServer& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline DescribedServer& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> </ul>
     */
    inline DescribedServer& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedServer& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedServer& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedServer& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}


    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline DescribedServer& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline DescribedServer& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique system-assigned identifier for a server that you
     * instantiate.</p>
     */
    inline DescribedServer& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline DescribedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline DescribedServer& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pairs that you can use to search for and group
     * servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline DescribedServer& WithUserCount(int value) { SetUserCount(value); return *this;}


    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline const WorkflowDetails& GetWorkflowDetails() const{ return m_workflowDetails; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline bool WorkflowDetailsHasBeenSet() const { return m_workflowDetailsHasBeenSet; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline void SetWorkflowDetails(const WorkflowDetails& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = value; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline void SetWorkflowDetails(WorkflowDetails&& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = std::move(value); }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline DescribedServer& WithWorkflowDetails(const WorkflowDetails& value) { SetWorkflowDetails(value); return *this;}

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline DescribedServer& WithWorkflowDetails(WorkflowDetails&& value) { SetWorkflowDetails(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    ProtocolDetails m_protocolDetails;
    bool m_protocolDetailsHasBeenSet;

    Domain m_domain;
    bool m_domainHasBeenSet;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostKeyFingerprint;
    bool m_hostKeyFingerprintHasBeenSet;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::String m_postAuthenticationLoginBanner;
    bool m_postAuthenticationLoginBannerHasBeenSet;

    Aws::String m_preAuthenticationLoginBanner;
    bool m_preAuthenticationLoginBannerHasBeenSet;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    int m_userCount;
    bool m_userCountHasBeenSet;

    WorkflowDetails m_workflowDetails;
    bool m_workflowDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
