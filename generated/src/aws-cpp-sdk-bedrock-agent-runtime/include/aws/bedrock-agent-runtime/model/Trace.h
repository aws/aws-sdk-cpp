/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationTrace.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/FailureTrace.h>
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
   * <p>Trace contains intermidate response for customer</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Trace">AWS
   * API Reference</a></p>
   */
  class Trace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Trace();
    AWS_BEDROCKAGENTRUNTIME_API Trace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Trace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PreProcessingTrace& GetPreProcessingTrace() const{ return m_preProcessingTrace; }

    
    inline bool PreProcessingTraceHasBeenSet() const { return m_preProcessingTraceHasBeenSet; }

    
    inline void SetPreProcessingTrace(const PreProcessingTrace& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = value; }

    
    inline void SetPreProcessingTrace(PreProcessingTrace&& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = std::move(value); }

    
    inline Trace& WithPreProcessingTrace(const PreProcessingTrace& value) { SetPreProcessingTrace(value); return *this;}

    
    inline Trace& WithPreProcessingTrace(PreProcessingTrace&& value) { SetPreProcessingTrace(std::move(value)); return *this;}


    
    inline const OrchestrationTrace& GetOrchestrationTrace() const{ return m_orchestrationTrace; }

    
    inline bool OrchestrationTraceHasBeenSet() const { return m_orchestrationTraceHasBeenSet; }

    
    inline void SetOrchestrationTrace(const OrchestrationTrace& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = value; }

    
    inline void SetOrchestrationTrace(OrchestrationTrace&& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = std::move(value); }

    
    inline Trace& WithOrchestrationTrace(const OrchestrationTrace& value) { SetOrchestrationTrace(value); return *this;}

    
    inline Trace& WithOrchestrationTrace(OrchestrationTrace&& value) { SetOrchestrationTrace(std::move(value)); return *this;}


    
    inline const PostProcessingTrace& GetPostProcessingTrace() const{ return m_postProcessingTrace; }

    
    inline bool PostProcessingTraceHasBeenSet() const { return m_postProcessingTraceHasBeenSet; }

    
    inline void SetPostProcessingTrace(const PostProcessingTrace& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = value; }

    
    inline void SetPostProcessingTrace(PostProcessingTrace&& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = std::move(value); }

    
    inline Trace& WithPostProcessingTrace(const PostProcessingTrace& value) { SetPostProcessingTrace(value); return *this;}

    
    inline Trace& WithPostProcessingTrace(PostProcessingTrace&& value) { SetPostProcessingTrace(std::move(value)); return *this;}


    
    inline const FailureTrace& GetFailureTrace() const{ return m_failureTrace; }

    
    inline bool FailureTraceHasBeenSet() const { return m_failureTraceHasBeenSet; }

    
    inline void SetFailureTrace(const FailureTrace& value) { m_failureTraceHasBeenSet = true; m_failureTrace = value; }

    
    inline void SetFailureTrace(FailureTrace&& value) { m_failureTraceHasBeenSet = true; m_failureTrace = std::move(value); }

    
    inline Trace& WithFailureTrace(const FailureTrace& value) { SetFailureTrace(value); return *this;}

    
    inline Trace& WithFailureTrace(FailureTrace&& value) { SetFailureTrace(std::move(value)); return *this;}

  private:

    PreProcessingTrace m_preProcessingTrace;
    bool m_preProcessingTraceHasBeenSet = false;

    OrchestrationTrace m_orchestrationTrace;
    bool m_orchestrationTraceHasBeenSet = false;

    PostProcessingTrace m_postProcessingTrace;
    bool m_postProcessingTraceHasBeenSet = false;

    FailureTrace m_failureTrace;
    bool m_failureTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
