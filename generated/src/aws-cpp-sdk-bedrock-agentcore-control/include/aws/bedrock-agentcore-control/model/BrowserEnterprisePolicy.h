/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BrowserEnterprisePolicyType.h>
#include <aws/bedrock-agentcore-control/model/ResourceLocation.h>

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
 * <p>Browser enterprise policy configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/BrowserEnterprisePolicy">AWS
 * API Reference</a></p>
 */
class BrowserEnterprisePolicy {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BrowserEnterprisePolicy() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BrowserEnterprisePolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API BrowserEnterprisePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location of the enterprise policy file.</p>
   */
  inline const ResourceLocation& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = ResourceLocation>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = ResourceLocation>
  BrowserEnterprisePolicy& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of browser enterprise policy. Available values are
   * <code>MANAGED</code> and <code>RECOMMENDED</code>.</p>
   */
  inline BrowserEnterprisePolicyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(BrowserEnterprisePolicyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline BrowserEnterprisePolicy& WithType(BrowserEnterprisePolicyType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  ResourceLocation m_location;

  BrowserEnterprisePolicyType m_type{BrowserEnterprisePolicyType::NOT_SET};
  bool m_locationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
