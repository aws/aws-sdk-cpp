/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace QuickSight
{
namespace QuickSightEndpoint
{
AWS_QUICKSIGHT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace QuickSightEndpoint
} // namespace QuickSight
} // namespace Aws
