/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/ErrorCode.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>The request parameters are invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_DETECTIVE_API ValidationException();
    AWS_DETECTIVE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline ValidationException& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline ValidationException& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline const Aws::String& GetErrorCodeReason() const{ return m_errorCodeReason; }

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline bool ErrorCodeReasonHasBeenSet() const { return m_errorCodeReasonHasBeenSet; }

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline void SetErrorCodeReason(const Aws::String& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = value; }

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline void SetErrorCodeReason(Aws::String&& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = std::move(value); }

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline void SetErrorCodeReason(const char* value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason.assign(value); }

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline ValidationException& WithErrorCodeReason(const Aws::String& value) { SetErrorCodeReason(value); return *this;}

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline ValidationException& WithErrorCodeReason(Aws::String&& value) { SetErrorCodeReason(std::move(value)); return *this;}

    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline ValidationException& WithErrorCodeReason(const char* value) { SetErrorCodeReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorCodeReason;
    bool m_errorCodeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
