/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class InsightsRefreshStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace InsightsRefreshStatusMapper
{
AWS_EKS_API InsightsRefreshStatus GetInsightsRefreshStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForInsightsRefreshStatus(InsightsRefreshStatus value);
} // namespace InsightsRefreshStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
