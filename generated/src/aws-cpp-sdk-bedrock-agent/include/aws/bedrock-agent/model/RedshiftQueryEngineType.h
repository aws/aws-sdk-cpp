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
  enum class RedshiftQueryEngineType
  {
    NOT_SET,
    SERVERLESS,
    PROVISIONED
  };

namespace RedshiftQueryEngineTypeMapper
{
AWS_BEDROCKAGENT_API RedshiftQueryEngineType GetRedshiftQueryEngineTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRedshiftQueryEngineType(RedshiftQueryEngineType value);
} // namespace RedshiftQueryEngineTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
