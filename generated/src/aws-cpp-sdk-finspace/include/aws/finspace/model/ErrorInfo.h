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
    AWS_FINSPACE_API ErrorInfo() = default;
    AWS_FINSPACE_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorInfo& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of error.</p>
     */
    inline ErrorDetails GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(ErrorDetails value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline ErrorInfo& WithErrorType(ErrorDetails value) { SetErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorDetails m_errorType{ErrorDetails::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
