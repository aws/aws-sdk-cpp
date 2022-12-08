/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ChangesetErrorInfo">AWS
   * API Reference</a></p>
   */
  class ChangesetErrorInfo
  {
  public:
    AWS_FINSPACEDATA_API ChangesetErrorInfo();
    AWS_FINSPACEDATA_API ChangesetErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ChangesetErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ChangesetErrorInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ChangesetErrorInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ChangesetErrorInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


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
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }

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
    inline void SetErrorCategory(const ErrorCategory& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }

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
    inline void SetErrorCategory(ErrorCategory&& value) { m_errorCategoryHasBeenSet = true; m_errorCategory = std::move(value); }

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
    inline ChangesetErrorInfo& WithErrorCategory(const ErrorCategory& value) { SetErrorCategory(value); return *this;}

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
    inline ChangesetErrorInfo& WithErrorCategory(ErrorCategory&& value) { SetErrorCategory(std::move(value)); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCategory m_errorCategory;
    bool m_errorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
