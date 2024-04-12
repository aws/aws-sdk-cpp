/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/ErrorCategory.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The error info of the create/delete data store operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ErrorCause">AWS
   * API Reference</a></p>
   */
  class ErrorCause
  {
  public:
    AWS_HEALTHLAKE_API ErrorCause();
    AWS_HEALTHLAKE_API ErrorCause(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API ErrorCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorCause& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorCause& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorCause& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline const ErrorCategory& GetErrorCategory() const{ return m_errorCategory; }

    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }

    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline void SetErrorCategory(const ErrorCategory& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }

    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline void SetErrorCategory(ErrorCategory&& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = std::move(value); }

    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline ErrorCause& WithErrorCategory(const ErrorCategory& value) { SetErrorCategory(value); return *this;}

    /**
     * <p>The error category of the create/delete data store operation. Possible
     * statuses are RETRYABLE_ERROR or NON_RETRYABLE_ERROR.</p>
     */
    inline ErrorCause& WithErrorCategory(ErrorCategory&& value) { SetErrorCategory(std::move(value)); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCategory m_errorCategory;
    bool m_errorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
