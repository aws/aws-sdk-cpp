/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/TokenUsage.h>
#include <aws/bedrock-runtime/model/ConverseStreamMetrics.h>
#include <aws/bedrock-runtime/model/ConverseStreamTrace.h>
#include <aws/bedrock-runtime/model/PerformanceConfiguration.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A conversation stream metadata event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStreamMetadataEvent">AWS
   * API Reference</a></p>
   */
  class ConverseStreamMetadataEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamMetadataEvent();
    AWS_BEDROCKRUNTIME_API ConverseStreamMetadataEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseStreamMetadataEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline const TokenUsage& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const TokenUsage& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(TokenUsage&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline ConverseStreamMetadataEvent& WithUsage(const TokenUsage& value) { SetUsage(value); return *this;}
    inline ConverseStreamMetadataEvent& WithUsage(TokenUsage&& value) { SetUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline const ConverseStreamMetrics& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const ConverseStreamMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(ConverseStreamMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline ConverseStreamMetadataEvent& WithMetrics(const ConverseStreamMetrics& value) { SetMetrics(value); return *this;}
    inline ConverseStreamMetadataEvent& WithMetrics(ConverseStreamMetrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace object in the response from <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>
     * that contains information about the guardrail behavior.</p>
     */
    inline const ConverseStreamTrace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const ConverseStreamTrace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(ConverseStreamTrace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline ConverseStreamMetadataEvent& WithTrace(const ConverseStreamTrace& value) { SetTrace(value); return *this;}
    inline ConverseStreamMetadataEvent& WithTrace(ConverseStreamTrace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance configuration metadata for the conversation stream
     * event.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const{ return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    inline void SetPerformanceConfig(const PerformanceConfiguration& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = value; }
    inline void SetPerformanceConfig(PerformanceConfiguration&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::move(value); }
    inline ConverseStreamMetadataEvent& WithPerformanceConfig(const PerformanceConfiguration& value) { SetPerformanceConfig(value); return *this;}
    inline ConverseStreamMetadataEvent& WithPerformanceConfig(PerformanceConfiguration&& value) { SetPerformanceConfig(std::move(value)); return *this;}
    ///@}
  private:

    TokenUsage m_usage;
    bool m_usageHasBeenSet = false;

    ConverseStreamMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    ConverseStreamTrace m_trace;
    bool m_traceHasBeenSet = false;

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
