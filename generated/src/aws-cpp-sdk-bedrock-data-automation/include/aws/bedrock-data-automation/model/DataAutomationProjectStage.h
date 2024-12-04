/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{
  enum class DataAutomationProjectStage
  {
    NOT_SET,
    DEVELOPMENT,
    LIVE
  };

namespace DataAutomationProjectStageMapper
{
AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectStage GetDataAutomationProjectStageForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDataAutomationProjectStage(DataAutomationProjectStage value);
} // namespace DataAutomationProjectStageMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
