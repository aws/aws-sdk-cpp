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
  enum class Logical
  {
    NOT_SET,
    AND,
    ANY
  };

namespace LogicalMapper
{
AWS_GLUE_API Logical GetLogicalForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForLogical(Logical value);
} // namespace LogicalMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
