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
enum class StreamGroupStatusReason { NOT_SET, internalError, noAvailableInstances };

namespace StreamGroupStatusReasonMapper {
AWS_GAMELIFTSTREAMS_API StreamGroupStatusReason GetStreamGroupStatusReasonForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamGroupStatusReason(StreamGroupStatusReason value);
}  // namespace StreamGroupStatusReasonMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
