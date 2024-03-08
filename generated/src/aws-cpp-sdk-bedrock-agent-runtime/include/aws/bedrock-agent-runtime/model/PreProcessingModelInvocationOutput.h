/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingParsedResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The foundation model output from the pre-processing step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PreProcessingModelInvocationOutput">AWS
   * API Reference</a></p>
   */
  class PreProcessingModelInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingModelInvocationOutput();
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingModelInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingModelInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline const PreProcessingParsedResponse& GetParsedResponse() const{ return m_parsedResponse; }

    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline bool ParsedResponseHasBeenSet() const { return m_parsedResponseHasBeenSet; }

    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline void SetParsedResponse(const PreProcessingParsedResponse& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = value; }

    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline void SetParsedResponse(PreProcessingParsedResponse&& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = std::move(value); }

    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline PreProcessingModelInvocationOutput& WithParsedResponse(const PreProcessingParsedResponse& value) { SetParsedResponse(value); return *this;}

    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * pre-processing step.</p>
     */
    inline PreProcessingModelInvocationOutput& WithParsedResponse(PreProcessingParsedResponse&& value) { SetParsedResponse(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline PreProcessingModelInvocationOutput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline PreProcessingModelInvocationOutput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline PreProcessingModelInvocationOutput& WithTraceId(const char* value) { SetTraceId(value); return *this;}

  private:

    PreProcessingParsedResponse m_parsedResponse;
    bool m_parsedResponseHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
