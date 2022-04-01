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
  enum class InputLossActionForHlsOut
  {
    NOT_SET,
    EMIT_OUTPUT,
    PAUSE_OUTPUT
  };

namespace InputLossActionForHlsOutMapper
{
AWS_MEDIALIVE_API InputLossActionForHlsOut GetInputLossActionForHlsOutForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputLossActionForHlsOut(InputLossActionForHlsOut value);
} // namespace InputLossActionForHlsOutMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
