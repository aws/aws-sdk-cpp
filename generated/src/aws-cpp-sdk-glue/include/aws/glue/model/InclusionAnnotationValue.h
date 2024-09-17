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
  enum class InclusionAnnotationValue
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace InclusionAnnotationValueMapper
{
AWS_GLUE_API InclusionAnnotationValue GetInclusionAnnotationValueForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForInclusionAnnotationValue(InclusionAnnotationValue value);
} // namespace InclusionAnnotationValueMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
