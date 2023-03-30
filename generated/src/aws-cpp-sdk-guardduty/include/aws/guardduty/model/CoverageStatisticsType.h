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
  enum class CoverageStatisticsType
  {
    NOT_SET,
    COUNT_BY_RESOURCE_TYPE,
    COUNT_BY_COVERAGE_STATUS
  };

namespace CoverageStatisticsTypeMapper
{
AWS_GUARDDUTY_API CoverageStatisticsType GetCoverageStatisticsTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCoverageStatisticsType(CoverageStatisticsType value);
} // namespace CoverageStatisticsTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
