/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Shield
{
namespace ShieldEndpoint
{
AWS_SHIELD_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ShieldEndpoint
} // namespace Shield
} // namespace Aws
