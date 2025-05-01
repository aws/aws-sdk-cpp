/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ParticipantState
  {
    NOT_SET,
    INITIAL,
    CONNECTED,
    DISCONNECTED,
    MISSED
  };

namespace ParticipantStateMapper
{
AWS_CONNECT_API ParticipantState GetParticipantStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForParticipantState(ParticipantState value);
} // namespace ParticipantStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
