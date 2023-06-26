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
  enum class AccessDeniedErrorCode
  {
    NOT_SET,
    ACCESS_DENIED_TO_ASSESSMENT_TARGET,
    ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE,
    ACCESS_DENIED_TO_ASSESSMENT_RUN,
    ACCESS_DENIED_TO_FINDING,
    ACCESS_DENIED_TO_RESOURCE_GROUP,
    ACCESS_DENIED_TO_RULES_PACKAGE,
    ACCESS_DENIED_TO_SNS_TOPIC,
    ACCESS_DENIED_TO_IAM_ROLE
  };

namespace AccessDeniedErrorCodeMapper
{
AWS_INSPECTOR_API AccessDeniedErrorCode GetAccessDeniedErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAccessDeniedErrorCode(AccessDeniedErrorCode value);
} // namespace AccessDeniedErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
