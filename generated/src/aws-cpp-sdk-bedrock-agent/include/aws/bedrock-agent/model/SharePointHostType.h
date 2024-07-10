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
  enum class SharePointHostType
  {
    NOT_SET,
    ONLINE
  };

namespace SharePointHostTypeMapper
{
AWS_BEDROCKAGENT_API SharePointHostType GetSharePointHostTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSharePointHostType(SharePointHostType value);
} // namespace SharePointHostTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
