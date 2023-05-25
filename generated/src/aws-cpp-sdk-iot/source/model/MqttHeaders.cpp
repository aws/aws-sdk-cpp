/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MqttHeaders.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MqttHeaders::MqttHeaders() : 
    m_payloadFormatIndicatorHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_responseTopicHasBeenSet(false),
    m_correlationDataHasBeenSet(false),
    m_messageExpiryHasBeenSet(false),
    m_userPropertiesHasBeenSet(false)
{
}

MqttHeaders::MqttHeaders(JsonView jsonValue) : 
    m_payloadFormatIndicatorHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_responseTopicHasBeenSet(false),
    m_correlationDataHasBeenSet(false),
    m_messageExpiryHasBeenSet(false),
    m_userPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

MqttHeaders& MqttHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("payloadFormatIndicator"))
  {
    m_payloadFormatIndicator = jsonValue.GetString("payloadFormatIndicator");

    m_payloadFormatIndicatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseTopic"))
  {
    m_responseTopic = jsonValue.GetString("responseTopic");

    m_responseTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("correlationData"))
  {
    m_correlationData = jsonValue.GetString("correlationData");

    m_correlationDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageExpiry"))
  {
    m_messageExpiry = jsonValue.GetString("messageExpiry");

    m_messageExpiryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userProperties"))
  {
    Aws::Utils::Array<JsonView> userPropertiesJsonList = jsonValue.GetArray("userProperties");
    for(unsigned userPropertiesIndex = 0; userPropertiesIndex < userPropertiesJsonList.GetLength(); ++userPropertiesIndex)
    {
      m_userProperties.push_back(userPropertiesJsonList[userPropertiesIndex].AsObject());
    }
    m_userPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue MqttHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_payloadFormatIndicatorHasBeenSet)
  {
   payload.WithString("payloadFormatIndicator", m_payloadFormatIndicator);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_responseTopicHasBeenSet)
  {
   payload.WithString("responseTopic", m_responseTopic);

  }

  if(m_correlationDataHasBeenSet)
  {
   payload.WithString("correlationData", m_correlationData);

  }

  if(m_messageExpiryHasBeenSet)
  {
   payload.WithString("messageExpiry", m_messageExpiry);

  }

  if(m_userPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userPropertiesJsonList(m_userProperties.size());
   for(unsigned userPropertiesIndex = 0; userPropertiesIndex < userPropertiesJsonList.GetLength(); ++userPropertiesIndex)
   {
     userPropertiesJsonList[userPropertiesIndex].AsObject(m_userProperties[userPropertiesIndex].Jsonize());
   }
   payload.WithArray("userProperties", std::move(userPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
