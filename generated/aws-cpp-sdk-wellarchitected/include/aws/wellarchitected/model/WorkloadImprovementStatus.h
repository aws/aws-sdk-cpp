/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class WorkloadImprovementStatus
  {
    NOT_SET,
    NOT_APPLICABLE,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETE,
    RISK_ACKNOWLEDGED
  };

namespace WorkloadImprovementStatusMapper
{
AWS_WELLARCHITECTED_API WorkloadImprovementStatus GetWorkloadImprovementStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForWorkloadImprovementStatus(WorkloadImprovementStatus value);
} // namespace WorkloadImprovementStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
