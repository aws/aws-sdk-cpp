/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/DialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

DialRequest::DialRequest() : 
    m_attributesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false)
{
}

DialRequest::DialRequest(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false)
{
  *this = jsonValue;
}

DialRequest& DialRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetString("expirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue DialRequest::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("expirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
