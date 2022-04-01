/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FinalAutoMLJobObjectiveMetric.h>
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

FinalAutoMLJobObjectiveMetric::FinalAutoMLJobObjectiveMetric() : 
    m_type(AutoMLJobObjectiveType::NOT_SET),
    m_typeHasBeenSet(false),
    m_metricName(AutoMLMetricEnum::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

FinalAutoMLJobObjectiveMetric::FinalAutoMLJobObjectiveMetric(JsonView jsonValue) : 
    m_type(AutoMLJobObjectiveType::NOT_SET),
    m_typeHasBeenSet(false),
    m_metricName(AutoMLMetricEnum::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

FinalAutoMLJobObjectiveMetric& FinalAutoMLJobObjectiveMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutoMLJobObjectiveTypeMapper::GetAutoMLJobObjectiveTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = AutoMLMetricEnumMapper::GetAutoMLMetricEnumForName(jsonValue.GetString("MetricName"));

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue FinalAutoMLJobObjectiveMetric::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutoMLJobObjectiveTypeMapper::GetNameForAutoMLJobObjectiveType(m_type));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", AutoMLMetricEnumMapper::GetNameForAutoMLMetricEnum(m_metricName));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
