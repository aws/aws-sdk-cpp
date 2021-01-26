/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace KinesisAnalyticsV2
{
namespace KinesisAnalyticsV2Endpoint
{
AWS_KINESISANALYTICSV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KinesisAnalyticsV2Endpoint
} // namespace KinesisAnalyticsV2
} // namespace Aws
