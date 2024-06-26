﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailTopicPolicy::GuardrailTopicPolicy() : 
    m_topicsHasBeenSet(false)
{
}

GuardrailTopicPolicy::GuardrailTopicPolicy(JsonView jsonValue)
  : GuardrailTopicPolicy()
{
  *this = jsonValue;
}

GuardrailTopicPolicy& GuardrailTopicPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topics"))
  {
    Aws::Utils::Array<JsonView> topicsJsonList = jsonValue.GetArray("topics");
    for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
    {
      m_topics.push_back(topicsJsonList[topicsIndex].AsObject());
    }
    m_topicsHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailTopicPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_topicsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicsJsonList(m_topics.size());
   for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
   {
     topicsJsonList[topicsIndex].AsObject(m_topics[topicsIndex].Jsonize());
   }
   payload.WithArray("topics", std::move(topicsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
