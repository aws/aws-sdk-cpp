/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

CustomerProfilesIntegrationSummary::CustomerProfilesIntegrationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerProfilesIntegrationSummary& CustomerProfilesIntegrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainArn"))
  {
    m_domainArn = jsonValue.GetString("domainArn");
    m_domainArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("objectTypeNames"))
  {
    Aws::Map<Aws::String, JsonView> objectTypeNamesJsonMap = jsonValue.GetObject("objectTypeNames").GetAllObjects();
    for(auto& objectTypeNamesItem : objectTypeNamesJsonMap)
    {
      m_objectTypeNames[EventTypeMapper::GetEventTypeForName(objectTypeNamesItem.first)] = objectTypeNamesItem.second.AsString();
    }
    m_objectTypeNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerProfilesIntegrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("domainArn", m_domainArn);

  }

  if(m_objectTypeNamesHasBeenSet)
  {
   JsonValue objectTypeNamesJsonMap;
   for(auto& objectTypeNamesItem : m_objectTypeNames)
   {
     objectTypeNamesJsonMap.WithString(EventTypeMapper::GetNameForEventType(objectTypeNamesItem.first), objectTypeNamesItem.second);
   }
   payload.WithObject("objectTypeNames", std::move(objectTypeNamesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
