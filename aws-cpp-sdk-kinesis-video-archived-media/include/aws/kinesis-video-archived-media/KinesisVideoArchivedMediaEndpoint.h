/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace KinesisVideoArchivedMedia
{
namespace KinesisVideoArchivedMediaEndpoint
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KinesisVideoArchivedMediaEndpoint
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
