/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CurrentInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CurrentInstance::CurrentInstance() : 
    m_resourceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_resourceUtilizationHasBeenSet(false),
    m_reservationCoveredHoursInLookbackPeriodHasBeenSet(false),
    m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet(false),
    m_onDemandHoursInLookbackPeriodHasBeenSet(false),
    m_totalRunningHoursInLookbackPeriodHasBeenSet(false),
    m_monthlyCostHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
}

CurrentInstance::CurrentInstance(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_resourceUtilizationHasBeenSet(false),
    m_reservationCoveredHoursInLookbackPeriodHasBeenSet(false),
    m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet(false),
    m_onDemandHoursInLookbackPeriodHasBeenSet(false),
    m_totalRunningHoursInLookbackPeriodHasBeenSet(false),
    m_monthlyCostHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentInstance& CurrentInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceName"))
  {
    m_instanceName = jsonValue.GetString("InstanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceUtilization"))
  {
    m_resourceUtilization = jsonValue.GetObject("ResourceUtilization");

    m_resourceUtilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservationCoveredHoursInLookbackPeriod"))
  {
    m_reservationCoveredHoursInLookbackPeriod = jsonValue.GetString("ReservationCoveredHoursInLookbackPeriod");

    m_reservationCoveredHoursInLookbackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPlansCoveredHoursInLookbackPeriod"))
  {
    m_savingsPlansCoveredHoursInLookbackPeriod = jsonValue.GetString("SavingsPlansCoveredHoursInLookbackPeriod");

    m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandHoursInLookbackPeriod"))
  {
    m_onDemandHoursInLookbackPeriod = jsonValue.GetString("OnDemandHoursInLookbackPeriod");

    m_onDemandHoursInLookbackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalRunningHoursInLookbackPeriod"))
  {
    m_totalRunningHoursInLookbackPeriod = jsonValue.GetString("TotalRunningHoursInLookbackPeriod");

    m_totalRunningHoursInLookbackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonthlyCost"))
  {
    m_monthlyCost = jsonValue.GetString("MonthlyCost");

    m_monthlyCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue CurrentInstance::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("InstanceName", m_instanceName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_resourceUtilizationHasBeenSet)
  {
   payload.WithObject("ResourceUtilization", m_resourceUtilization.Jsonize());

  }

  if(m_reservationCoveredHoursInLookbackPeriodHasBeenSet)
  {
   payload.WithString("ReservationCoveredHoursInLookbackPeriod", m_reservationCoveredHoursInLookbackPeriod);

  }

  if(m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet)
  {
   payload.WithString("SavingsPlansCoveredHoursInLookbackPeriod", m_savingsPlansCoveredHoursInLookbackPeriod);

  }

  if(m_onDemandHoursInLookbackPeriodHasBeenSet)
  {
   payload.WithString("OnDemandHoursInLookbackPeriod", m_onDemandHoursInLookbackPeriod);

  }

  if(m_totalRunningHoursInLookbackPeriodHasBeenSet)
  {
   payload.WithString("TotalRunningHoursInLookbackPeriod", m_totalRunningHoursInLookbackPeriod);

  }

  if(m_monthlyCostHasBeenSet)
  {
   payload.WithString("MonthlyCost", m_monthlyCost);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
