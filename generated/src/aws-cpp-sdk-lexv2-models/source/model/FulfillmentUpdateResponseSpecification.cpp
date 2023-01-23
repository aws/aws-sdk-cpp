/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/FulfillmentUpdateResponseSpecification.h>
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

FulfillmentUpdateResponseSpecification::FulfillmentUpdateResponseSpecification() : 
    m_frequencyInSeconds(0),
    m_frequencyInSecondsHasBeenSet(false),
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
}

FulfillmentUpdateResponseSpecification::FulfillmentUpdateResponseSpecification(JsonView jsonValue) : 
    m_frequencyInSeconds(0),
    m_frequencyInSecondsHasBeenSet(false),
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentUpdateResponseSpecification& FulfillmentUpdateResponseSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frequencyInSeconds"))
  {
    m_frequencyInSeconds = jsonValue.GetInteger("frequencyInSeconds");

    m_frequencyInSecondsHasBeenSet = true;
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

JsonValue FulfillmentUpdateResponseSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_frequencyInSecondsHasBeenSet)
  {
   payload.WithInteger("frequencyInSeconds", m_frequencyInSeconds);

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
