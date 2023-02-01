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
   * <p>The request issuer does not have permission to access this resource or
   * perform this operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_DETECTIVE_API AccessDeniedException();
    AWS_DETECTIVE_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline AccessDeniedException& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline AccessDeniedException& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline const Aws::String& GetErrorCodeReason() const{ return m_errorCodeReason; }

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline bool ErrorCodeReasonHasBeenSet() const { return m_errorCodeReasonHasBeenSet; }

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline void SetErrorCodeReason(const Aws::String& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = value; }

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline void SetErrorCodeReason(Aws::String&& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = std::move(value); }

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline void SetErrorCodeReason(const char* value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason.assign(value); }

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithErrorCodeReason(const Aws::String& value) { SetErrorCodeReason(value); return *this;}

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithErrorCodeReason(Aws::String&& value) { SetErrorCodeReason(std::move(value)); return *this;}

    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithErrorCodeReason(const char* value) { SetErrorCodeReason(value); return *this;}


    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline const ErrorCode& GetSubErrorCode() const{ return m_subErrorCode; }

    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline bool SubErrorCodeHasBeenSet() const { return m_subErrorCodeHasBeenSet; }

    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline void SetSubErrorCode(const ErrorCode& value) { m_subErrorCodeHasBeenSet = true; m_subErrorCode = value; }

    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline void SetSubErrorCode(ErrorCode&& value) { m_subErrorCodeHasBeenSet = true; m_subErrorCode = std::move(value); }

    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline AccessDeniedException& WithSubErrorCode(const ErrorCode& value) { SetSubErrorCode(value); return *this;}

    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline AccessDeniedException& WithSubErrorCode(ErrorCode&& value) { SetSubErrorCode(std::move(value)); return *this;}


    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline const Aws::String& GetSubErrorCodeReason() const{ return m_subErrorCodeReason; }

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline bool SubErrorCodeReasonHasBeenSet() const { return m_subErrorCodeReasonHasBeenSet; }

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline void SetSubErrorCodeReason(const Aws::String& value) { m_subErrorCodeReasonHasBeenSet = true; m_subErrorCodeReason = value; }

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline void SetSubErrorCodeReason(Aws::String&& value) { m_subErrorCodeReasonHasBeenSet = true; m_subErrorCodeReason = std::move(value); }

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline void SetSubErrorCodeReason(const char* value) { m_subErrorCodeReasonHasBeenSet = true; m_subErrorCodeReason.assign(value); }

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithSubErrorCodeReason(const Aws::String& value) { SetSubErrorCodeReason(value); return *this;}

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithSubErrorCodeReason(Aws::String&& value) { SetSubErrorCodeReason(std::move(value)); return *this;}

    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline AccessDeniedException& WithSubErrorCodeReason(const char* value) { SetSubErrorCodeReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorCodeReason;
    bool m_errorCodeReasonHasBeenSet = false;

    ErrorCode m_subErrorCode;
    bool m_subErrorCodeHasBeenSet = false;

    Aws::String m_subErrorCodeReason;
    bool m_subErrorCodeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
