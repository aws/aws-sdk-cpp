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


    ///@{
    /**
     * <p>The identifier of the index you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateIndexRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateIndexRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateIndexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateIndexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateIndexRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateIndexRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline const Aws::Vector<DocumentMetadataConfiguration>& GetDocumentMetadataConfigurationUpdates() const{ return m_documentMetadataConfigurationUpdates; }
    inline bool DocumentMetadataConfigurationUpdatesHasBeenSet() const { return m_documentMetadataConfigurationUpdatesHasBeenSet; }
    inline void SetDocumentMetadataConfigurationUpdates(const Aws::Vector<DocumentMetadataConfiguration>& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates = value; }
    inline void SetDocumentMetadataConfigurationUpdates(Aws::Vector<DocumentMetadataConfiguration>&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates = std::move(value); }
    inline UpdateIndexRequest& WithDocumentMetadataConfigurationUpdates(const Aws::Vector<DocumentMetadataConfiguration>& value) { SetDocumentMetadataConfigurationUpdates(value); return *this;}
    inline UpdateIndexRequest& WithDocumentMetadataConfigurationUpdates(Aws::Vector<DocumentMetadataConfiguration>&& value) { SetDocumentMetadataConfigurationUpdates(std::move(value)); return *this;}
    inline UpdateIndexRequest& AddDocumentMetadataConfigurationUpdates(const DocumentMetadataConfiguration& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates.push_back(value); return *this; }
    inline UpdateIndexRequest& AddDocumentMetadataConfigurationUpdates(DocumentMetadataConfiguration&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const{ return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    inline void SetCapacityUnits(const CapacityUnitsConfiguration& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }
    inline void SetCapacityUnits(CapacityUnitsConfiguration&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::move(value); }
    inline UpdateIndexRequest& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}
    inline UpdateIndexRequest& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}
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
    inline UpdateIndexRequest& WithUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { SetUserTokenConfigurations(value); return *this;}
    inline UpdateIndexRequest& WithUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { SetUserTokenConfigurations(std::move(value)); return *this;}
    inline UpdateIndexRequest& AddUserTokenConfigurations(const UserTokenConfiguration& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(value); return *this; }
    inline UpdateIndexRequest& AddUserTokenConfigurations(UserTokenConfiguration&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user context policy.</p>  <p>If you're using an Amazon Kendra
     * Gen AI Enterprise Edition index, you can only use <code>ATTRIBUTE_FILTER</code>
     * to filter search results by user context. If you're using an Amazon Kendra Gen
     * AI Enterprise Edition index and you try to use <code>USER_TOKEN</code> to
     * configure user context policy, Amazon Kendra returns a
     * <code>ValidationException</code> error.</p> 
     */
    inline const UserContextPolicy& GetUserContextPolicy() const{ return m_userContextPolicy; }
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }
    inline void SetUserContextPolicy(const UserContextPolicy& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }
    inline void SetUserContextPolicy(UserContextPolicy&& value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = std::move(value); }
    inline UpdateIndexRequest& WithUserContextPolicy(const UserContextPolicy& value) { SetUserContextPolicy(value); return *this;}
    inline UpdateIndexRequest& WithUserContextPolicy(UserContextPolicy&& value) { SetUserContextPolicy(std::move(value)); return *this;}
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
    inline UpdateIndexRequest& WithUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { SetUserGroupResolutionConfiguration(value); return *this;}
    inline UpdateIndexRequest& WithUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { SetUserGroupResolutionConfiguration(std::move(value)); return *this;}
    ///@}
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
