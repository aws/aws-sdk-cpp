/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
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

HyperParameterTuningJobObjective::HyperParameterTuningJobObjective() : 
    m_type(HyperParameterTuningJobObjectiveType::NOT_SET),
    m_typeHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

HyperParameterTuningJobObjective::HyperParameterTuningJobObjective(JsonView jsonValue) : 
    m_type(HyperParameterTuningJobObjectiveType::NOT_SET),
    m_typeHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobObjective& HyperParameterTuningJobObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = HyperParameterTuningJobObjectiveTypeMapper::GetHyperParameterTuningJobObjectiveTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobObjective::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", HyperParameterTuningJobObjectiveTypeMapper::GetNameForHyperParameterTuningJobObjectiveType(m_type));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
