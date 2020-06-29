/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoT1ClickProjects
{
namespace IoT1ClickProjectsEndpoint
{
AWS_IOT1CLICKPROJECTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoT1ClickProjectsEndpoint
} // namespace IoT1ClickProjects
} // namespace Aws
