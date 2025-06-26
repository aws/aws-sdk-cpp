/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/ValidationExceptionType.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>The request validation failed because one or more input parameters failed
   * validation. </p> <p>This exception occurs when there are syntax errors in the
   * request, field constraints are violated, or required parameters are missing. To
   * help you fix the issue, the exception message provides details about which
   * parameter failed and why.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_KEYSPACESSTREAMS_API ValidationException() = default;
    AWS_KEYSPACESSTREAMS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by the service. Check
     * the error details and modify your request.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error occurred validating your request. See the error message for
     * details.</p>
     */
    inline ValidationExceptionType GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ValidationExceptionType value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline ValidationException& WithErrorCode(ValidationExceptionType value) { SetErrorCode(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionType m_errorCode{ValidationExceptionType::NOT_SET};
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
