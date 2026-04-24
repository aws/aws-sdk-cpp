/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderFilterStatus.h>

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
 * <p>Provides a summary of a recommender filter's configuration and current
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderFilterSummary">AWS
 * API Reference</a></p>
 */
class RecommenderFilterSummary {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderFilterSummary() = default;
  AWS_CUSTOMERPROFILES_API RecommenderFilterSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderFilterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommender filter.</p>
   */
  inline const Aws::String& GetRecommenderFilterName() const { return m_recommenderFilterName; }
  inline bool RecommenderFilterNameHasBeenSet() const { return m_recommenderFilterNameHasBeenSet; }
  template <typename RecommenderFilterNameT = Aws::String>
  void SetRecommenderFilterName(RecommenderFilterNameT&& value) {
    m_recommenderFilterNameHasBeenSet = true;
    m_recommenderFilterName = std::forward<RecommenderFilterNameT>(value);
  }
  template <typename RecommenderFilterNameT = Aws::String>
  RecommenderFilterSummary& WithRecommenderFilterName(RecommenderFilterNameT&& value) {
    SetRecommenderFilterName(std::forward<RecommenderFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender schema associated with this recommender
   * filter.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  inline bool RecommenderSchemaNameHasBeenSet() const { return m_recommenderSchemaNameHasBeenSet; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  RecommenderFilterSummary& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter expression that defines which items to include or exclude from
   * recommendations.</p>
   */
  inline const Aws::String& GetRecommenderFilterExpression() const { return m_recommenderFilterExpression; }
  inline bool RecommenderFilterExpressionHasBeenSet() const { return m_recommenderFilterExpressionHasBeenSet; }
  template <typename RecommenderFilterExpressionT = Aws::String>
  void SetRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    m_recommenderFilterExpressionHasBeenSet = true;
    m_recommenderFilterExpression = std::forward<RecommenderFilterExpressionT>(value);
  }
  template <typename RecommenderFilterExpressionT = Aws::String>
  RecommenderFilterSummary& WithRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    SetRecommenderFilterExpression(std::forward<RecommenderFilterExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommender filter was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RecommenderFilterSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the recommender filter's purpose and characteristics.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RecommenderFilterSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current operational status of the recommender filter.</p>
   */
  inline RecommenderFilterStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommenderFilterStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecommenderFilterSummary& WithStatus(RecommenderFilterStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the recommender filter is in a failed state, provides the reason for the
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
  RecommenderFilterSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  RecommenderFilterSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RecommenderFilterSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommenderFilterName;

  Aws::String m_recommenderSchemaName;

  Aws::String m_recommenderFilterExpression;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  RecommenderFilterStatus m_status{RecommenderFilterStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_recommenderFilterNameHasBeenSet = false;
  bool m_recommenderSchemaNameHasBeenSet = false;
  bool m_recommenderFilterExpressionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
