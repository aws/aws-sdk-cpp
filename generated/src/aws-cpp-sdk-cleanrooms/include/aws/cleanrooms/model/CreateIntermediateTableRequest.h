/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PopulationAnalysisConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class CreateIntermediateTableRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API CreateIntermediateTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIntermediateTable"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the membership where the intermediate table is
   * created.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  CreateIntermediateTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the intermediate table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateIntermediateTableRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the intermediate table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateIntermediateTableRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines the analysis used to populate the intermediate
   * table. This configuration contains the SQL query or analysis template
   * reference.</p>
   */
  inline const PopulationAnalysisConfiguration& GetPopulationAnalysisConfiguration() const { return m_populationAnalysisConfiguration; }
  inline bool PopulationAnalysisConfigurationHasBeenSet() const { return m_populationAnalysisConfigurationHasBeenSet; }
  template <typename PopulationAnalysisConfigurationT = PopulationAnalysisConfiguration>
  void SetPopulationAnalysisConfiguration(PopulationAnalysisConfigurationT&& value) {
    m_populationAnalysisConfigurationHasBeenSet = true;
    m_populationAnalysisConfiguration = std::forward<PopulationAnalysisConfigurationT>(value);
  }
  template <typename PopulationAnalysisConfigurationT = PopulationAnalysisConfiguration>
  CreateIntermediateTableRequest& WithPopulationAnalysisConfiguration(PopulationAnalysisConfigurationT&& value) {
    SetPopulationAnalysisConfiguration(std::forward<PopulationAnalysisConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer-managed KMS key used to
   * encrypt the intermediate table data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateIntermediateTableRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days to retain populated data versions. Minimum value of 1,
   * maximum value of 365.</p>
   */
  inline int GetRetentionInDays() const { return m_retentionInDays; }
  inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
  inline void SetRetentionInDays(int value) {
    m_retentionInDaysHasBeenSet = true;
    m_retentionInDays = value;
  }
  inline CreateIntermediateTableRequest& WithRetentionInDays(int value) {
    SetRetentionInDays(value);
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
  CreateIntermediateTableRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateIntermediateTableRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_name;

  Aws::String m_description;

  PopulationAnalysisConfiguration m_populationAnalysisConfiguration;

  Aws::String m_kmsKeyArn;

  int m_retentionInDays{0};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_populationAnalysisConfigurationHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_retentionInDaysHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
