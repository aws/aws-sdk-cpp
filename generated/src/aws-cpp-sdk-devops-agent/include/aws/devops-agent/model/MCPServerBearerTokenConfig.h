/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Bearer token configuration for MCP server (RFC 6750).</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerBearerTokenConfig">AWS
 * API Reference</a></p>
 */
class MCPServerBearerTokenConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerBearerTokenConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerBearerTokenConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerBearerTokenConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>User friendly bearer token name specified by end user.</p>
   */
  inline const Aws::String& GetTokenName() const { return m_tokenName; }
  inline bool TokenNameHasBeenSet() const { return m_tokenNameHasBeenSet; }
  template <typename TokenNameT = Aws::String>
  void SetTokenName(TokenNameT&& value) {
    m_tokenNameHasBeenSet = true;
    m_tokenName = std::forward<TokenNameT>(value);
  }
  template <typename TokenNameT = Aws::String>
  MCPServerBearerTokenConfig& WithTokenName(TokenNameT&& value) {
    SetTokenName(std::forward<TokenNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Bearer token value in alphanumeric for authenticating with the service.</p>
   */
  inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
  inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
  template <typename TokenValueT = Aws::String>
  void SetTokenValue(TokenValueT&& value) {
    m_tokenValueHasBeenSet = true;
    m_tokenValue = std::forward<TokenValueT>(value);
  }
  template <typename TokenValueT = Aws::String>
  MCPServerBearerTokenConfig& WithTokenValue(TokenValueT&& value) {
    SetTokenValue(std::forward<TokenValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>HTTP header name to send the bearer token in requests to the service.
   * Defaults to 'Authorization' per RFC 6750.</p>
   */
  inline const Aws::String& GetAuthorizationHeader() const { return m_authorizationHeader; }
  inline bool AuthorizationHeaderHasBeenSet() const { return m_authorizationHeaderHasBeenSet; }
  template <typename AuthorizationHeaderT = Aws::String>
  void SetAuthorizationHeader(AuthorizationHeaderT&& value) {
    m_authorizationHeaderHasBeenSet = true;
    m_authorizationHeader = std::forward<AuthorizationHeaderT>(value);
  }
  template <typename AuthorizationHeaderT = Aws::String>
  MCPServerBearerTokenConfig& WithAuthorizationHeader(AuthorizationHeaderT&& value) {
    SetAuthorizationHeader(std::forward<AuthorizationHeaderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenName;

  Aws::String m_tokenValue;

  Aws::String m_authorizationHeader;
  bool m_tokenNameHasBeenSet = false;
  bool m_tokenValueHasBeenSet = false;
  bool m_authorizationHeaderHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
