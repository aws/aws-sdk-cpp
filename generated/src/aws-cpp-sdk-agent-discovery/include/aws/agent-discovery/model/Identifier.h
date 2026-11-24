/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>The resolvable identifier value. Discriminated union — exactly one member is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/Identifier">AWS
 * API Reference</a></p>
 */
class Identifier {
 public:
  AWS_AGENTDISCOVERY_API Identifier() = default;
  AWS_AGENTDISCOVERY_API Identifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Identifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Verified domain (e.g. example.com).</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  Identifier& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Arbitrary resolvable URI (urn / url / did).</p>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  Identifier& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  Aws::String m_uri;
  bool m_domainHasBeenSet = false;
  bool m_uriHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
