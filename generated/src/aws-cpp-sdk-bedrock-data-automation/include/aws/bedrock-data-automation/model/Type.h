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
  enum class Type
  {
    NOT_SET,
    DOCUMENT,
    IMAGE,
    AUDIO,
    VIDEO
  };

namespace TypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API Type GetTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
