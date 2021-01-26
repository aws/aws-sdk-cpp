/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace TranscribeStreamingService
{
namespace TranscribeStreamingServiceEndpoint
{
AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace TranscribeStreamingServiceEndpoint
} // namespace TranscribeStreamingService
} // namespace Aws
