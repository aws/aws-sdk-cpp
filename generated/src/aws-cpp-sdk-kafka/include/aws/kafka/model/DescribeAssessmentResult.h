/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AssessmentParameters.h>
#include <aws/kafka/model/AssessmentStatus.h>
#include <aws/kafka/model/AssessmentSummary.h>
#include <aws/kafka/model/AssessmentType.h>

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
 * <p>Returns the status and summary of an assessment.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeAssessmentResponse">AWS
 * API Reference</a></p>
 */
class DescribeAssessmentResult {
 public:
  AWS_KAFKA_API DescribeAssessmentResult() = default;
  AWS_KAFKA_API DescribeAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API DescribeAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the assessment.</p>
   */
  inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
  template <typename AssessmentArnT = Aws::String>
  void SetAssessmentArn(AssessmentArnT&& value) {
    m_assessmentArnHasBeenSet = true;
    m_assessmentArn = std::forward<AssessmentArnT>(value);
  }
  template <typename AssessmentArnT = Aws::String>
  DescribeAssessmentResult& WithAssessmentArn(AssessmentArnT&& value) {
    SetAssessmentArn(std::forward<AssessmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters that were provided when creating the assessment.</p>
   */
  inline const AssessmentParameters& GetAssessmentParameters() const { return m_assessmentParameters; }
  template <typename AssessmentParametersT = AssessmentParameters>
  void SetAssessmentParameters(AssessmentParametersT&& value) {
    m_assessmentParametersHasBeenSet = true;
    m_assessmentParameters = std::forward<AssessmentParametersT>(value);
  }
  template <typename AssessmentParametersT = AssessmentParameters>
  DescribeAssessmentResult& WithAssessmentParameters(AssessmentParametersT&& value) {
    SetAssessmentParameters(std::forward<AssessmentParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of assessment.</p>
   */
  inline AssessmentType GetAssessmentType() const { return m_assessmentType; }
  inline void SetAssessmentType(AssessmentType value) {
    m_assessmentTypeHasBeenSet = true;
    m_assessmentType = value;
  }
  inline DescribeAssessmentResult& WithAssessmentType(AssessmentType value) {
    SetAssessmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster that was assessed.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DescribeAssessmentResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the assessment completed. Present only when status is COMPLETE
   * or FAILED.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  void SetCompletionTime(CompletionTimeT&& value) {
    m_completionTimeHasBeenSet = true;
    m_completionTime = std::forward<CompletionTimeT>(value);
  }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  DescribeAssessmentResult& WithCompletionTime(CompletionTimeT&& value) {
    SetCompletionTime(std::forward<CompletionTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the assessment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeAssessmentResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the assessment.</p>
   */
  inline AssessmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(AssessmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeAssessmentResult& WithStatus(AssessmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status. Present when status is
   * FAILED.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  DescribeAssessmentResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary of findings by category and severity. Present only when status is
   * COMPLETE.</p>
   */
  inline const AssessmentSummary& GetSummary() const { return m_summary; }
  template <typename SummaryT = AssessmentSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = AssessmentSummary>
  DescribeAssessmentResult& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the assessment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DescribeAssessmentResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DescribeAssessmentResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  DescribeAssessmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assessmentArn;

  AssessmentParameters m_assessmentParameters;

  AssessmentType m_assessmentType{AssessmentType::NOT_SET};

  Aws::String m_clusterArn;

  Aws::Utils::DateTime m_completionTime{};

  Aws::Utils::DateTime m_creationTime{};

  AssessmentStatus m_status{AssessmentStatus::NOT_SET};

  Aws::String m_statusMessage;

  AssessmentSummary m_summary;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentArnHasBeenSet = false;
  bool m_assessmentParametersHasBeenSet = false;
  bool m_assessmentTypeHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_completionTimeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
