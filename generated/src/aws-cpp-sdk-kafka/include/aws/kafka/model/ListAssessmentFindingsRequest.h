/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Kafka {
namespace Model {

/**
 */
class ListAssessmentFindingsRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API ListAssessmentFindingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentFindings"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the assessment.</p>
   */
  inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
  inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
  template <typename AssessmentArnT = Aws::String>
  void SetAssessmentArn(AssessmentArnT&& value) {
    m_assessmentArnHasBeenSet = true;
    m_assessmentArn = std::forward<AssessmentArnT>(value);
  }
  template <typename AssessmentArnT = Aws::String>
  ListAssessmentFindingsRequest& WithAssessmentArn(AssessmentArnT&& value) {
    SetAssessmentArn(std::forward<AssessmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter. Only return findings matching this category.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  ListAssessmentFindingsRequest& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ListAssessmentFindingsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of findings to return. Default 100, maximum 500.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssessmentFindingsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, it returns a nextToken. Send this in the
   * subsequent request to get the remaining results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssessmentFindingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter. Only return findings matching this severity.</p>
   */
  inline const Aws::String& GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  template <typename SeverityT = Aws::String>
  void SetSeverity(SeverityT&& value) {
    m_severityHasBeenSet = true;
    m_severity = std::forward<SeverityT>(value);
  }
  template <typename SeverityT = Aws::String>
  ListAssessmentFindingsRequest& WithSeverity(SeverityT&& value) {
    SetSeverity(std::forward<SeverityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assessmentArn;

  Aws::String m_category;

  Aws::String m_clusterArn;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_severity;
  bool m_assessmentArnHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_severityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
