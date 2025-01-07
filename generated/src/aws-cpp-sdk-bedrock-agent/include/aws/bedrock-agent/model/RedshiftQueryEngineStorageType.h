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
  enum class RedshiftQueryEngineStorageType
  {
    NOT_SET,
    REDSHIFT,
    AWS_DATA_CATALOG
  };

namespace RedshiftQueryEngineStorageTypeMapper
{
AWS_BEDROCKAGENT_API RedshiftQueryEngineStorageType GetRedshiftQueryEngineStorageTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRedshiftQueryEngineStorageType(RedshiftQueryEngineStorageType value);
} // namespace RedshiftQueryEngineStorageTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
