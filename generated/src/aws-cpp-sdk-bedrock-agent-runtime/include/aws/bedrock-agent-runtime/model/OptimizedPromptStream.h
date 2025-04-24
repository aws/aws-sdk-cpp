/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AnalyzePromptEvent.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/OptimizedPromptEvent.h>
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
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream() = default;
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because of missing access permissions. Check your
     * permissions and retry your request.</p>
     */
    inline const BedrockAgentRuntimeError& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
    OptimizedPromptStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An event in which the prompt was analyzed in preparation for
     * optimization.</p>
     */
    inline const AnalyzePromptEvent& GetAnalyzePromptEvent() const { return m_analyzePromptEvent; }
    inline bool AnalyzePromptEventHasBeenSet() const { return m_analyzePromptEventHasBeenSet; }
    template<typename AnalyzePromptEventT = AnalyzePromptEvent>
    void SetAnalyzePromptEvent(AnalyzePromptEventT&& value) { m_analyzePromptEventHasBeenSet = true; m_analyzePromptEvent = std::forward<AnalyzePromptEventT>(value); }
    template<typename AnalyzePromptEventT = AnalyzePromptEvent>
    OptimizedPromptStream& WithAnalyzePromptEvent(AnalyzePromptEventT&& value) { SetAnalyzePromptEvent(std::forward<AnalyzePromptEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const { return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    template<typename BadGatewayExceptionT = BadGatewayException>
    void SetBadGatewayException(BadGatewayExceptionT&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::forward<BadGatewayExceptionT>(value); }
    template<typename BadGatewayExceptionT = BadGatewayException>
    OptimizedPromptStream& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency. Check the resource configurations and
     * retry the request.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const { return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    void SetDependencyFailedException(DependencyFailedExceptionT&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::forward<DependencyFailedExceptionT>(value); }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    OptimizedPromptStream& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = InternalServerException>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = InternalServerException>
    OptimizedPromptStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An event in which the prompt was optimized.</p>
     */
    inline const OptimizedPromptEvent& GetOptimizedPromptEvent() const { return m_optimizedPromptEvent; }
    inline bool OptimizedPromptEventHasBeenSet() const { return m_optimizedPromptEventHasBeenSet; }
    template<typename OptimizedPromptEventT = OptimizedPromptEvent>
    void SetOptimizedPromptEvent(OptimizedPromptEventT&& value) { m_optimizedPromptEventHasBeenSet = true; m_optimizedPromptEvent = std::forward<OptimizedPromptEventT>(value); }
    template<typename OptimizedPromptEventT = OptimizedPromptEvent>
    OptimizedPromptStream& WithOptimizedPromptEvent(OptimizedPromptEventT&& value) { SetOptimizedPromptEvent(std::forward<OptimizedPromptEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was throttled because of service-wide limitations. Resubmit your
     * request later or in a different region. You can also purchase <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
     * Throughput</a> to increase the rate or number of tokens you can process.</p>
     */
    inline const BedrockAgentRuntimeError& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = BedrockAgentRuntimeError>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = BedrockAgentRuntimeError>
    OptimizedPromptStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const BedrockAgentRuntimeError& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = BedrockAgentRuntimeError>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = BedrockAgentRuntimeError>
    OptimizedPromptStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}
  private:

    BedrockAgentRuntimeError m_accessDeniedException;
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

    BedrockAgentRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
