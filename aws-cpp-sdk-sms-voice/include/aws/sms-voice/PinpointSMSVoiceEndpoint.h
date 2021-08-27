/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace PinpointSMSVoice
{
namespace PinpointSMSVoiceEndpoint
{
AWS_PINPOINTSMSVOICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace PinpointSMSVoiceEndpoint
} // namespace PinpointSMSVoice
} // namespace Aws
