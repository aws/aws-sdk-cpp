/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AccessDeniedException.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/CitationEvent.h>
#include <aws/bedrock-agent-runtime/model/ConflictException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/GuardrailEvent.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateOutputEvent.h>
#include <aws/bedrock-agent-runtime/model/ResourceNotFoundException.h>
#include <aws/bedrock-agent-runtime/model/ServiceQuotaExceededException.h>
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
   * <p>A retrieve and generate stream response output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieveAndGenerateStreamResponseOutput">AWS
   * API Reference</a></p>
   */
  class RetrieveAndGenerateStreamResponseOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamResponseOutput() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamResponseOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamResponseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because you do not have sufficient permissions to
     * perform the requested action. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-access-denied">AccessDeniedException</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const AccessDeniedException& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = AccessDeniedException>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = AccessDeniedException>
    RetrieveAndGenerateStreamResponseOutput& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request failed due to a bad gateway error.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const { return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    template<typename BadGatewayExceptionT = BadGatewayException>
    void SetBadGatewayException(BadGatewayExceptionT&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::forward<BadGatewayExceptionT>(value); }
    template<typename BadGatewayExceptionT = BadGatewayException>
    RetrieveAndGenerateStreamResponseOutput& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A citation event.</p>
     */
    inline const CitationEvent& GetCitation() const { return m_citation; }
    inline bool CitationHasBeenSet() const { return m_citationHasBeenSet; }
    template<typename CitationT = CitationEvent>
    void SetCitation(CitationT&& value) { m_citationHasBeenSet = true; m_citation = std::forward<CitationT>(value); }
    template<typename CitationT = CitationEvent>
    RetrieveAndGenerateStreamResponseOutput& WithCitation(CitationT&& value) { SetCitation(std::forward<CitationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error occurred because of a conflict while performing an operation.</p>
     */
    inline const ConflictException& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = ConflictException>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = ConflictException>
    RetrieveAndGenerateStreamResponseOutput& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request failed due to a dependency error.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const { return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    void SetDependencyFailedException(DependencyFailedExceptionT&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::forward<DependencyFailedExceptionT>(value); }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    RetrieveAndGenerateStreamResponseOutput& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A guardrail event.</p>
     */
    inline const GuardrailEvent& GetGuardrail() const { return m_guardrail; }
    inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
    template<typename GuardrailT = GuardrailEvent>
    void SetGuardrail(GuardrailT&& value) { m_guardrailHasBeenSet = true; m_guardrail = std::forward<GuardrailT>(value); }
    template<typename GuardrailT = GuardrailEvent>
    RetrieveAndGenerateStreamResponseOutput& WithGuardrail(GuardrailT&& value) { SetGuardrail(std::forward<GuardrailT>(value)); return *this;}
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
    RetrieveAndGenerateStreamResponseOutput& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output event.</p>
     */
    inline const RetrieveAndGenerateOutputEvent& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = RetrieveAndGenerateOutputEvent>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = RetrieveAndGenerateOutputEvent>
    RetrieveAndGenerateStreamResponseOutput& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource ARN was not found. For troubleshooting this error, see
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-resource-not-found">ResourceNotFound</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    RetrieveAndGenerateStreamResponseOutput& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request exceeds the service quota for your account. You can view your
     * quotas at <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/gs-request-quota.html">Viewing
     * service quotas</a>. You can resubmit your request later.</p>
     */
    inline const ServiceQuotaExceededException& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    template<typename ServiceQuotaExceededExceptionT = ServiceQuotaExceededException>
    void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value); }
    template<typename ServiceQuotaExceededExceptionT = ServiceQuotaExceededException>
    RetrieveAndGenerateStreamResponseOutput& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was denied due to exceeding the account quotas for <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-throttling-exception">ThrottlingException</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = ThrottlingException>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = ThrottlingException>
    RetrieveAndGenerateStreamResponseOutput& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-validation-error">ValidationError</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ValidationException& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = ValidationException>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = ValidationException>
    RetrieveAndGenerateStreamResponseOutput& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}
  private:

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    CitationEvent m_citation;
    bool m_citationHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    GuardrailEvent m_guardrail;
    bool m_guardrailHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    RetrieveAndGenerateOutputEvent m_output;
    bool m_outputHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ServiceQuotaExceededException m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
