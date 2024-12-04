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
  enum class BlueprintStageFilter
  {
    NOT_SET,
    DEVELOPMENT,
    LIVE,
    ALL
  };

namespace BlueprintStageFilterMapper
{
AWS_BEDROCKDATAAUTOMATION_API BlueprintStageFilter GetBlueprintStageFilterForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForBlueprintStageFilter(BlueprintStageFilter value);
} // namespace BlueprintStageFilterMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
