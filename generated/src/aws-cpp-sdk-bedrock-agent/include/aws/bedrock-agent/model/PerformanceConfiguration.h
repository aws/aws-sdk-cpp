/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PerformanceConfigLatency.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The performance-related configuration options for the knowledge base
   * retrieval and generation process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PerformanceConfiguration">AWS
   * API Reference</a></p>
   */
  class PerformanceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PerformanceConfiguration() = default;
    AWS_BEDROCKAGENT_API PerformanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PerformanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latency optimization setting.</p>
     */
    inline PerformanceConfigLatency GetLatency() const { return m_latency; }
    inline bool LatencyHasBeenSet() const { return m_latencyHasBeenSet; }
    inline void SetLatency(PerformanceConfigLatency value) { m_latencyHasBeenSet = true; m_latency = value; }
    inline PerformanceConfiguration& WithLatency(PerformanceConfigLatency value) { SetLatency(value); return *this;}
    ///@}
  private:

    PerformanceConfigLatency m_latency{PerformanceConfigLatency::NOT_SET};
    bool m_latencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
