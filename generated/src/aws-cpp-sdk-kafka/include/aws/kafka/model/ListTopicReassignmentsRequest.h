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
class ListTopicReassignmentsRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API ListTopicReassignmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTopicReassignments"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  ListTopicReassignmentsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of reassignment operations to return. Default 50, maximum
   * 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListTopicReassignmentsRequest& WithMaxResults(int value) {
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
  ListTopicReassignmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter. Only return reassignments matching these statuses.</p>
   */
  inline const Aws::String& GetStatusFilter() const { return m_statusFilter; }
  inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
  template <typename StatusFilterT = Aws::String>
  void SetStatusFilter(StatusFilterT&& value) {
    m_statusFilterHasBeenSet = true;
    m_statusFilter = std::forward<StatusFilterT>(value);
  }
  template <typename StatusFilterT = Aws::String>
  ListTopicReassignmentsRequest& WithStatusFilter(StatusFilterT&& value) {
    SetStatusFilter(std::forward<StatusFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_statusFilter;
  bool m_clusterArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_statusFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
