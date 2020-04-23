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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/State.h>
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
   * specified. Information returned includes the following: the server Amazon
   * Resource Name (ARN), the authentication configuration and type, the logging
   * role, the server ID and state, and assigned tags or metadata.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline DescribedServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline DescribedServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a file transfer
     * protocol-enabled server to be described.</p>
     */
    inline DescribedServer& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DescribedServer& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline DescribedServer& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Certificate Manager (ACM)
     * certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p>
     */
    inline DescribedServer& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline DescribedServer& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your file transfer protocol-enabled server.</p>
     */
    inline DescribedServer& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline DescribedServer& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that your file transfer protocol-enabled server is
     * connected to. If your server is connected to a VPC endpoint, your server isn't
     * accessible over the public internet.</p>
     */
    inline DescribedServer& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline const Aws::String& GetHostKeyFingerprint() const{ return m_hostKeyFingerprint; }

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline bool HostKeyFingerprintHasBeenSet() const { return m_hostKeyFingerprintHasBeenSet; }

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const Aws::String& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = value; }

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(Aws::String&& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = std::move(value); }

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const char* value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint.assign(value); }

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const Aws::String& value) { SetHostKeyFingerprint(value); return *this;}

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(Aws::String&& value) { SetHostKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>Contains the message-digest algorithm (MD5) hash of a file transfer
     * protocol-enabled server's host key. This value is equivalent to the output of
     * the <code>ssh-keygen -l -E md5 -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const char* value) { SetHostKeyFingerprint(value); return *this;}


    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of a file
     * transfer protocol-enabled server is <code>SERVICE_MANAGED</code>.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline DescribedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>Defines the mode of authentication method enabled for this service. A value
     * of <code>SERVICE_MANAGED</code> means that you are using this file transfer
     * protocol-enabled server to store and access user credentials within the service.
     * A value of <code>API_GATEWAY</code> indicates that you have integrated an API
     * Gateway endpoint that will be invoked for authenticating your user into the
     * service.</p>
     */
    inline DescribedServer& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) entity that allows a file
     * transfer protocol-enabled server to turn on Amazon CloudWatch logging for Amazon
     * S3 events. When set, user activity can be viewed in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


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
    inline DescribedServer& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline DescribedServer& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline DescribedServer& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>
     */
    inline DescribedServer& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline DescribedServer& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline DescribedServer& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Unique system-assigned identifier for a file transfer protocol-enabled server
     * that you instantiate.</p>
     */
    inline DescribedServer& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline DescribedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The condition of a file transfer protocol-enabled server for the server that
     * was described. A value of <code>ONLINE</code> indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicate that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline DescribedServer& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline DescribedServer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline DescribedServer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline DescribedServer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains the key-value pairs that you can use to search for and group file
     * transfer protocol-enabled servers that were assigned to the server that was
     * described.</p>
     */
    inline DescribedServer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of users that are assigned to a file transfer protocol-enabled
     * server you specified with the <code>ServerId</code>.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>The number of users that are assigned to a file transfer protocol-enabled
     * server you specified with the <code>ServerId</code>.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>The number of users that are assigned to a file transfer protocol-enabled
     * server you specified with the <code>ServerId</code>.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>The number of users that are assigned to a file transfer protocol-enabled
     * server you specified with the <code>ServerId</code>.</p>
     */
    inline DescribedServer& WithUserCount(int value) { SetUserCount(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

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

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    int m_userCount;
    bool m_userCountHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
