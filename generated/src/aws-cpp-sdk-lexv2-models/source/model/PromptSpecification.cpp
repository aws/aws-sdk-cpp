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
    m_allowInterruptHasBeenSet(false),
    m_messageSelectionStrategy(MessageSelectionStrategy::NOT_SET),
    m_messageSelectionStrategyHasBeenSet(false),
    m_promptAttemptsSpecificationHasBeenSet(false)
{
}

PromptSpecification::PromptSpecification(JsonView jsonValue) : 
    m_messageGroupsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false),
    m_messageSelectionStrategy(MessageSelectionStrategy::NOT_SET),
    m_messageSelectionStrategyHasBeenSet(false),
    m_promptAttemptsSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

PromptSpecification& PromptSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageGroups"))
  {
    Aws::Utils::Array<JsonView> messageGroupsJsonList = jsonValue.GetArray("messageGroups");
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

  if(jsonValue.ValueExists("messageSelectionStrategy"))
  {
    m_messageSelectionStrategy = MessageSelectionStrategyMapper::GetMessageSelectionStrategyForName(jsonValue.GetString("messageSelectionStrategy"));

    m_messageSelectionStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promptAttemptsSpecification"))
  {
    Aws::Map<Aws::String, JsonView> promptAttemptsSpecificationJsonMap = jsonValue.GetObject("promptAttemptsSpecification").GetAllObjects();
    for(auto& promptAttemptsSpecificationItem : promptAttemptsSpecificationJsonMap)
    {
      m_promptAttemptsSpecification[PromptAttemptMapper::GetPromptAttemptForName(promptAttemptsSpecificationItem.first)] = promptAttemptsSpecificationItem.second.AsObject();
    }
    m_promptAttemptsSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageGroupsJsonList(m_messageGroups.size());
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

  if(m_messageSelectionStrategyHasBeenSet)
  {
   payload.WithString("messageSelectionStrategy", MessageSelectionStrategyMapper::GetNameForMessageSelectionStrategy(m_messageSelectionStrategy));
  }

  if(m_promptAttemptsSpecificationHasBeenSet)
  {
   JsonValue promptAttemptsSpecificationJsonMap;
   for(auto& promptAttemptsSpecificationItem : m_promptAttemptsSpecification)
   {
     promptAttemptsSpecificationJsonMap.WithObject(PromptAttemptMapper::GetNameForPromptAttempt(promptAttemptsSpecificationItem.first), promptAttemptsSpecificationItem.second.Jsonize());
   }
   payload.WithObject("promptAttemptsSpecification", std::move(promptAttemptsSpecificationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
