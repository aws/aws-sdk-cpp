/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class NumericEqualityMatchOperator
  {
    NOT_SET,
    EQUALS,
    DOES_NOT_EQUAL
  };

namespace NumericEqualityMatchOperatorMapper
{
AWS_QUICKSIGHT_API NumericEqualityMatchOperator GetNumericEqualityMatchOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNumericEqualityMatchOperator(NumericEqualityMatchOperator value);
} // namespace NumericEqualityMatchOperatorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
