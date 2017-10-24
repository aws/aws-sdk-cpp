/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/MessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MessageRequest::MessageRequest() : 
    m_addressesHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false)
{
}

MessageRequest::MessageRequest(const JsonValue& jsonValue) : 
    m_addressesHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MessageRequest& MessageRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Map<Aws::String, JsonValue> addressesJsonMap = jsonValue.GetObject("Addresses").GetAllObjects();
    for(auto& addressesItem : addressesJsonMap)
    {
      m_addresses[addressesItem.first] = addressesItem.second.AsObject();
    }
    m_addressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    Aws::Map<Aws::String, JsonValue> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Map<Aws::String, JsonValue> endpointsJsonMap = jsonValue.GetObject("Endpoints").GetAllObjects();
    for(auto& endpointsItem : endpointsJsonMap)
    {
      m_endpoints[endpointsItem.first] = endpointsItem.second.AsObject();
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfiguration"))
  {
    m_messageConfiguration = jsonValue.GetObject("MessageConfiguration");

    m_messageConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageRequest::Jsonize() const
{
  JsonValue payload;

  if(m_addressesHasBeenSet)
  {
   JsonValue addressesJsonMap;
   for(auto& addressesItem : m_addresses)
   {
     addressesJsonMap.WithObject(addressesItem.first, addressesItem.second.Jsonize());
   }
   payload.WithObject("Addresses", std::move(addressesJsonMap));

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_endpointsHasBeenSet)
  {
   JsonValue endpointsJsonMap;
   for(auto& endpointsItem : m_endpoints)
   {
     endpointsJsonMap.WithObject(endpointsItem.first, endpointsItem.second.Jsonize());
   }
   payload.WithObject("Endpoints", std::move(endpointsJsonMap));

  }

  if(m_messageConfigurationHasBeenSet)
  {
   payload.WithObject("MessageConfiguration", m_messageConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
