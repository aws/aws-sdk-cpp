/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDataQuality.h>
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

ModelDataQuality::ModelDataQuality() : 
    m_statisticsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
}

ModelDataQuality::ModelDataQuality(JsonView jsonValue) : 
    m_statisticsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDataQuality& ModelDataQuality::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

    m_constraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDataQuality::Jsonize() const
{
  JsonValue payload;

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("Statistics", m_statistics.Jsonize());

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
