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
  enum class CoverageStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace CoverageStatusMapper
{
AWS_GUARDDUTY_API CoverageStatus GetCoverageStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCoverageStatus(CoverageStatus value);
} // namespace CoverageStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
