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
  enum class SyncResourceType
  {
    NOT_SET,
    ENTITY,
    COMPONENT_TYPE
  };

namespace SyncResourceTypeMapper
{
AWS_IOTTWINMAKER_API SyncResourceType GetSyncResourceTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForSyncResourceType(SyncResourceType value);
} // namespace SyncResourceTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
