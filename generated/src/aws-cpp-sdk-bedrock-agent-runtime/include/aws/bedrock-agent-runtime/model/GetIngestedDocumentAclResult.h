/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/DocumentAcl.h>
#include <aws/core/http/HttpResponse.h>
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
namespace BedrockAgentRuntime {
namespace Model {
class GetIngestedDocumentAclResult {
 public:
  AWS_BEDROCKAGENTRUNTIME_API GetIngestedDocumentAclResult() = default;
  AWS_BEDROCKAGENTRUNTIME_API GetIngestedDocumentAclResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTRUNTIME_API GetIngestedDocumentAclResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ingested document access control list (ACL) containing allow and deny
   * membership information.</p>
   */
  inline const DocumentAcl& GetDocumentAcl() const { return m_documentAcl; }
  template <typename DocumentAclT = DocumentAcl>
  void SetDocumentAcl(DocumentAclT&& value) {
    m_documentAclHasBeenSet = true;
    m_documentAcl = std::forward<DocumentAclT>(value);
  }
  template <typename DocumentAclT = DocumentAcl>
  GetIngestedDocumentAclResult& WithDocumentAcl(DocumentAclT&& value) {
    SetDocumentAcl(std::forward<DocumentAclT>(value));
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
  GetIngestedDocumentAclResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DocumentAcl m_documentAcl;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_documentAclHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
