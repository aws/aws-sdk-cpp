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
  enum class ParticipantRole
  {
    NOT_SET,
    AGENT,
    CUSTOMER,
    SYSTEM,
    CUSTOM_BOT,
    SUPERVISOR
  };

namespace ParticipantRoleMapper
{
AWS_CONNECT_API ParticipantRole GetParticipantRoleForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForParticipantRole(ParticipantRole value);
} // namespace ParticipantRoleMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
