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
  enum class OrgFeatureStatus
  {
    NOT_SET,
    NEW_,
    NONE,
    ALL
  };

namespace OrgFeatureStatusMapper
{
AWS_GUARDDUTY_API OrgFeatureStatus GetOrgFeatureStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForOrgFeatureStatus(OrgFeatureStatus value);
} // namespace OrgFeatureStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
