/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/PrivateEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>A mapping of a domain to the private endpoint used to reach it.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/PrivateEndpointOverride">AWS
 * API Reference</a></p>
 */
class PrivateEndpointOverride {
 public:
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpointOverride() = default;
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpointOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpointOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain name to which this private endpoint override applies.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  PrivateEndpointOverride& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint used to reach the specified domain.</p>
   */
  inline const PrivateEndpoint& GetPrivateEndpoint() const { return m_privateEndpoint; }
  inline bool PrivateEndpointHasBeenSet() const { return m_privateEndpointHasBeenSet; }
  template <typename PrivateEndpointT = PrivateEndpoint>
  void SetPrivateEndpoint(PrivateEndpointT&& value) {
    m_privateEndpointHasBeenSet = true;
    m_privateEndpoint = std::forward<PrivateEndpointT>(value);
  }
  template <typename PrivateEndpointT = PrivateEndpoint>
  PrivateEndpointOverride& WithPrivateEndpoint(PrivateEndpointT&& value) {
    SetPrivateEndpoint(std::forward<PrivateEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  PrivateEndpoint m_privateEndpoint;
  bool m_domainHasBeenSet = false;
  bool m_privateEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
