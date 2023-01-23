/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityResultFilterCriteria.h>
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

DataQualityResultFilterCriteria::DataQualityResultFilterCriteria() : 
    m_dataSourceHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_startedAfterHasBeenSet(false),
    m_startedBeforeHasBeenSet(false)
{
}

DataQualityResultFilterCriteria::DataQualityResultFilterCriteria(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_startedAfterHasBeenSet(false),
    m_startedBeforeHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityResultFilterCriteria& DataQualityResultFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");

    m_jobRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAfter"))
  {
    m_startedAfter = jsonValue.GetDouble("StartedAfter");

    m_startedAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedBefore"))
  {
    m_startedBefore = jsonValue.GetDouble("StartedBefore");

    m_startedBeforeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityResultFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  if(m_startedAfterHasBeenSet)
  {
   payload.WithDouble("StartedAfter", m_startedAfter.SecondsWithMSPrecision());
  }

  if(m_startedBeforeHasBeenSet)
  {
   payload.WithDouble("StartedBefore", m_startedBefore.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
