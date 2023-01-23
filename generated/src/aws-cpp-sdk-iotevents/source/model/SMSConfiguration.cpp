/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SMSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

SMSConfiguration::SMSConfiguration() : 
    m_senderIdHasBeenSet(false),
    m_additionalMessageHasBeenSet(false),
    m_recipientsHasBeenSet(false)
{
}

SMSConfiguration::SMSConfiguration(JsonView jsonValue) : 
    m_senderIdHasBeenSet(false),
    m_additionalMessageHasBeenSet(false),
    m_recipientsHasBeenSet(false)
{
  *this = jsonValue;
}

SMSConfiguration& SMSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("senderId"))
  {
    m_senderId = jsonValue.GetString("senderId");

    m_senderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalMessage"))
  {
    m_additionalMessage = jsonValue.GetString("additionalMessage");

    m_additionalMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipients"))
  {
    Aws::Utils::Array<JsonView> recipientsJsonList = jsonValue.GetArray("recipients");
    for(unsigned recipientsIndex = 0; recipientsIndex < recipientsJsonList.GetLength(); ++recipientsIndex)
    {
      m_recipients.push_back(recipientsJsonList[recipientsIndex].AsObject());
    }
    m_recipientsHasBeenSet = true;
  }

  return *this;
}

JsonValue SMSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("senderId", m_senderId);

  }

  if(m_additionalMessageHasBeenSet)
  {
   payload.WithString("additionalMessage", m_additionalMessage);

  }

  if(m_recipientsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recipientsJsonList(m_recipients.size());
   for(unsigned recipientsIndex = 0; recipientsIndex < recipientsJsonList.GetLength(); ++recipientsIndex)
   {
     recipientsJsonList[recipientsIndex].AsObject(m_recipients[recipientsIndex].Jsonize());
   }
   payload.WithArray("recipients", std::move(recipientsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
