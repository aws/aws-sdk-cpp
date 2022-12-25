/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PendingDeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

PendingDeploymentSummary::PendingDeploymentSummary() : 
    m_endpointConfigNameHasBeenSet(false),
    m_productionVariantsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_shadowProductionVariantsHasBeenSet(false)
{
}

PendingDeploymentSummary::PendingDeploymentSummary(JsonView jsonValue) : 
    m_endpointConfigNameHasBeenSet(false),
    m_productionVariantsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_shadowProductionVariantsHasBeenSet(false)
{
  *this = jsonValue;
}

PendingDeploymentSummary& PendingDeploymentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

    m_endpointConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductionVariants"))
  {
    Aws::Utils::Array<JsonView> productionVariantsJsonList = jsonValue.GetArray("ProductionVariants");
    for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
    {
      m_productionVariants.push_back(productionVariantsJsonList[productionVariantsIndex].AsObject());
    }
    m_productionVariantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShadowProductionVariants"))
  {
    Aws::Utils::Array<JsonView> shadowProductionVariantsJsonList = jsonValue.GetArray("ShadowProductionVariants");
    for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
    {
      m_shadowProductionVariants.push_back(shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject());
    }
    m_shadowProductionVariantsHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingDeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_productionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productionVariantsJsonList(m_productionVariants.size());
   for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
   {
     productionVariantsJsonList[productionVariantsIndex].AsObject(m_productionVariants[productionVariantsIndex].Jsonize());
   }
   payload.WithArray("ProductionVariants", std::move(productionVariantsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_shadowProductionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shadowProductionVariantsJsonList(m_shadowProductionVariants.size());
   for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
   {
     shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject(m_shadowProductionVariants[shadowProductionVariantsIndex].Jsonize());
   }
   payload.WithArray("ShadowProductionVariants", std::move(shadowProductionVariantsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
