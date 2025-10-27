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
enum class StreamGroupLocationStatus { NOT_SET, ACTIVATING, ACTIVE, ERROR_, REMOVING };

namespace StreamGroupLocationStatusMapper {
AWS_GAMELIFTSTREAMS_API StreamGroupLocationStatus GetStreamGroupLocationStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamGroupLocationStatus(StreamGroupLocationStatus value);
}  // namespace StreamGroupLocationStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
