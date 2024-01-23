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
  enum class CisScanStatus
  {
    NOT_SET,
    FAILED,
    COMPLETED,
    CANCELLED,
    IN_PROGRESS
  };

namespace CisScanStatusMapper
{
AWS_INSPECTOR2_API CisScanStatus GetCisScanStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanStatus(CisScanStatus value);
} // namespace CisScanStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
