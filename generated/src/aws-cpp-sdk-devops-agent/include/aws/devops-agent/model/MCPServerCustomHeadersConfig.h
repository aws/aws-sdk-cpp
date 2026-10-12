/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Configuration for authenticating to an MCP server with custom HTTP
 * headers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerCustomHeadersConfig">AWS
 * API Reference</a></p>
 */
class MCPServerCustomHeadersConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerCustomHeadersConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerCustomHeadersConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerCustomHeadersConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const { return m_headers; }
  inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers = std::forward<HeadersT>(value);
  }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  MCPServerCustomHeadersConfig& WithHeaders(HeadersT&& value) {
    SetHeaders(std::forward<HeadersT>(value));
    return *this;
  }
  template <typename HeadersKeyT = Aws::String, typename HeadersValueT = Aws::String>
  MCPServerCustomHeadersConfig& AddHeaders(HeadersKeyT&& key, HeadersValueT&& value) {
    m_headersHasBeenSet = true;
    m_headers.emplace(std::forward<HeadersKeyT>(key), std::forward<HeadersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_headers;
  bool m_headersHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
