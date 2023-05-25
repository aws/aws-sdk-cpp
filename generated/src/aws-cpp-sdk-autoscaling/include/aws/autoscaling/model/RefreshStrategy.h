/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class RefreshStrategy
  {
    NOT_SET,
    Rolling
  };

namespace RefreshStrategyMapper
{
AWS_AUTOSCALING_API RefreshStrategy GetRefreshStrategyForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForRefreshStrategy(RefreshStrategy value);
} // namespace RefreshStrategyMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
