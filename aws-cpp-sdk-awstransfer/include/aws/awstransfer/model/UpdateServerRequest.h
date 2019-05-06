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
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
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
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, your SFTP server isn't accessible over
     * the public internet.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline UpdateServerRequest& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that you want your SFTP server to connect to. You can
     * choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, your SFTP server isn't accessible over the public
     * internet. </p>
     */
    inline UpdateServerRequest& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline const Aws::String& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline void SetHostKey(const Aws::String& value) { m_hostKeyHasBeenSet = true; m_hostKey = value; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline void SetHostKey(Aws::String&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::move(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline void SetHostKey(const char* value) { m_hostKeyHasBeenSet = true; m_hostKey.assign(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline UpdateServerRequest& WithHostKey(const Aws::String& value) { SetHostKey(value); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline UpdateServerRequest& WithHostKey(Aws::String&& value) { SetHostKey(std::move(value)); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -f
     * my-new-server-key</code>.</p> <important> <p>If you aren't planning to migrate
     * existing users from an existing SFTP server to a new AWS SFTP server, don't
     * update the host key. Accidentally changing a server's host key can be
     * disruptive. For more information, see <a>change-host-key</a> in the <i>AWS SFTP
     * User Guide.</i> </p> </important>
     */
    inline UpdateServerRequest& WithHostKey(const char* value) { SetHostKey(value); return *this;}


    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>This response parameter is an array containing all of the information
     * required to call a customer's authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>A value that changes the AWS Identity and Access Management (IAM) role that
     * allows Amazon S3 events to be logged in Amazon CloudWatch, turning logging on or
     * off.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

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

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
