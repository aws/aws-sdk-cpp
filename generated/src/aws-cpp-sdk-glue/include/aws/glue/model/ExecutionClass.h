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
  enum class ExecutionClass
  {
    NOT_SET,
    FLEX,
    STANDARD
  };

namespace ExecutionClassMapper
{
AWS_GLUE_API ExecutionClass GetExecutionClassForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForExecutionClass(ExecutionClass value);
} // namespace ExecutionClassMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
