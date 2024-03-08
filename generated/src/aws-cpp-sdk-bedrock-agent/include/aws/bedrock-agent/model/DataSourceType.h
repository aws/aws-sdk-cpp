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
  enum class DataSourceType
  {
    NOT_SET,
    S3
  };

namespace DataSourceTypeMapper
{
AWS_BEDROCKAGENT_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
