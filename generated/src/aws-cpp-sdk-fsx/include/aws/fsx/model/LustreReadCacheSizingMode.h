/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class LustreReadCacheSizingMode
  {
    NOT_SET,
    NO_CACHE,
    USER_PROVISIONED,
    PROPORTIONAL_TO_THROUGHPUT_CAPACITY
  };

namespace LustreReadCacheSizingModeMapper
{
AWS_FSX_API LustreReadCacheSizingMode GetLustreReadCacheSizingModeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForLustreReadCacheSizingMode(LustreReadCacheSizingMode value);
} // namespace LustreReadCacheSizingModeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
