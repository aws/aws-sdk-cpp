/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class AlexaSkillStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AlexaSkillStatusMapper
{
AWS_CHIMESDKVOICE_API AlexaSkillStatus GetAlexaSkillStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForAlexaSkillStatus(AlexaSkillStatus value);
} // namespace AlexaSkillStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
