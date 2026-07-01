/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InquiryDetail.h>
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
class GetComplianceInquiryMetadataResult {
 public:
  AWS_ARTIFACT_API GetComplianceInquiryMetadataResult() = default;
  AWS_ARTIFACT_API GetComplianceInquiryMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARTIFACT_API GetComplianceInquiryMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Detailed information about the compliance inquiry.</p>
   */
  inline const InquiryDetail& GetComplianceInquiryDetail() const { return m_complianceInquiryDetail; }
  template <typename ComplianceInquiryDetailT = InquiryDetail>
  void SetComplianceInquiryDetail(ComplianceInquiryDetailT&& value) {
    m_complianceInquiryDetailHasBeenSet = true;
    m_complianceInquiryDetail = std::forward<ComplianceInquiryDetailT>(value);
  }
  template <typename ComplianceInquiryDetailT = InquiryDetail>
  GetComplianceInquiryMetadataResult& WithComplianceInquiryDetail(ComplianceInquiryDetailT&& value) {
    SetComplianceInquiryDetail(std::forward<ComplianceInquiryDetailT>(value));
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
  GetComplianceInquiryMetadataResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetComplianceInquiryMetadataResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  GetComplianceInquiryMetadataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  InquiryDetail m_complianceInquiryDetail;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_complianceInquiryDetailHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
