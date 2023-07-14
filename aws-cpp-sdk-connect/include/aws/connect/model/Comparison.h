/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class Comparison
  {
    NOT_SET,
    LT
  };

namespace ComparisonMapper
{
AWS_CONNECT_API Comparison GetComparisonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForComparison(Comparison value);
} // namespace ComparisonMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
