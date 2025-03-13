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
    AWS_DETECTIVE_API AccessDeniedException() = default;
    AWS_DETECTIVE_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AccessDeniedException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SDK default error code associated with the access denied exception.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline AccessDeniedException& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SDK default explanation of why access was denied.</p>
     */
    inline const Aws::String& GetErrorCodeReason() const { return m_errorCodeReason; }
    inline bool ErrorCodeReasonHasBeenSet() const { return m_errorCodeReasonHasBeenSet; }
    template<typename ErrorCodeReasonT = Aws::String>
    void SetErrorCodeReason(ErrorCodeReasonT&& value) { m_errorCodeReasonHasBeenSet = true; m_errorCodeReason = std::forward<ErrorCodeReasonT>(value); }
    template<typename ErrorCodeReasonT = Aws::String>
    AccessDeniedException& WithErrorCodeReason(ErrorCodeReasonT&& value) { SetErrorCodeReason(std::forward<ErrorCodeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code associated with the access denied exception.</p>
     */
    inline ErrorCode GetSubErrorCode() const { return m_subErrorCode; }
    inline bool SubErrorCodeHasBeenSet() const { return m_subErrorCodeHasBeenSet; }
    inline void SetSubErrorCode(ErrorCode value) { m_subErrorCodeHasBeenSet = true; m_subErrorCode = value; }
    inline AccessDeniedException& WithSubErrorCode(ErrorCode value) { SetSubErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An explanation of why access was denied.</p>
     */
    inline const Aws::String& GetSubErrorCodeReason() const { return m_subErrorCodeReason; }
    inline bool SubErrorCodeReasonHasBeenSet() const { return m_subErrorCodeReasonHasBeenSet; }
    template<typename SubErrorCodeReasonT = Aws::String>
    void SetSubErrorCodeReason(SubErrorCodeReasonT&& value) { m_subErrorCodeReasonHasBeenSet = true; m_subErrorCodeReason = std::forward<SubErrorCodeReasonT>(value); }
    template<typename SubErrorCodeReasonT = Aws::String>
    AccessDeniedException& WithSubErrorCodeReason(SubErrorCodeReasonT&& value) { SetSubErrorCodeReason(std::forward<SubErrorCodeReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorCodeReason;
    bool m_errorCodeReasonHasBeenSet = false;

    ErrorCode m_subErrorCode{ErrorCode::NOT_SET};
    bool m_subErrorCodeHasBeenSet = false;

    Aws::String m_subErrorCodeReason;
    bool m_subErrorCodeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
