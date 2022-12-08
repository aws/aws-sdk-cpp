/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/CapacityUnitsConfiguration.h>
#include <aws/kendra/model/UserContextPolicy.h>
#include <aws/kendra/model/UserGroupResolutionConfiguration.h>
#include <aws/kendra/model/DocumentMetadataConfiguration.h>
#include <aws/kendra/model/UserTokenConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateIndexRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndex"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the index you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the index you want to update.</p>
     */
    inline UpdateIndexRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateIndexRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateIndexRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateIndexRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A new description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the index.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the index.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the index.</p>
     */
    inline UpdateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the index.</p>
     */
    inline UpdateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the index.</p>
     */
    inline UpdateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline const Aws::Vector<DocumentMetadataConfiguration>& GetDocumentMetadataConfigurationUpdates() const{ return m_documentMetadataConfigurationUpdates; }

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline bool DocumentMetadataConfigurationUpdatesHasBeenSet() const { return m_documentMetadataConfigurationUpdatesHasBeenSet; }

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline void SetDocumentMetadataConfigurationUpdates(const Aws::Vector<DocumentMetadataConfiguration>& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates = value; }

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline void SetDocumentMetadataConfigurationUpdates(Aws::Vector<DocumentMetadataConfiguration>&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates = std::move(value); }

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline UpdateIndexRequest& WithDocumentMetadataConfigurationUpdates(const Aws::Vector<DocumentMetadataConfiguration>& value) { SetDocumentMetadataConfigurationUpdates(value); return *this;}

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline UpdateIndexRequest& WithDocumentMetadataConfigurationUpdates(Aws::Vector<DocumentMetadataConfiguration>&& value) { SetDocumentMetadataConfigurationUpdates(std::move(value)); return *this;}

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline UpdateIndexRequest& AddDocumentMetadataConfigurationUpdates(const DocumentMetadataConfiguration& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates.push_back(value); return *this; }

    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline UpdateIndexRequest& AddDocumentMetadataConfigurationUpdates(DocumentMetadataConfiguration&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }

    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline void SetCapacityUnits(const CapacityUnitsConfiguration& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }

    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline void SetCapacityUnits(CapacityUnitsConfiguration&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::move(value); }

    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline UpdateIndexRequest& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}

    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline UpdateIndexRequest& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}


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
    inline UpdateIndexRequest& WithUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { SetUserTokenConfigurations(value); return *this;}

    /**
     * <p>The user token configuration.</p>
     */
    inline UpdateIndexRequest& WithUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { SetUserTokenConfigurations(std::move(value)); return *this;}

    /**
     * <p>The user token configuration.</p>
     */
    inline UpdateIndexRequest& AddUserTokenConfigurations(const UserTokenConfiguration& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(value); return *this; }

    /**
     * <p>The user token configuration.</p>
     */
    inline UpdateIndexRequest& AddUserTokenConfigurations(UserTokenConfiguration&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The user context policy.</p>
     */
    inline const UserContextPolicy& GetUserContextPolicy() const{ return m_userContextPolicy; }

    /**
     * <p>The user context policy.</p>
     */
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }

    /**
     * <p>The user context policy.</p>
     */
    inline void SetUserContextPolicy(const UserContextPolicy& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }

    /**
     * <p>The user context policy.</p>
     */
    inline void SetUserContextPolicy(UserContextPolicy&& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = std::move(value); }

    /**
     * <p>The user context policy.</p>
     */
    inline UpdateIndexRequest& WithUserContextPolicy(const UserContextPolicy& value) { SetUserContextPolicy(value); return *this;}

    /**
     * <p>The user context policy.</p>
     */
    inline UpdateIndexRequest& WithUserContextPolicy(UserContextPolicy&& value) { SetUserContextPolicy(std::move(value)); return *this;}


    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline const UserGroupResolutionConfiguration& GetUserGroupResolutionConfiguration() const{ return m_userGroupResolutionConfiguration; }

    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline bool UserGroupResolutionConfigurationHasBeenSet() const { return m_userGroupResolutionConfigurationHasBeenSet; }

    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline void SetUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = value; }

    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline void SetUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = std::move(value); }

    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline UpdateIndexRequest& WithUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { SetUserGroupResolutionConfiguration(value); return *this;}

    /**
     * <p>Enables fetching access levels of groups and users from an IAM Identity
     * Center (successor to Single Sign-On) identity source. To configure this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UserGroupResolutionConfiguration.html">UserGroupResolutionConfiguration</a>.</p>
     */
    inline UpdateIndexRequest& WithUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { SetUserGroupResolutionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<DocumentMetadataConfiguration> m_documentMetadataConfigurationUpdates;
    bool m_documentMetadataConfigurationUpdatesHasBeenSet = false;

    CapacityUnitsConfiguration m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;

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
