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
  enum class UnionType
  {
    NOT_SET,
    ALL,
    DISTINCT
  };

namespace UnionTypeMapper
{
AWS_GLUE_API UnionType GetUnionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForUnionType(UnionType value);
} // namespace UnionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
