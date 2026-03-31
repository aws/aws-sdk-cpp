/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MCPServerSigV4AuthorizationConfig.h>

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
 * <p>Complete service details for SigV4-authenticated MCP server
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerSigV4ServiceDetails">AWS
 * API Reference</a></p>
 */
class MCPServerSigV4ServiceDetails {
 public:
  AWS_DEVOPSAGENT_API MCPServerSigV4ServiceDetails() = default;
  AWS_DEVOPSAGENT_API MCPServerSigV4ServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerSigV4ServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>MCP server name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MCPServerSigV4ServiceDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server endpoint URL.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  MCPServerSigV4ServiceDetails& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional description for the MCP server.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MCPServerSigV4ServiceDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP Server SigV4 authorization configuration.</p>
   */
  inline const MCPServerSigV4AuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = MCPServerSigV4AuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = MCPServerSigV4AuthorizationConfig>
  MCPServerSigV4ServiceDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_endpoint;

  Aws::String m_description;

  MCPServerSigV4AuthorizationConfig m_authorizationConfig;
  bool m_nameHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_authorizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
