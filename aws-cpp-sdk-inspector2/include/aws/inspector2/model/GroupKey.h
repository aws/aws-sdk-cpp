/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class GroupKey
  {
    NOT_SET,
    SCAN_STATUS_CODE,
    SCAN_STATUS_REASON,
    ACCOUNT_ID,
    RESOURCE_TYPE,
    ECR_REPOSITORY_NAME
  };

namespace GroupKeyMapper
{
AWS_INSPECTOR2_API GroupKey GetGroupKeyForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForGroupKey(GroupKey value);
} // namespace GroupKeyMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
