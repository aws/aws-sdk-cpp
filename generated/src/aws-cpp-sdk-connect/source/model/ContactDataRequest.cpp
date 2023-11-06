/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactDataRequest.h>
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

ContactDataRequest::ContactDataRequest() : 
    m_systemEndpointHasBeenSet(false),
    m_customerEndpointHasBeenSet(false),
    m_requestIdentifierHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_campaignHasBeenSet(false)
{
}

ContactDataRequest::ContactDataRequest(JsonView jsonValue) : 
    m_systemEndpointHasBeenSet(false),
    m_customerEndpointHasBeenSet(false),
    m_requestIdentifierHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_campaignHasBeenSet(false)
{
  *this = jsonValue;
}

ContactDataRequest& ContactDataRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SystemEndpoint"))
  {
    m_systemEndpoint = jsonValue.GetObject("SystemEndpoint");

    m_systemEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerEndpoint"))
  {
    m_customerEndpoint = jsonValue.GetObject("CustomerEndpoint");

    m_customerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("RequestIdentifier");

    m_requestIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueId"))
  {
    m_queueId = jsonValue.GetString("QueueId");

    m_queueIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("Campaign"))
  {
    m_campaign = jsonValue.GetObject("Campaign");

    m_campaignHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactDataRequest::Jsonize() const
{
  JsonValue payload;

  if(m_systemEndpointHasBeenSet)
  {
   payload.WithObject("SystemEndpoint", m_systemEndpoint.Jsonize());

  }

  if(m_customerEndpointHasBeenSet)
  {
   payload.WithObject("CustomerEndpoint", m_customerEndpoint.Jsonize());

  }

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("RequestIdentifier", m_requestIdentifier);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

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

  if(m_campaignHasBeenSet)
  {
   payload.WithObject("Campaign", m_campaign.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
