/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CodeInterpreterNetworkMode.h>
#include <aws/bedrock-agentcore-control/model/VpcConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The network configuration for a code interpreter. This structure defines how
   * the code interpreter connects to the network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CodeInterpreterNetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterNetworkConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterNetworkConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network mode for the code interpreter. This field specifies how the code
     * interpreter connects to the network.</p>
     */
    inline CodeInterpreterNetworkMode GetNetworkMode() const { return m_networkMode; }
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }
    inline void SetNetworkMode(CodeInterpreterNetworkMode value) { m_networkModeHasBeenSet = true; m_networkMode = value; }
    inline CodeInterpreterNetworkConfiguration& WithNetworkMode(CodeInterpreterNetworkMode value) { SetNetworkMode(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CodeInterpreterNetworkConfiguration& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    CodeInterpreterNetworkMode m_networkMode{CodeInterpreterNetworkMode::NOT_SET};
    bool m_networkModeHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
