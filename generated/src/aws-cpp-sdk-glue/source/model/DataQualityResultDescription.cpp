/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityResultDescription.h>
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

DataQualityResultDescription::DataQualityResultDescription() : 
    m_resultIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_startedOnHasBeenSet(false)
{
}

DataQualityResultDescription::DataQualityResultDescription(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_startedOnHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityResultDescription& DataQualityResultDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityResultDescription::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

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

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
