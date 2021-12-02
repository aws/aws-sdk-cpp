/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class RecommendationJobType
  {
    NOT_SET,
    Default,
    Advanced
  };

namespace RecommendationJobTypeMapper
{
AWS_SAGEMAKER_API RecommendationJobType GetRecommendationJobTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecommendationJobType(RecommendationJobType value);
} // namespace RecommendationJobTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
