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
enum class StreamUrlStatusReason {
  NOT_SET,
  userRevoked,
  revokedAndTerminatingSessions,
  revokedAndSessionsTerminated,
  streamGroupDeleted,
  applicationDeleted
};

namespace StreamUrlStatusReasonMapper {
AWS_GAMELIFTSTREAMS_API StreamUrlStatusReason GetStreamUrlStatusReasonForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamUrlStatusReason(StreamUrlStatusReason value);
}  // namespace StreamUrlStatusReasonMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
