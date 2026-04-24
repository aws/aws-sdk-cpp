/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MCPServerAuthorizationMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Details specific to a registered Grafana server, used by the built-in MCP
 * server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredGrafanaServerDetails">AWS
 * API Reference</a></p>
 */
class RegisteredGrafanaServerDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredGrafanaServerDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredGrafanaServerDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredGrafanaServerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Grafana instance URL (e.g., https://your-instance.grafana.net)</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  RegisteredGrafanaServerDetails& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authz method used by the MCP server.</p>
   */
  inline MCPServerAuthorizationMethod GetAuthorizationMethod() const { return m_authorizationMethod; }
  inline bool AuthorizationMethodHasBeenSet() const { return m_authorizationMethodHasBeenSet; }
  inline void SetAuthorizationMethod(MCPServerAuthorizationMethod value) {
    m_authorizationMethodHasBeenSet = true;
    m_authorizationMethod = value;
  }
  inline RegisteredGrafanaServerDetails& WithAuthorizationMethod(MCPServerAuthorizationMethod value) {
    SetAuthorizationMethod(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  MCPServerAuthorizationMethod m_authorizationMethod{MCPServerAuthorizationMethod::NOT_SET};
  bool m_endpointHasBeenSet = false;
  bool m_authorizationMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
