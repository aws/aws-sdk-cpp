/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class FailedItemErrorCode
  {
    NOT_SET,
    INVALID_ARN,
    DUPLICATE_ARN,
    ITEM_DOES_NOT_EXIST,
    ACCESS_DENIED,
    LIMIT_EXCEEDED,
    INTERNAL_ERROR
  };

namespace FailedItemErrorCodeMapper
{
AWS_INSPECTOR_API FailedItemErrorCode GetFailedItemErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForFailedItemErrorCode(FailedItemErrorCode value);
} // namespace FailedItemErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
