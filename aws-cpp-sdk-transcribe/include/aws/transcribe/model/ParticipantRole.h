/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class ParticipantRole
  {
    NOT_SET,
    AGENT,
    CUSTOMER
  };

namespace ParticipantRoleMapper
{
AWS_TRANSCRIBESERVICE_API ParticipantRole GetParticipantRoleForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForParticipantRole(ParticipantRole value);
} // namespace ParticipantRoleMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
