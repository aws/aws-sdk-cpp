/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AssessmentInfo.h>

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
 * <p>Returns a list of assessments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListAssessmentsResponse">AWS
 * API Reference</a></p>
 */
class ListAssessmentsResult {
 public:
  AWS_KAFKA_API ListAssessmentsResult() = default;
  AWS_KAFKA_API ListAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API ListAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of assessment summaries.</p>
   */
  inline const Aws::Vector<AssessmentInfo>& GetAssessments() const { return m_assessments; }
  template <typename AssessmentsT = Aws::Vector<AssessmentInfo>>
  void SetAssessments(AssessmentsT&& value) {
    m_assessmentsHasBeenSet = true;
    m_assessments = std::forward<AssessmentsT>(value);
  }
  template <typename AssessmentsT = Aws::Vector<AssessmentInfo>>
  ListAssessmentsResult& WithAssessments(AssessmentsT&& value) {
    SetAssessments(std::forward<AssessmentsT>(value));
    return *this;
  }
  template <typename AssessmentsT = AssessmentInfo>
  ListAssessmentsResult& AddAssessments(AssessmentsT&& value) {
    m_assessmentsHasBeenSet = true;
    m_assessments.emplace_back(std::forward<AssessmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, it returns a nextToken. Send this in the
   * subsequent request to get the remaining results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssessmentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListAssessmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AssessmentInfo> m_assessments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
