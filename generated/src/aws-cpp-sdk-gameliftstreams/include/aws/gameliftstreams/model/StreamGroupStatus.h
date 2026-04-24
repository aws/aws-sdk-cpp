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
enum class StreamGroupStatus { NOT_SET, ACTIVATING, UPDATING_LOCATIONS, ACTIVE, ACTIVE_WITH_ERRORS, ERROR_, DELETING, EXPIRED };

namespace StreamGroupStatusMapper {
AWS_GAMELIFTSTREAMS_API StreamGroupStatus GetStreamGroupStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamGroupStatus(StreamGroupStatus value);
}  // namespace StreamGroupStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
