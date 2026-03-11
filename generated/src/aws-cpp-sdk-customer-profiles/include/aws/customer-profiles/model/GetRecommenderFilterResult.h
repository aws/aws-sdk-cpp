/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderFilterStatus.h>

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
class GetRecommenderFilterResult {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderFilterResult() = default;
  AWS_CUSTOMERPROFILES_API GetRecommenderFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetRecommenderFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the recommender filter.</p>
   */
  inline const Aws::String& GetRecommenderFilterName() const { return m_recommenderFilterName; }
  template <typename RecommenderFilterNameT = Aws::String>
  void SetRecommenderFilterName(RecommenderFilterNameT&& value) {
    m_recommenderFilterNameHasBeenSet = true;
    m_recommenderFilterName = std::forward<RecommenderFilterNameT>(value);
  }
  template <typename RecommenderFilterNameT = Aws::String>
  GetRecommenderFilterResult& WithRecommenderFilterName(RecommenderFilterNameT&& value) {
    SetRecommenderFilterName(std::forward<RecommenderFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter expression that defines which items to include or exclude from
   * recommendations.</p>
   */
  inline const Aws::String& GetRecommenderFilterExpression() const { return m_recommenderFilterExpression; }
  template <typename RecommenderFilterExpressionT = Aws::String>
  void SetRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    m_recommenderFilterExpressionHasBeenSet = true;
    m_recommenderFilterExpression = std::forward<RecommenderFilterExpressionT>(value);
  }
  template <typename RecommenderFilterExpressionT = Aws::String>
  GetRecommenderFilterResult& WithRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    SetRecommenderFilterExpression(std::forward<RecommenderFilterExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender filter was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRecommenderFilterResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the recommender filter.</p>
   */
  inline RecommenderFilterStatus GetStatus() const { return m_status; }
  inline void SetStatus(RecommenderFilterStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRecommenderFilterResult& WithStatus(RecommenderFilterStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the recommender filter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRecommenderFilterResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the recommender filter failed, provides the reason for the failure.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetRecommenderFilterResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  GetRecommenderFilterResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetRecommenderFilterResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  GetRecommenderFilterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recommenderFilterName;

  Aws::String m_recommenderFilterExpression;

  Aws::Utils::DateTime m_createdAt{};

  RecommenderFilterStatus m_status{RecommenderFilterStatus::NOT_SET};

  Aws::String m_description;

  Aws::String m_failureReason;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recommenderFilterNameHasBeenSet = false;
  bool m_recommenderFilterExpressionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
