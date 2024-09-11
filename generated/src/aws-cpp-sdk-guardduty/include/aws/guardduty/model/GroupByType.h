/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class GroupByType
  {
    NOT_SET,
    ACCOUNT,
    DATE,
    FINDING_TYPE,
    RESOURCE,
    SEVERITY
  };

namespace GroupByTypeMapper
{
AWS_GUARDDUTY_API GroupByType GetGroupByTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForGroupByType(GroupByType value);
} // namespace GroupByTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
