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
  enum class EcrPullDateRescanMode
  {
    NOT_SET,
    LAST_PULL_DATE,
    LAST_IN_USE_AT
  };

namespace EcrPullDateRescanModeMapper
{
AWS_INSPECTOR2_API EcrPullDateRescanMode GetEcrPullDateRescanModeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEcrPullDateRescanMode(EcrPullDateRescanMode value);
} // namespace EcrPullDateRescanModeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
