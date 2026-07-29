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
enum class StreamUrlStatus { NOT_SET, ACTIVE, EXPIRED, REVOKED, LIMIT_REACHED };

namespace StreamUrlStatusMapper {
AWS_GAMELIFTSTREAMS_API StreamUrlStatus GetStreamUrlStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamUrlStatus(StreamUrlStatus value);
}  // namespace StreamUrlStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
