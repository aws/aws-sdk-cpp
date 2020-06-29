/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SFN
{
namespace SFNEndpoint
{
AWS_SFN_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SFNEndpoint
} // namespace SFN
} // namespace Aws
