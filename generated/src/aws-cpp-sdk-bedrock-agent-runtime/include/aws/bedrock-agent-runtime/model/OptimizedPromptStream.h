/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AccessDeniedException.h>
#include <aws/bedrock-agent-runtime/model/AnalyzePromptEvent.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/OptimizedPromptEvent.h>
#include <aws/bedrock-agent-runtime/model/ThrottlingException.h>
#include <aws/bedrock-agent-runtime/model/ValidationException.h>
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
   * <p>The stream containing events in the prompt optimization
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OptimizedPromptStream">AWS
   * API Reference</a></p>
   */
  class OptimizedPromptStream
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream();
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because of missing access permissions. Check your
     * permissions and retry your request.</p>
     */
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }
    inline OptimizedPromptStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline OptimizedPromptStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An event in which the prompt was analyzed in preparation for
     * optimization.</p>
     */
    inline const AnalyzePromptEvent& GetAnalyzePromptEvent() const{ return m_analyzePromptEvent; }
    inline bool AnalyzePromptEventHasBeenSet() const { return m_analyzePromptEventHasBeenSet; }
    inline void SetAnalyzePromptEvent(const AnalyzePromptEvent& value) { m_analyzePromptEventHasBeenSet = true; m_analyzePromptEvent = value; }
    inline void SetAnalyzePromptEvent(AnalyzePromptEvent&& value) { m_analyzePromptEventHasBeenSet = true; m_analyzePromptEvent = std::move(value); }
    inline OptimizedPromptStream& WithAnalyzePromptEvent(const AnalyzePromptEvent& value) { SetAnalyzePromptEvent(value); return *this;}
    inline OptimizedPromptStream& WithAnalyzePromptEvent(AnalyzePromptEvent&& value) { SetAnalyzePromptEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }
    inline OptimizedPromptStream& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}
    inline OptimizedPromptStream& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency. Check the resource configurations and
     * retry the request.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const{ return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    inline void SetDependencyFailedException(const DependencyFailedException& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = value; }
    inline void SetDependencyFailedException(DependencyFailedException&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::move(value); }
    inline OptimizedPromptStream& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}
    inline OptimizedPromptStream& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline OptimizedPromptStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline OptimizedPromptStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An event in which the prompt was optimized.</p>
     */
    inline const OptimizedPromptEvent& GetOptimizedPromptEvent() const{ return m_optimizedPromptEvent; }
    inline bool OptimizedPromptEventHasBeenSet() const { return m_optimizedPromptEventHasBeenSet; }
    inline void SetOptimizedPromptEvent(const OptimizedPromptEvent& value) { m_optimizedPromptEventHasBeenSet = true; m_optimizedPromptEvent = value; }
    inline void SetOptimizedPromptEvent(OptimizedPromptEvent&& value) { m_optimizedPromptEventHasBeenSet = true; m_optimizedPromptEvent = std::move(value); }
    inline OptimizedPromptStream& WithOptimizedPromptEvent(const OptimizedPromptEvent& value) { SetOptimizedPromptEvent(value); return *this;}
    inline OptimizedPromptStream& WithOptimizedPromptEvent(OptimizedPromptEvent&& value) { SetOptimizedPromptEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was throttled because of service-wide limitations. Resubmit your
     * request later or in a different region. You can also purchase <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
     * Throughput</a> to increase the rate or number of tokens you can process.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline OptimizedPromptStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline OptimizedPromptStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline OptimizedPromptStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline OptimizedPromptStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}
  private:

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    AnalyzePromptEvent m_analyzePromptEvent;
    bool m_analyzePromptEventHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    OptimizedPromptEvent m_optimizedPromptEvent;
    bool m_optimizedPromptEventHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
