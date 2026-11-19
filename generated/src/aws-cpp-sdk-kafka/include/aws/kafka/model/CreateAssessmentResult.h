/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AssessmentStatus.h>
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
 * <p>Returns information about the created assessment.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateAssessmentResponse">AWS
 * API Reference</a></p>
 */
class CreateAssessmentResult {
 public:
  AWS_KAFKA_API CreateAssessmentResult() = default;
  AWS_KAFKA_API CreateAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API CreateAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  CreateAssessmentResult& WithAssessmentArn(AssessmentArnT&& value) {
    SetAssessmentArn(std::forward<AssessmentArnT>(value));
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
  inline CreateAssessmentResult& WithAssessmentType(AssessmentType value) {
    SetAssessmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster being assessed.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateAssessmentResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
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
  CreateAssessmentResult& WithCreationTime(CreationTimeT&& value) {
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
  inline CreateAssessmentResult& WithStatus(AssessmentStatus value) {
    SetStatus(value);
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
  CreateAssessmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assessmentArn;

  AssessmentType m_assessmentType{AssessmentType::NOT_SET};

  Aws::String m_clusterArn;

  Aws::Utils::DateTime m_creationTime{};

  AssessmentStatus m_status{AssessmentStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentArnHasBeenSet = false;
  bool m_assessmentTypeHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
