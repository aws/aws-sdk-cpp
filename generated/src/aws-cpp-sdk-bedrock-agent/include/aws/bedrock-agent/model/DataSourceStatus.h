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
  enum class DataSourceStatus
  {
    NOT_SET,
    AVAILABLE,
    DELETING
  };

namespace DataSourceStatusMapper
{
AWS_BEDROCKAGENT_API DataSourceStatus GetDataSourceStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForDataSourceStatus(DataSourceStatus value);
} // namespace DataSourceStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
