/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ReservedElasticsearchInstanceOffering.h>
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

ReservedElasticsearchInstanceOffering::ReservedElasticsearchInstanceOffering() : 
    m_reservedElasticsearchInstanceOfferingIdHasBeenSet(false),
    m_elasticsearchInstanceType(ESPartitionInstanceType::NOT_SET),
    m_elasticsearchInstanceTypeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_paymentOption(ReservedElasticsearchInstancePaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
}

ReservedElasticsearchInstanceOffering::ReservedElasticsearchInstanceOffering(JsonView jsonValue) : 
    m_reservedElasticsearchInstanceOfferingIdHasBeenSet(false),
    m_elasticsearchInstanceType(ESPartitionInstanceType::NOT_SET),
    m_elasticsearchInstanceTypeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_paymentOption(ReservedElasticsearchInstancePaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
  *this = jsonValue;
}

ReservedElasticsearchInstanceOffering& ReservedElasticsearchInstanceOffering::operator =(JsonView jsonValue)
{
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

JsonValue ReservedElasticsearchInstanceOffering::Jsonize() const
{
  JsonValue payload;

  if(m_reservedElasticsearchInstanceOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedElasticsearchInstanceOfferingId", m_reservedElasticsearchInstanceOfferingId);

  }

  if(m_elasticsearchInstanceTypeHasBeenSet)
  {
   payload.WithString("ElasticsearchInstanceType", ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(m_elasticsearchInstanceType));
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
