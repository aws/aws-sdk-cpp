/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace PersonalizeRuntime
{
namespace PersonalizeRuntimeEndpoint
{
AWS_PERSONALIZERUNTIME_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace PersonalizeRuntimeEndpoint
} // namespace PersonalizeRuntime
} // namespace Aws
