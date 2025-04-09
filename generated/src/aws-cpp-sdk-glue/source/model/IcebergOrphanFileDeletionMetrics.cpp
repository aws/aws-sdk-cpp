/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergOrphanFileDeletionMetrics.h>
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

IcebergOrphanFileDeletionMetrics::IcebergOrphanFileDeletionMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergOrphanFileDeletionMetrics& IcebergOrphanFileDeletionMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfOrphanFilesDeleted"))
  {
    m_numberOfOrphanFilesDeleted = jsonValue.GetInt64("NumberOfOrphanFilesDeleted");
    m_numberOfOrphanFilesDeletedHasBeenSet = true;
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

JsonValue IcebergOrphanFileDeletionMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfOrphanFilesDeletedHasBeenSet)
  {
   payload.WithInt64("NumberOfOrphanFilesDeleted", m_numberOfOrphanFilesDeleted);

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
