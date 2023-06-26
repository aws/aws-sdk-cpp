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
  enum class ParticipantTimerType
  {
    NOT_SET,
    IDLE,
    DISCONNECT_NONCUSTOMER
  };

namespace ParticipantTimerTypeMapper
{
AWS_CONNECT_API ParticipantTimerType GetParticipantTimerTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForParticipantTimerType(ParticipantTimerType value);
} // namespace ParticipantTimerTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
