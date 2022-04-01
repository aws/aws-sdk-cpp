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
  enum class FeatureGroupSortBy
  {
    NOT_SET,
    Name,
    FeatureGroupStatus,
    OfflineStoreStatus,
    CreationTime
  };

namespace FeatureGroupSortByMapper
{
AWS_SAGEMAKER_API FeatureGroupSortBy GetFeatureGroupSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFeatureGroupSortBy(FeatureGroupSortBy value);
} // namespace FeatureGroupSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
