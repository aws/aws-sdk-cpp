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
  enum class CisResultStatus
  {
    NOT_SET,
    PASSED,
    FAILED,
    SKIPPED
  };

namespace CisResultStatusMapper
{
AWS_INSPECTOR2_API CisResultStatus GetCisResultStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisResultStatus(CisResultStatus value);
} // namespace CisResultStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
