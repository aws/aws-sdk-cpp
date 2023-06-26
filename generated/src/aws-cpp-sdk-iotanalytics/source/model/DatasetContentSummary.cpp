/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetContentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatasetContentSummary::DatasetContentSummary() : 
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_scheduleTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
}

DatasetContentSummary::DatasetContentSummary(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_scheduleTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetContentSummary& DatasetContentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleTime"))
  {
    m_scheduleTime = jsonValue.GetDouble("scheduleTime");

    m_scheduleTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetContentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_scheduleTimeHasBeenSet)
  {
   payload.WithDouble("scheduleTime", m_scheduleTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("completionTime", m_completionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
