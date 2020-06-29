/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace RoboMaker
{
namespace RoboMakerEndpoint
{
AWS_ROBOMAKER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace RoboMakerEndpoint
} // namespace RoboMaker
} // namespace Aws
