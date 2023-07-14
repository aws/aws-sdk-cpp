/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SageMakerRuntime
{
namespace SageMakerRuntimeEndpoint
{
AWS_SAGEMAKERRUNTIME_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SageMakerRuntimeEndpoint
} // namespace SageMakerRuntime
} // namespace Aws
