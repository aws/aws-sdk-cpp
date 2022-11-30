/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelVariantConfig.h>
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

ModelVariantConfig::ModelVariantConfig() : 
    m_modelNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_infrastructureConfigHasBeenSet(false)
{
}

ModelVariantConfig::ModelVariantConfig(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_infrastructureConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ModelVariantConfig& ModelVariantConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InfrastructureConfig"))
  {
    m_infrastructureConfig = jsonValue.GetObject("InfrastructureConfig");

    m_infrastructureConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelVariantConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_infrastructureConfigHasBeenSet)
  {
   payload.WithObject("InfrastructureConfig", m_infrastructureConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
