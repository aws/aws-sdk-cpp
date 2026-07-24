/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Artifact {
namespace Model {
class PutComplianceInquiryFeedbackResult {
 public:
  AWS_ARTIFACT_API PutComplianceInquiryFeedbackResult() = default;
  AWS_ARTIFACT_API PutComplianceInquiryFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARTIFACT_API PutComplianceInquiryFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp when the feedback was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  PutComplianceInquiryFeedbackResult& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
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
  PutComplianceInquiryFeedbackResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::DateTime m_submittedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_submittedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
