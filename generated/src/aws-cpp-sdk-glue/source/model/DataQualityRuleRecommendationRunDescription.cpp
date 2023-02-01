/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRuleRecommendationRunDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityRuleRecommendationRunDescription::DataQualityRuleRecommendationRunDescription() : 
    m_runIdHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
}

DataQualityRuleRecommendationRunDescription::DataQualityRuleRecommendationRunDescription(JsonView jsonValue) : 
    m_runIdHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityRuleRecommendationRunDescription& DataQualityRuleRecommendationRunDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityRuleRecommendationRunDescription::Jsonize() const
{
  JsonValue payload;

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskStatusTypeMapper::GetNameForTaskStatusType(m_status));
  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
