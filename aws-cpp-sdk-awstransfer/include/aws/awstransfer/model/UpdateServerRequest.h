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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API UpdateServerRequest : public TransferRequest
  {
  public:
    UpdateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline UpdateServerRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline UpdateServerRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline UpdateServerRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your file transfer protocol-enabled server. With a VPC endpoint, you can
     * restrict access to your server to resources only within your VPC. To control
     * incoming internet traffic, you will need to associate one or more Elastic IP
     * addresses with your server's endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline UpdateServerRequest& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that you want your file transfer protocol-enabled server
     * to connect to. You can choose to connect to the public internet or a VPC
     * endpoint. With a VPC endpoint, your server isn't accessible over the public
     * internet.</p>
     */
    inline UpdateServerRequest& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline const Aws::String& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline void SetHostKey(const Aws::String& value) { m_hostKeyHasBeenSet = true; m_hostKey = value; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline void SetHostKey(Aws::String&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::move(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline void SetHostKey(const char* value) { m_hostKeyHasBeenSet = true; m_hostKey.assign(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const Aws::String& value) { SetHostKey(value); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(Aws::String&& value) { SetHostKey(std::move(value)); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing file transfer protocol-enabled server to a new
     * server, don't update the host key. Accidentally changing a server's host key can
     * be disruptive.</p> </important> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key">Changing
     * the Host Key for Your AWS Transfer Family Server</a> in the <i>AWS Transfer
     * Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const char* value) { SetHostKey(value); return *this;}


    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>Changes the AWS Identity and Access Management (IAM) role that allows Amazon
     * S3 events to be logged in Amazon CloudWatch, turning logging on or off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline UpdateServerRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline UpdateServerRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline UpdateServerRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline UpdateServerRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that the user account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
