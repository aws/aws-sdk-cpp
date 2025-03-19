/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentDescriptor.h>
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

AgentDescriptor::AgentDescriptor(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentDescriptor& AgentDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aliasArn"))
  {
    m_aliasArn = jsonValue.GetString("aliasArn");
    m_aliasArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("aliasArn", m_aliasArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
