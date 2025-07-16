/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class ApiKeyCredentialLocation
  {
    NOT_SET,
    HEADER,
    QUERY_PARAMETER
  };

namespace ApiKeyCredentialLocationMapper
{
AWS_BEDROCKAGENTCORECONTROL_API ApiKeyCredentialLocation GetApiKeyCredentialLocationForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForApiKeyCredentialLocation(ApiKeyCredentialLocation value);
} // namespace ApiKeyCredentialLocationMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
