/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>Trace Part which is emitted when agent trace could not be
   * generated</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FailureTrace">AWS
   * API Reference</a></p>
   */
  class FailureTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FailureTrace();
    AWS_BEDROCKAGENTRUNTIME_API FailureTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FailureTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    
    inline FailureTrace& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    
    inline FailureTrace& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    
    inline FailureTrace& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    
    inline FailureTrace& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    
    inline FailureTrace& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    
    inline FailureTrace& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
