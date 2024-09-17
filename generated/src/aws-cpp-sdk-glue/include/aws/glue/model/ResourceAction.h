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
  enum class ResourceAction
  {
    NOT_SET,
    UPDATE,
    CREATE
  };

namespace ResourceActionMapper
{
AWS_GLUE_API ResourceAction GetResourceActionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForResourceAction(ResourceAction value);
} // namespace ResourceActionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
