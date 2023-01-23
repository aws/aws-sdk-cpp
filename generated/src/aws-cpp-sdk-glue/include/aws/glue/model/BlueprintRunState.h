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
  enum class BlueprintRunState
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    ROLLING_BACK
  };

namespace BlueprintRunStateMapper
{
AWS_GLUE_API BlueprintRunState GetBlueprintRunStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForBlueprintRunState(BlueprintRunState value);
} // namespace BlueprintRunStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
