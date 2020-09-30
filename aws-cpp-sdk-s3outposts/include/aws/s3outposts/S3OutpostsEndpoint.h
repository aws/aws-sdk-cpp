/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace S3Outposts
{
namespace S3OutpostsEndpoint
{
AWS_S3OUTPOSTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace S3OutpostsEndpoint
} // namespace S3Outposts
} // namespace Aws
