/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/FulfillmentStartResponseSpecification.h>
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

FulfillmentStartResponseSpecification::FulfillmentStartResponseSpecification() : 
    m_delayInSeconds(0),
    m_delayInSecondsHasBeenSet(false),
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
}

FulfillmentStartResponseSpecification::FulfillmentStartResponseSpecification(JsonView jsonValue) : 
    m_delayInSeconds(0),
    m_delayInSecondsHasBeenSet(false),
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentStartResponseSpecification& FulfillmentStartResponseSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("delayInSeconds"))
  {
    m_delayInSeconds = jsonValue.GetInteger("delayInSeconds");

    m_delayInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageGroups"))
  {
    Aws::Utils::Array<JsonView> messageGroupsJsonList = jsonValue.GetArray("messageGroups");
    for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
    {
      m_messageGroups.push_back(messageGroupsJsonList[messageGroupsIndex].AsObject());
    }
    m_messageGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowInterrupt"))
  {
    m_allowInterrupt = jsonValue.GetBool("allowInterrupt");

    m_allowInterruptHasBeenSet = true;
  }

  return *this;
}

JsonValue FulfillmentStartResponseSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_delayInSecondsHasBeenSet)
  {
   payload.WithInteger("delayInSeconds", m_delayInSeconds);

  }

  if(m_messageGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageGroupsJsonList(m_messageGroups.size());
   for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
   {
     messageGroupsJsonList[messageGroupsIndex].AsObject(m_messageGroups[messageGroupsIndex].Jsonize());
   }
   payload.WithArray("messageGroups", std::move(messageGroupsJsonList));

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
