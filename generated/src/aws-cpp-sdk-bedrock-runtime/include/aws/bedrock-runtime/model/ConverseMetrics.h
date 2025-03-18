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
   * <p>Metrics for a call to <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseMetrics">AWS
   * API Reference</a></p>
   */
  class ConverseMetrics
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseMetrics() = default;
    AWS_BEDROCKRUNTIME_API ConverseMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latency of the call to <code>Converse</code>, in milliseconds. </p>
     */
    inline long long GetLatencyMs() const { return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(long long value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline ConverseMetrics& WithLatencyMs(long long value) { SetLatencyMs(value); return *this;}
    ///@}
  private:

    long long m_latencyMs{0};
    bool m_latencyMsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
