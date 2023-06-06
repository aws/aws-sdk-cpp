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
  enum class TestSetGenerationStatus
  {
    NOT_SET,
    Generating,
    Ready,
    Failed,
    Pending
  };

namespace TestSetGenerationStatusMapper
{
AWS_LEXMODELSV2_API TestSetGenerationStatus GetTestSetGenerationStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestSetGenerationStatus(TestSetGenerationStatus value);
} // namespace TestSetGenerationStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
