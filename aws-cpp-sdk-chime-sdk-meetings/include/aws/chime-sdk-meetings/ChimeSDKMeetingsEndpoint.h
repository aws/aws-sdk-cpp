/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ChimeSDKMeetings
{
namespace ChimeSDKMeetingsEndpoint
{
AWS_CHIMESDKMEETINGS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ChimeSDKMeetingsEndpoint
} // namespace ChimeSDKMeetings
} // namespace Aws
