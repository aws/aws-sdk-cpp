/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class ComparisonStatusEnum
  {
    NOT_SET,
    Different,
    Equivalent,
    Equal
  };

namespace ComparisonStatusEnumMapper
{
AWS_APPTEST_API ComparisonStatusEnum GetComparisonStatusEnumForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForComparisonStatusEnum(ComparisonStatusEnum value);
} // namespace ComparisonStatusEnumMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
