/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class ArchiveState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    CREATING,
    UPDATING,
    CREATE_FAILED,
    UPDATE_FAILED
  };

namespace ArchiveStateMapper
{
AWS_EVENTBRIDGE_API ArchiveState GetArchiveStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForArchiveState(ArchiveState value);
} // namespace ArchiveStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
