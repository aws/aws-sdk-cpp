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
  enum class S3DataDistribution
  {
    NOT_SET,
    FullyReplicated,
    ShardedByS3Key
  };

namespace S3DataDistributionMapper
{
AWS_SAGEMAKER_API S3DataDistribution GetS3DataDistributionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForS3DataDistribution(S3DataDistribution value);
} // namespace S3DataDistributionMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
