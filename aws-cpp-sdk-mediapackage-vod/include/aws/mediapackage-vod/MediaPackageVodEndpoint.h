/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MediaPackageVod
{
namespace MediaPackageVodEndpoint
{
AWS_MEDIAPACKAGEVOD_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MediaPackageVodEndpoint
} // namespace MediaPackageVod
} // namespace Aws
