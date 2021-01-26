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
  class AWS_KENDRA_API CreateIndexRequest : public KendraRequest
  {
  public:
    CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the new index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the new index.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline const IndexEdition& GetEdition() const{ return m_edition; }

    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline void SetEdition(const IndexEdition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline void SetEdition(IndexEdition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline CreateIndexRequest& WithEdition(const IndexEdition& value) { SetEdition(value); return *this;}

    /**
     * <p>The Amazon Kendra edition to use for the index. Choose
     * <code>DEVELOPER_EDITION</code> for indexes intended for development, testing, or
     * proof of concept. Use <code>ENTERPRISE_EDITION</code> for your production
     * databases. Once you set the edition for an index, it can't be changed. </p>
     * <p>The <code>Edition</code> parameter is optional. If you don't supply a value,
     * the default is <code>ENTERPRISE_EDITION</code>.</p>
     */
    inline CreateIndexRequest& WithEdition(IndexEdition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) role that gives Amazon Kendra
     * permissions to access your Amazon CloudWatch logs and metrics. This is also the
     * role used when you use the <code>BatchPutDocument</code> operation to index
     * documents from an Amazon S3 bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the index.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> operation with the same client token will
     * create only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateIndexRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateIndexRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateIndexRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify the index. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateIndexRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The user token configuration.</p>
     */
    inline const Aws::Vector<UserTokenConfiguration>& GetUserTokenConfigurations() const{ return m_userTokenConfigurations; }

    /**
     * <p>The user token configuration.</p>
     */
    inline bool UserTokenConfigurationsHasBeenSet() const { return m_userTokenConfigurationsHasBeenSet; }

    /**
     * <p>The user token configuration.</p>
     */
    inline void SetUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = value; }

    /**
     * <p>The user token configuration.</p>
     */
    inline void SetUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = std::move(value); }

    /**
     * <p>The user token configuration.</p>
     */
    inline CreateIndexRequest& WithUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { SetUserTokenConfigurations(value); return *this;}

    /**
     * <p>The user token configuration.</p>
     */
    inline CreateIndexRequest& WithUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { SetUserTokenConfigurations(std::move(value)); return *this;}

    /**
     * <p>The user token configuration.</p>
     */
    inline CreateIndexRequest& AddUserTokenConfigurations(const UserTokenConfiguration& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(value); return *this; }

    /**
     * <p>The user token configuration.</p>
     */
    inline CreateIndexRequest& AddUserTokenConfigurations(UserTokenConfiguration&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline const UserContextPolicy& GetUserContextPolicy() const{ return m_userContextPolicy; }

    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }

    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline void SetUserContextPolicy(const UserContextPolicy& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }

    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline void SetUserContextPolicy(UserContextPolicy&& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = std::move(value); }

    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline CreateIndexRequest& WithUserContextPolicy(const UserContextPolicy& value) { SetUserContextPolicy(value); return *this;}

    /**
     * <p>The user context policy.</p> <dl> <dt>ATTRIBUTE_FILTER</dt> <dd> <p>All
     * indexed content is searchable and displayable for all users. If there is an
     * access control list, it is ignored. You can filter on user and group attributes.
     * </p> </dd> <dt>USER_TOKEN</dt> <dd> <p>Enables SSO and token-based user access
     * control. All documents with no access control and all documents accessible to
     * the user will be searchable and displayable. </p> </dd> </dl>
     */
    inline CreateIndexRequest& WithUserContextPolicy(UserContextPolicy&& value) { SetUserContextPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    IndexEdition m_edition;
    bool m_editionHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<UserTokenConfiguration> m_userTokenConfigurations;
    bool m_userTokenConfigurationsHasBeenSet;

    UserContextPolicy m_userContextPolicy;
    bool m_userContextPolicyHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
