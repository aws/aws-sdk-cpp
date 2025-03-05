/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class StreamSessionStatusReason
  {
    NOT_SET,
    internalError,
    invalidSignalRequest,
    placementTimeout,
    applicationLogS3DestinationError
  };

namespace StreamSessionStatusReasonMapper
{
AWS_GAMELIFTSTREAMS_API StreamSessionStatusReason GetStreamSessionStatusReasonForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamSessionStatusReason(StreamSessionStatusReason value);
} // namespace StreamSessionStatusReasonMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
