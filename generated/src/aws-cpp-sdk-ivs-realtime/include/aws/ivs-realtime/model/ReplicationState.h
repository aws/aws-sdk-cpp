/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class ReplicationState
  {
    NOT_SET,
    ACTIVE,
    STOPPED
  };

namespace ReplicationStateMapper
{
AWS_IVSREALTIME_API ReplicationState GetReplicationStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForReplicationState(ReplicationState value);
} // namespace ReplicationStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
