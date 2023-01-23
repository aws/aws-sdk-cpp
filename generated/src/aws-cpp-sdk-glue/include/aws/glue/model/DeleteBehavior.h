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
  enum class DeleteBehavior
  {
    NOT_SET,
    LOG,
    DELETE_FROM_DATABASE,
    DEPRECATE_IN_DATABASE
  };

namespace DeleteBehaviorMapper
{
AWS_GLUE_API DeleteBehavior GetDeleteBehaviorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDeleteBehavior(DeleteBehavior value);
} // namespace DeleteBehaviorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
