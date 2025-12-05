/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalyticsEngine.h>
#include <aws/cleanrooms/model/AutoApprovedChangeType.h>
#include <aws/cleanrooms/model/CollaborationJobLogStatus.h>
#include <aws/cleanrooms/model/CollaborationQueryLogStatus.h>
#include <aws/cleanrooms/model/DataEncryptionMetadata.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
#include <aws/cleanrooms/model/MemberAbility.h>
#include <aws/cleanrooms/model/MemberSpecification.h>
#include <aws/cleanrooms/model/PaymentConfiguration.h>
#include <aws/cleanrooms/model/SupportedS3Region.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class CreateCollaborationRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API CreateCollaborationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCollaboration"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A list of initial members, not including the creator. This list is
   * immutable.</p>
   */
  inline const Aws::Vector<MemberSpecification>& GetMembers() const { return m_members; }
  inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
  template <typename MembersT = Aws::Vector<MemberSpecification>>
  void SetMembers(MembersT&& value) {
    m_membersHasBeenSet = true;
    m_members = std::forward<MembersT>(value);
  }
  template <typename MembersT = Aws::Vector<MemberSpecification>>
  CreateCollaborationRequest& WithMembers(MembersT&& value) {
    SetMembers(std::forward<MembersT>(value));
    return *this;
  }
  template <typename MembersT = MemberSpecification>
  CreateCollaborationRequest& AddMembers(MembersT&& value) {
    m_membersHasBeenSet = true;
    m_members.emplace_back(std::forward<MembersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for a collaboration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateCollaborationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the collaboration provided by the collaboration owner.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCollaborationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The abilities granted to the collaboration creator.</p>
   */
  inline const Aws::Vector<MemberAbility>& GetCreatorMemberAbilities() const { return m_creatorMemberAbilities; }
  inline bool CreatorMemberAbilitiesHasBeenSet() const { return m_creatorMemberAbilitiesHasBeenSet; }
  template <typename CreatorMemberAbilitiesT = Aws::Vector<MemberAbility>>
  void SetCreatorMemberAbilities(CreatorMemberAbilitiesT&& value) {
    m_creatorMemberAbilitiesHasBeenSet = true;
    m_creatorMemberAbilities = std::forward<CreatorMemberAbilitiesT>(value);
  }
  template <typename CreatorMemberAbilitiesT = Aws::Vector<MemberAbility>>
  CreateCollaborationRequest& WithCreatorMemberAbilities(CreatorMemberAbilitiesT&& value) {
    SetCreatorMemberAbilities(std::forward<CreatorMemberAbilitiesT>(value));
    return *this;
  }
  inline CreateCollaborationRequest& AddCreatorMemberAbilities(MemberAbility value) {
    m_creatorMemberAbilitiesHasBeenSet = true;
    m_creatorMemberAbilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ML abilities granted to the collaboration creator.</p>
   */
  inline const MLMemberAbilities& GetCreatorMLMemberAbilities() const { return m_creatorMLMemberAbilities; }
  inline bool CreatorMLMemberAbilitiesHasBeenSet() const { return m_creatorMLMemberAbilitiesHasBeenSet; }
  template <typename CreatorMLMemberAbilitiesT = MLMemberAbilities>
  void SetCreatorMLMemberAbilities(CreatorMLMemberAbilitiesT&& value) {
    m_creatorMLMemberAbilitiesHasBeenSet = true;
    m_creatorMLMemberAbilities = std::forward<CreatorMLMemberAbilitiesT>(value);
  }
  template <typename CreatorMLMemberAbilitiesT = MLMemberAbilities>
  CreateCollaborationRequest& WithCreatorMLMemberAbilities(CreatorMLMemberAbilitiesT&& value) {
    SetCreatorMLMemberAbilities(std::forward<CreatorMLMemberAbilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the collaboration creator.</p>
   */
  inline const Aws::String& GetCreatorDisplayName() const { return m_creatorDisplayName; }
  inline bool CreatorDisplayNameHasBeenSet() const { return m_creatorDisplayNameHasBeenSet; }
  template <typename CreatorDisplayNameT = Aws::String>
  void SetCreatorDisplayName(CreatorDisplayNameT&& value) {
    m_creatorDisplayNameHasBeenSet = true;
    m_creatorDisplayName = std::forward<CreatorDisplayNameT>(value);
  }
  template <typename CreatorDisplayNameT = Aws::String>
  CreateCollaborationRequest& WithCreatorDisplayName(CreatorDisplayNameT&& value) {
    SetCreatorDisplayName(std::forward<CreatorDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings for client-side encryption with Cryptographic Computing for
   * Clean Rooms.</p>
   */
  inline const DataEncryptionMetadata& GetDataEncryptionMetadata() const { return m_dataEncryptionMetadata; }
  inline bool DataEncryptionMetadataHasBeenSet() const { return m_dataEncryptionMetadataHasBeenSet; }
  template <typename DataEncryptionMetadataT = DataEncryptionMetadata>
  void SetDataEncryptionMetadata(DataEncryptionMetadataT&& value) {
    m_dataEncryptionMetadataHasBeenSet = true;
    m_dataEncryptionMetadata = std::forward<DataEncryptionMetadataT>(value);
  }
  template <typename DataEncryptionMetadataT = DataEncryptionMetadata>
  CreateCollaborationRequest& WithDataEncryptionMetadata(DataEncryptionMetadataT&& value) {
    SetDataEncryptionMetadata(std::forward<DataEncryptionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An indicator as to whether query logging has been enabled or disabled for the
   * collaboration.</p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
   * queries run within this collaboration and those logs can be viewed in Amazon
   * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
   */
  inline CollaborationQueryLogStatus GetQueryLogStatus() const { return m_queryLogStatus; }
  inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
  inline void SetQueryLogStatus(CollaborationQueryLogStatus value) {
    m_queryLogStatusHasBeenSet = true;
    m_queryLogStatus = value;
  }
  inline CreateCollaborationRequest& WithQueryLogStatus(CollaborationQueryLogStatus value) {
    SetQueryLogStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether job logs are enabled for this collaboration. </p> <p>When
   * <code>ENABLED</code>, Clean Rooms logs details about jobs run within this
   * collaboration; those logs can be viewed in Amazon CloudWatch Logs. The default
   * value is <code>DISABLED</code>.</p>
   */
  inline CollaborationJobLogStatus GetJobLogStatus() const { return m_jobLogStatus; }
  inline bool JobLogStatusHasBeenSet() const { return m_jobLogStatusHasBeenSet; }
  inline void SetJobLogStatus(CollaborationJobLogStatus value) {
    m_jobLogStatusHasBeenSet = true;
    m_jobLogStatus = value;
  }
  inline CreateCollaborationRequest& WithJobLogStatus(CollaborationJobLogStatus value) {
    SetJobLogStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional label that you can assign to a resource when you create it. Each
   * tag consists of a key and an optional value, both of which you define. When you
   * use tagging, you can also use tag-based access control in IAM policies to
   * control access to this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCollaborationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCollaborationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collaboration creator's payment responsibilities set by the collaboration
   * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
   * member paying for query compute costs, then the member who can query is the
   * default payer.</p>
   */
  inline const PaymentConfiguration& GetCreatorPaymentConfiguration() const { return m_creatorPaymentConfiguration; }
  inline bool CreatorPaymentConfigurationHasBeenSet() const { return m_creatorPaymentConfigurationHasBeenSet; }
  template <typename CreatorPaymentConfigurationT = PaymentConfiguration>
  void SetCreatorPaymentConfiguration(CreatorPaymentConfigurationT&& value) {
    m_creatorPaymentConfigurationHasBeenSet = true;
    m_creatorPaymentConfiguration = std::forward<CreatorPaymentConfigurationT>(value);
  }
  template <typename CreatorPaymentConfigurationT = PaymentConfiguration>
  CreateCollaborationRequest& WithCreatorPaymentConfiguration(CreatorPaymentConfigurationT&& value) {
    SetCreatorPaymentConfiguration(std::forward<CreatorPaymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The analytics engine.</p>  <p>After July 16, 2025, the
   * <code>CLEAN_ROOMS_SQL</code> parameter will no longer be available. </p>
   */
  inline AnalyticsEngine GetAnalyticsEngine() const { return m_analyticsEngine; }
  inline bool AnalyticsEngineHasBeenSet() const { return m_analyticsEngineHasBeenSet; }
  inline void SetAnalyticsEngine(AnalyticsEngine value) {
    m_analyticsEngineHasBeenSet = true;
    m_analyticsEngine = value;
  }
  inline CreateCollaborationRequest& WithAnalyticsEngine(AnalyticsEngine value) {
    SetAnalyticsEngine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of change requests that are automatically approved for this
   * collaboration.</p>
   */
  inline const Aws::Vector<AutoApprovedChangeType>& GetAutoApprovedChangeRequestTypes() const { return m_autoApprovedChangeRequestTypes; }
  inline bool AutoApprovedChangeRequestTypesHasBeenSet() const { return m_autoApprovedChangeRequestTypesHasBeenSet; }
  template <typename AutoApprovedChangeRequestTypesT = Aws::Vector<AutoApprovedChangeType>>
  void SetAutoApprovedChangeRequestTypes(AutoApprovedChangeRequestTypesT&& value) {
    m_autoApprovedChangeRequestTypesHasBeenSet = true;
    m_autoApprovedChangeRequestTypes = std::forward<AutoApprovedChangeRequestTypesT>(value);
  }
  template <typename AutoApprovedChangeRequestTypesT = Aws::Vector<AutoApprovedChangeType>>
  CreateCollaborationRequest& WithAutoApprovedChangeRequestTypes(AutoApprovedChangeRequestTypesT&& value) {
    SetAutoApprovedChangeRequestTypes(std::forward<AutoApprovedChangeRequestTypesT>(value));
    return *this;
  }
  inline CreateCollaborationRequest& AddAutoApprovedChangeRequestTypes(AutoApprovedChangeType value) {
    m_autoApprovedChangeRequestTypesHasBeenSet = true;
    m_autoApprovedChangeRequestTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions where collaboration query results can be
   * stored. When specified, results can only be written to these Regions. This
   * parameter enables you to meet your compliance and data governance requirements,
   * and implement regional data governance policies.</p>
   */
  inline const Aws::Vector<SupportedS3Region>& GetAllowedResultRegions() const { return m_allowedResultRegions; }
  inline bool AllowedResultRegionsHasBeenSet() const { return m_allowedResultRegionsHasBeenSet; }
  template <typename AllowedResultRegionsT = Aws::Vector<SupportedS3Region>>
  void SetAllowedResultRegions(AllowedResultRegionsT&& value) {
    m_allowedResultRegionsHasBeenSet = true;
    m_allowedResultRegions = std::forward<AllowedResultRegionsT>(value);
  }
  template <typename AllowedResultRegionsT = Aws::Vector<SupportedS3Region>>
  CreateCollaborationRequest& WithAllowedResultRegions(AllowedResultRegionsT&& value) {
    SetAllowedResultRegions(std::forward<AllowedResultRegionsT>(value));
    return *this;
  }
  inline CreateCollaborationRequest& AddAllowedResultRegions(SupportedS3Region value) {
    m_allowedResultRegionsHasBeenSet = true;
    m_allowedResultRegions.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MemberSpecification> m_members;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<MemberAbility> m_creatorMemberAbilities;

  MLMemberAbilities m_creatorMLMemberAbilities;

  Aws::String m_creatorDisplayName;

  DataEncryptionMetadata m_dataEncryptionMetadata;

  CollaborationQueryLogStatus m_queryLogStatus{CollaborationQueryLogStatus::NOT_SET};

  CollaborationJobLogStatus m_jobLogStatus{CollaborationJobLogStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  PaymentConfiguration m_creatorPaymentConfiguration;

  AnalyticsEngine m_analyticsEngine{AnalyticsEngine::NOT_SET};

  Aws::Vector<AutoApprovedChangeType> m_autoApprovedChangeRequestTypes;

  Aws::Vector<SupportedS3Region> m_allowedResultRegions;
  bool m_membersHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_creatorMemberAbilitiesHasBeenSet = false;
  bool m_creatorMLMemberAbilitiesHasBeenSet = false;
  bool m_creatorDisplayNameHasBeenSet = false;
  bool m_dataEncryptionMetadataHasBeenSet = false;
  bool m_queryLogStatusHasBeenSet = false;
  bool m_jobLogStatusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_creatorPaymentConfigurationHasBeenSet = false;
  bool m_analyticsEngineHasBeenSet = false;
  bool m_autoApprovedChangeRequestTypesHasBeenSet = false;
  bool m_allowedResultRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
