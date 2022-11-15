/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CIDRSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

CIDRSummary::CIDRSummary() : 
    m_availableCIDRCount(0),
    m_availableCIDRCountHasBeenSet(false),
    m_utilizedCIDRCount(0),
    m_utilizedCIDRCountHasBeenSet(false),
    m_iPSetReferencesHasBeenSet(false)
{
}

CIDRSummary::CIDRSummary(JsonView jsonValue) : 
    m_availableCIDRCount(0),
    m_availableCIDRCountHasBeenSet(false),
    m_utilizedCIDRCount(0),
    m_utilizedCIDRCountHasBeenSet(false),
    m_iPSetReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

CIDRSummary& CIDRSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailableCIDRCount"))
  {
    m_availableCIDRCount = jsonValue.GetInteger("AvailableCIDRCount");

    m_availableCIDRCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UtilizedCIDRCount"))
  {
    m_utilizedCIDRCount = jsonValue.GetInteger("UtilizedCIDRCount");

    m_utilizedCIDRCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPSetReferences"))
  {
    Aws::Map<Aws::String, JsonView> iPSetReferencesJsonMap = jsonValue.GetObject("IPSetReferences").GetAllObjects();
    for(auto& iPSetReferencesItem : iPSetReferencesJsonMap)
    {
      m_iPSetReferences[iPSetReferencesItem.first] = iPSetReferencesItem.second.AsObject();
    }
    m_iPSetReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue CIDRSummary::Jsonize() const
{
  JsonValue payload;

  if(m_availableCIDRCountHasBeenSet)
  {
   payload.WithInteger("AvailableCIDRCount", m_availableCIDRCount);

  }

  if(m_utilizedCIDRCountHasBeenSet)
  {
   payload.WithInteger("UtilizedCIDRCount", m_utilizedCIDRCount);

  }

  if(m_iPSetReferencesHasBeenSet)
  {
   JsonValue iPSetReferencesJsonMap;
   for(auto& iPSetReferencesItem : m_iPSetReferences)
   {
     iPSetReferencesJsonMap.WithObject(iPSetReferencesItem.first, iPSetReferencesItem.second.Jsonize());
   }
   payload.WithObject("IPSetReferences", std::move(iPSetReferencesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
