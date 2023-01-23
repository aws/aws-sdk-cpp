/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{
  enum class MediaCapabilities
  {
    NOT_SET,
    SendReceive,
    Send,
    Receive,
    None
  };

namespace MediaCapabilitiesMapper
{
AWS_CHIMESDKMEETINGS_API MediaCapabilities GetMediaCapabilitiesForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForMediaCapabilities(MediaCapabilities value);
} // namespace MediaCapabilitiesMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
