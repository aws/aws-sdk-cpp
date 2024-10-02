/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailUsage.h>
#include <aws/bedrock-runtime/model/GuardrailCoverage.h>
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
   * <p>The invocation metrics for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailInvocationMetrics">AWS
   * API Reference</a></p>
   */
  class GuardrailInvocationMetrics
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailInvocationMetrics();
    AWS_BEDROCKRUNTIME_API GuardrailInvocationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailInvocationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The processing latency details for the guardrail invocation metrics.</p>
     */
    inline long long GetGuardrailProcessingLatency() const{ return m_guardrailProcessingLatency; }
    inline bool GuardrailProcessingLatencyHasBeenSet() const { return m_guardrailProcessingLatencyHasBeenSet; }
    inline void SetGuardrailProcessingLatency(long long value) { m_guardrailProcessingLatencyHasBeenSet = true; m_guardrailProcessingLatency = value; }
    inline GuardrailInvocationMetrics& WithGuardrailProcessingLatency(long long value) { SetGuardrailProcessingLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage details for the guardrail invocation metrics.</p>
     */
    inline const GuardrailUsage& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const GuardrailUsage& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(GuardrailUsage&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline GuardrailInvocationMetrics& WithUsage(const GuardrailUsage& value) { SetUsage(value); return *this;}
    inline GuardrailInvocationMetrics& WithUsage(GuardrailUsage&& value) { SetUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The coverage details for the guardrail invocation metrics.</p>
     */
    inline const GuardrailCoverage& GetGuardrailCoverage() const{ return m_guardrailCoverage; }
    inline bool GuardrailCoverageHasBeenSet() const { return m_guardrailCoverageHasBeenSet; }
    inline void SetGuardrailCoverage(const GuardrailCoverage& value) { m_guardrailCoverageHasBeenSet = true; m_guardrailCoverage = value; }
    inline void SetGuardrailCoverage(GuardrailCoverage&& value) { m_guardrailCoverageHasBeenSet = true; m_guardrailCoverage = std::move(value); }
    inline GuardrailInvocationMetrics& WithGuardrailCoverage(const GuardrailCoverage& value) { SetGuardrailCoverage(value); return *this;}
    inline GuardrailInvocationMetrics& WithGuardrailCoverage(GuardrailCoverage&& value) { SetGuardrailCoverage(std::move(value)); return *this;}
    ///@}
  private:

    long long m_guardrailProcessingLatency;
    bool m_guardrailProcessingLatencyHasBeenSet = false;

    GuardrailUsage m_usage;
    bool m_usageHasBeenSet = false;

    GuardrailCoverage m_guardrailCoverage;
    bool m_guardrailCoverageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
