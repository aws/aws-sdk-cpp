/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PayloadType.h>
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

PayloadType::PayloadType(JsonView jsonValue)
{
  *this = jsonValue;
}

PayloadType& PayloadType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversational"))
  {
    m_conversational = jsonValue.GetObject("conversational");
    m_conversationalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blob"))
  {
    m_blob = jsonValue.GetObject("blob");
    m_blobHasBeenSet = true;
  }
  return *this;
}

JsonValue PayloadType::Jsonize() const
{
  JsonValue payload;

  if(m_conversationalHasBeenSet)
  {
   payload.WithObject("conversational", m_conversational.Jsonize());

  }

  if(m_blobHasBeenSet)
  {
    if(!m_blob.View().IsNull())
    {
       payload.WithObject("blob", JsonValue(m_blob.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
