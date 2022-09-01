/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ControlTower
{
namespace ControlTowerEndpoint
{
AWS_CONTROLTOWER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ControlTowerEndpoint
} // namespace ControlTower
} // namespace Aws
