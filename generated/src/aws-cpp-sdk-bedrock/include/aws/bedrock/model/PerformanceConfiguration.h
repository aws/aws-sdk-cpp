/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/PerformanceConfigLatency.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains performance settings for a model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PerformanceConfiguration">AWS
   * API Reference</a></p>
   */
  class PerformanceConfiguration
  {
  public:
    AWS_BEDROCK_API PerformanceConfiguration() = default;
    AWS_BEDROCK_API PerformanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PerformanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to use the latency-optimized or standard version of a model
     * or inference profile.</p>
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
} // namespace Bedrock
} // namespace Aws
