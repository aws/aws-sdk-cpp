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

#include <aws/sagemaker/model/ProductionVariant.h>
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

ProductionVariant::ProductionVariant() : 
    m_variantNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialVariantWeight(0.0),
    m_initialVariantWeightHasBeenSet(false)
{
}

ProductionVariant::ProductionVariant(const JsonValue& jsonValue) : 
    m_variantNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialVariantWeight(0.0),
    m_initialVariantWeightHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariant& ProductionVariant::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialInstanceCount"))
  {
    m_initialInstanceCount = jsonValue.GetInteger("InitialInstanceCount");

    m_initialInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialVariantWeight"))
  {
    m_initialVariantWeight = jsonValue.GetDouble("InitialVariantWeight");

    m_initialVariantWeightHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariant::Jsonize() const
{
  JsonValue payload;

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_initialInstanceCountHasBeenSet)
  {
   payload.WithInteger("InitialInstanceCount", m_initialInstanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if(m_initialVariantWeightHasBeenSet)
  {
   payload.WithDouble("InitialVariantWeight", m_initialVariantWeight);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
