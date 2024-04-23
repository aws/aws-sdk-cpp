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
  enum class DataDeletionPolicy
  {
    NOT_SET,
    RETAIN,
    DELETE_
  };

namespace DataDeletionPolicyMapper
{
AWS_BEDROCKAGENT_API DataDeletionPolicy GetDataDeletionPolicyForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForDataDeletionPolicy(DataDeletionPolicy value);
} // namespace DataDeletionPolicyMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
