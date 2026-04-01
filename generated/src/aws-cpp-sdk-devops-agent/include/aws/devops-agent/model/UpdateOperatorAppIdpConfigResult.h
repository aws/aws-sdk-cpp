/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/IdpAuthConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing the updated IdP configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateOperatorAppIdpConfigOutput">AWS
 * API Reference</a></p>
 */
class UpdateOperatorAppIdpConfigResult {
 public:
  AWS_DEVOPSAGENT_API UpdateOperatorAppIdpConfigResult() = default;
  AWS_DEVOPSAGENT_API UpdateOperatorAppIdpConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API UpdateOperatorAppIdpConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the AgentSpace</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateOperatorAppIdpConfigResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const IdpAuthConfiguration& GetIdp() const { return m_idp; }
  template <typename IdpT = IdpAuthConfiguration>
  void SetIdp(IdpT&& value) {
    m_idpHasBeenSet = true;
    m_idp = std::forward<IdpT>(value);
  }
  template <typename IdpT = IdpAuthConfiguration>
  UpdateOperatorAppIdpConfigResult& WithIdp(IdpT&& value) {
    SetIdp(std::forward<IdpT>(value));
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
  UpdateOperatorAppIdpConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentSpaceId;

  IdpAuthConfiguration m_idp;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_idpHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
