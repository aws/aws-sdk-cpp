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
  enum class CoverageFilterCriterionKey
  {
    NOT_SET,
    ACCOUNT_ID,
    CLUSTER_NAME,
    RESOURCE_TYPE,
    COVERAGE_STATUS,
    ADDON_VERSION,
    MANAGEMENT_TYPE,
    EKS_CLUSTER_NAME,
    ECS_CLUSTER_NAME,
    AGENT_VERSION,
    INSTANCE_ID,
    CLUSTER_ARN
  };

namespace CoverageFilterCriterionKeyMapper
{
AWS_GUARDDUTY_API CoverageFilterCriterionKey GetCoverageFilterCriterionKeyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCoverageFilterCriterionKey(CoverageFilterCriterionKey value);
} // namespace CoverageFilterCriterionKeyMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
