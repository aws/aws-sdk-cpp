/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

namespace Aws {
namespace GameLiftStreams {
namespace Model {
enum class ReplicationStatusType { NOT_SET, REPLICATING, COMPLETED };

namespace ReplicationStatusTypeMapper {
AWS_GAMELIFTSTREAMS_API ReplicationStatusType GetReplicationStatusTypeForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForReplicationStatusType(ReplicationStatusType value);
}  // namespace ReplicationStatusTypeMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
