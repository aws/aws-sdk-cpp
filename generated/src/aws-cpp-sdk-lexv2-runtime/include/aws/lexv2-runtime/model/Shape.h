/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
  enum class Shape
  {
    NOT_SET,
    Scalar,
    List,
    Composite
  };

namespace ShapeMapper
{
AWS_LEXRUNTIMEV2_API Shape GetShapeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForShape(Shape value);
} // namespace ShapeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
