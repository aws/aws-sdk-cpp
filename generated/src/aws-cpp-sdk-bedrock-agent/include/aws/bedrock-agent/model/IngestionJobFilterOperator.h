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
  enum class IngestionJobFilterOperator
  {
    NOT_SET,
    EQ
  };

namespace IngestionJobFilterOperatorMapper
{
AWS_BEDROCKAGENT_API IngestionJobFilterOperator GetIngestionJobFilterOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIngestionJobFilterOperator(IngestionJobFilterOperator value);
} // namespace IngestionJobFilterOperatorMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
