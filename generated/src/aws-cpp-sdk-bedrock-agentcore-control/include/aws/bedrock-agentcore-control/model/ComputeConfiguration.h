/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Ec2Configuration.h>

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
 * <p>The compute configuration for a capacity provider. This structure defines the
 * type and settings of the compute resources used to launch
 * instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ComputeConfiguration">AWS
 * API Reference</a></p>
 */
class ComputeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ComputeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon EC2 compute configuration for the capacity provider.</p>
   */
  inline const Ec2Configuration& GetEc2Configuration() const { return m_ec2Configuration; }
  inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }
  template <typename Ec2ConfigurationT = Ec2Configuration>
  void SetEc2Configuration(Ec2ConfigurationT&& value) {
    m_ec2ConfigurationHasBeenSet = true;
    m_ec2Configuration = std::forward<Ec2ConfigurationT>(value);
  }
  template <typename Ec2ConfigurationT = Ec2Configuration>
  ComputeConfiguration& WithEc2Configuration(Ec2ConfigurationT&& value) {
    SetEc2Configuration(std::forward<Ec2ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Ec2Configuration m_ec2Configuration;
  bool m_ec2ConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
