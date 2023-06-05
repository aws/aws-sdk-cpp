/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/ErrorDetails.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>Provides details in the event of a failed flow, including the error type and
   * the related error message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ErrorInfo">AWS
   * API Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_FINSPACE_API ErrorInfo();
    AWS_FINSPACE_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Specifies the type of error.</p>
     */
    inline const ErrorDetails& GetErrorType() const{ return m_errorType; }

    /**
     * <p>Specifies the type of error.</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>Specifies the type of error.</p>
     */
    inline void SetErrorType(const ErrorDetails& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>Specifies the type of error.</p>
     */
    inline void SetErrorType(ErrorDetails&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>Specifies the type of error.</p>
     */
    inline ErrorInfo& WithErrorType(const ErrorDetails& value) { SetErrorType(value); return *this;}

    /**
     * <p>Specifies the type of error.</p>
     */
    inline ErrorInfo& WithErrorType(ErrorDetails&& value) { SetErrorType(std::move(value)); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorDetails m_errorType;
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
