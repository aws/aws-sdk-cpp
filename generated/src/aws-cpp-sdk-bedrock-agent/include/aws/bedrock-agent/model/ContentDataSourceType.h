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
  enum class ContentDataSourceType
  {
    NOT_SET,
    CUSTOM,
    S3
  };

namespace ContentDataSourceTypeMapper
{
AWS_BEDROCKAGENT_API ContentDataSourceType GetContentDataSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForContentDataSourceType(ContentDataSourceType value);
} // namespace ContentDataSourceTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
