/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ErrorInfo.h>
#include <aws/kafka/model/TopicReassignmentStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {
/**
 * <p>Returns the status and progress of a topic reassignment
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeTopicReassignmentResponse">AWS
 * API Reference</a></p>
 */
class DescribeTopicReassignmentResult {
 public:
  AWS_KAFKA_API DescribeTopicReassignmentResult() = default;
  AWS_KAFKA_API DescribeTopicReassignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API DescribeTopicReassignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DescribeTopicReassignmentResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of topics fully migrated to the target broker type.</p>
   */
  inline int GetCompletedTopics() const { return m_completedTopics; }
  inline void SetCompletedTopics(int value) {
    m_completedTopicsHasBeenSet = true;
    m_completedTopics = value;
  }
  inline DescribeTopicReassignmentResult& WithCompletedTopics(int value) {
    SetCompletedTopics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeTopicReassignmentResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error details. Present only when status is FAILED.</p>
   */
  inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
  template <typename ErrorInfoT = ErrorInfo>
  void SetErrorInfo(ErrorInfoT&& value) {
    m_errorInfoHasBeenSet = true;
    m_errorInfo = std::forward<ErrorInfoT>(value);
  }
  template <typename ErrorInfoT = ErrorInfo>
  DescribeTopicReassignmentResult& WithErrorInfo(ErrorInfoT&& value) {
    SetErrorInfo(std::forward<ErrorInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last time the status or progress counters were updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
  template <typename LastUpdateTimeT = Aws::Utils::DateTime>
  void SetLastUpdateTime(LastUpdateTimeT&& value) {
    m_lastUpdateTimeHasBeenSet = true;
    m_lastUpdateTime = std::forward<LastUpdateTimeT>(value);
  }
  template <typename LastUpdateTimeT = Aws::Utils::DateTime>
  DescribeTopicReassignmentResult& WithLastUpdateTime(LastUpdateTimeT&& value) {
    SetLastUpdateTime(std::forward<LastUpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of partitions confirmed on the target broker type.</p>
   */
  inline int GetMigratedPartitions() const { return m_migratedPartitions; }
  inline void SetMigratedPartitions(int value) {
    m_migratedPartitionsHasBeenSet = true;
    m_migratedPartitions = value;
  }
  inline DescribeTopicReassignmentResult& WithMigratedPartitions(int value) {
    SetMigratedPartitions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the reassignment operation.</p>
   */
  inline TopicReassignmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(TopicReassignmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeTopicReassignmentResult& WithStatus(TopicReassignmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target broker instance type for this reassignment.</p>
   */
  inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
  template <typename TargetInstanceTypeT = Aws::String>
  void SetTargetInstanceType(TargetInstanceTypeT&& value) {
    m_targetInstanceTypeHasBeenSet = true;
    m_targetInstanceType = std::forward<TargetInstanceTypeT>(value);
  }
  template <typename TargetInstanceTypeT = Aws::String>
  DescribeTopicReassignmentResult& WithTargetInstanceType(TargetInstanceTypeT&& value) {
    SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic reassignment operation.</p>
   */
  inline const Aws::String& GetTopicReassignmentOperationArn() const { return m_topicReassignmentOperationArn; }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  void SetTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    m_topicReassignmentOperationArnHasBeenSet = true;
    m_topicReassignmentOperationArn = std::forward<TopicReassignmentOperationArnT>(value);
  }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  DescribeTopicReassignmentResult& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    SetTopicReassignmentOperationArn(std::forward<TopicReassignmentOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original exclude patterns provided in the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTopicsToExclude() const { return m_topicsToExclude; }
  template <typename TopicsToExcludeT = Aws::Vector<Aws::String>>
  void SetTopicsToExclude(TopicsToExcludeT&& value) {
    m_topicsToExcludeHasBeenSet = true;
    m_topicsToExclude = std::forward<TopicsToExcludeT>(value);
  }
  template <typename TopicsToExcludeT = Aws::Vector<Aws::String>>
  DescribeTopicReassignmentResult& WithTopicsToExclude(TopicsToExcludeT&& value) {
    SetTopicsToExclude(std::forward<TopicsToExcludeT>(value));
    return *this;
  }
  template <typename TopicsToExcludeT = Aws::String>
  DescribeTopicReassignmentResult& AddTopicsToExclude(TopicsToExcludeT&& value) {
    m_topicsToExcludeHasBeenSet = true;
    m_topicsToExclude.emplace_back(std::forward<TopicsToExcludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original include patterns provided in the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTopicsToInclude() const { return m_topicsToInclude; }
  template <typename TopicsToIncludeT = Aws::Vector<Aws::String>>
  void SetTopicsToInclude(TopicsToIncludeT&& value) {
    m_topicsToIncludeHasBeenSet = true;
    m_topicsToInclude = std::forward<TopicsToIncludeT>(value);
  }
  template <typename TopicsToIncludeT = Aws::Vector<Aws::String>>
  DescribeTopicReassignmentResult& WithTopicsToInclude(TopicsToIncludeT&& value) {
    SetTopicsToInclude(std::forward<TopicsToIncludeT>(value));
    return *this;
  }
  template <typename TopicsToIncludeT = Aws::String>
  DescribeTopicReassignmentResult& AddTopicsToInclude(TopicsToIncludeT&& value) {
    m_topicsToIncludeHasBeenSet = true;
    m_topicsToInclude.emplace_back(std::forward<TopicsToIncludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of partitions across all matched topics.</p>
   */
  inline int GetTotalPartitions() const { return m_totalPartitions; }
  inline void SetTotalPartitions(int value) {
    m_totalPartitionsHasBeenSet = true;
    m_totalPartitions = value;
  }
  inline DescribeTopicReassignmentResult& WithTotalPartitions(int value) {
    SetTotalPartitions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of topics matching the selector at resolution time.</p>
   */
  inline int GetTotalTopics() const { return m_totalTopics; }
  inline void SetTotalTopics(int value) {
    m_totalTopicsHasBeenSet = true;
    m_totalTopics = value;
  }
  inline DescribeTopicReassignmentResult& WithTotalTopics(int value) {
    SetTotalTopics(value);
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
  DescribeTopicReassignmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterArn;

  int m_completedTopics{0};

  Aws::Utils::DateTime m_creationTime{};

  ErrorInfo m_errorInfo;

  Aws::Utils::DateTime m_lastUpdateTime{};

  int m_migratedPartitions{0};

  TopicReassignmentStatus m_status{TopicReassignmentStatus::NOT_SET};

  Aws::String m_targetInstanceType;

  Aws::String m_topicReassignmentOperationArn;

  Aws::Vector<Aws::String> m_topicsToExclude;

  Aws::Vector<Aws::String> m_topicsToInclude;

  int m_totalPartitions{0};

  int m_totalTopics{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterArnHasBeenSet = false;
  bool m_completedTopicsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_errorInfoHasBeenSet = false;
  bool m_lastUpdateTimeHasBeenSet = false;
  bool m_migratedPartitionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_targetInstanceTypeHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
  bool m_topicsToExcludeHasBeenSet = false;
  bool m_topicsToIncludeHasBeenSet = false;
  bool m_totalPartitionsHasBeenSet = false;
  bool m_totalTopicsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
