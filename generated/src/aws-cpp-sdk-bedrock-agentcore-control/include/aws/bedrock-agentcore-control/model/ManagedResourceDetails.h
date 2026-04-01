/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>Details of a resource created and managed by the gateway for private endpoint
 * connectivity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ManagedResourceDetails">AWS
 * API Reference</a></p>
 */
class ManagedResourceDetails {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ManagedResourceDetails() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ManagedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ManagedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain associated with this managed resource.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  ManagedResourceDetails& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the VPC Lattice resource gateway created in your account.</p>
   */
  inline const Aws::String& GetResourceGatewayArn() const { return m_resourceGatewayArn; }
  inline bool ResourceGatewayArnHasBeenSet() const { return m_resourceGatewayArnHasBeenSet; }
  template <typename ResourceGatewayArnT = Aws::String>
  void SetResourceGatewayArn(ResourceGatewayArnT&& value) {
    m_resourceGatewayArnHasBeenSet = true;
    m_resourceGatewayArn = std::forward<ResourceGatewayArnT>(value);
  }
  template <typename ResourceGatewayArnT = Aws::String>
  ManagedResourceDetails& WithResourceGatewayArn(ResourceGatewayArnT&& value) {
    SetResourceGatewayArn(std::forward<ResourceGatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service network resource association.</p>
   */
  inline const Aws::String& GetResourceAssociationArn() const { return m_resourceAssociationArn; }
  inline bool ResourceAssociationArnHasBeenSet() const { return m_resourceAssociationArnHasBeenSet; }
  template <typename ResourceAssociationArnT = Aws::String>
  void SetResourceAssociationArn(ResourceAssociationArnT&& value) {
    m_resourceAssociationArnHasBeenSet = true;
    m_resourceAssociationArn = std::forward<ResourceAssociationArnT>(value);
  }
  template <typename ResourceAssociationArnT = Aws::String>
  ManagedResourceDetails& WithResourceAssociationArn(ResourceAssociationArnT&& value) {
    SetResourceAssociationArn(std::forward<ResourceAssociationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  Aws::String m_resourceGatewayArn;

  Aws::String m_resourceAssociationArn;
  bool m_domainHasBeenSet = false;
  bool m_resourceGatewayArnHasBeenSet = false;
  bool m_resourceAssociationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
