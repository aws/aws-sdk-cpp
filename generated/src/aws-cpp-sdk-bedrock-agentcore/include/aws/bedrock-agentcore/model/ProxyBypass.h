/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Configuration for domains that should bypass all proxies and connect directly
 * to the internet. These bypass rules take precedence over all proxy routing
 * rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ProxyBypass">AWS
 * API Reference</a></p>
 */
class ProxyBypass {
 public:
  AWS_BEDROCKAGENTCORE_API ProxyBypass() = default;
  AWS_BEDROCKAGENTCORE_API ProxyBypass(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ProxyBypass& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Array of domain patterns that should bypass the proxy. Supports
   * <code>.amazonaws.com</code> for subdomain matching or <code>amazonaws.com</code>
   * for exact domain matching. Requests to these domains connect directly without
   * using any proxy. Maximum 253 characters per pattern.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomainPatterns() const { return m_domainPatterns; }
  inline bool DomainPatternsHasBeenSet() const { return m_domainPatternsHasBeenSet; }
  template <typename DomainPatternsT = Aws::Vector<Aws::String>>
  void SetDomainPatterns(DomainPatternsT&& value) {
    m_domainPatternsHasBeenSet = true;
    m_domainPatterns = std::forward<DomainPatternsT>(value);
  }
  template <typename DomainPatternsT = Aws::Vector<Aws::String>>
  ProxyBypass& WithDomainPatterns(DomainPatternsT&& value) {
    SetDomainPatterns(std::forward<DomainPatternsT>(value));
    return *this;
  }
  template <typename DomainPatternsT = Aws::String>
  ProxyBypass& AddDomainPatterns(DomainPatternsT&& value) {
    m_domainPatternsHasBeenSet = true;
    m_domainPatterns.emplace_back(std::forward<DomainPatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_domainPatterns;
  bool m_domainPatternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
