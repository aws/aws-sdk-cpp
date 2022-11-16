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
  enum class PropertyGroupUpdateType
  {
    NOT_SET,
    UPDATE,
    DELETE_,
    CREATE
  };

namespace PropertyGroupUpdateTypeMapper
{
AWS_IOTTWINMAKER_API PropertyGroupUpdateType GetPropertyGroupUpdateTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForPropertyGroupUpdateType(PropertyGroupUpdateType value);
} // namespace PropertyGroupUpdateTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
