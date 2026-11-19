/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 * <p>Initiates topic partition reassignment between broker types in a mixed-mode
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/StartTopicReassignmentRequest">AWS
 * API Reference</a></p>
 */
class StartTopicReassignmentRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API StartTopicReassignmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartTopicReassignment"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request with the same client token
   * within 24 hours, the API returns the original response without creating a
   * duplicate operation.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartTopicReassignmentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  StartTopicReassignmentRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instance type of the target brokers. Must exist in the cluster. Use Express
   * instance type (e.g., express.m7g.large) for Standard-to-Express migration. Use
   * Standard instance type (e.g., kafka.m7g.large) to move topics back to
   * Standard.</p>
   */
  inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
  inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
  template <typename TargetInstanceTypeT = Aws::String>
  void SetTargetInstanceType(TargetInstanceTypeT&& value) {
    m_targetInstanceTypeHasBeenSet = true;
    m_targetInstanceType = std::forward<TargetInstanceTypeT>(value);
  }
  template <typename TargetInstanceTypeT = Aws::String>
  StartTopicReassignmentRequest& WithTargetInstanceType(TargetInstanceTypeT&& value) {
    SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Regex patterns for topics to exclude from reassignment. Evaluated after
   * include patterns.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTopicsToExclude() const { return m_topicsToExclude; }
  inline bool TopicsToExcludeHasBeenSet() const { return m_topicsToExcludeHasBeenSet; }
  template <typename TopicsToExcludeT = Aws::Vector<Aws::String>>
  void SetTopicsToExclude(TopicsToExcludeT&& value) {
    m_topicsToExcludeHasBeenSet = true;
    m_topicsToExclude = std::forward<TopicsToExcludeT>(value);
  }
  template <typename TopicsToExcludeT = Aws::Vector<Aws::String>>
  StartTopicReassignmentRequest& WithTopicsToExclude(TopicsToExcludeT&& value) {
    SetTopicsToExclude(std::forward<TopicsToExcludeT>(value));
    return *this;
  }
  template <typename TopicsToExcludeT = Aws::String>
  StartTopicReassignmentRequest& AddTopicsToExclude(TopicsToExcludeT&& value) {
    m_topicsToExcludeHasBeenSet = true;
    m_topicsToExclude.emplace_back(std::forward<TopicsToExcludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Regex patterns for topics to reassign. Use ['.*'] for all topics. Max 10
   * patterns.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTopicsToInclude() const { return m_topicsToInclude; }
  inline bool TopicsToIncludeHasBeenSet() const { return m_topicsToIncludeHasBeenSet; }
  template <typename TopicsToIncludeT = Aws::Vector<Aws::String>>
  void SetTopicsToInclude(TopicsToIncludeT&& value) {
    m_topicsToIncludeHasBeenSet = true;
    m_topicsToInclude = std::forward<TopicsToIncludeT>(value);
  }
  template <typename TopicsToIncludeT = Aws::Vector<Aws::String>>
  StartTopicReassignmentRequest& WithTopicsToInclude(TopicsToIncludeT&& value) {
    SetTopicsToInclude(std::forward<TopicsToIncludeT>(value));
    return *this;
  }
  template <typename TopicsToIncludeT = Aws::String>
  StartTopicReassignmentRequest& AddTopicsToInclude(TopicsToIncludeT&& value) {
    m_topicsToIncludeHasBeenSet = true;
    m_topicsToInclude.emplace_back(std::forward<TopicsToIncludeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken;

  Aws::String m_clusterArn;

  Aws::String m_targetInstanceType;

  Aws::Vector<Aws::String> m_topicsToExclude;

  Aws::Vector<Aws::String> m_topicsToInclude;
  bool m_clientTokenHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_targetInstanceTypeHasBeenSet = false;
  bool m_topicsToExcludeHasBeenSet = false;
  bool m_topicsToIncludeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
