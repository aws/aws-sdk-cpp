/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Proxy.h>
#include <aws/bedrock-agentcore/model/ProxyBypass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration for routing browser traffic through customer-managed proxy
 * servers. Supports 1-5 proxy servers for domain-based routing and proxy bypass
 * rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ProxyConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API ProxyConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of 1-5 proxy server configurations for domain-based routing. Each
   * proxy can specify which domains it handles via <code>domainPatterns</code>,
   * enabling flexible routing of different traffic through different proxies based
   * on destination domain.</p>
   */
  inline const Aws::Vector<Proxy>& GetProxies() const { return m_proxies; }
  inline bool ProxiesHasBeenSet() const { return m_proxiesHasBeenSet; }
  template <typename ProxiesT = Aws::Vector<Proxy>>
  void SetProxies(ProxiesT&& value) {
    m_proxiesHasBeenSet = true;
    m_proxies = std::forward<ProxiesT>(value);
  }
  template <typename ProxiesT = Aws::Vector<Proxy>>
  ProxyConfiguration& WithProxies(ProxiesT&& value) {
    SetProxies(std::forward<ProxiesT>(value));
    return *this;
  }
  template <typename ProxiesT = Proxy>
  ProxyConfiguration& AddProxies(ProxiesT&& value) {
    m_proxiesHasBeenSet = true;
    m_proxies.emplace_back(std::forward<ProxiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional configuration for domains that should bypass all proxies and connect
   * directly to their destination, like the internet. Takes precedence over all
   * proxy routing rules.</p>
   */
  inline const ProxyBypass& GetBypass() const { return m_bypass; }
  inline bool BypassHasBeenSet() const { return m_bypassHasBeenSet; }
  template <typename BypassT = ProxyBypass>
  void SetBypass(BypassT&& value) {
    m_bypassHasBeenSet = true;
    m_bypass = std::forward<BypassT>(value);
  }
  template <typename BypassT = ProxyBypass>
  ProxyConfiguration& WithBypass(BypassT&& value) {
    SetBypass(std::forward<BypassT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Proxy> m_proxies;

  ProxyBypass m_bypass;
  bool m_proxiesHasBeenSet = false;
  bool m_bypassHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
