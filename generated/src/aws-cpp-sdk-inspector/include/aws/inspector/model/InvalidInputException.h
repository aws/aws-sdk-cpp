/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/InvalidInputErrorCode.h>
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
   * <p>The request was rejected because an invalid or out-of-range value was
   * supplied for an input parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/InvalidInputException">AWS
   * API Reference</a></p>
   */
  class InvalidInputException
  {
  public:
    AWS_INSPECTOR_API InvalidInputException();
    AWS_INSPECTOR_API InvalidInputException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API InvalidInputException& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline InvalidInputException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvalidInputException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvalidInputException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline const InvalidInputErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const InvalidInputErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(InvalidInputErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline InvalidInputException& WithErrorCode(const InvalidInputErrorCode& value) { SetErrorCode(value); return *this;}
    inline InvalidInputException& WithErrorCode(InvalidInputErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const{ return m_canRetry; }
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }
    inline InvalidInputException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    InvalidInputErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    bool m_canRetry;
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
