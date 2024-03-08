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
  enum class GenerationStatus
  {
    NOT_SET,
    Failed,
    Complete,
    InProgress
  };

namespace GenerationStatusMapper
{
AWS_LEXMODELSV2_API GenerationStatus GetGenerationStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForGenerationStatus(GenerationStatus value);
} // namespace GenerationStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
