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
  enum class FindingStatus
  {
    NOT_SET,
    ACTIVE,
    SUPPRESSED,
    CLOSED
  };

namespace FindingStatusMapper
{
AWS_INSPECTOR2_API FindingStatus GetFindingStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForFindingStatus(FindingStatus value);
} // namespace FindingStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
