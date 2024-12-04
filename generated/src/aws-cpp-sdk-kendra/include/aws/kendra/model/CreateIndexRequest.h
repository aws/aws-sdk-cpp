/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/IndexEdition.h>
#include <aws/kendra/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/UserContextPolicy.h>
#include <aws/kendra/model/UserGroupResolutionConfiguration.h>
#include <aws/kendra/model/Tag.h>
#include <aws/kendra/model/UserTokenConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateIndexRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateIndexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateIndexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateIndexRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for production. Use
     * <code>GEN_AI_ENTERPRISE_EDITION</code> for creating generative AI applications.
     * Once you set the edition for an index, it can't be changed. </p> <p>The
     * <code>Edition</code> parameter is optional. If you don't supply a value, the
     * default is <code>ENTERPRISE_EDITION</code>.</p> <p>For more information on quota
     * limits for Gen AI Enterprise Edition, Enterprise Edition, and Developer Edition
     * indices, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline const IndexEdition& GetEdition() const{ return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(const IndexEdition& value) { m_editionHasBeenSet = true; m_edition = value; }
    inline void SetEdition(IndexEdition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }
    inline CreateIndexRequest& WithEdition(const IndexEdition& value) { SetEdition(value); return *this;}
    inline CreateIndexRequest& WithEdition(IndexEdition&& value) { SetEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * Amazon CloudWatch logs and metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM access
     * roles for Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateIndexRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateIndexRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateIndexRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key (CMK) that's used to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIndexRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIndexRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIndexRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateIndexRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateIndexRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIndexRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateIndexRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user token configuration.</p>  <p>If you're using an Amazon
     * Kendra Gen AI Enterprise Edition index and you try to use
     * <code>UserTokenConfigurations</code> to configure user context policy, Amazon
     * Kendra returns a <code>ValidationException</code> error.</p> 
     */
    inline const Aws::Vector<UserTokenConfiguration>& GetUserTokenConfigurations() const{ return m_userTokenConfigurations; }
    inline bool UserTokenConfigurationsHasBeenSet() const { return m_userTokenConfigurationsHasBeenSet; }
    inline void SetUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = value; }
    inline void SetUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = std::move(value); }
    inline CreateIndexRequest& WithUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { SetUserTokenConfigurations(value); return *this;}
    inline CreateIndexRequest& WithUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { SetUserTokenConfigurations(std::move(value)); return *this;}
    inline CreateIndexRequest& AddUserTokenConfigurations(const UserTokenConfiguration& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(value); return *this; }
    inline CreateIndexRequest& AddUserTokenConfigurations(UserTokenConfiguration&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user context policy.</p>  <p>If you're using an Amazon Kendra
     * Gen AI Enterprise Edition index, you can only use <code>ATTRIBUTE_FILTER</code>
     * to filter search results by user context. If you're using an Amazon Kendra Gen
     * AI Enterprise Edition index and you try to use <code>USER_TOKEN</code> to
     * configure user context policy, Amazon Kendra returns a
     * <code>ValidationException</code> error.</p>  <dl>
     * <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All indexed content is searchable and
     * displayable for all users. If you want to filter search results on user context,
     * you can use the attribute filters of <code>_user_id</code> and
     * <code>_group_ids</code> or you can provide user and group information in
     * <code>UserContext</code>. </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables
     * token-based user access control to filter search results on user context. All
     * documents with no access control and all documents accessible to the user will
     * be searchable and displayable. </p> </dd> </dl>
     */
    inline const UserContextPolicy& GetUserContextPolicy() const{ return m_userContextPolicy; }
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }
    inline void SetUserContextPolicy(const UserContextPolicy& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }
    inline void SetUserContextPolicy(UserContextPolicy&& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = std::move(value); }
    inline CreateIndexRequest& WithUserContextPolicy(const UserContextPolicy& value) { SetUserContextPolicy(value); return *this;}
    inline CreateIndexRequest& WithUserContextPolicy(UserContextPolicy&& value) { SetUserContextPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets users and groups from IAM Identity Center identity source. To configure
     * this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.
     * This is useful for user context filtering, where search results are filtered
     * based on the user or their group access to documents.</p>  <p>If
     * you're using an Amazon Kendra Gen AI Enterprise Edition index,
     * <code>UserGroupResolutionConfiguration</code> isn't supported.</p> 
     */
    inline const UserGroupResolutionConfiguration& GetUserGroupResolutionConfiguration() const{ return m_userGroupResolutionConfiguration; }
    inline bool UserGroupResolutionConfigurationHasBeenSet() const { return m_userGroupResolutionConfigurationHasBeenSet; }
    inline void SetUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = value; }
    inline void SetUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = std::move(value); }
    inline CreateIndexRequest& WithUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { SetUserGroupResolutionConfiguration(value); return *this;}
    inline CreateIndexRequest& WithUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { SetUserGroupResolutionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IndexEdition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<UserTokenConfiguration> m_userTokenConfigurations;
    bool m_userTokenConfigurationsHasBeenSet = false;

    UserContextPolicy m_userContextPolicy;
    bool m_userContextPolicyHasBeenSet = false;

    UserGroupResolutionConfiguration m_userGroupResolutionConfiguration;
    bool m_userGroupResolutionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
