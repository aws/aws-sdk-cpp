/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace GreengrassV2
{
namespace GreengrassV2Endpoint
{
AWS_GREENGRASSV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace GreengrassV2Endpoint
} // namespace GreengrassV2
} // namespace Aws
