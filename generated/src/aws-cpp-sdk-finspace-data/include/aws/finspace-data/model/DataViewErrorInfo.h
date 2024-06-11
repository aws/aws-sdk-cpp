﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ErrorCategory.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The structure with error messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DataViewErrorInfo">AWS
   * API Reference</a></p>
   */
  class DataViewErrorInfo
  {
  public:
    AWS_FINSPACEDATA_API DataViewErrorInfo();
    AWS_FINSPACEDATA_API DataViewErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API DataViewErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline DataViewErrorInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DataViewErrorInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DataViewErrorInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the error.</p> <ul> <li> <p> <code>VALIDATION</code> – The
     * inputs to this request are invalid.</p> </li> <li> <p>
     * <code>SERVICE_QUOTA_EXCEEDED</code> – Service quotas have been exceeded. Please
     * contact AWS support to increase quotas.</p> </li> <li> <p>
     * <code>ACCESS_DENIED</code> – Missing required permission to perform this
     * request.</p> </li> <li> <p> <code>RESOURCE_NOT_FOUND</code> – One or more inputs
     * to this request were not found.</p> </li> <li> <p> <code>THROTTLING</code> – The
     * system temporarily lacks sufficient resources to process the request.</p> </li>
     * <li> <p> <code>INTERNAL_SERVICE_EXCEPTION</code> – An internal service error has
     * occurred.</p> </li> <li> <p> <code>CANCELLED</code> – Cancelled.</p> </li> <li>
     * <p> <code>USER_RECOVERABLE</code> – A user recoverable error has occurred.</p>
     * </li> </ul>
     */
    inline const ErrorCategory& GetErrorCategory() const{ return m_errorCategory; }
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }
    inline void SetErrorCategory(const ErrorCategory& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }
    inline void SetErrorCategory(ErrorCategory&& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = std::move(value); }
    inline DataViewErrorInfo& WithErrorCategory(const ErrorCategory& value) { SetErrorCategory(value); return *this;}
    inline DataViewErrorInfo& WithErrorCategory(ErrorCategory&& value) { SetErrorCategory(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCategory m_errorCategory;
    bool m_errorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
