/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelObjective.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceLevelObjective::ServiceLevelObjective(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLevelObjective& ServiceLevelObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sli"))
  {
    m_sli = jsonValue.GetObject("Sli");
    m_sliHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestBasedSli"))
  {
    m_requestBasedSli = jsonValue.GetObject("RequestBasedSli");
    m_requestBasedSliHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationType"))
  {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));
    m_evaluationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Goal"))
  {
    m_goal = jsonValue.GetObject("Goal");
    m_goalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BurnRateConfigurations"))
  {
    Aws::Utils::Array<JsonView> burnRateConfigurationsJsonList = jsonValue.GetArray("BurnRateConfigurations");
    for(unsigned burnRateConfigurationsIndex = 0; burnRateConfigurationsIndex < burnRateConfigurationsJsonList.GetLength(); ++burnRateConfigurationsIndex)
    {
      m_burnRateConfigurations.push_back(burnRateConfigurationsJsonList[burnRateConfigurationsIndex].AsObject());
    }
    m_burnRateConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSourceType"))
  {
    m_metricSourceType = MetricSourceTypeMapper::GetMetricSourceTypeForName(jsonValue.GetString("MetricSourceType"));
    m_metricSourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLevelObjective::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_sliHasBeenSet)
  {
   payload.WithObject("Sli", m_sli.Jsonize());

  }

  if(m_requestBasedSliHasBeenSet)
  {
   payload.WithObject("RequestBasedSli", m_requestBasedSli.Jsonize());

  }

  if(m_evaluationTypeHasBeenSet)
  {
   payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if(m_goalHasBeenSet)
  {
   payload.WithObject("Goal", m_goal.Jsonize());

  }

  if(m_burnRateConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> burnRateConfigurationsJsonList(m_burnRateConfigurations.size());
   for(unsigned burnRateConfigurationsIndex = 0; burnRateConfigurationsIndex < burnRateConfigurationsJsonList.GetLength(); ++burnRateConfigurationsIndex)
   {
     burnRateConfigurationsJsonList[burnRateConfigurationsIndex].AsObject(m_burnRateConfigurations[burnRateConfigurationsIndex].Jsonize());
   }
   payload.WithArray("BurnRateConfigurations", std::move(burnRateConfigurationsJsonList));

  }

  if(m_metricSourceTypeHasBeenSet)
  {
   payload.WithString("MetricSourceType", MetricSourceTypeMapper::GetNameForMetricSourceType(m_metricSourceType));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
