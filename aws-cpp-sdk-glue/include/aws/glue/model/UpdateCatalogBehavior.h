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
  enum class UpdateCatalogBehavior
  {
    NOT_SET,
    UPDATE_IN_DATABASE,
    LOG
  };

namespace UpdateCatalogBehaviorMapper
{
AWS_GLUE_API UpdateCatalogBehavior GetUpdateCatalogBehaviorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForUpdateCatalogBehavior(UpdateCatalogBehavior value);
} // namespace UpdateCatalogBehaviorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
