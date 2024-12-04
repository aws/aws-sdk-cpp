/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{
  enum class DataAutomationStage
  {
    NOT_SET,
    LIVE,
    DEVELOPMENT
  };

namespace DataAutomationStageMapper
{
AWS_BEDROCKDATAAUTOMATIONRUNTIME_API DataAutomationStage GetDataAutomationStageForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String GetNameForDataAutomationStage(DataAutomationStage value);
} // namespace DataAutomationStageMapper
} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
