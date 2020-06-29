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
  enum class TransformType
  {
    NOT_SET,
    FIND_MATCHES
  };

namespace TransformTypeMapper
{
AWS_GLUE_API TransformType GetTransformTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTransformType(TransformType value);
} // namespace TransformTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
