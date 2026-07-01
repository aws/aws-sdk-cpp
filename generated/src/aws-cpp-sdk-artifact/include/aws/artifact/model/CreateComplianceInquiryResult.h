/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InquirySummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreateComplianceInquiryResult {
 public:
  AWS_ARTIFACT_API CreateComplianceInquiryResult() = default;
  AWS_ARTIFACT_API CreateComplianceInquiryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARTIFACT_API CreateComplianceInquiryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Summary information about the created compliance inquiry.</p>
   */
  inline const InquirySummary& GetComplianceInquirySummary() const { return m_complianceInquirySummary; }
  template <typename ComplianceInquirySummaryT = InquirySummary>
  void SetComplianceInquirySummary(ComplianceInquirySummaryT&& value) {
    m_complianceInquirySummaryHasBeenSet = true;
    m_complianceInquirySummary = std::forward<ComplianceInquirySummaryT>(value);
  }
  template <typename ComplianceInquirySummaryT = InquirySummary>
  CreateComplianceInquiryResult& WithComplianceInquirySummary(ComplianceInquirySummaryT&& value) {
    SetComplianceInquirySummary(std::forward<ComplianceInquirySummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags associated with the compliance inquiry resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateComplianceInquiryResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateComplianceInquiryResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  CreateComplianceInquiryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  InquirySummary m_complianceInquirySummary;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_complianceInquirySummaryHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
