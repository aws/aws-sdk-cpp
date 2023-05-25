/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class ChannelProtocol
  {
    NOT_SET,
    WSS,
    HTTPS,
    WEBRTC
  };

namespace ChannelProtocolMapper
{
AWS_KINESISVIDEO_API ChannelProtocol GetChannelProtocolForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForChannelProtocol(ChannelProtocol value);
} // namespace ChannelProtocolMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
