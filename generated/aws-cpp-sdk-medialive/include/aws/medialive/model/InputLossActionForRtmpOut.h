/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputLossActionForRtmpOut
  {
    NOT_SET,
    EMIT_OUTPUT,
    PAUSE_OUTPUT
  };

namespace InputLossActionForRtmpOutMapper
{
AWS_MEDIALIVE_API InputLossActionForRtmpOut GetInputLossActionForRtmpOutForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputLossActionForRtmpOut(InputLossActionForRtmpOut value);
} // namespace InputLossActionForRtmpOutMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
