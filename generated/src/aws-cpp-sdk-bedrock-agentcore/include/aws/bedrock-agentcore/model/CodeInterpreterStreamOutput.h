/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterResult.h>
#include <aws/bedrock-agentcore/model/ValidationException.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains output from a code interpreter stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CodeInterpreterStreamOutput">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterStreamOutput
  {
  public:
    AWS_BEDROCKAGENTCORE_API CodeInterpreterStreamOutput() = default;
    AWS_BEDROCKAGENTCORE_API CodeInterpreterStreamOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API CodeInterpreterStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CodeInterpreterResult& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = CodeInterpreterResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = CodeInterpreterResult>
    CodeInterpreterStreamOutput& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = BedrockAgentCoreError>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = BedrockAgentCoreError>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = BedrockAgentCoreError>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = BedrockAgentCoreError>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    template<typename ServiceQuotaExceededExceptionT = BedrockAgentCoreError>
    void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value); }
    template<typename ServiceQuotaExceededExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BedrockAgentCoreError& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = BedrockAgentCoreError>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = BedrockAgentCoreError>
    CodeInterpreterStreamOutput& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ValidationException& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = ValidationException>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = ValidationException>
    CodeInterpreterStreamOutput& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}
  private:

    CodeInterpreterResult m_result;
    bool m_resultHasBeenSet = false;

    BedrockAgentCoreError m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BedrockAgentCoreError m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    BedrockAgentCoreError m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    BedrockAgentCoreError m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    BedrockAgentCoreError m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    BedrockAgentCoreError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
