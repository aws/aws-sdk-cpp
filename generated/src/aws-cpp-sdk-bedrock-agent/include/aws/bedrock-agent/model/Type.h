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
  enum class Type
  {
    NOT_SET,
    string,
    number,
    integer,
    boolean,
    array
  };

namespace TypeMapper
{
AWS_BEDROCKAGENT_API Type GetTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
