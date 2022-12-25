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
  enum class ParticipantTimerAction
  {
    NOT_SET,
    Unset
  };

namespace ParticipantTimerActionMapper
{
AWS_CONNECT_API ParticipantTimerAction GetParticipantTimerActionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForParticipantTimerAction(ParticipantTimerAction value);
} // namespace ParticipantTimerActionMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
