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
  enum class CisTargetStatusReason
  {
    NOT_SET,
    SCAN_IN_PROGRESS,
    UNSUPPORTED_OS,
    SSM_UNMANAGED
  };

namespace CisTargetStatusReasonMapper
{
AWS_INSPECTOR2_API CisTargetStatusReason GetCisTargetStatusReasonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisTargetStatusReason(CisTargetStatusReason value);
} // namespace CisTargetStatusReasonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
