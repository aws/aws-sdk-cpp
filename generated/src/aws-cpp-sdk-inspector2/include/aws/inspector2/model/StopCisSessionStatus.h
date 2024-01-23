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
  enum class StopCisSessionStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    INTERRUPTED,
    UNSUPPORTED_OS
  };

namespace StopCisSessionStatusMapper
{
AWS_INSPECTOR2_API StopCisSessionStatus GetStopCisSessionStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForStopCisSessionStatus(StopCisSessionStatus value);
} // namespace StopCisSessionStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
