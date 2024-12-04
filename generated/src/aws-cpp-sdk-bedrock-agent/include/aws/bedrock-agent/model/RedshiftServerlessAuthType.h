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
  enum class RedshiftServerlessAuthType
  {
    NOT_SET,
    IAM,
    USERNAME_PASSWORD
  };

namespace RedshiftServerlessAuthTypeMapper
{
AWS_BEDROCKAGENT_API RedshiftServerlessAuthType GetRedshiftServerlessAuthTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRedshiftServerlessAuthType(RedshiftServerlessAuthType value);
} // namespace RedshiftServerlessAuthTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
