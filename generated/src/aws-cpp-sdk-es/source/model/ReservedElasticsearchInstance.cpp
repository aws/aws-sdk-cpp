/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ReservedElasticsearchInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ReservedElasticsearchInstance::ReservedElasticsearchInstance() : 
    m_reservationNameHasBeenSet(false),
    m_reservedElasticsearchInstanceIdHasBeenSet(false),
    m_reservedElasticsearchInstanceOfferingIdHasBeenSet(false),
    m_elasticsearchInstanceType(ESPartitionInstanceType::NOT_SET),
    m_elasticsearchInstanceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_elasticsearchInstanceCount(0),
    m_elasticsearchInstanceCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_paymentOption(ReservedElasticsearchInstancePaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
}

ReservedElasticsearchInstance::ReservedElasticsearchInstance(JsonView jsonValue) : 
    m_reservationNameHasBeenSet(false),
    m_reservedElasticsearchInstanceIdHasBeenSet(false),
    m_reservedElasticsearchInstanceOfferingIdHasBeenSet(false),
    m_elasticsearchInstanceType(ESPartitionInstanceType::NOT_SET),
    m_elasticsearchInstanceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_elasticsearchInstanceCount(0),
    m_elasticsearchInstanceCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_paymentOption(ReservedElasticsearchInstancePaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
  *this = jsonValue;
}

ReservedElasticsearchInstance& ReservedElasticsearchInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReservationName"))
  {
    m_reservationName = jsonValue.GetString("ReservationName");

    m_reservationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedElasticsearchInstanceId"))
  {
    m_reservedElasticsearchInstanceId = jsonValue.GetString("ReservedElasticsearchInstanceId");

    m_reservedElasticsearchInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedElasticsearchInstanceOfferingId"))
  {
    m_reservedElasticsearchInstanceOfferingId = jsonValue.GetString("ReservedElasticsearchInstanceOfferingId");

    m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchInstanceType"))
  {
    m_elasticsearchInstanceType = ESPartitionInstanceTypeMapper::GetESPartitionInstanceTypeForName(jsonValue.GetString("ElasticsearchInstanceType"));

    m_elasticsearchInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("FixedPrice");

    m_fixedPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsagePrice"))
  {
    m_usagePrice = jsonValue.GetDouble("UsagePrice");

    m_usagePriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchInstanceCount"))
  {
    m_elasticsearchInstanceCount = jsonValue.GetInteger("ElasticsearchInstanceCount");

    m_elasticsearchInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaymentOption"))
  {
    m_paymentOption = ReservedElasticsearchInstancePaymentOptionMapper::GetReservedElasticsearchInstancePaymentOptionForName(jsonValue.GetString("PaymentOption"));

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecurringCharges"))
  {
    Aws::Utils::Array<JsonView> recurringChargesJsonList = jsonValue.GetArray("RecurringCharges");
    for(unsigned recurringChargesIndex = 0; recurringChargesIndex < recurringChargesJsonList.GetLength(); ++recurringChargesIndex)
    {
      m_recurringCharges.push_back(recurringChargesJsonList[recurringChargesIndex].AsObject());
    }
    m_recurringChargesHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservedElasticsearchInstance::Jsonize() const
{
  JsonValue payload;

  if(m_reservationNameHasBeenSet)
  {
   payload.WithString("ReservationName", m_reservationName);

  }

  if(m_reservedElasticsearchInstanceIdHasBeenSet)
  {
   payload.WithString("ReservedElasticsearchInstanceId", m_reservedElasticsearchInstanceId);

  }

  if(m_reservedElasticsearchInstanceOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedElasticsearchInstanceOfferingId", m_reservedElasticsearchInstanceOfferingId);

  }

  if(m_elasticsearchInstanceTypeHasBeenSet)
  {
   payload.WithString("ElasticsearchInstanceType", ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(m_elasticsearchInstanceType));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_fixedPriceHasBeenSet)
  {
   payload.WithDouble("FixedPrice", m_fixedPrice);

  }

  if(m_usagePriceHasBeenSet)
  {
   payload.WithDouble("UsagePrice", m_usagePrice);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_elasticsearchInstanceCountHasBeenSet)
  {
   payload.WithInteger("ElasticsearchInstanceCount", m_elasticsearchInstanceCount);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", ReservedElasticsearchInstancePaymentOptionMapper::GetNameForReservedElasticsearchInstancePaymentOption(m_paymentOption));
  }

  if(m_recurringChargesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recurringChargesJsonList(m_recurringCharges.size());
   for(unsigned recurringChargesIndex = 0; recurringChargesIndex < recurringChargesJsonList.GetLength(); ++recurringChargesIndex)
   {
     recurringChargesJsonList[recurringChargesIndex].AsObject(m_recurringCharges[recurringChargesIndex].Jsonize());
   }
   payload.WithArray("RecurringCharges", std::move(recurringChargesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
