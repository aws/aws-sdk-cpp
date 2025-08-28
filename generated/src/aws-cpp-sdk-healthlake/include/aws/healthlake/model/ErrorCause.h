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
   * <p>The error information for <code>CreateFHIRDatastore</code> and
   * <code>DeleteFHIRDatastore</code> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ErrorCause">AWS
   * API Reference</a></p>
   */
  class ErrorCause
  {
  public:
    AWS_HEALTHLAKE_API ErrorCause() = default;
    AWS_HEALTHLAKE_API ErrorCause(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API ErrorCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message text for <code>ErrorCause</code>.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorCause& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error category for <code>ErrorCause</code>.</p>
     */
    inline ErrorCategory GetErrorCategory() const { return m_errorCategory; }
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }
    inline void SetErrorCategory(ErrorCategory value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }
    inline ErrorCause& WithErrorCategory(ErrorCategory value) { SetErrorCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCategory m_errorCategory{ErrorCategory::NOT_SET};
    bool m_errorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
