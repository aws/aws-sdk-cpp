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
  enum class Comparator
  {
    NOT_SET,
    EQUALS,
    GREATER_THAN,
    LESS_THAN,
    GREATER_THAN_EQUALS,
    LESS_THAN_EQUALS
  };

namespace ComparatorMapper
{
AWS_GLUE_API Comparator GetComparatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForComparator(Comparator value);
} // namespace ComparatorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
