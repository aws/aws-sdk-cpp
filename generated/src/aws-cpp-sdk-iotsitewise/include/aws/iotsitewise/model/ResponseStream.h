﻿/**
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
    AWS_IOTSITEWISE_API ResponseStream() = default;
    AWS_IOTSITEWISE_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains tracing information of the SiteWise Assistant's reasoning and data
     * access.</p>
     */
    inline const Trace& GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    template<typename TraceT = Trace>
    void SetTrace(TraceT&& value) { m_traceHasBeenSet = true; m_trace = std::forward<TraceT>(value); }
    template<typename TraceT = Trace>
    ResponseStream& WithTrace(TraceT&& value) { SetTrace(std::forward<TraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the SiteWise Assistant's response.</p>
     */
    inline const InvocationOutput& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = InvocationOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = InvocationOutput>
    ResponseStream& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AccessDeniedException& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = AccessDeniedException>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = AccessDeniedException>
    ResponseStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConflictingOperationException& GetConflictingOperationException() const { return m_conflictingOperationException; }
    inline bool ConflictingOperationExceptionHasBeenSet() const { return m_conflictingOperationExceptionHasBeenSet; }
    template<typename ConflictingOperationExceptionT = ConflictingOperationException>
    void SetConflictingOperationException(ConflictingOperationExceptionT&& value) { m_conflictingOperationExceptionHasBeenSet = true; m_conflictingOperationException = std::forward<ConflictingOperationExceptionT>(value); }
    template<typename ConflictingOperationExceptionT = ConflictingOperationException>
    ResponseStream& WithConflictingOperationException(ConflictingOperationExceptionT&& value) { SetConflictingOperationException(std::forward<ConflictingOperationExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InternalFailureException& GetInternalFailureException() const { return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    template<typename InternalFailureExceptionT = InternalFailureException>
    void SetInternalFailureException(InternalFailureExceptionT&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::forward<InternalFailureExceptionT>(value); }
    template<typename InternalFailureExceptionT = InternalFailureException>
    ResponseStream& WithInternalFailureException(InternalFailureExceptionT&& value) { SetInternalFailureException(std::forward<InternalFailureExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InvalidRequestException& GetInvalidRequestException() const { return m_invalidRequestException; }
    inline bool InvalidRequestExceptionHasBeenSet() const { return m_invalidRequestExceptionHasBeenSet; }
    template<typename InvalidRequestExceptionT = InvalidRequestException>
    void SetInvalidRequestException(InvalidRequestExceptionT&& value) { m_invalidRequestExceptionHasBeenSet = true; m_invalidRequestException = std::forward<InvalidRequestExceptionT>(value); }
    template<typename InvalidRequestExceptionT = InvalidRequestException>
    ResponseStream& WithInvalidRequestException(InvalidRequestExceptionT&& value) { SetInvalidRequestException(std::forward<InvalidRequestExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LimitExceededException& GetLimitExceededException() const { return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    template<typename LimitExceededExceptionT = LimitExceededException>
    void SetLimitExceededException(LimitExceededExceptionT&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::forward<LimitExceededExceptionT>(value); }
    template<typename LimitExceededExceptionT = LimitExceededException>
    ResponseStream& WithLimitExceededException(LimitExceededExceptionT&& value) { SetLimitExceededException(std::forward<LimitExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceNotFoundException& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    ResponseStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThrottlingException& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = ThrottlingException>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = ThrottlingException>
    ResponseStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
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
