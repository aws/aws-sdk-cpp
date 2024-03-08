/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

OrganizationStatistics::OrganizationStatistics() : 
    m_totalAccountsCount(0),
    m_totalAccountsCountHasBeenSet(false),
    m_memberAccountsCount(0),
    m_memberAccountsCountHasBeenSet(false),
    m_activeAccountsCount(0),
    m_activeAccountsCountHasBeenSet(false),
    m_enabledAccountsCount(0),
    m_enabledAccountsCountHasBeenSet(false),
    m_countByFeatureHasBeenSet(false)
{
}

OrganizationStatistics::OrganizationStatistics(JsonView jsonValue) : 
    m_totalAccountsCount(0),
    m_totalAccountsCountHasBeenSet(false),
    m_memberAccountsCount(0),
    m_memberAccountsCountHasBeenSet(false),
    m_activeAccountsCount(0),
    m_activeAccountsCountHasBeenSet(false),
    m_enabledAccountsCount(0),
    m_enabledAccountsCountHasBeenSet(false),
    m_countByFeatureHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationStatistics& OrganizationStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalAccountsCount"))
  {
    m_totalAccountsCount = jsonValue.GetInteger("totalAccountsCount");

    m_totalAccountsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memberAccountsCount"))
  {
    m_memberAccountsCount = jsonValue.GetInteger("memberAccountsCount");

    m_memberAccountsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeAccountsCount"))
  {
    m_activeAccountsCount = jsonValue.GetInteger("activeAccountsCount");

    m_activeAccountsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabledAccountsCount"))
  {
    m_enabledAccountsCount = jsonValue.GetInteger("enabledAccountsCount");

    m_enabledAccountsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("countByFeature"))
  {
    Aws::Utils::Array<JsonView> countByFeatureJsonList = jsonValue.GetArray("countByFeature");
    for(unsigned countByFeatureIndex = 0; countByFeatureIndex < countByFeatureJsonList.GetLength(); ++countByFeatureIndex)
    {
      m_countByFeature.push_back(countByFeatureJsonList[countByFeatureIndex].AsObject());
    }
    m_countByFeatureHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_totalAccountsCountHasBeenSet)
  {
   payload.WithInteger("totalAccountsCount", m_totalAccountsCount);

  }

  if(m_memberAccountsCountHasBeenSet)
  {
   payload.WithInteger("memberAccountsCount", m_memberAccountsCount);

  }

  if(m_activeAccountsCountHasBeenSet)
  {
   payload.WithInteger("activeAccountsCount", m_activeAccountsCount);

  }

  if(m_enabledAccountsCountHasBeenSet)
  {
   payload.WithInteger("enabledAccountsCount", m_enabledAccountsCount);

  }

  if(m_countByFeatureHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countByFeatureJsonList(m_countByFeature.size());
   for(unsigned countByFeatureIndex = 0; countByFeatureIndex < countByFeatureJsonList.GetLength(); ++countByFeatureIndex)
   {
     countByFeatureJsonList[countByFeatureIndex].AsObject(m_countByFeature[countByFeatureIndex].Jsonize());
   }
   payload.WithArray("countByFeature", std::move(countByFeatureJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
