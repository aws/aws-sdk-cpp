/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Branch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

Branch::Branch(JsonView jsonValue)
{
  *this = jsonValue;
}

Branch& Branch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rootEventId"))
  {
    m_rootEventId = jsonValue.GetString("rootEventId");
    m_rootEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Branch::Jsonize() const
{
  JsonValue payload;

  if(m_rootEventIdHasBeenSet)
  {
   payload.WithString("rootEventId", m_rootEventId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
