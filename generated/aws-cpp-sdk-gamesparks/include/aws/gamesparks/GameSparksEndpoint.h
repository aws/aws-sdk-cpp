/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace GameSparks
{
namespace GameSparksEndpoint
{
AWS_GAMESPARKS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace GameSparksEndpoint
} // namespace GameSparks
} // namespace Aws
