/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
class CheckIngestedDocumentAclResult {
 public:
  AWS_BEDROCKAGENTRUNTIME_API CheckIngestedDocumentAclResult() = default;
  AWS_BEDROCKAGENTRUNTIME_API CheckIngestedDocumentAclResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTRUNTIME_API CheckIngestedDocumentAclResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specifies whether the user has access to the document based on the ingested
   * access control list (ACL). Returns <code>true</code> if the user is allowed
   * access, and <code>false</code> otherwise.</p>
   */
  inline bool GetHasAccess() const { return m_hasAccess; }
  inline void SetHasAccess(bool value) {
    m_hasAccessHasBeenSet = true;
    m_hasAccess = value;
  }
  inline CheckIngestedDocumentAclResult& WithHasAccess(bool value) {
    SetHasAccess(value);
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
  CheckIngestedDocumentAclResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_hasAccess{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_hasAccessHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
