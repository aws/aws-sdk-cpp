/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/NetworkMode.h>
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
   * <p>SecurityConfig for the Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API NetworkConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network mode for the AgentCore Runtime.</p>
     */
    inline NetworkMode GetNetworkMode() const { return m_networkMode; }
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }
    inline void SetNetworkMode(NetworkMode value) { m_networkModeHasBeenSet = true; m_networkMode = value; }
    inline NetworkConfiguration& WithNetworkMode(NetworkMode value) { SetNetworkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network mode configuration for the AgentCore Runtime.</p>
     */
    inline const VpcConfig& GetNetworkModeConfig() const { return m_networkModeConfig; }
    inline bool NetworkModeConfigHasBeenSet() const { return m_networkModeConfigHasBeenSet; }
    template<typename NetworkModeConfigT = VpcConfig>
    void SetNetworkModeConfig(NetworkModeConfigT&& value) { m_networkModeConfigHasBeenSet = true; m_networkModeConfig = std::forward<NetworkModeConfigT>(value); }
    template<typename NetworkModeConfigT = VpcConfig>
    NetworkConfiguration& WithNetworkModeConfig(NetworkModeConfigT&& value) { SetNetworkModeConfig(std::forward<NetworkModeConfigT>(value)); return *this;}
    ///@}
  private:

    NetworkMode m_networkMode{NetworkMode::NOT_SET};
    bool m_networkModeHasBeenSet = false;

    VpcConfig m_networkModeConfig;
    bool m_networkModeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
