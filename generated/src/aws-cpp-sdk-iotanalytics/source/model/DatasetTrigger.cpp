/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetTrigger.h>
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

DatasetTrigger::DatasetTrigger() : 
    m_scheduleHasBeenSet(false),
    m_datasetHasBeenSet(false)
{
}

DatasetTrigger::DatasetTrigger(JsonView jsonValue) : 
    m_scheduleHasBeenSet(false),
    m_datasetHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetTrigger& DatasetTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataset"))
  {
    m_dataset = jsonValue.GetObject("dataset");

    m_datasetHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_datasetHasBeenSet)
  {
   payload.WithObject("dataset", m_dataset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
