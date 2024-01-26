/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class EcrPullDateRescanDuration
  {
    NOT_SET,
    DAYS_14,
    DAYS_30,
    DAYS_60,
    DAYS_90,
    DAYS_180
  };

namespace EcrPullDateRescanDurationMapper
{
AWS_INSPECTOR2_API EcrPullDateRescanDuration GetEcrPullDateRescanDurationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEcrPullDateRescanDuration(EcrPullDateRescanDuration value);
} // namespace EcrPullDateRescanDurationMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
