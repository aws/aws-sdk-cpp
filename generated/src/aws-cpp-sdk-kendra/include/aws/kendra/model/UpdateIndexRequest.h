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
    AWS_KENDRA_API UpdateIndexRequest() = default;

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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateIndexRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the index.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateIndexRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Identity and Access Management (IAM) role that gives Amazon Kendra
     * permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateIndexRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the index.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateIndexRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document metadata configuration you want to update for the index.
     * Document metadata are fields or attributes associated with your documents. For
     * example, the company department name associated with each document.</p>
     */
    inline const Aws::Vector<DocumentMetadataConfiguration>& GetDocumentMetadataConfigurationUpdates() const { return m_documentMetadataConfigurationUpdates; }
    inline bool DocumentMetadataConfigurationUpdatesHasBeenSet() const { return m_documentMetadataConfigurationUpdatesHasBeenSet; }
    template<typename DocumentMetadataConfigurationUpdatesT = Aws::Vector<DocumentMetadataConfiguration>>
    void SetDocumentMetadataConfigurationUpdates(DocumentMetadataConfigurationUpdatesT&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates = std::forward<DocumentMetadataConfigurationUpdatesT>(value); }
    template<typename DocumentMetadataConfigurationUpdatesT = Aws::Vector<DocumentMetadataConfiguration>>
    UpdateIndexRequest& WithDocumentMetadataConfigurationUpdates(DocumentMetadataConfigurationUpdatesT&& value) { SetDocumentMetadataConfigurationUpdates(std::forward<DocumentMetadataConfigurationUpdatesT>(value)); return *this;}
    template<typename DocumentMetadataConfigurationUpdatesT = DocumentMetadataConfiguration>
    UpdateIndexRequest& AddDocumentMetadataConfigurationUpdates(DocumentMetadataConfigurationUpdatesT&& value) { m_documentMetadataConfigurationUpdatesHasBeenSet = true; m_documentMetadataConfigurationUpdates.emplace_back(std::forward<DocumentMetadataConfigurationUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the number of additional document storage and query capacity units that
     * should be used by the index. You can change the capacity of the index up to 5
     * times per day, or make 5 API calls.</p> <p>If you are using extra storage units,
     * you can't reduce the storage capacity below what is required to meet the storage
     * needs for your index.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const { return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    template<typename CapacityUnitsT = CapacityUnitsConfiguration>
    void SetCapacityUnits(CapacityUnitsT&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::forward<CapacityUnitsT>(value); }
    template<typename CapacityUnitsT = CapacityUnitsConfiguration>
    UpdateIndexRequest& WithCapacityUnits(CapacityUnitsT&& value) { SetCapacityUnits(std::forward<CapacityUnitsT>(value)); return *this;}
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
    UpdateIndexRequest& WithUserTokenConfigurations(UserTokenConfigurationsT&& value) { SetUserTokenConfigurations(std::forward<UserTokenConfigurationsT>(value)); return *this;}
    template<typename UserTokenConfigurationsT = UserTokenConfiguration>
    UpdateIndexRequest& AddUserTokenConfigurations(UserTokenConfigurationsT&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.emplace_back(std::forward<UserTokenConfigurationsT>(value)); return *this; }
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
    inline UserContextPolicy GetUserContextPolicy() const { return m_userContextPolicy; }
    inline bool UserContextPolicyHasBeenSet() const { return m_userContextPolicyHasBeenSet; }
    inline void SetUserContextPolicy(UserContextPolicy value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }
    inline UpdateIndexRequest& WithUserContextPolicy(UserContextPolicy value) { SetUserContextPolicy(value); return *this;}
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
    UpdateIndexRequest& WithUserGroupResolutionConfiguration(UserGroupResolutionConfigurationT&& value) { SetUserGroupResolutionConfiguration(std::forward<UserGroupResolutionConfigurationT>(value)); return *this;}
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

    UserContextPolicy m_userContextPolicy{UserContextPolicy::NOT_SET};
    bool m_userContextPolicyHasBeenSet = false;

    UserGroupResolutionConfiguration m_userGroupResolutionConfiguration;
    bool m_userGroupResolutionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
