/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DriftCheckBaselines.h>
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

DriftCheckBaselines::DriftCheckBaselines() : 
    m_biasHasBeenSet(false),
    m_explainabilityHasBeenSet(false),
    m_modelQualityHasBeenSet(false),
    m_modelDataQualityHasBeenSet(false)
{
}

DriftCheckBaselines::DriftCheckBaselines(JsonView jsonValue) : 
    m_biasHasBeenSet(false),
    m_explainabilityHasBeenSet(false),
    m_modelQualityHasBeenSet(false),
    m_modelDataQualityHasBeenSet(false)
{
  *this = jsonValue;
}

DriftCheckBaselines& DriftCheckBaselines::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bias"))
  {
    m_bias = jsonValue.GetObject("Bias");

    m_biasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Explainability"))
  {
    m_explainability = jsonValue.GetObject("Explainability");

    m_explainabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = jsonValue.GetObject("ModelQuality");

    m_modelQualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataQuality"))
  {
    m_modelDataQuality = jsonValue.GetObject("ModelDataQuality");

    m_modelDataQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue DriftCheckBaselines::Jsonize() const
{
  JsonValue payload;

  if(m_biasHasBeenSet)
  {
   payload.WithObject("Bias", m_bias.Jsonize());

  }

  if(m_explainabilityHasBeenSet)
  {
   payload.WithObject("Explainability", m_explainability.Jsonize());

  }

  if(m_modelQualityHasBeenSet)
  {
   payload.WithObject("ModelQuality", m_modelQuality.Jsonize());

  }

  if(m_modelDataQualityHasBeenSet)
  {
   payload.WithObject("ModelDataQuality", m_modelDataQuality.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
