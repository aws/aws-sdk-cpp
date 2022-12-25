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
  enum class NumberSelectionBehavior
  {
    NOT_SET,
    PreferSticky,
    AvoidSticky
  };

namespace NumberSelectionBehaviorMapper
{
AWS_CHIMESDKVOICE_API NumberSelectionBehavior GetNumberSelectionBehaviorForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForNumberSelectionBehavior(NumberSelectionBehavior value);
} // namespace NumberSelectionBehaviorMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
