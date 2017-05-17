/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>The parent object that contains error information associated with your
   * configuration settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EnvironmentError">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EnvironmentError
  {
  public:
    EnvironmentError();
    EnvironmentError(const Aws::Utils::Json::JsonValue& jsonValue);
    EnvironmentError& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline EnvironmentError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline EnvironmentError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code returned by the environment error object.</p>
     */
    inline EnvironmentError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline EnvironmentError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline EnvironmentError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message returned by the environment error object.</p>
     */
    inline EnvironmentError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
