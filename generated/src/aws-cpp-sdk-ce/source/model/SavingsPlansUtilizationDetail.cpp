/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansUtilizationDetail.h>
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

SavingsPlansUtilizationDetail::SavingsPlansUtilizationDetail() : 
    m_savingsPlanArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_utilizationHasBeenSet(false),
    m_savingsHasBeenSet(false),
    m_amortizedCommitmentHasBeenSet(false)
{
}

SavingsPlansUtilizationDetail::SavingsPlansUtilizationDetail(JsonView jsonValue) : 
    m_savingsPlanArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_utilizationHasBeenSet(false),
    m_savingsHasBeenSet(false),
    m_amortizedCommitmentHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansUtilizationDetail& SavingsPlansUtilizationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SavingsPlanArn"))
  {
    m_savingsPlanArn = jsonValue.GetString("SavingsPlanArn");

    m_savingsPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Utilization"))
  {
    m_utilization = jsonValue.GetObject("Utilization");

    m_utilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Savings"))
  {
    m_savings = jsonValue.GetObject("Savings");

    m_savingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmortizedCommitment"))
  {
    m_amortizedCommitment = jsonValue.GetObject("AmortizedCommitment");

    m_amortizedCommitmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansUtilizationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlanArnHasBeenSet)
  {
   payload.WithString("SavingsPlanArn", m_savingsPlanArn);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_utilizationHasBeenSet)
  {
   payload.WithObject("Utilization", m_utilization.Jsonize());

  }

  if(m_savingsHasBeenSet)
  {
   payload.WithObject("Savings", m_savings.Jsonize());

  }

  if(m_amortizedCommitmentHasBeenSet)
  {
   payload.WithObject("AmortizedCommitment", m_amortizedCommitment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
