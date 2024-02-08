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
  enum class ContentResolution
  {
    NOT_SET,
    None,
    FHD,
    UHD
  };

namespace ContentResolutionMapper
{
AWS_CHIMESDKMEETINGS_API ContentResolution GetContentResolutionForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForContentResolution(ContentResolution value);
} // namespace ContentResolutionMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
