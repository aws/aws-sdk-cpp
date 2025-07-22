/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ImageTagMutabilityExclusionFilterType
  {
    NOT_SET,
    WILDCARD
  };

namespace ImageTagMutabilityExclusionFilterTypeMapper
{
AWS_ECR_API ImageTagMutabilityExclusionFilterType GetImageTagMutabilityExclusionFilterTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageTagMutabilityExclusionFilterType(ImageTagMutabilityExclusionFilterType value);
} // namespace ImageTagMutabilityExclusionFilterTypeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
