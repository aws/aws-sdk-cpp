/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class MergeStrategy
  {
    NOT_SET,
    OVERWRITE_LATEST,
    FAIL_ON_CONFLICT
  };

namespace MergeStrategyMapper
{
AWS_LEXMODELBUILDINGSERVICE_API MergeStrategy GetMergeStrategyForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForMergeStrategy(MergeStrategy value);
} // namespace MergeStrategyMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
