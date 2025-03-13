/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Provides information about an Athena query error. The
   * <code>AthenaError</code> feature provides standardized error information to help
   * you understand failed queries and take steps after a query failure occurs.
   * <code>AthenaError</code> includes an <code>ErrorCategory</code> field that
   * specifies whether the cause of the failed query is due to system error, user
   * error, or other error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/AthenaError">AWS
   * API Reference</a></p>
   */
  class AthenaError
  {
  public:
    AWS_ATHENA_API AthenaError() = default;
    AWS_ATHENA_API AthenaError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API AthenaError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Other</p>
     */
    inline int GetErrorCategory() const { return m_errorCategory; }
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }
    inline void SetErrorCategory(int value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }
    inline AthenaError& WithErrorCategory(int value) { SetErrorCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that provides specific information about an Athena query
     * error. For the meaning of specific values, see the <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/error-reference.html#error-reference-error-type-reference">Error
     * Type Reference</a> in the <i>Amazon Athena User Guide</i>.</p>
     */
    inline int GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(int value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline AthenaError& WithErrorType(int value) { SetErrorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the query might succeed if resubmitted.</p>
     */
    inline bool GetRetryable() const { return m_retryable; }
    inline bool RetryableHasBeenSet() const { return m_retryableHasBeenSet; }
    inline void SetRetryable(bool value) { m_retryableHasBeenSet = true; m_retryable = value; }
    inline AthenaError& WithRetryable(bool value) { SetRetryable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a short description of the error that occurred.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AthenaError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    int m_errorCategory{0};
    bool m_errorCategoryHasBeenSet = false;

    int m_errorType{0};
    bool m_errorTypeHasBeenSet = false;

    bool m_retryable{false};
    bool m_retryableHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
