/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AugmentedAIRuntime
{
namespace AugmentedAIRuntimeEndpoint
{
AWS_AUGMENTEDAIRUNTIME_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AugmentedAIRuntimeEndpoint
} // namespace AugmentedAIRuntime
} // namespace Aws
