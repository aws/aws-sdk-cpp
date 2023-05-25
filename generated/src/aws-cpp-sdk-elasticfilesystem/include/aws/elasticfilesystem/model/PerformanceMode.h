/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class PerformanceMode
  {
    NOT_SET,
    generalPurpose,
    maxIO
  };

namespace PerformanceModeMapper
{
AWS_EFS_API PerformanceMode GetPerformanceModeForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForPerformanceMode(PerformanceMode value);
} // namespace PerformanceModeMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
