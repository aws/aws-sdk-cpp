/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ResourceGroups
{
namespace ResourceGroupsEndpoint
{
AWS_RESOURCEGROUPS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ResourceGroupsEndpoint
} // namespace ResourceGroups
} // namespace Aws
