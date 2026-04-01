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
 * <p>Details specific to a registered MCP (Model Context Protocol)
 * server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredMCPServerDetails">AWS
 * API Reference</a></p>
 */
class RegisteredMCPServerDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredMCPServerDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredMCPServerDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredMCPServerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MCP server name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RegisteredMCPServerDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MCP server endpoint URL.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  RegisteredMCPServerDetails& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MCP server uses this authorization method.</p>
   */
  inline MCPServerAuthorizationMethod GetAuthorizationMethod() const { return m_authorizationMethod; }
  inline bool AuthorizationMethodHasBeenSet() const { return m_authorizationMethodHasBeenSet; }
  inline void SetAuthorizationMethod(MCPServerAuthorizationMethod value) {
    m_authorizationMethodHasBeenSet = true;
    m_authorizationMethod = value;
  }
  inline RegisteredMCPServerDetails& WithAuthorizationMethod(MCPServerAuthorizationMethod value) {
    SetAuthorizationMethod(value);
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
  RegisteredMCPServerDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the MCP server uses API key authentication, these details are
   * provided.</p>
   */
  inline const Aws::String& GetApiKeyHeader() const { return m_apiKeyHeader; }
  inline bool ApiKeyHeaderHasBeenSet() const { return m_apiKeyHeaderHasBeenSet; }
  template <typename ApiKeyHeaderT = Aws::String>
  void SetApiKeyHeader(ApiKeyHeaderT&& value) {
    m_apiKeyHeaderHasBeenSet = true;
    m_apiKeyHeader = std::forward<ApiKeyHeaderT>(value);
  }
  template <typename ApiKeyHeaderT = Aws::String>
  RegisteredMCPServerDetails& WithApiKeyHeader(ApiKeyHeaderT&& value) {
    SetApiKeyHeader(std::forward<ApiKeyHeaderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_endpoint;

  MCPServerAuthorizationMethod m_authorizationMethod{MCPServerAuthorizationMethod::NOT_SET};

  Aws::String m_description;

  Aws::String m_apiKeyHeader;
  bool m_nameHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_authorizationMethodHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_apiKeyHeaderHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
