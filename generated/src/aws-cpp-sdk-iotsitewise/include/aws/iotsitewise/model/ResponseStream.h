/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Trace.h>
#include <aws/iotsitewise/model/InvocationOutput.h>
#include <aws/iotsitewise/model/AccessDeniedException.h>
#include <aws/iotsitewise/model/ConflictingOperationException.h>
#include <aws/iotsitewise/model/InternalFailureException.h>
#include <aws/iotsitewise/model/InvalidRequestException.h>
#include <aws/iotsitewise/model/LimitExceededException.h>
#include <aws/iotsitewise/model/ResourceNotFoundException.h>
#include <aws/iotsitewise/model/ThrottlingException.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the response, citation, and trace from the SiteWise
   * Assistant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_IOTSITEWISE_API ResponseStream();
    AWS_IOTSITEWISE_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains tracing information of the SiteWise Assistant's reasoning and data
     * access.</p>
     */
    inline const Trace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline ResponseStream& WithTrace(const Trace& value) { SetTrace(value); return *this;}
    inline ResponseStream& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the SiteWise Assistant's response.</p>
     */
    inline const InvocationOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const InvocationOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(InvocationOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline ResponseStream& WithOutput(const InvocationOutput& value) { SetOutput(value); return *this;}
    inline ResponseStream& WithOutput(InvocationOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }
    inline ResponseStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline ResponseStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConflictingOperationException& GetConflictingOperationException() const{ return m_conflictingOperationException; }
    inline bool ConflictingOperationExceptionHasBeenSet() const { return m_conflictingOperationExceptionHasBeenSet; }
    inline void SetConflictingOperationException(const ConflictingOperationException& value) { m_conflictingOperationExceptionHasBeenSet = true; m_conflictingOperationException = value; }
    inline void SetConflictingOperationException(ConflictingOperationException&& value) { m_conflictingOperationExceptionHasBeenSet = true; m_conflictingOperationException = std::move(value); }
    inline ResponseStream& WithConflictingOperationException(const ConflictingOperationException& value) { SetConflictingOperationException(value); return *this;}
    inline ResponseStream& WithConflictingOperationException(ConflictingOperationException&& value) { SetConflictingOperationException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InternalFailureException& GetInternalFailureException() const{ return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    inline void SetInternalFailureException(const InternalFailureException& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = value; }
    inline void SetInternalFailureException(InternalFailureException&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::move(value); }
    inline ResponseStream& WithInternalFailureException(const InternalFailureException& value) { SetInternalFailureException(value); return *this;}
    inline ResponseStream& WithInternalFailureException(InternalFailureException&& value) { SetInternalFailureException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InvalidRequestException& GetInvalidRequestException() const{ return m_invalidRequestException; }
    inline bool InvalidRequestExceptionHasBeenSet() const { return m_invalidRequestExceptionHasBeenSet; }
    inline void SetInvalidRequestException(const InvalidRequestException& value) { m_invalidRequestExceptionHasBeenSet = true; m_invalidRequestException = value; }
    inline void SetInvalidRequestException(InvalidRequestException&& value) { m_invalidRequestExceptionHasBeenSet = true; m_invalidRequestException = std::move(value); }
    inline ResponseStream& WithInvalidRequestException(const InvalidRequestException& value) { SetInvalidRequestException(value); return *this;}
    inline ResponseStream& WithInvalidRequestException(InvalidRequestException&& value) { SetInvalidRequestException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LimitExceededException& GetLimitExceededException() const{ return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    inline void SetLimitExceededException(const LimitExceededException& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = value; }
    inline void SetLimitExceededException(LimitExceededException&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::move(value); }
    inline ResponseStream& WithLimitExceededException(const LimitExceededException& value) { SetLimitExceededException(value); return *this;}
    inline ResponseStream& WithLimitExceededException(LimitExceededException&& value) { SetLimitExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }
    inline ResponseStream& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}
    inline ResponseStream& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline ResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline ResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}
  private:

    Trace m_trace;
    bool m_traceHasBeenSet = false;

    InvocationOutput m_output;
    bool m_outputHasBeenSet = false;

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    ConflictingOperationException m_conflictingOperationException;
    bool m_conflictingOperationExceptionHasBeenSet = false;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet = false;

    InvalidRequestException m_invalidRequestException;
    bool m_invalidRequestExceptionHasBeenSet = false;

    LimitExceededException m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
