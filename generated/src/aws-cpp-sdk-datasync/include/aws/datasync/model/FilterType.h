/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class FilterType
  {
    NOT_SET,
    SIMPLE_PATTERN
  };

namespace FilterTypeMapper
{
AWS_DATASYNC_API FilterType GetFilterTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForFilterType(FilterType value);
} // namespace FilterTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
