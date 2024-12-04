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
  enum class BlueprintStage
  {
    NOT_SET,
    DEVELOPMENT,
    LIVE
  };

namespace BlueprintStageMapper
{
AWS_BEDROCKDATAAUTOMATION_API BlueprintStage GetBlueprintStageForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForBlueprintStage(BlueprintStage value);
} // namespace BlueprintStageMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
