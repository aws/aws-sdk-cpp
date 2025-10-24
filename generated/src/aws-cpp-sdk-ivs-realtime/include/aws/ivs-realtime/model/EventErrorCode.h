﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

namespace Aws {
namespace ivsrealtime {
namespace Model {
enum class EventErrorCode {
  NOT_SET,
  INSUFFICIENT_CAPABILITIES,
  QUOTA_EXCEEDED,
  PUBLISHER_NOT_FOUND,
  BITRATE_EXCEEDED,
  RESOLUTION_EXCEEDED,
  STREAM_DURATION_EXCEEDED,
  INVALID_AUDIO_CODEC,
  INVALID_VIDEO_CODEC,
  INVALID_PROTOCOL,
  INVALID_STREAM_KEY,
  REUSE_OF_STREAM_KEY,
  B_FRAME_PRESENT,
  INVALID_INPUT,
  INTERNAL_SERVER_EXCEPTION
};

namespace EventErrorCodeMapper {
AWS_IVSREALTIME_API EventErrorCode GetEventErrorCodeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForEventErrorCode(EventErrorCode value);
}  // namespace EventErrorCodeMapper
}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
