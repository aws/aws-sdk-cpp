/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelBiasBaselineConfig.h>
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

ModelBiasBaselineConfig::ModelBiasBaselineConfig() : 
    m_baseliningJobNameHasBeenSet(false),
    m_constraintsResourceHasBeenSet(false)
{
}

ModelBiasBaselineConfig::ModelBiasBaselineConfig(JsonView jsonValue) : 
    m_baseliningJobNameHasBeenSet(false),
    m_constraintsResourceHasBeenSet(false)
{
  *this = jsonValue;
}

ModelBiasBaselineConfig& ModelBiasBaselineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseliningJobName"))
  {
    m_baseliningJobName = jsonValue.GetString("BaseliningJobName");

    m_baseliningJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConstraintsResource"))
  {
    m_constraintsResource = jsonValue.GetObject("ConstraintsResource");

    m_constraintsResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelBiasBaselineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_baseliningJobNameHasBeenSet)
  {
   payload.WithString("BaseliningJobName", m_baseliningJobName);

  }

  if(m_constraintsResourceHasBeenSet)
  {
   payload.WithObject("ConstraintsResource", m_constraintsResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
