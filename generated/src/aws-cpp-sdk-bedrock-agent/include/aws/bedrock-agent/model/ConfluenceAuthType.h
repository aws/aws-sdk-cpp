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
  enum class ConfluenceAuthType
  {
    NOT_SET,
    BASIC,
    OAUTH2_CLIENT_CREDENTIALS
  };

namespace ConfluenceAuthTypeMapper
{
AWS_BEDROCKAGENT_API ConfluenceAuthType GetConfluenceAuthTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForConfluenceAuthType(ConfluenceAuthType value);
} // namespace ConfluenceAuthTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
