/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingParsedResponse.h>
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
   * <p>Trace Part which contains information related to preprocessing</p><p><h3>See
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


    
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    
    inline PreProcessingModelInvocationOutput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    
    inline PreProcessingModelInvocationOutput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    
    inline PreProcessingModelInvocationOutput& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    
    inline const PreProcessingParsedResponse& GetParsedResponse() const{ return m_parsedResponse; }

    
    inline bool ParsedResponseHasBeenSet() const { return m_parsedResponseHasBeenSet; }

    
    inline void SetParsedResponse(const PreProcessingParsedResponse& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = value; }

    
    inline void SetParsedResponse(PreProcessingParsedResponse&& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = std::move(value); }

    
    inline PreProcessingModelInvocationOutput& WithParsedResponse(const PreProcessingParsedResponse& value) { SetParsedResponse(value); return *this;}

    
    inline PreProcessingModelInvocationOutput& WithParsedResponse(PreProcessingParsedResponse&& value) { SetParsedResponse(std::move(value)); return *this;}

  private:

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    PreProcessingParsedResponse m_parsedResponse;
    bool m_parsedResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
