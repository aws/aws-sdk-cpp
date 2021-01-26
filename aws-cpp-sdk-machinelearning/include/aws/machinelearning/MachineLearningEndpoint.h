/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MachineLearning
{
namespace MachineLearningEndpoint
{
AWS_MACHINELEARNING_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MachineLearningEndpoint
} // namespace MachineLearning
} // namespace Aws
