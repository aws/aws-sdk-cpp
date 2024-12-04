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
  enum class QueryEngineType
  {
    NOT_SET,
    REDSHIFT
  };

namespace QueryEngineTypeMapper
{
AWS_BEDROCKAGENT_API QueryEngineType GetQueryEngineTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForQueryEngineType(QueryEngineType value);
} // namespace QueryEngineTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
