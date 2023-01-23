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
  enum class TimerEligibleParticipantRoles
  {
    NOT_SET,
    CUSTOMER,
    AGENT
  };

namespace TimerEligibleParticipantRolesMapper
{
AWS_CONNECT_API TimerEligibleParticipantRoles GetTimerEligibleParticipantRolesForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTimerEligibleParticipantRoles(TimerEligibleParticipantRoles value);
} // namespace TimerEligibleParticipantRolesMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
