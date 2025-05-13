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
    AWS_KENDRA_API CreateIndexRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateIndexRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline IndexEdition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(IndexEdition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline CreateIndexRequest& WithEdition(IndexEdition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * Amazon CloudWatch logs and metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM access
     * roles for Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateIndexRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key (CMK) that's used to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    CreateIndexRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the index.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIndexRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateIndexRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateIndexRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateIndexRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user token configuration.</p>  <p>If you're using an Amazon
     * Kendra Gen AI Enterprise Edition index and you try to use
     * <code>UserTokenConfigurations</code> to configure user context policy, Amazon
     * Kendra returns a <code>ValidationException</code> error.</p> 
     */
    inline const Aws::Vector<UserTokenConfiguration>& GetUserTokenConfigurations() const { return m_userTokenConfigurations; }
    inline bool UserTokenConfigurationsHasBeenSet() const { return m_userTokenConfigurationsHasBeenSet; }
    template<typename UserTokenConfigurationsT = Aws::Vector<UserTokenConfiguration>>
    void SetUserTokenConfigurations(UserTokenConfigurationsT&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = std::forward<UserTokenConfigurationsT>(value); }
    template<typename UserTokenConfigurationsT = Aws::Vector<UserTokenConfiguration>>
    CreateIndexRequest& WithUserTokenConfigurations(UserTokenConfigurationsT&& value) { SetUserTokenConfigurations(std::forward<UserTokenConfigurationsT>(value)); return *this;}
    template<typename UserTokenConfigurationsT = UserTokenConfiguration>
    CreateIndexRequest& AddUserTokenConfigurations(UserTokenConfigurationsT&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.emplace_back(std::forward<UserTokenConfigurationsT>(value)); return *this; }
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
    inline UserContextPolicy GetUserContextPolicy() const { return m_userContextPolicy; }
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }
    inline void SetUserContextPolicy(UserContextPolicy value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }
    inline CreateIndexRequest& WithUserContextPolicy(UserContextPolicy value) { SetUserContextPolicy(value); return *this;}
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
    inline const UserGroupResolutionConfiguration& GetUserGroupResolutionConfiguration() const { return m_userGroupResolutionConfiguration; }
    inline bool UserGroupResolutionConfigurationHasBeenSet() const { return m_userGroupResolutionConfigurationHasBeenSet; }
    template<typename UserGroupResolutionConfigurationT = UserGroupResolutionConfiguration>
    void SetUserGroupResolutionConfiguration(UserGroupResolutionConfigurationT&& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = std::forward<UserGroupResolutionConfigurationT>(value); }
    template<typename UserGroupResolutionConfigurationT = UserGroupResolutionConfiguration>
    CreateIndexRequest& WithUserGroupResolutionConfiguration(UserGroupResolutionConfigurationT&& value) { SetUserGroupResolutionConfiguration(std::forward<UserGroupResolutionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IndexEdition m_edition{IndexEdition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<UserTokenConfiguration> m_userTokenConfigurations;
    bool m_userTokenConfigurationsHasBeenSet = false;

    UserContextPolicy m_userContextPolicy{UserContextPolicy::NOT_SET};
    bool m_userContextPolicyHasBeenSet = false;

    UserGroupResolutionConfiguration m_userGroupResolutionConfiguration;
    bool m_userGroupResolutionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
