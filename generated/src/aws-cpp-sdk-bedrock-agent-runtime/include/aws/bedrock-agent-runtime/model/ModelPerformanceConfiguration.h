﻿/**
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
   * <p>The performance configuration for a model called with
   * <a>InvokeFlow</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ModelPerformanceConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelPerformanceConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ModelPerformanceConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API ModelPerformanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ModelPerformanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latency configuration for the model.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const{ return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    inline void SetPerformanceConfig(const PerformanceConfiguration& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = value; }
    inline void SetPerformanceConfig(PerformanceConfiguration&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::move(value); }
    inline ModelPerformanceConfiguration& WithPerformanceConfig(const PerformanceConfiguration& value) { SetPerformanceConfig(value); return *this;}
    inline ModelPerformanceConfiguration& WithPerformanceConfig(PerformanceConfiguration&& value) { SetPerformanceConfig(std::move(value)); return *this;}
    ///@}
  private:

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
