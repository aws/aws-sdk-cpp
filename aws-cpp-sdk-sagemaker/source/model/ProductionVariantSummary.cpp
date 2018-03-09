/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ProductionVariantSummary::ProductionVariantSummary(const JsonValue& jsonValue) : 
    m_variantNameHasBeenSet(false),
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

ProductionVariantSummary& ProductionVariantSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
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
