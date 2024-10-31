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
  enum class ComputationType
  {
    NOT_SET,
    FULL,
    INCREMENTAL
  };

namespace ComputationTypeMapper
{
AWS_GLUE_API ComputationType GetComputationTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForComputationType(ComputationType value);
} // namespace ComputationTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
