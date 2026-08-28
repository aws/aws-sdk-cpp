/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore {
namespace Model {
class IngestDataResult {
 public:
  AWS_BEDROCKAGENTCORE_API IngestDataResult() = default;
  AWS_BEDROCKAGENTCORE_API IngestDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API IngestDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the session that the service ingested the content into.
   * This value echoes the session identifier from the request, or the identifier
   * that the service generated when you did not provide one.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  IngestDataResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
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
  IngestDataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sessionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
