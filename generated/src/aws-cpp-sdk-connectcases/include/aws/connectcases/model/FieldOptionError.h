/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object for field Options errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldOptionError">AWS
   * API Reference</a></p>
   */
  class FieldOptionError
  {
  public:
    AWS_CONNECTCASES_API FieldOptionError();
    AWS_CONNECTCASES_API FieldOptionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldOptionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline FieldOptionError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline FieldOptionError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>Error code from creating or updating field option.</p>
     */
    inline FieldOptionError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline FieldOptionError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline FieldOptionError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message from creating or updating field option.</p>
     */
    inline FieldOptionError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The field option value that caused the error.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline FieldOptionError& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline FieldOptionError& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The field option value that caused the error.</p>
     */
    inline FieldOptionError& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
