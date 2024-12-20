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
  enum class SharePointAuthType
  {
    NOT_SET,
    OAUTH2_CLIENT_CREDENTIALS,
    OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS
  };

namespace SharePointAuthTypeMapper
{
AWS_BEDROCKAGENT_API SharePointAuthType GetSharePointAuthTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSharePointAuthType(SharePointAuthType value);
} // namespace SharePointAuthTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
