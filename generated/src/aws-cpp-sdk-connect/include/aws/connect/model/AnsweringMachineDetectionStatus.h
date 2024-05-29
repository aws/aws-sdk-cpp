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
  enum class AnsweringMachineDetectionStatus
  {
    NOT_SET,
    ANSWERED,
    UNDETECTED,
    ERROR_,
    HUMAN_ANSWERED,
    SIT_TONE_DETECTED,
    SIT_TONE_BUSY,
    SIT_TONE_INVALID_NUMBER,
    FAX_MACHINE_DETECTED,
    VOICEMAIL_BEEP,
    VOICEMAIL_NO_BEEP,
    AMD_UNRESOLVED,
    AMD_UNANSWERED,
    AMD_ERROR,
    AMD_NOT_APPLICABLE
  };

namespace AnsweringMachineDetectionStatusMapper
{
AWS_CONNECT_API AnsweringMachineDetectionStatus GetAnsweringMachineDetectionStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus value);
} // namespace AnsweringMachineDetectionStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
