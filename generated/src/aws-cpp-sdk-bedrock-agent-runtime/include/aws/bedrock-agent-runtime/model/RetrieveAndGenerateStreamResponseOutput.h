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
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamResponseOutput();
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
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request failed due to a bad gateway error.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A citation event.</p>
     */
    inline const CitationEvent& GetCitation() const{ return m_citation; }
    inline bool CitationHasBeenSet() const { return m_citationHasBeenSet; }
    inline void SetCitation(const CitationEvent& value) { m_citationHasBeenSet = true; m_citation = value; }
    inline void SetCitation(CitationEvent&& value) { m_citationHasBeenSet = true; m_citation = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithCitation(const CitationEvent& value) { SetCitation(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithCitation(CitationEvent&& value) { SetCitation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error occurred because of a conflict while performing an operation.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request failed due to a dependency error.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const{ return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    inline void SetDependencyFailedException(const DependencyFailedException& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = value; }
    inline void SetDependencyFailedException(DependencyFailedException&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A guardrail event.</p>
     */
    inline const GuardrailEvent& GetGuardrail() const{ return m_guardrail; }
    inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
    inline void SetGuardrail(const GuardrailEvent& value) { m_guardrailHasBeenSet = true; m_guardrail = value; }
    inline void SetGuardrail(GuardrailEvent&& value) { m_guardrailHasBeenSet = true; m_guardrail = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithGuardrail(const GuardrailEvent& value) { SetGuardrail(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithGuardrail(GuardrailEvent&& value) { SetGuardrail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output event.</p>
     */
    inline const RetrieveAndGenerateOutputEvent& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const RetrieveAndGenerateOutputEvent& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(RetrieveAndGenerateOutputEvent&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithOutput(const RetrieveAndGenerateOutputEvent& value) { SetOutput(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithOutput(RetrieveAndGenerateOutputEvent&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource ARN was not found. For troubleshooting this error, see
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-resource-not-found">ResourceNotFound</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request exceeds the service quota for your account. You can view your
     * quotas at <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/gs-request-quota.html">Viewing
     * service quotas</a>. You can resubmit your request later.</p>
     */
    inline const ServiceQuotaExceededException& GetServiceQuotaExceededException() const{ return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    inline void SetServiceQuotaExceededException(const ServiceQuotaExceededException& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = value; }
    inline void SetServiceQuotaExceededException(ServiceQuotaExceededException&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithServiceQuotaExceededException(const ServiceQuotaExceededException& value) { SetServiceQuotaExceededException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithServiceQuotaExceededException(ServiceQuotaExceededException&& value) { SetServiceQuotaExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was denied due to exceeding the account quotas for <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-throttling-exception">ThrottlingException</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-validation-error">ValidationError</a>
     * in the Amazon Bedrock User Guide.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline RetrieveAndGenerateStreamResponseOutput& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline RetrieveAndGenerateStreamResponseOutput& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
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
