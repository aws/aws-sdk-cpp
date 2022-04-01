/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class OrderBy
  {
    NOT_SET,
    TimestampDescending,
    TimestampAscending
  };

namespace OrderByMapper
{
AWS_CODEGURUPROFILER_API OrderBy GetOrderByForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForOrderBy(OrderBy value);
} // namespace OrderByMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
