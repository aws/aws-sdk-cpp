/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class GenerationSortByAttribute
  {
    NOT_SET,
    creationStartTime,
    lastUpdatedTime
  };

namespace GenerationSortByAttributeMapper
{
AWS_LEXMODELSV2_API GenerationSortByAttribute GetGenerationSortByAttributeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForGenerationSortByAttribute(GenerationSortByAttribute value);
} // namespace GenerationSortByAttributeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
