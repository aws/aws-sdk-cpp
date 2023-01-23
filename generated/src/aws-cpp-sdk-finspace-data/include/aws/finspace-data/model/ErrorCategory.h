/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ErrorCategory
  {
    NOT_SET,
    VALIDATION,
    SERVICE_QUOTA_EXCEEDED,
    ACCESS_DENIED,
    RESOURCE_NOT_FOUND,
    THROTTLING,
    INTERNAL_SERVICE_EXCEPTION,
    CANCELLED,
    USER_RECOVERABLE
  };

namespace ErrorCategoryMapper
{
AWS_FINSPACEDATA_API ErrorCategory GetErrorCategoryForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForErrorCategory(ErrorCategory value);
} // namespace ErrorCategoryMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
