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
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_TRANSFER_API CreateServerRequest : public TransferRequest
  {
  public:
    CreateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline CreateServerRequest& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your SFTP server. With a VPC endpoint, you can restrict access to your SFTP
     * server to resources only within your VPC. To control incoming internet traffic,
     * you will need to invoke the <code>UpdateServer</code> API and attach an Elastic
     * IP to your server's endpoint. </p>
     */
    inline CreateServerRequest& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline CreateServerRequest& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of VPC endpoint that you want your SFTP server to connect to. You
     * can choose to connect to the public internet or a virtual private cloud (VPC)
     * endpoint. With a VPC endpoint, you can restrict access to your SFTP server and
     * resources only within your VPC.</p>
     */
    inline CreateServerRequest& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline const Aws::String& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline void SetHostKey(const Aws::String& value) { m_hostKeyHasBeenSet = true; m_hostKey = value; }

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline void SetHostKey(Aws::String&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::move(value); }

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline void SetHostKey(const char* value) { m_hostKeyHasBeenSet = true; m_hostKey.assign(value); }

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline CreateServerRequest& WithHostKey(const Aws::String& value) { SetHostKey(value); return *this;}

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline CreateServerRequest& WithHostKey(Aws::String&& value) { SetHostKey(std::move(value)); return *this;}

    /**
     * <p>The RSA private key as generated by the <code>ssh-keygen -N "" -f
     * my-new-server-key</code> command.</p> <important> <p>If you aren't planning to
     * migrate existing users from an existing SFTP server to a new AWS SFTP server,
     * don't update the host key. Accidentally changing a server's host key can be
     * disruptive.</p> </important> <p> For more information, see
     * "https://alpha-docs-aws.amazon.com/transfer/latest/userguide/configuring-servers.html#change-host-key"
     * in the <i>AWS SFTP User Guide.</i> </p>
     */
    inline CreateServerRequest& WithHostKey(const char* value) { SetHostKey(value); return *this;}


    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline CreateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>This parameter is required when the <code>IdentityProviderType</code> is set
     * to <code>API_GATEWAY</code>. Accepts an array containing all of the information
     * required to call a customer-supplied authentication API, including the API
     * Gateway URL. This property is not required when the
     * <code>IdentityProviderType</code> is set to <code>SERVICE_MANAGED</code>.</p>
     */
    inline CreateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline CreateServerRequest& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>Specifies the mode of authentication for the SFTP server. The default value
     * is <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the AWS Transfer for SFTP service. Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an API
     * Gateway endpoint URL to call for authentication using the
     * <code>IdentityProviderDetails</code> parameter.</p>
     */
    inline CreateServerRequest& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline CreateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline CreateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>A value that allows the service to write your SFTP users' activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline CreateServerRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline CreateServerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline CreateServerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline CreateServerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for servers.</p>
     */
    inline CreateServerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
