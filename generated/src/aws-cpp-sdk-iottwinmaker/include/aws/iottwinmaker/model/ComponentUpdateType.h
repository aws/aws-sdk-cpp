/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class ComponentUpdateType
  {
    NOT_SET,
    CREATE,
    UPDATE,
    DELETE_
  };

namespace ComponentUpdateTypeMapper
{
AWS_IOTTWINMAKER_API ComponentUpdateType GetComponentUpdateTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForComponentUpdateType(ComponentUpdateType value);
} // namespace ComponentUpdateTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
