/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/TokenUsage.h>
#include <aws/bedrock-runtime/model/ConverseStreamMetrics.h>
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


    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline const TokenUsage& GetUsage() const{ return m_usage; }

    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }

    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline void SetUsage(const TokenUsage& value) { m_usageHasBeenSet = true; m_usage = value; }

    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline void SetUsage(TokenUsage&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }

    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline ConverseStreamMetadataEvent& WithUsage(const TokenUsage& value) { SetUsage(value); return *this;}

    /**
     * <p>Usage information for the conversation stream event.</p>
     */
    inline ConverseStreamMetadataEvent& WithUsage(TokenUsage&& value) { SetUsage(std::move(value)); return *this;}


    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline const ConverseStreamMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline void SetMetrics(const ConverseStreamMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline void SetMetrics(ConverseStreamMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline ConverseStreamMetadataEvent& WithMetrics(const ConverseStreamMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for the conversation stream metadata event.</p>
     */
    inline ConverseStreamMetadataEvent& WithMetrics(ConverseStreamMetrics&& value) { SetMetrics(std::move(value)); return *this;}

  private:

    TokenUsage m_usage;
    bool m_usageHasBeenSet = false;

    ConverseStreamMetrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
