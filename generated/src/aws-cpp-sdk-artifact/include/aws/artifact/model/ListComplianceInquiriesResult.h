/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InquirySummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class ListComplianceInquiriesResult {
 public:
  AWS_ARTIFACT_API ListComplianceInquiriesResult() = default;
  AWS_ARTIFACT_API ListComplianceInquiriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARTIFACT_API ListComplianceInquiriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of compliance inquiry resources.</p>
   */
  inline const Aws::Vector<InquirySummary>& GetComplianceInquiries() const { return m_complianceInquiries; }
  template <typename ComplianceInquiriesT = Aws::Vector<InquirySummary>>
  void SetComplianceInquiries(ComplianceInquiriesT&& value) {
    m_complianceInquiriesHasBeenSet = true;
    m_complianceInquiries = std::forward<ComplianceInquiriesT>(value);
  }
  template <typename ComplianceInquiriesT = Aws::Vector<InquirySummary>>
  ListComplianceInquiriesResult& WithComplianceInquiries(ComplianceInquiriesT&& value) {
    SetComplianceInquiries(std::forward<ComplianceInquiriesT>(value));
    return *this;
  }
  template <typename ComplianceInquiriesT = InquirySummary>
  ListComplianceInquiriesResult& AddComplianceInquiries(ComplianceInquiriesT&& value) {
    m_complianceInquiriesHasBeenSet = true;
    m_complianceInquiries.emplace_back(std::forward<ComplianceInquiriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to request the next page of resources.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListComplianceInquiriesResult& WithNextToken(NextTokenT&& value) {
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
  ListComplianceInquiriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InquirySummary> m_complianceInquiries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_complianceInquiriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
