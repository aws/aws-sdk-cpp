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
 * <p>A license configuration to associate with the instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LicenseSpecification">AWS
 * API Reference</a></p>
 */
class LicenseSpecification {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LicenseSpecification() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LicenseSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LicenseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the license configuration.</p>
   */
  inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
  inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
  template <typename LicenseConfigurationArnT = Aws::String>
  void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) {
    m_licenseConfigurationArnHasBeenSet = true;
    m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value);
  }
  template <typename LicenseConfigurationArnT = Aws::String>
  LicenseSpecification& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) {
    SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseConfigurationArn;
  bool m_licenseConfigurationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
