/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>
#include <aws/customer-profiles/model/RecommenderRecipeName.h>
#include <aws/customer-profiles/model/RecommenderStatus.h>
#include <aws/customer-profiles/model/RecommenderUpdate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Provides a summary of a recommender's configuration and current
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderSummary">AWS
 * API Reference</a></p>
 */
class RecommenderSummary {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderSummary() = default;
  AWS_CUSTOMERPROFILES_API RecommenderSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommender.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  inline bool RecommenderNameHasBeenSet() const { return m_recommenderNameHasBeenSet; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  RecommenderSummary& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recipe used by this recommender.</p>
   */
  inline RecommenderRecipeName GetRecipeName() const { return m_recipeName; }
  inline bool RecipeNameHasBeenSet() const { return m_recipeNameHasBeenSet; }
  inline void SetRecipeName(RecommenderRecipeName value) {
    m_recipeNameHasBeenSet = true;
    m_recipeName = value;
  }
  inline RecommenderSummary& WithRecipeName(RecommenderRecipeName value) {
    SetRecipeName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings applied to this recommender.</p>
   */
  inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
  inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
  template <typename RecommenderConfigT = RecommenderConfig>
  void SetRecommenderConfig(RecommenderConfigT&& value) {
    m_recommenderConfigHasBeenSet = true;
    m_recommenderConfig = std::forward<RecommenderConfigT>(value);
  }
  template <typename RecommenderConfigT = RecommenderConfig>
  RecommenderSummary& WithRecommenderConfig(RecommenderConfigT&& value) {
    SetRecommenderConfig(std::forward<RecommenderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommender was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RecommenderSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the recommender's purpose and characteristics.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RecommenderSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current operational status of the recommender.</p>
   */
  inline RecommenderStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommenderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecommenderSummary& WithStatus(RecommenderStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender was edited.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  RecommenderSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RecommenderSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RecommenderSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the recommender is in a failed state, provides the reason for the
   * failure.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  RecommenderSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the most recent update performed on the recommender,
   * including its status and timing.</p>
   */
  inline const RecommenderUpdate& GetLatestRecommenderUpdate() const { return m_latestRecommenderUpdate; }
  inline bool LatestRecommenderUpdateHasBeenSet() const { return m_latestRecommenderUpdateHasBeenSet; }
  template <typename LatestRecommenderUpdateT = RecommenderUpdate>
  void SetLatestRecommenderUpdate(LatestRecommenderUpdateT&& value) {
    m_latestRecommenderUpdateHasBeenSet = true;
    m_latestRecommenderUpdate = std::forward<LatestRecommenderUpdateT>(value);
  }
  template <typename LatestRecommenderUpdateT = RecommenderUpdate>
  RecommenderSummary& WithLatestRecommenderUpdate(LatestRecommenderUpdateT&& value) {
    SetLatestRecommenderUpdate(std::forward<LatestRecommenderUpdateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommenderName;

  RecommenderRecipeName m_recipeName{RecommenderRecipeName::NOT_SET};

  RecommenderConfig m_recommenderConfig;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  RecommenderStatus m_status{RecommenderStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_failureReason;

  RecommenderUpdate m_latestRecommenderUpdate;
  bool m_recommenderNameHasBeenSet = false;
  bool m_recipeNameHasBeenSet = false;
  bool m_recommenderConfigHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_latestRecommenderUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
