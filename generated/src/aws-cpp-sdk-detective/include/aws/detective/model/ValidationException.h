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
    AWS_DETECTIVE_API ValidationException() = default;
    AWS_DETECTIVE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code associated with the validation failure.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline ValidationException& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An explanation of why validation failed.</p>
     */
    inline const Aws::String& GetErrorCodeReason() const { return m_errorCodeReason; }
    inline bool ErrorCodeReasonHasBeenSet() const { return m_errorCodeReasonHasBeenSet; }
    template<typename ErrorCodeReasonT = Aws::String>
    void SetErrorCodeReason(ErrorCodeReasonT&& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = std::forward<ErrorCodeReasonT>(value); }
    template<typename ErrorCodeReasonT = Aws::String>
    ValidationException& WithErrorCodeReason(ErrorCodeReasonT&& value) { SetErrorCodeReason(std::forward<ErrorCodeReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorCodeReason;
    bool m_errorCodeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
