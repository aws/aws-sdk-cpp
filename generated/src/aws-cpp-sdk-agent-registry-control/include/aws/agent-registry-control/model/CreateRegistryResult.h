/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>Response structure for creating a registry</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreateRegistryResponse">AWS
 * API Reference</a></p>
 */
class CreateRegistryResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryResult() = default;
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the created registry</p>
   */
  inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
  template <typename RegistryArnT = Aws::String>
  void SetRegistryArn(RegistryArnT&& value) {
    m_registryArnHasBeenSet = true;
    m_registryArn = std::forward<RegistryArnT>(value);
  }
  template <typename RegistryArnT = Aws::String>
  CreateRegistryResult& WithRegistryArn(RegistryArnT&& value) {
    SetRegistryArn(std::forward<RegistryArnT>(value));
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
  CreateRegistryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_registryArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
