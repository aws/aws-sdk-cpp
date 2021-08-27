/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class RecentlyActive
  {
    NOT_SET,
    PT3H
  };

namespace RecentlyActiveMapper
{
AWS_CLOUDWATCH_API RecentlyActive GetRecentlyActiveForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForRecentlyActive(RecentlyActive value);
} // namespace RecentlyActiveMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
