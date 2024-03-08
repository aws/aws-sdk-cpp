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
  enum class EcrRescanDuration
  {
    NOT_SET,
    LIFETIME,
    DAYS_30,
    DAYS_180,
    DAYS_14,
    DAYS_60,
    DAYS_90
  };

namespace EcrRescanDurationMapper
{
AWS_INSPECTOR2_API EcrRescanDuration GetEcrRescanDurationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEcrRescanDuration(EcrRescanDuration value);
} // namespace EcrRescanDurationMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
