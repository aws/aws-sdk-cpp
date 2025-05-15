/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/LoopInputFlowNodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

LoopInputFlowNodeConfiguration::LoopInputFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LoopInputFlowNodeConfiguration& LoopInputFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue LoopInputFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
