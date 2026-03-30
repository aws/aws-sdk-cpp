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
 * <p>API key configuration for MCP server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerAPIKeyConfig">AWS
 * API Reference</a></p>
 */
class MCPServerAPIKeyConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerAPIKeyConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerAPIKeyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerAPIKeyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>User friendly API key name specified by end user.</p>
   */
  inline const Aws::String& GetApiKeyName() const { return m_apiKeyName; }
  inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }
  template <typename ApiKeyNameT = Aws::String>
  void SetApiKeyName(ApiKeyNameT&& value) {
    m_apiKeyNameHasBeenSet = true;
    m_apiKeyName = std::forward<ApiKeyNameT>(value);
  }
  template <typename ApiKeyNameT = Aws::String>
  MCPServerAPIKeyConfig& WithApiKeyName(ApiKeyNameT&& value) {
    SetApiKeyName(std::forward<ApiKeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>API key value for authenticating with the service.</p>
   */
  inline const Aws::String& GetApiKeyValue() const { return m_apiKeyValue; }
  inline bool ApiKeyValueHasBeenSet() const { return m_apiKeyValueHasBeenSet; }
  template <typename ApiKeyValueT = Aws::String>
  void SetApiKeyValue(ApiKeyValueT&& value) {
    m_apiKeyValueHasBeenSet = true;
    m_apiKeyValue = std::forward<ApiKeyValueT>(value);
  }
  template <typename ApiKeyValueT = Aws::String>
  MCPServerAPIKeyConfig& WithApiKeyValue(ApiKeyValueT&& value) {
    SetApiKeyValue(std::forward<ApiKeyValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>HTTP header name to send the API key in requests to the service.</p>
   */
  inline const Aws::String& GetApiKeyHeader() const { return m_apiKeyHeader; }
  inline bool ApiKeyHeaderHasBeenSet() const { return m_apiKeyHeaderHasBeenSet; }
  template <typename ApiKeyHeaderT = Aws::String>
  void SetApiKeyHeader(ApiKeyHeaderT&& value) {
    m_apiKeyHeaderHasBeenSet = true;
    m_apiKeyHeader = std::forward<ApiKeyHeaderT>(value);
  }
  template <typename ApiKeyHeaderT = Aws::String>
  MCPServerAPIKeyConfig& WithApiKeyHeader(ApiKeyHeaderT&& value) {
    SetApiKeyHeader(std::forward<ApiKeyHeaderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKeyName;

  Aws::String m_apiKeyValue;

  Aws::String m_apiKeyHeader;
  bool m_apiKeyNameHasBeenSet = false;
  bool m_apiKeyValueHasBeenSet = false;
  bool m_apiKeyHeaderHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
