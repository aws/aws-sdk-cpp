/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VoiceID
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    ACTIVE,
    PENDING,
    SUSPENDED
  };

namespace DomainStatusMapper
{
AWS_VOICEID_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
