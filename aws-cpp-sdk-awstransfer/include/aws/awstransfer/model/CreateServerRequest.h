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
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
     * <p>An array containing all of the information required to call a
     * customer-supplied authentication API. This parameter is not required when the
     * <code>IdentityProviderType</code> value of server that is created uses the
     * <code>SERVICE_MANAGED</code> authentication method.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>An array containing all of the information required to call a
     * customer-supplied authentication API. This parameter is not required when the
     * <code>IdentityProviderType</code> value of server that is created uses the
     * <code>SERVICE_MANAGED</code> authentication method.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>An array containing all of the information required to call a
     * customer-supplied authentication API. This parameter is not required when the
     * <code>IdentityProviderType</code> value of server that is created uses the
     * <code>SERVICE_MANAGED</code> authentication method.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>An array containing all of the information required to call a
     * customer-supplied authentication API. This parameter is not required when the
     * <code>IdentityProviderType</code> value of server that is created uses the
     * <code>SERVICE_MANAGED</code> authentication method.</p>
     */
    inline CreateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>An array containing all of the information required to call a
     * customer-supplied authentication API. This parameter is not required when the
     * <code>IdentityProviderType</code> value of server that is created uses the
     * <code>SERVICE_MANAGED</code> authentication method.</p>
     */
    inline CreateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>The mode of authentication enabled for this service. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the service. An <code>IdentityProviderType</code> value of
     * <code>API_GATEWAY</code> indicates that user authentication requires a call to
     * an API Gateway endpoint URL provided by you to integrate an identity provider of
     * your choice.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The mode of authentication enabled for this service. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the service. An <code>IdentityProviderType</code> value of
     * <code>API_GATEWAY</code> indicates that user authentication requires a call to
     * an API Gateway endpoint URL provided by you to integrate an identity provider of
     * your choice.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>The mode of authentication enabled for this service. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the service. An <code>IdentityProviderType</code> value of
     * <code>API_GATEWAY</code> indicates that user authentication requires a call to
     * an API Gateway endpoint URL provided by you to integrate an identity provider of
     * your choice.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>The mode of authentication enabled for this service. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the service. An <code>IdentityProviderType</code> value of
     * <code>API_GATEWAY</code> indicates that user authentication requires a call to
     * an API Gateway endpoint URL provided by you to integrate an identity provider of
     * your choice.</p>
     */
    inline CreateServerRequest& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The mode of authentication enabled for this service. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access SFTP user
     * credentials within the service. An <code>IdentityProviderType</code> value of
     * <code>API_GATEWAY</code> indicates that user authentication requires a call to
     * an API Gateway endpoint URL provided by you to integrate an identity provider of
     * your choice.</p>
     */
    inline CreateServerRequest& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline CreateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
     * Amazon CloudWatch logs for monitoring and auditing purposes.</p>
     */
    inline CreateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>A value that allows the service to write your SFTP users’ activity to your
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
