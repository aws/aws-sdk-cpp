/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ECS
{
namespace ECSEndpoint
{
AWS_ECS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ECSEndpoint
} // namespace ECS
} // namespace Aws
