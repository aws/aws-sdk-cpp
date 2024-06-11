/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AccessDeniedErrorCode.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>You do not have required permissions to access the requested
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_INSPECTOR_API AccessDeniedException();
    AWS_INSPECTOR_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline const AccessDeniedErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const AccessDeniedErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(AccessDeniedErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline AccessDeniedException& WithErrorCode(const AccessDeniedErrorCode& value) { SetErrorCode(value); return *this;}
    inline AccessDeniedException& WithErrorCode(AccessDeniedErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const{ return m_canRetry; }
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }
    inline AccessDeniedException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AccessDeniedErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    bool m_canRetry;
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
