/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/InvalidCrossAccountRoleErrorCode.h>
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
   * <p>Amazon Inspector cannot assume the cross-account role that it needs to list
   * your EC2 instances during the assessment run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/InvalidCrossAccountRoleException">AWS
   * API Reference</a></p>
   */
  class InvalidCrossAccountRoleException
  {
  public:
    AWS_INSPECTOR_API InvalidCrossAccountRoleException() = default;
    AWS_INSPECTOR_API InvalidCrossAccountRoleException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API InvalidCrossAccountRoleException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidCrossAccountRoleException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline InvalidCrossAccountRoleErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(InvalidCrossAccountRoleErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline InvalidCrossAccountRoleException& WithErrorCode(InvalidCrossAccountRoleErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const { return m_canRetry; }
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }
    inline InvalidCrossAccountRoleException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    InvalidCrossAccountRoleErrorCode m_errorCode{InvalidCrossAccountRoleErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    bool m_canRetry{false};
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
