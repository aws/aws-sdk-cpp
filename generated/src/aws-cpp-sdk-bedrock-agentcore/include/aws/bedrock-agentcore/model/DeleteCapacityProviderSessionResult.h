/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CapacityProviderSessionStatus.h>
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
class DeleteCapacityProviderSessionResult {
 public:
  AWS_BEDROCKAGENTCORE_API DeleteCapacityProviderSessionResult() = default;
  AWS_BEDROCKAGENTCORE_API DeleteCapacityProviderSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API DeleteCapacityProviderSessionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider associated with the
   * deleted session.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  DeleteCapacityProviderSessionResult& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the deleted capacity provider session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  DeleteCapacityProviderSessionResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capacity provider session. When the status is
   * <code>Deleting</code>, the session is being deleted and is not available. When
   * the status is <code>Deleted</code>, the session is no longer available.</p>
   */
  inline CapacityProviderSessionStatus GetStatus() const { return m_status; }
  inline void SetStatus(CapacityProviderSessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteCapacityProviderSessionResult& WithStatus(CapacityProviderSessionStatus value) {
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
  DeleteCapacityProviderSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_capacityProviderArn;

  Aws::String m_sessionId;

  CapacityProviderSessionStatus m_status{CapacityProviderSessionStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
