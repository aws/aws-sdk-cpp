/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudWatch
{
namespace CloudWatchEndpoint
{
AWS_CLOUDWATCH_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudWatchEndpoint
} // namespace CloudWatch
} // namespace Aws
