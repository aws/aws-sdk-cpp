/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NewSessionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

NewSessionDetails::NewSessionDetails() : 
    m_supportedMessagingContentTypesHasBeenSet(false),
    m_participantDetailsHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_streamingConfigurationHasBeenSet(false)
{
}

NewSessionDetails::NewSessionDetails(JsonView jsonValue) : 
    m_supportedMessagingContentTypesHasBeenSet(false),
    m_participantDetailsHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_streamingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NewSessionDetails& NewSessionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SupportedMessagingContentTypes"))
  {
    Aws::Utils::Array<JsonView> supportedMessagingContentTypesJsonList = jsonValue.GetArray("SupportedMessagingContentTypes");
    for(unsigned supportedMessagingContentTypesIndex = 0; supportedMessagingContentTypesIndex < supportedMessagingContentTypesJsonList.GetLength(); ++supportedMessagingContentTypesIndex)
    {
      m_supportedMessagingContentTypes.push_back(supportedMessagingContentTypesJsonList[supportedMessagingContentTypesIndex].AsString());
    }
    m_supportedMessagingContentTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantDetails"))
  {
    m_participantDetails = jsonValue.GetObject("ParticipantDetails");

    m_participantDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamingConfiguration"))
  {
    m_streamingConfiguration = jsonValue.GetObject("StreamingConfiguration");

    m_streamingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NewSessionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_supportedMessagingContentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedMessagingContentTypesJsonList(m_supportedMessagingContentTypes.size());
   for(unsigned supportedMessagingContentTypesIndex = 0; supportedMessagingContentTypesIndex < supportedMessagingContentTypesJsonList.GetLength(); ++supportedMessagingContentTypesIndex)
   {
     supportedMessagingContentTypesJsonList[supportedMessagingContentTypesIndex].AsString(m_supportedMessagingContentTypes[supportedMessagingContentTypesIndex]);
   }
   payload.WithArray("SupportedMessagingContentTypes", std::move(supportedMessagingContentTypesJsonList));

  }

  if(m_participantDetailsHasBeenSet)
  {
   payload.WithObject("ParticipantDetails", m_participantDetails.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_streamingConfigurationHasBeenSet)
  {
   payload.WithObject("StreamingConfiguration", m_streamingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
