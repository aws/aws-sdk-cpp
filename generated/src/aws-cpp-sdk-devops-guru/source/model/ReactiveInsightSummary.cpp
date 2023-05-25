/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ReactiveInsightSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ReactiveInsightSummary::ReactiveInsightSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_severity(InsightSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(InsightStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightTimeRangeHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false),
    m_associatedResourceArnsHasBeenSet(false)
{
}

ReactiveInsightSummary::ReactiveInsightSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_severity(InsightSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(InsightStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightTimeRangeHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false),
    m_associatedResourceArnsHasBeenSet(false)
{
  *this = jsonValue;
}

ReactiveInsightSummary& ReactiveInsightSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = InsightSeverityMapper::GetInsightSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InsightStatusMapper::GetInsightStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightTimeRange"))
  {
    m_insightTimeRange = jsonValue.GetObject("InsightTimeRange");

    m_insightTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCollection"))
  {
    m_serviceCollection = jsonValue.GetObject("ServiceCollection");

    m_serviceCollectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedResourceArns"))
  {
    Aws::Utils::Array<JsonView> associatedResourceArnsJsonList = jsonValue.GetArray("AssociatedResourceArns");
    for(unsigned associatedResourceArnsIndex = 0; associatedResourceArnsIndex < associatedResourceArnsJsonList.GetLength(); ++associatedResourceArnsIndex)
    {
      m_associatedResourceArns.push_back(associatedResourceArnsJsonList[associatedResourceArnsIndex].AsString());
    }
    m_associatedResourceArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReactiveInsightSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", InsightSeverityMapper::GetNameForInsightSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InsightStatusMapper::GetNameForInsightStatus(m_status));
  }

  if(m_insightTimeRangeHasBeenSet)
  {
   payload.WithObject("InsightTimeRange", m_insightTimeRange.Jsonize());

  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  if(m_serviceCollectionHasBeenSet)
  {
   payload.WithObject("ServiceCollection", m_serviceCollection.Jsonize());

  }

  if(m_associatedResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedResourceArnsJsonList(m_associatedResourceArns.size());
   for(unsigned associatedResourceArnsIndex = 0; associatedResourceArnsIndex < associatedResourceArnsJsonList.GetLength(); ++associatedResourceArnsIndex)
   {
     associatedResourceArnsJsonList[associatedResourceArnsIndex].AsString(m_associatedResourceArns[associatedResourceArnsIndex]);
   }
   payload.WithArray("AssociatedResourceArns", std::move(associatedResourceArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
