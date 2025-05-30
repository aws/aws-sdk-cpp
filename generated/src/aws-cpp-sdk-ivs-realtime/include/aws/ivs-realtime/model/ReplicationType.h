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
  enum class ReplicationType
  {
    NOT_SET,
    SOURCE,
    REPLICA,
    NONE
  };

namespace ReplicationTypeMapper
{
AWS_IVSREALTIME_API ReplicationType GetReplicationTypeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForReplicationType(ReplicationType value);
} // namespace ReplicationTypeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
