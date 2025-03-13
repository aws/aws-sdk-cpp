/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteToll.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteToll::RouteToll(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteToll& RouteToll::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PaymentSites"))
  {
    Aws::Utils::Array<JsonView> paymentSitesJsonList = jsonValue.GetArray("PaymentSites");
    for(unsigned paymentSitesIndex = 0; paymentSitesIndex < paymentSitesJsonList.GetLength(); ++paymentSitesIndex)
    {
      m_paymentSites.push_back(paymentSitesJsonList[paymentSitesIndex].AsObject());
    }
    m_paymentSitesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rates"))
  {
    Aws::Utils::Array<JsonView> ratesJsonList = jsonValue.GetArray("Rates");
    for(unsigned ratesIndex = 0; ratesIndex < ratesJsonList.GetLength(); ++ratesIndex)
    {
      m_rates.push_back(ratesJsonList[ratesIndex].AsObject());
    }
    m_ratesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Systems"))
  {
    Aws::Utils::Array<JsonView> systemsJsonList = jsonValue.GetArray("Systems");
    for(unsigned systemsIndex = 0; systemsIndex < systemsJsonList.GetLength(); ++systemsIndex)
    {
      m_systems.push_back(systemsJsonList[systemsIndex].AsInteger());
    }
    m_systemsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteToll::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_paymentSitesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> paymentSitesJsonList(m_paymentSites.size());
   for(unsigned paymentSitesIndex = 0; paymentSitesIndex < paymentSitesJsonList.GetLength(); ++paymentSitesIndex)
   {
     paymentSitesJsonList[paymentSitesIndex].AsObject(m_paymentSites[paymentSitesIndex].Jsonize());
   }
   payload.WithArray("PaymentSites", std::move(paymentSitesJsonList));

  }

  if(m_ratesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ratesJsonList(m_rates.size());
   for(unsigned ratesIndex = 0; ratesIndex < ratesJsonList.GetLength(); ++ratesIndex)
   {
     ratesJsonList[ratesIndex].AsObject(m_rates[ratesIndex].Jsonize());
   }
   payload.WithArray("Rates", std::move(ratesJsonList));

  }

  if(m_systemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemsJsonList(m_systems.size());
   for(unsigned systemsIndex = 0; systemsIndex < systemsJsonList.GetLength(); ++systemsIndex)
   {
     systemsJsonList[systemsIndex].AsInteger(m_systems[systemsIndex]);
   }
   payload.WithArray("Systems", std::move(systemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
