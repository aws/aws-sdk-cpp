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
  enum class DataAutomationProjectStageFilter
  {
    NOT_SET,
    DEVELOPMENT,
    LIVE,
    ALL
  };

namespace DataAutomationProjectStageFilterMapper
{
AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectStageFilter GetDataAutomationProjectStageFilterForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDataAutomationProjectStageFilter(DataAutomationProjectStageFilter value);
} // namespace DataAutomationProjectStageFilterMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
