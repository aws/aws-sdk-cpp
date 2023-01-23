/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ParticipantRole
  {
    NOT_SET,
    AGENT,
    CUSTOMER,
    SYSTEM
  };

namespace ParticipantRoleMapper
{
AWS_CONNECTPARTICIPANT_API ParticipantRole GetParticipantRoleForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForParticipantRole(ParticipantRole value);
} // namespace ParticipantRoleMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
