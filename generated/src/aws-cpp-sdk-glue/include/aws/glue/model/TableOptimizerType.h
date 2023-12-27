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
  enum class TableOptimizerType
  {
    NOT_SET,
    compaction
  };

namespace TableOptimizerTypeMapper
{
AWS_GLUE_API TableOptimizerType GetTableOptimizerTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTableOptimizerType(TableOptimizerType value);
} // namespace TableOptimizerTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
