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
  enum class CostEstimationServiceResourceState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace CostEstimationServiceResourceStateMapper
{
AWS_DEVOPSGURU_API CostEstimationServiceResourceState GetCostEstimationServiceResourceStateForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForCostEstimationServiceResourceState(CostEstimationServiceResourceState value);
} // namespace CostEstimationServiceResourceStateMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
