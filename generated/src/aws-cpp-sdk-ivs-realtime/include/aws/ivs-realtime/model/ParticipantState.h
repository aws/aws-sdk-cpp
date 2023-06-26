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
  enum class ParticipantState
  {
    NOT_SET,
    CONNECTED,
    DISCONNECTED
  };

namespace ParticipantStateMapper
{
AWS_IVSREALTIME_API ParticipantState GetParticipantStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForParticipantState(ParticipantState value);
} // namespace ParticipantStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
