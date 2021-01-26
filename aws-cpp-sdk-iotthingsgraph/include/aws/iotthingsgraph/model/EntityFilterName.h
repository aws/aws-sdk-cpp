/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class EntityFilterName
  {
    NOT_SET,
    NAME,
    NAMESPACE,
    SEMANTIC_TYPE_PATH,
    REFERENCED_ENTITY_ID
  };

namespace EntityFilterNameMapper
{
AWS_IOTTHINGSGRAPH_API EntityFilterName GetEntityFilterNameForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForEntityFilterName(EntityFilterName value);
} // namespace EntityFilterNameMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
