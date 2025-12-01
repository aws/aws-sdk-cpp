/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>
#include <aws/customer-profiles/model/RecommenderRecipeName.h>
#include <aws/customer-profiles/model/RecommenderStatus.h>
#include <aws/customer-profiles/model/RecommenderUpdate.h>
#include <aws/customer-profiles/model/TrainingMetrics.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetRecommenderResult {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderResult() = default;
  AWS_CUSTOMERPROFILES_API GetRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the recommender.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  GetRecommenderResult& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recipe used by the recommender to generate
   * recommendations.</p>
   */
  inline RecommenderRecipeName GetRecommenderRecipeName() const { return m_recommenderRecipeName; }
  inline void SetRecommenderRecipeName(RecommenderRecipeName value) {
    m_recommenderRecipeNameHasBeenSet = true;
    m_recommenderRecipeName = value;
  }
  inline GetRecommenderResult& WithRecommenderRecipeName(RecommenderRecipeName value) {
    SetRecommenderRecipeName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the recommender, including parameters and
   * settings that define its behavior.</p>
   */
  inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
  template <typename RecommenderConfigT = RecommenderConfig>
  void SetRecommenderConfig(RecommenderConfigT&& value) {
    m_recommenderConfigHasBeenSet = true;
    m_recommenderConfig = std::forward<RecommenderConfigT>(value);
  }
  template <typename RecommenderConfigT = RecommenderConfig>
  GetRecommenderResult& WithRecommenderConfig(RecommenderConfigT&& value) {
    SetRecommenderConfig(std::forward<RecommenderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the recommender providing information about its
   * purpose and functionality.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRecommenderResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommender, indicating whether it is active,
   * creating, updating, or in another state.</p>
   */
  inline RecommenderStatus GetStatus() const { return m_status; }
  inline void SetStatus(RecommenderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRecommenderResult& WithStatus(RecommenderStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender was edited.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetRecommenderResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRecommenderResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the recommender fails, provides the reason for the failure.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetRecommenderResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the most recent update performed on the recommender,
   * including status and timestamp.</p>
   */
  inline const RecommenderUpdate& GetLatestRecommenderUpdate() const { return m_latestRecommenderUpdate; }
  template <typename LatestRecommenderUpdateT = RecommenderUpdate>
  void SetLatestRecommenderUpdate(LatestRecommenderUpdateT&& value) {
    m_latestRecommenderUpdateHasBeenSet = true;
    m_latestRecommenderUpdate = std::forward<LatestRecommenderUpdateT>(value);
  }
  template <typename LatestRecommenderUpdateT = RecommenderUpdate>
  GetRecommenderResult& WithLatestRecommenderUpdate(LatestRecommenderUpdateT&& value) {
    SetLatestRecommenderUpdate(std::forward<LatestRecommenderUpdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of metrics that provide information about the recommender's training
   * performance and accuracy.</p>
   */
  inline const Aws::Vector<TrainingMetrics>& GetTrainingMetrics() const { return m_trainingMetrics; }
  template <typename TrainingMetricsT = Aws::Vector<TrainingMetrics>>
  void SetTrainingMetrics(TrainingMetricsT&& value) {
    m_trainingMetricsHasBeenSet = true;
    m_trainingMetrics = std::forward<TrainingMetricsT>(value);
  }
  template <typename TrainingMetricsT = Aws::Vector<TrainingMetrics>>
  GetRecommenderResult& WithTrainingMetrics(TrainingMetricsT&& value) {
    SetTrainingMetrics(std::forward<TrainingMetricsT>(value));
    return *this;
  }
  template <typename TrainingMetricsT = TrainingMetrics>
  GetRecommenderResult& AddTrainingMetrics(TrainingMetricsT&& value) {
    m_trainingMetricsHasBeenSet = true;
    m_trainingMetrics.emplace_back(std::forward<TrainingMetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetRecommenderResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetRecommenderResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRecommenderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommenderName;
  bool m_recommenderNameHasBeenSet = false;

  RecommenderRecipeName m_recommenderRecipeName{RecommenderRecipeName::NOT_SET};
  bool m_recommenderRecipeNameHasBeenSet = false;

  RecommenderConfig m_recommenderConfig;
  bool m_recommenderConfigHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  RecommenderStatus m_status{RecommenderStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_lastUpdatedAtHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_failureReason;
  bool m_failureReasonHasBeenSet = false;

  RecommenderUpdate m_latestRecommenderUpdate;
  bool m_latestRecommenderUpdateHasBeenSet = false;

  Aws::Vector<TrainingMetrics> m_trainingMetrics;
  bool m_trainingMetricsHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
