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
   * <p>Object for errors on fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldError">AWS
   * API Reference</a></p>
   */
  class FieldError
  {
  public:
    AWS_CONNECTCASES_API FieldError();
    AWS_CONNECTCASES_API FieldError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code from getting a field.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code from getting a field.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code from getting a field.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code from getting a field.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code from getting a field.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code from getting a field.</p>
     */
    inline FieldError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code from getting a field.</p>
     */
    inline FieldError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code from getting a field.</p>
     */
    inline FieldError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline FieldError& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline FieldError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The field identifier that caused the error.</p>
     */
    inline FieldError& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The error message from getting a field.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message from getting a field.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message from getting a field.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message from getting a field.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message from getting a field.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message from getting a field.</p>
     */
    inline FieldError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message from getting a field.</p>
     */
    inline FieldError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message from getting a field.</p>
     */
    inline FieldError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
