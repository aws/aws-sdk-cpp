/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class TimeToLiveStatus
  {
    NOT_SET,
    ENABLED
  };

namespace TimeToLiveStatusMapper
{
AWS_KEYSPACES_API TimeToLiveStatus GetTimeToLiveStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForTimeToLiveStatus(TimeToLiveStatus value);
} // namespace TimeToLiveStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
