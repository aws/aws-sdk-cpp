/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ExternalProxy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Union type representing different proxy configurations. Currently supports
 * external customer-managed proxies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Proxy">AWS
 * API Reference</a></p>
 */
class Proxy {
 public:
  AWS_BEDROCKAGENTCORE_API Proxy() = default;
  AWS_BEDROCKAGENTCORE_API Proxy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Proxy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for an external customer-managed proxy server.</p>
   */
  inline const ExternalProxy& GetExternalProxy() const { return m_externalProxy; }
  inline bool ExternalProxyHasBeenSet() const { return m_externalProxyHasBeenSet; }
  template <typename ExternalProxyT = ExternalProxy>
  void SetExternalProxy(ExternalProxyT&& value) {
    m_externalProxyHasBeenSet = true;
    m_externalProxy = std::forward<ExternalProxyT>(value);
  }
  template <typename ExternalProxyT = ExternalProxy>
  Proxy& WithExternalProxy(ExternalProxyT&& value) {
    SetExternalProxy(std::forward<ExternalProxyT>(value));
    return *this;
  }
  ///@}
 private:
  ExternalProxy m_externalProxy;
  bool m_externalProxyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
