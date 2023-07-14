/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ElasticInference
{
namespace ElasticInferenceEndpoint
{
AWS_ELASTICINFERENCE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ElasticInferenceEndpoint
} // namespace ElasticInference
} // namespace Aws
