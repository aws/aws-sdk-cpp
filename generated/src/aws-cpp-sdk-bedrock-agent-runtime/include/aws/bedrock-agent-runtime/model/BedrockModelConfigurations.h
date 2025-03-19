/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PerformanceConfiguration.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Settings for a model called with <a>InvokeAgent</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/BedrockModelConfigurations">AWS
   * API Reference</a></p>
   */
  class BedrockModelConfigurations
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API BedrockModelConfigurations() = default;
    AWS_BEDROCKAGENTRUNTIME_API BedrockModelConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API BedrockModelConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The performance configuration for the model.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const { return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    void SetPerformanceConfig(PerformanceConfigT&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::forward<PerformanceConfigT>(value); }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    BedrockModelConfigurations& WithPerformanceConfig(PerformanceConfigT&& value) { SetPerformanceConfig(std::forward<PerformanceConfigT>(value)); return *this;}
    ///@}
  private:

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
