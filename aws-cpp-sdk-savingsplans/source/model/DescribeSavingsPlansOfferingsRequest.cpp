/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSavingsPlansOfferingsRequest::DescribeSavingsPlansOfferingsRequest() : 
    m_offeringIdsHasBeenSet(false),
    m_paymentOptionsHasBeenSet(false),
    m_productType(SavingsPlanProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_planTypesHasBeenSet(false),
    m_durationsHasBeenSet(false),
    m_currenciesHasBeenSet(false),
    m_descriptionsHasBeenSet(false),
    m_serviceCodesHasBeenSet(false),
    m_usageTypesHasBeenSet(false),
    m_operationsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeSavingsPlansOfferingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_offeringIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> offeringIdsJsonList(m_offeringIds.size());
   for(unsigned offeringIdsIndex = 0; offeringIdsIndex < offeringIdsJsonList.GetLength(); ++offeringIdsIndex)
   {
     offeringIdsJsonList[offeringIdsIndex].AsString(m_offeringIds[offeringIdsIndex]);
   }
   payload.WithArray("offeringIds", std::move(offeringIdsJsonList));

  }

  if(m_paymentOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> paymentOptionsJsonList(m_paymentOptions.size());
   for(unsigned paymentOptionsIndex = 0; paymentOptionsIndex < paymentOptionsJsonList.GetLength(); ++paymentOptionsIndex)
   {
     paymentOptionsJsonList[paymentOptionsIndex].AsString(SavingsPlanPaymentOptionMapper::GetNameForSavingsPlanPaymentOption(m_paymentOptions[paymentOptionsIndex]));
   }
   payload.WithArray("paymentOptions", std::move(paymentOptionsJsonList));

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("productType", SavingsPlanProductTypeMapper::GetNameForSavingsPlanProductType(m_productType));
  }

  if(m_planTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> planTypesJsonList(m_planTypes.size());
   for(unsigned planTypesIndex = 0; planTypesIndex < planTypesJsonList.GetLength(); ++planTypesIndex)
   {
     planTypesJsonList[planTypesIndex].AsString(SavingsPlanTypeMapper::GetNameForSavingsPlanType(m_planTypes[planTypesIndex]));
   }
   payload.WithArray("planTypes", std::move(planTypesJsonList));

  }

  if(m_durationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> durationsJsonList(m_durations.size());
   for(unsigned durationsIndex = 0; durationsIndex < durationsJsonList.GetLength(); ++durationsIndex)
   {
     durationsJsonList[durationsIndex].AsInt64(m_durations[durationsIndex]);
   }
   payload.WithArray("durations", std::move(durationsJsonList));

  }

  if(m_currenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> currenciesJsonList(m_currencies.size());
   for(unsigned currenciesIndex = 0; currenciesIndex < currenciesJsonList.GetLength(); ++currenciesIndex)
   {
     currenciesJsonList[currenciesIndex].AsString(CurrencyCodeMapper::GetNameForCurrencyCode(m_currencies[currenciesIndex]));
   }
   payload.WithArray("currencies", std::move(currenciesJsonList));

  }

  if(m_descriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> descriptionsJsonList(m_descriptions.size());
   for(unsigned descriptionsIndex = 0; descriptionsIndex < descriptionsJsonList.GetLength(); ++descriptionsIndex)
   {
     descriptionsJsonList[descriptionsIndex].AsString(m_descriptions[descriptionsIndex]);
   }
   payload.WithArray("descriptions", std::move(descriptionsJsonList));

  }

  if(m_serviceCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceCodesJsonList(m_serviceCodes.size());
   for(unsigned serviceCodesIndex = 0; serviceCodesIndex < serviceCodesJsonList.GetLength(); ++serviceCodesIndex)
   {
     serviceCodesJsonList[serviceCodesIndex].AsString(m_serviceCodes[serviceCodesIndex]);
   }
   payload.WithArray("serviceCodes", std::move(serviceCodesJsonList));

  }

  if(m_usageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageTypesJsonList(m_usageTypes.size());
   for(unsigned usageTypesIndex = 0; usageTypesIndex < usageTypesJsonList.GetLength(); ++usageTypesIndex)
   {
     usageTypesJsonList[usageTypesIndex].AsString(m_usageTypes[usageTypesIndex]);
   }
   payload.WithArray("usageTypes", std::move(usageTypesJsonList));

  }

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(m_operations[operationsIndex]);
   }
   payload.WithArray("operations", std::move(operationsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




