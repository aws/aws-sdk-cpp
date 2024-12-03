/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class FieldFilterOperator
  {
    NOT_SET,
    LESS_THAN,
    GREATER_THAN,
    BETWEEN,
    EQUAL_TO,
    NOT_EQUAL_TO,
    GREATER_THAN_OR_EQUAL_TO,
    LESS_THAN_OR_EQUAL_TO,
    CONTAINS,
    ORDER_BY
  };

namespace FieldFilterOperatorMapper
{
AWS_GLUE_API FieldFilterOperator GetFieldFilterOperatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFieldFilterOperator(FieldFilterOperator value);
} // namespace FieldFilterOperatorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
