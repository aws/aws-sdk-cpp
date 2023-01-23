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
  enum class NoSuchEntityErrorCode
  {
    NOT_SET,
    ASSESSMENT_TARGET_DOES_NOT_EXIST,
    ASSESSMENT_TEMPLATE_DOES_NOT_EXIST,
    ASSESSMENT_RUN_DOES_NOT_EXIST,
    FINDING_DOES_NOT_EXIST,
    RESOURCE_GROUP_DOES_NOT_EXIST,
    RULES_PACKAGE_DOES_NOT_EXIST,
    SNS_TOPIC_DOES_NOT_EXIST,
    IAM_ROLE_DOES_NOT_EXIST
  };

namespace NoSuchEntityErrorCodeMapper
{
AWS_INSPECTOR_API NoSuchEntityErrorCode GetNoSuchEntityErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForNoSuchEntityErrorCode(NoSuchEntityErrorCode value);
} // namespace NoSuchEntityErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
