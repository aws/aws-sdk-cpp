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
  enum class ParticipantProtocol
  {
    NOT_SET,
    UNKNOWN,
    WHIP,
    RTMP,
    RTMPS
  };

namespace ParticipantProtocolMapper
{
AWS_IVSREALTIME_API ParticipantProtocol GetParticipantProtocolForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForParticipantProtocol(ParticipantProtocol value);
} // namespace ParticipantProtocolMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
