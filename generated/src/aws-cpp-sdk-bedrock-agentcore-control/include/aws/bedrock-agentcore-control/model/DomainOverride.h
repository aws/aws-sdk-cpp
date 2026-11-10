/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The public domain names for a gateway that clients reach through your own
 * proxy or custom domain. When you configure a domain override, the gateway
 * advertises these domains instead of the inbound Host header in the URLs that it
 * returns for OAuth discovery, such as the protected resource metadata and the
 * <code>WWW-Authenticate</code> challenge.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DomainOverride">AWS
 * API Reference</a></p>
 */
class DomainOverride {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DomainOverride() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DomainOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API DomainOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default public domain name for the gateway. The gateway advertises this
   * domain when a request doesn't select a specific domain.</p>
   */
  inline const Aws::String& GetDefaultDomain() const { return m_defaultDomain; }
  inline bool DefaultDomainHasBeenSet() const { return m_defaultDomainHasBeenSet; }
  template <typename DefaultDomainT = Aws::String>
  void SetDefaultDomain(DefaultDomainT&& value) {
    m_defaultDomainHasBeenSet = true;
    m_defaultDomain = std::forward<DefaultDomainT>(value);
  }
  template <typename DefaultDomainT = Aws::String>
  DomainOverride& WithDefaultDomain(DefaultDomainT&& value) {
    SetDefaultDomain(std::forward<DefaultDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional public domain names for the gateway, up to 10. Don't repeat the
   * default domain or list a domain more than once. A request can select one of
   * these domains, or the default domain, with the
   * <code>x-amzn-bedrock-agentcore-gateway-domain</code> header. The gateway rejects
   * a request that selects a domain that isn't configured.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlternateDomains() const { return m_alternateDomains; }
  inline bool AlternateDomainsHasBeenSet() const { return m_alternateDomainsHasBeenSet; }
  template <typename AlternateDomainsT = Aws::Vector<Aws::String>>
  void SetAlternateDomains(AlternateDomainsT&& value) {
    m_alternateDomainsHasBeenSet = true;
    m_alternateDomains = std::forward<AlternateDomainsT>(value);
  }
  template <typename AlternateDomainsT = Aws::Vector<Aws::String>>
  DomainOverride& WithAlternateDomains(AlternateDomainsT&& value) {
    SetAlternateDomains(std::forward<AlternateDomainsT>(value));
    return *this;
  }
  template <typename AlternateDomainsT = Aws::String>
  DomainOverride& AddAlternateDomains(AlternateDomainsT&& value) {
    m_alternateDomainsHasBeenSet = true;
    m_alternateDomains.emplace_back(std::forward<AlternateDomainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_defaultDomain;

  Aws::Vector<Aws::String> m_alternateDomains;
  bool m_defaultDomainHasBeenSet = false;
  bool m_alternateDomainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
