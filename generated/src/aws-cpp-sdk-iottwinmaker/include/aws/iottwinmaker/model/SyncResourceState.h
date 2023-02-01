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
  enum class SyncResourceState
  {
    NOT_SET,
    INITIALIZING,
    PROCESSING,
    DELETED,
    IN_SYNC,
    ERROR_
  };

namespace SyncResourceStateMapper
{
AWS_IOTTWINMAKER_API SyncResourceState GetSyncResourceStateForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForSyncResourceState(SyncResourceState value);
} // namespace SyncResourceStateMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
