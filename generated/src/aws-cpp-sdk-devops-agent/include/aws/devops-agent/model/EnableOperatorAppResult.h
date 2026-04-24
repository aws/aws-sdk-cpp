/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/IamAuthConfiguration.h>
#include <aws/devops-agent/model/IdcAuthConfiguration.h>
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
 * <p>Output containing the enabled Operator App configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/EnableOperatorAppOutput">AWS
 * API Reference</a></p>
 */
class EnableOperatorAppResult {
 public:
  AWS_DEVOPSAGENT_API EnableOperatorAppResult() = default;
  AWS_DEVOPSAGENT_API EnableOperatorAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API EnableOperatorAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  EnableOperatorAppResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const IamAuthConfiguration& GetIam() const { return m_iam; }
  template <typename IamT = IamAuthConfiguration>
  void SetIam(IamT&& value) {
    m_iamHasBeenSet = true;
    m_iam = std::forward<IamT>(value);
  }
  template <typename IamT = IamAuthConfiguration>
  EnableOperatorAppResult& WithIam(IamT&& value) {
    SetIam(std::forward<IamT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const IdcAuthConfiguration& GetIdc() const { return m_idc; }
  template <typename IdcT = IdcAuthConfiguration>
  void SetIdc(IdcT&& value) {
    m_idcHasBeenSet = true;
    m_idc = std::forward<IdcT>(value);
  }
  template <typename IdcT = IdcAuthConfiguration>
  EnableOperatorAppResult& WithIdc(IdcT&& value) {
    SetIdc(std::forward<IdcT>(value));
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
  EnableOperatorAppResult& WithIdp(IdpT&& value) {
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
  EnableOperatorAppResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentSpaceId;

  IamAuthConfiguration m_iam;

  IdcAuthConfiguration m_idc;

  IdpAuthConfiguration m_idp;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_iamHasBeenSet = false;
  bool m_idcHasBeenSet = false;
  bool m_idpHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
