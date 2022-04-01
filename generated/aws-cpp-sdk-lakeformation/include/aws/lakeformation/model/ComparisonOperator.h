/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    EQ,
    NE,
    LE,
    LT,
    GE,
    GT,
    CONTAINS,
    NOT_CONTAINS,
    BEGINS_WITH,
    IN,
    BETWEEN
  };

namespace ComparisonOperatorMapper
{
AWS_LAKEFORMATION_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
