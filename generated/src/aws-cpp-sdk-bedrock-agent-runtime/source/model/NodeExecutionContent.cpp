﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeExecutionContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

NodeExecutionContent::NodeExecutionContent(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeExecutionContent& NodeExecutionContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");
    m_documentHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeExecutionContent::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
    if(!m_document.View().IsNull())
    {
       payload.WithObject("document", JsonValue(m_document.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
