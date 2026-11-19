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
class ListAssessmentsRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API ListAssessmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssessments"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Optional filter. The type of assessment to filter by.</p>
   */
  inline const Aws::String& GetAssessmentType() const { return m_assessmentType; }
  inline bool AssessmentTypeHasBeenSet() const { return m_assessmentTypeHasBeenSet; }
  template <typename AssessmentTypeT = Aws::String>
  void SetAssessmentType(AssessmentTypeT&& value) {
    m_assessmentTypeHasBeenSet = true;
    m_assessmentType = std::forward<AssessmentTypeT>(value);
  }
  template <typename AssessmentTypeT = Aws::String>
  ListAssessmentsRequest& WithAssessmentType(AssessmentTypeT&& value) {
    SetAssessmentType(std::forward<AssessmentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster to list assessments for.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ListAssessmentsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of assessments to return. Default 25, maximum 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssessmentsRequest& WithMaxResults(int value) {
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
  ListAssessmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assessmentType;

  Aws::String m_clusterArn;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_assessmentTypeHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
