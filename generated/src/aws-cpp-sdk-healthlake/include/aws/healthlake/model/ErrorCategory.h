/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class ErrorCategory
  {
    NOT_SET,
    RETRYABLE_ERROR,
    NON_RETRYABLE_ERROR
  };

namespace ErrorCategoryMapper
{
AWS_HEALTHLAKE_API ErrorCategory GetErrorCategoryForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForErrorCategory(ErrorCategory value);
} // namespace ErrorCategoryMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
