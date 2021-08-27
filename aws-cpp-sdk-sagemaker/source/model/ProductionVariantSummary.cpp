/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantSummary.h>
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

ProductionVariantSummary::ProductionVariantSummary() : 
    m_variantNameHasBeenSet(false),
    m_deployedImagesHasBeenSet(false),
    m_currentWeight(0.0),
    m_currentWeightHasBeenSet(false),
    m_desiredWeight(0.0),
    m_desiredWeightHasBeenSet(false),
    m_currentInstanceCount(0),
    m_currentInstanceCountHasBeenSet(false),
    m_desiredInstanceCount(0),
    m_desiredInstanceCountHasBeenSet(false)
{
}

ProductionVariantSummary::ProductionVariantSummary(JsonView jsonValue) : 
    m_variantNameHasBeenSet(false),
    m_deployedImagesHasBeenSet(false),
    m_currentWeight(0.0),
    m_currentWeightHasBeenSet(false),
    m_desiredWeight(0.0),
    m_desiredWeightHasBeenSet(false),
    m_currentInstanceCount(0),
    m_currentInstanceCountHasBeenSet(false),
    m_desiredInstanceCount(0),
    m_desiredInstanceCountHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariantSummary& ProductionVariantSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeployedImages"))
  {
    Array<JsonView> deployedImagesJsonList = jsonValue.GetArray("DeployedImages");
    for(unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex)
    {
      m_deployedImages.push_back(deployedImagesJsonList[deployedImagesIndex].AsObject());
    }
    m_deployedImagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentWeight"))
  {
    m_currentWeight = jsonValue.GetDouble("CurrentWeight");

    m_currentWeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredWeight"))
  {
    m_desiredWeight = jsonValue.GetDouble("DesiredWeight");

    m_desiredWeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentInstanceCount"))
  {
    m_currentInstanceCount = jsonValue.GetInteger("CurrentInstanceCount");

    m_currentInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredInstanceCount"))
  {
    m_desiredInstanceCount = jsonValue.GetInteger("DesiredInstanceCount");

    m_desiredInstanceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_deployedImagesHasBeenSet)
  {
   Array<JsonValue> deployedImagesJsonList(m_deployedImages.size());
   for(unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex)
   {
     deployedImagesJsonList[deployedImagesIndex].AsObject(m_deployedImages[deployedImagesIndex].Jsonize());
   }
   payload.WithArray("DeployedImages", std::move(deployedImagesJsonList));

  }

  if(m_currentWeightHasBeenSet)
  {
   payload.WithDouble("CurrentWeight", m_currentWeight);

  }

  if(m_desiredWeightHasBeenSet)
  {
   payload.WithDouble("DesiredWeight", m_desiredWeight);

  }

  if(m_currentInstanceCountHasBeenSet)
  {
   payload.WithInteger("CurrentInstanceCount", m_currentInstanceCount);

  }

  if(m_desiredInstanceCountHasBeenSet)
  {
   payload.WithInteger("DesiredInstanceCount", m_desiredInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
