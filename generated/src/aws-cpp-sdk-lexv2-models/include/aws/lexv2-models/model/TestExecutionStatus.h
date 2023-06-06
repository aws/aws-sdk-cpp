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
  enum class TestExecutionStatus
  {
    NOT_SET,
    Pending,
    Waiting,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace TestExecutionStatusMapper
{
AWS_LEXMODELSV2_API TestExecutionStatus GetTestExecutionStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestExecutionStatus(TestExecutionStatus value);
} // namespace TestExecutionStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
