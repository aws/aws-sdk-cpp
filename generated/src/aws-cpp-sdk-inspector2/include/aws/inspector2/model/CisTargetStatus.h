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
  enum class CisTargetStatus
  {
    NOT_SET,
    TIMED_OUT,
    CANCELLED,
    COMPLETED
  };

namespace CisTargetStatusMapper
{
AWS_INSPECTOR2_API CisTargetStatus GetCisTargetStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisTargetStatus(CisTargetStatus value);
} // namespace CisTargetStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
