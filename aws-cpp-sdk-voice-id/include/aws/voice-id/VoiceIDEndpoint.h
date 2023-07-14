/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace VoiceID
{
namespace VoiceIDEndpoint
{
AWS_VOICEID_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace VoiceIDEndpoint
} // namespace VoiceID
} // namespace Aws
