/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ChimeSDKMessaging
{
namespace ChimeSDKMessagingEndpoint
{
AWS_CHIMESDKMESSAGING_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ChimeSDKMessagingEndpoint
} // namespace ChimeSDKMessaging
} // namespace Aws
