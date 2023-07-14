/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelExplainabilityBaselineConfig.h>
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

ModelExplainabilityBaselineConfig::ModelExplainabilityBaselineConfig() : 
    m_baseliningJobNameHasBeenSet(false),
    m_constraintsResourceHasBeenSet(false)
{
}

ModelExplainabilityBaselineConfig::ModelExplainabilityBaselineConfig(JsonView jsonValue) : 
    m_baseliningJobNameHasBeenSet(false),
    m_constraintsResourceHasBeenSet(false)
{
  *this = jsonValue;
}

ModelExplainabilityBaselineConfig& ModelExplainabilityBaselineConfig::operator =(JsonView jsonValue)
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

JsonValue ModelExplainabilityBaselineConfig::Jsonize() const
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
