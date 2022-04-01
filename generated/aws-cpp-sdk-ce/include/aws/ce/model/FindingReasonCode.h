/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class FindingReasonCode
  {
    NOT_SET,
    CPU_OVER_PROVISIONED,
    CPU_UNDER_PROVISIONED,
    MEMORY_OVER_PROVISIONED,
    MEMORY_UNDER_PROVISIONED,
    EBS_THROUGHPUT_OVER_PROVISIONED,
    EBS_THROUGHPUT_UNDER_PROVISIONED,
    EBS_IOPS_OVER_PROVISIONED,
    EBS_IOPS_UNDER_PROVISIONED,
    NETWORK_BANDWIDTH_OVER_PROVISIONED,
    NETWORK_BANDWIDTH_UNDER_PROVISIONED,
    NETWORK_PPS_OVER_PROVISIONED,
    NETWORK_PPS_UNDER_PROVISIONED,
    DISK_IOPS_OVER_PROVISIONED,
    DISK_IOPS_UNDER_PROVISIONED,
    DISK_THROUGHPUT_OVER_PROVISIONED,
    DISK_THROUGHPUT_UNDER_PROVISIONED
  };

namespace FindingReasonCodeMapper
{
AWS_COSTEXPLORER_API FindingReasonCode GetFindingReasonCodeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForFindingReasonCode(FindingReasonCode value);
} // namespace FindingReasonCodeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
