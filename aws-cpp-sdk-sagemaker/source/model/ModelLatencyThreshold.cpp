/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelLatencyThreshold.h>
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

ModelLatencyThreshold::ModelLatencyThreshold() : 
    m_percentileHasBeenSet(false),
    m_valueInMilliseconds(0),
    m_valueInMillisecondsHasBeenSet(false)
{
}

ModelLatencyThreshold::ModelLatencyThreshold(JsonView jsonValue) : 
    m_percentileHasBeenSet(false),
    m_valueInMilliseconds(0),
    m_valueInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelLatencyThreshold& ModelLatencyThreshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Percentile"))
  {
    m_percentile = jsonValue.GetString("Percentile");

    m_percentileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueInMilliseconds"))
  {
    m_valueInMilliseconds = jsonValue.GetInteger("ValueInMilliseconds");

    m_valueInMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelLatencyThreshold::Jsonize() const
{
  JsonValue payload;

  if(m_percentileHasBeenSet)
  {
   payload.WithString("Percentile", m_percentile);

  }

  if(m_valueInMillisecondsHasBeenSet)
  {
   payload.WithInteger("ValueInMilliseconds", m_valueInMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
