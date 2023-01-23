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
  enum class FilterName
  {
    NOT_SET,
    file_system_id,
    backup_type,
    file_system_type,
    volume_id,
    data_repository_type,
    file_cache_id,
    file_cache_type
  };

namespace FilterNameMapper
{
AWS_FSX_API FilterName GetFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFilterName(FilterName value);
} // namespace FilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
