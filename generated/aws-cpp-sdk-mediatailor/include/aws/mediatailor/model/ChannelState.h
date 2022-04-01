/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class ChannelState
  {
    NOT_SET,
    RUNNING,
    STOPPED
  };

namespace ChannelStateMapper
{
AWS_MEDIATAILOR_API ChannelState GetChannelStateForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForChannelState(ChannelState value);
} // namespace ChannelStateMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
