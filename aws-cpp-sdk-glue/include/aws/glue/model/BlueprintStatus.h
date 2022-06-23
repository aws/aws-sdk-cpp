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
  enum class BlueprintStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    FAILED
  };

namespace BlueprintStatusMapper
{
AWS_GLUE_API BlueprintStatus GetBlueprintStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForBlueprintStatus(BlueprintStatus value);
} // namespace BlueprintStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
