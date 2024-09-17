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
  enum class ConfluenceHostType
  {
    NOT_SET,
    SAAS
  };

namespace ConfluenceHostTypeMapper
{
AWS_BEDROCKAGENT_API ConfluenceHostType GetConfluenceHostTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForConfluenceHostType(ConfluenceHostType value);
} // namespace ConfluenceHostTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
