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
  enum class LimitExceededErrorCode
  {
    NOT_SET,
    ASSESSMENT_TARGET_LIMIT_EXCEEDED,
    ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED,
    ASSESSMENT_RUN_LIMIT_EXCEEDED,
    RESOURCE_GROUP_LIMIT_EXCEEDED,
    EVENT_SUBSCRIPTION_LIMIT_EXCEEDED
  };

namespace LimitExceededErrorCodeMapper
{
AWS_INSPECTOR_API LimitExceededErrorCode GetLimitExceededErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForLimitExceededErrorCode(LimitExceededErrorCode value);
} // namespace LimitExceededErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
