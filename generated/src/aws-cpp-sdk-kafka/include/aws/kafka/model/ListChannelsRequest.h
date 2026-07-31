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
class ListChannelsRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API ListChannelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * cluster.</p>

   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ListChannelsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Maximum number of channels to return in a single response.</p>

   *
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListChannelsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>If the response of ListChannels is truncated, it returns a
   * nextToken in the response. This nextToken should be sent in the subsequent
   * request to ListChannels.</p>

   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListChannelsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Filters results to channels whose topic name matches the
   * specified value.</p>

   */
  inline const Aws::String& GetTopicNameFilter() const { return m_topicNameFilter; }
  inline bool TopicNameFilterHasBeenSet() const { return m_topicNameFilterHasBeenSet; }
  template <typename TopicNameFilterT = Aws::String>
  void SetTopicNameFilter(TopicNameFilterT&& value) {
    m_topicNameFilterHasBeenSet = true;
    m_topicNameFilter = std::forward<TopicNameFilterT>(value);
  }
  template <typename TopicNameFilterT = Aws::String>
  ListChannelsRequest& WithTopicNameFilter(TopicNameFilterT&& value) {
    SetTopicNameFilter(std::forward<TopicNameFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_topicNameFilter;
  bool m_clusterArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_topicNameFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
