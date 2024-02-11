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
  enum class TestExecutionModality
  {
    NOT_SET,
    Text,
    Audio
  };

namespace TestExecutionModalityMapper
{
AWS_LEXMODELSV2_API TestExecutionModality GetTestExecutionModalityForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestExecutionModality(TestExecutionModality value);
} // namespace TestExecutionModalityMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
