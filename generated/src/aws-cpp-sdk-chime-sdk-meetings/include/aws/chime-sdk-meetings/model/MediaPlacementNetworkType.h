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
  enum class MediaPlacementNetworkType
  {
    NOT_SET,
    Ipv4Only,
    DualStack
  };

namespace MediaPlacementNetworkTypeMapper
{
AWS_CHIMESDKMEETINGS_API MediaPlacementNetworkType GetMediaPlacementNetworkTypeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForMediaPlacementNetworkType(MediaPlacementNetworkType value);
} // namespace MediaPlacementNetworkTypeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
