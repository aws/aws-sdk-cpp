/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class SupportedLanguages
  {
    NOT_SET,
    Python_3
  };

namespace SupportedLanguagesMapper
{
AWS_BEDROCKAGENT_API SupportedLanguages GetSupportedLanguagesForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSupportedLanguages(SupportedLanguages value);
} // namespace SupportedLanguagesMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
