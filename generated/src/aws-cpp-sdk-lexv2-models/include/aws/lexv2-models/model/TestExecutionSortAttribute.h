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
  enum class TestExecutionSortAttribute
  {
    NOT_SET,
    TestSetName,
    CreationDateTime
  };

namespace TestExecutionSortAttributeMapper
{
AWS_LEXMODELSV2_API TestExecutionSortAttribute GetTestExecutionSortAttributeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestExecutionSortAttribute(TestExecutionSortAttribute value);
} // namespace TestExecutionSortAttributeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
