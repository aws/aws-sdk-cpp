/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SageMakerFeatureStoreRuntime
{
namespace SageMakerFeatureStoreRuntimeEndpoint
{
AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SageMakerFeatureStoreRuntimeEndpoint
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
