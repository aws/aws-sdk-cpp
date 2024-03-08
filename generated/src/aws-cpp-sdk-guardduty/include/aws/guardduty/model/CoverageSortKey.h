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
  enum class CoverageSortKey
  {
    NOT_SET,
    ACCOUNT_ID,
    CLUSTER_NAME,
    COVERAGE_STATUS,
    ISSUE,
    ADDON_VERSION,
    UPDATED_AT,
    EKS_CLUSTER_NAME,
    ECS_CLUSTER_NAME,
    INSTANCE_ID
  };

namespace CoverageSortKeyMapper
{
AWS_GUARDDUTY_API CoverageSortKey GetCoverageSortKeyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCoverageSortKey(CoverageSortKey value);
} // namespace CoverageSortKeyMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
