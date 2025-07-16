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
  enum class SchemaType
  {
    NOT_SET,
    string,
    number,
    object,
    array,
    boolean,
    integer
  };

namespace SchemaTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API SchemaType GetSchemaTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForSchemaType(SchemaType value);
} // namespace SchemaTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
