/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollRate.h>
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

RouteTollRate::RouteTollRate(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollRate& RouteTollRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicableTimes"))
  {
    m_applicableTimes = jsonValue.GetString("ApplicableTimes");
    m_applicableTimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConvertedPrice"))
  {
    m_convertedPrice = jsonValue.GetObject("ConvertedPrice");
    m_convertedPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalPrice"))
  {
    m_localPrice = jsonValue.GetObject("LocalPrice");
    m_localPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Pass"))
  {
    m_pass = jsonValue.GetObject("Pass");
    m_passHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PaymentMethods"))
  {
    Aws::Utils::Array<JsonView> paymentMethodsJsonList = jsonValue.GetArray("PaymentMethods");
    for(unsigned paymentMethodsIndex = 0; paymentMethodsIndex < paymentMethodsJsonList.GetLength(); ++paymentMethodsIndex)
    {
      m_paymentMethods.push_back(RouteTollPaymentMethodMapper::GetRouteTollPaymentMethodForName(paymentMethodsJsonList[paymentMethodsIndex].AsString()));
    }
    m_paymentMethodsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transponders"))
  {
    Aws::Utils::Array<JsonView> transpondersJsonList = jsonValue.GetArray("Transponders");
    for(unsigned transpondersIndex = 0; transpondersIndex < transpondersJsonList.GetLength(); ++transpondersIndex)
    {
      m_transponders.push_back(transpondersJsonList[transpondersIndex].AsObject());
    }
    m_transpondersHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollRate::Jsonize() const
{
  JsonValue payload;

  if(m_applicableTimesHasBeenSet)
  {
   payload.WithString("ApplicableTimes", m_applicableTimes);

  }

  if(m_convertedPriceHasBeenSet)
  {
   payload.WithObject("ConvertedPrice", m_convertedPrice.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_localPriceHasBeenSet)
  {
   payload.WithObject("LocalPrice", m_localPrice.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_passHasBeenSet)
  {
   payload.WithObject("Pass", m_pass.Jsonize());

  }

  if(m_paymentMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> paymentMethodsJsonList(m_paymentMethods.size());
   for(unsigned paymentMethodsIndex = 0; paymentMethodsIndex < paymentMethodsJsonList.GetLength(); ++paymentMethodsIndex)
   {
     paymentMethodsJsonList[paymentMethodsIndex].AsString(RouteTollPaymentMethodMapper::GetNameForRouteTollPaymentMethod(m_paymentMethods[paymentMethodsIndex]));
   }
   payload.WithArray("PaymentMethods", std::move(paymentMethodsJsonList));

  }

  if(m_transpondersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transpondersJsonList(m_transponders.size());
   for(unsigned transpondersIndex = 0; transpondersIndex < transpondersJsonList.GetLength(); ++transpondersIndex)
   {
     transpondersJsonList[transpondersIndex].AsObject(m_transponders[transpondersIndex].Jsonize());
   }
   payload.WithArray("Transponders", std::move(transpondersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
