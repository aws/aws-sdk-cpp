/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class CrossDatasetTypes
  {
    NOT_SET,
    ALL_DATASETS,
    SINGLE_DATASET
  };

namespace CrossDatasetTypesMapper
{
AWS_QUICKSIGHT_API CrossDatasetTypes GetCrossDatasetTypesForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCrossDatasetTypes(CrossDatasetTypes value);
} // namespace CrossDatasetTypesMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
