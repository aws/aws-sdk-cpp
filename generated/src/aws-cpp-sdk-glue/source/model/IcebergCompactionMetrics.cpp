/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergCompactionMetrics.h>
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

IcebergCompactionMetrics::IcebergCompactionMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergCompactionMetrics& IcebergCompactionMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfBytesCompacted"))
  {
    m_numberOfBytesCompacted = jsonValue.GetInt64("NumberOfBytesCompacted");
    m_numberOfBytesCompactedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfFilesCompacted"))
  {
    m_numberOfFilesCompacted = jsonValue.GetInt64("NumberOfFilesCompacted");
    m_numberOfFilesCompactedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DpuHours"))
  {
    m_dpuHours = jsonValue.GetDouble("DpuHours");
    m_dpuHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfDpus"))
  {
    m_numberOfDpus = jsonValue.GetInteger("NumberOfDpus");
    m_numberOfDpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobDurationInHour"))
  {
    m_jobDurationInHour = jsonValue.GetDouble("JobDurationInHour");
    m_jobDurationInHourHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergCompactionMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfBytesCompactedHasBeenSet)
  {
   payload.WithInt64("NumberOfBytesCompacted", m_numberOfBytesCompacted);

  }

  if(m_numberOfFilesCompactedHasBeenSet)
  {
   payload.WithInt64("NumberOfFilesCompacted", m_numberOfFilesCompacted);

  }

  if(m_dpuHoursHasBeenSet)
  {
   payload.WithDouble("DpuHours", m_dpuHours);

  }

  if(m_numberOfDpusHasBeenSet)
  {
   payload.WithInteger("NumberOfDpus", m_numberOfDpus);

  }

  if(m_jobDurationInHourHasBeenSet)
  {
   payload.WithDouble("JobDurationInHour", m_jobDurationInHour);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
