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
  enum class PropertyUpdateType
  {
    NOT_SET,
    UPDATE,
    DELETE_,
    CREATE
  };

namespace PropertyUpdateTypeMapper
{
AWS_IOTTWINMAKER_API PropertyUpdateType GetPropertyUpdateTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForPropertyUpdateType(PropertyUpdateType value);
} // namespace PropertyUpdateTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
