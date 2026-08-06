/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CapacityProviderStatus.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class DeleteCapacityProviderResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteCapacityProviderResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DeleteCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API DeleteCapacityProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deleted capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderId() const { return m_capacityProviderId; }
  template <typename CapacityProviderIdT = Aws::String>
  void SetCapacityProviderId(CapacityProviderIdT&& value) {
    m_capacityProviderIdHasBeenSet = true;
    m_capacityProviderId = std::forward<CapacityProviderIdT>(value);
  }
  template <typename CapacityProviderIdT = Aws::String>
  DeleteCapacityProviderResult& WithCapacityProviderId(CapacityProviderIdT&& value) {
    SetCapacityProviderId(std::forward<CapacityProviderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capacity provider. For possible values, see
   * <code>CapacityProviderStatus</code>.</p>
   */
  inline CapacityProviderStatus GetStatus() const { return m_status; }
  inline void SetStatus(CapacityProviderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteCapacityProviderResult& WithStatus(CapacityProviderStatus value) {
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
  DeleteCapacityProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_capacityProviderId;

  CapacityProviderStatus m_status{CapacityProviderStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityProviderIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
