/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BillingGroupCostReportResultElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

BillingGroupCostReportResultElement::BillingGroupCostReportResultElement() : 
    m_arnHasBeenSet(false),
    m_aWSCostHasBeenSet(false),
    m_proformaCostHasBeenSet(false),
    m_marginHasBeenSet(false),
    m_marginPercentageHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

BillingGroupCostReportResultElement::BillingGroupCostReportResultElement(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_aWSCostHasBeenSet(false),
    m_proformaCostHasBeenSet(false),
    m_marginHasBeenSet(false),
    m_marginPercentageHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

BillingGroupCostReportResultElement& BillingGroupCostReportResultElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSCost"))
  {
    m_aWSCost = jsonValue.GetString("AWSCost");

    m_aWSCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProformaCost"))
  {
    m_proformaCost = jsonValue.GetString("ProformaCost");

    m_proformaCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Margin"))
  {
    m_margin = jsonValue.GetString("Margin");

    m_marginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarginPercentage"))
  {
    m_marginPercentage = jsonValue.GetString("MarginPercentage");

    m_marginPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Currency"))
  {
    m_currency = jsonValue.GetString("Currency");

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingGroupCostReportResultElement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_aWSCostHasBeenSet)
  {
   payload.WithString("AWSCost", m_aWSCost);

  }

  if(m_proformaCostHasBeenSet)
  {
   payload.WithString("ProformaCost", m_proformaCost);

  }

  if(m_marginHasBeenSet)
  {
   payload.WithString("Margin", m_margin);

  }

  if(m_marginPercentageHasBeenSet)
  {
   payload.WithString("MarginPercentage", m_marginPercentage);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("Currency", m_currency);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
