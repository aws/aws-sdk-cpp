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
  enum class SalesforceAuthType
  {
    NOT_SET,
    OAUTH2_CLIENT_CREDENTIALS
  };

namespace SalesforceAuthTypeMapper
{
AWS_BEDROCKAGENT_API SalesforceAuthType GetSalesforceAuthTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSalesforceAuthType(SalesforceAuthType value);
} // namespace SalesforceAuthTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
