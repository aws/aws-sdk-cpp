/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Metrics for the stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStreamMetrics">AWS
   * API Reference</a></p>
   */
  class ConverseStreamMetrics
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamMetrics() = default;
    AWS_BEDROCKRUNTIME_API ConverseStreamMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseStreamMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latency for the streaming request, in milliseconds.</p>
     */
    inline long long GetLatencyMs() const { return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(long long value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline ConverseStreamMetrics& WithLatencyMs(long long value) { SetLatencyMs(value); return *this;}
    ///@}
  private:

    long long m_latencyMs{0};
    bool m_latencyMsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
