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
  enum class TableOptimizerEventType
  {
    NOT_SET,
    starting,
    completed,
    failed,
    in_progress
  };

namespace TableOptimizerEventTypeMapper
{
AWS_GLUE_API TableOptimizerEventType GetTableOptimizerEventTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTableOptimizerEventType(TableOptimizerEventType value);
} // namespace TableOptimizerEventTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
