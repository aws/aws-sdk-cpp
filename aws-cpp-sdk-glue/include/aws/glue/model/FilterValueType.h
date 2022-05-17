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
  enum class FilterValueType
  {
    NOT_SET,
    COLUMNEXTRACTED,
    CONSTANT
  };

namespace FilterValueTypeMapper
{
AWS_GLUE_API FilterValueType GetFilterValueTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFilterValueType(FilterValueType value);
} // namespace FilterValueTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
