/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PrivateEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A mapping of a specific domain to a private endpoint for secure connectivity
 * through a VPC Lattice resource configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PrivateEndpointOverride">AWS
 * API Reference</a></p>
 */
class PrivateEndpointOverride {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpointOverride() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpointOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpointOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain to override with a private endpoint.</p>
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
   * <p>The private endpoint configuration for the specified domain.</p>
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
