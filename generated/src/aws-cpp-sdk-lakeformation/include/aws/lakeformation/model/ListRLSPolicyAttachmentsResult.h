/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/RLSPolicyAttachment.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {
class ListRLSPolicyAttachmentsResult {
 public:
  AWS_LAKEFORMATION_API ListRLSPolicyAttachmentsResult() = default;
  AWS_LAKEFORMATION_API ListRLSPolicyAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAKEFORMATION_API ListRLSPolicyAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>RLSPolicyAttachment</code> structures.</p>
   */
  inline const Aws::Vector<RLSPolicyAttachment>& GetRLSPolicyAttachments() const { return m_rLSPolicyAttachments; }
  template <typename RLSPolicyAttachmentsT = Aws::Vector<RLSPolicyAttachment>>
  void SetRLSPolicyAttachments(RLSPolicyAttachmentsT&& value) {
    m_rLSPolicyAttachmentsHasBeenSet = true;
    m_rLSPolicyAttachments = std::forward<RLSPolicyAttachmentsT>(value);
  }
  template <typename RLSPolicyAttachmentsT = Aws::Vector<RLSPolicyAttachment>>
  ListRLSPolicyAttachmentsResult& WithRLSPolicyAttachments(RLSPolicyAttachmentsT&& value) {
    SetRLSPolicyAttachments(std::forward<RLSPolicyAttachmentsT>(value));
    return *this;
  }
  template <typename RLSPolicyAttachmentsT = RLSPolicyAttachment>
  ListRLSPolicyAttachmentsResult& AddRLSPolicyAttachments(RLSPolicyAttachmentsT&& value) {
    m_rLSPolicyAttachmentsHasBeenSet = true;
    m_rLSPolicyAttachments.emplace_back(std::forward<RLSPolicyAttachmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A continuation token, if not all attachments have been returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRLSPolicyAttachmentsResult& WithNextToken(NextTokenT&& value) {
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
  ListRLSPolicyAttachmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RLSPolicyAttachment> m_rLSPolicyAttachments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rLSPolicyAttachmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
