/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class CostEstimationStatus
  {
    NOT_SET,
    ONGOING,
    COMPLETED
  };

namespace CostEstimationStatusMapper
{
AWS_DEVOPSGURU_API CostEstimationStatus GetCostEstimationStatusForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForCostEstimationStatus(CostEstimationStatus value);
} // namespace CostEstimationStatusMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
