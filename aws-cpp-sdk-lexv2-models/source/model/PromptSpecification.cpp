/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PromptSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

PromptSpecification::PromptSpecification() : 
    m_messageGroupsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
}

PromptSpecification::PromptSpecification(JsonView jsonValue) : 
    m_messageGroupsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
  *this = jsonValue;
}

PromptSpecification& PromptSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageGroups"))
  {
    Array<JsonView> messageGroupsJsonList = jsonValue.GetArray("messageGroups");
    for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
    {
      m_messageGroups.push_back(messageGroupsJsonList[messageGroupsIndex].AsObject());
    }
    m_messageGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("maxRetries");

    m_maxRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowInterrupt"))
  {
    m_allowInterrupt = jsonValue.GetBool("allowInterrupt");

    m_allowInterruptHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupsHasBeenSet)
  {
   Array<JsonValue> messageGroupsJsonList(m_messageGroups.size());
   for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
   {
     messageGroupsJsonList[messageGroupsIndex].AsObject(m_messageGroups[messageGroupsIndex].Jsonize());
   }
   payload.WithArray("messageGroups", std::move(messageGroupsJsonList));

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("maxRetries", m_maxRetries);

  }

  if(m_allowInterruptHasBeenSet)
  {
   payload.WithBool("allowInterrupt", m_allowInterrupt);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
