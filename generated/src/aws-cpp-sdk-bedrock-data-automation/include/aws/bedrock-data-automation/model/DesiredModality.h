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
  enum class DesiredModality
  {
    NOT_SET,
    IMAGE,
    DOCUMENT,
    AUDIO,
    VIDEO
  };

namespace DesiredModalityMapper
{
AWS_BEDROCKDATAAUTOMATION_API DesiredModality GetDesiredModalityForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDesiredModality(DesiredModality value);
} // namespace DesiredModalityMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
