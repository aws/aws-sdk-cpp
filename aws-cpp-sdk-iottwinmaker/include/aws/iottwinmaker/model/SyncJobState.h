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
  enum class SyncJobState
  {
    NOT_SET,
    CREATING,
    INITIALIZING,
    ACTIVE,
    DELETING,
    ERROR_
  };

namespace SyncJobStateMapper
{
AWS_IOTTWINMAKER_API SyncJobState GetSyncJobStateForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForSyncJobState(SyncJobState value);
} // namespace SyncJobStateMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
