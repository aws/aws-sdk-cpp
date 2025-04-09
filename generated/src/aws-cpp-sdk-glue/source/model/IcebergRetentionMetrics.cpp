/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergRetentionMetrics.h>
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

IcebergRetentionMetrics::IcebergRetentionMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergRetentionMetrics& IcebergRetentionMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfDataFilesDeleted"))
  {
    m_numberOfDataFilesDeleted = jsonValue.GetInt64("NumberOfDataFilesDeleted");
    m_numberOfDataFilesDeletedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfManifestFilesDeleted"))
  {
    m_numberOfManifestFilesDeleted = jsonValue.GetInt64("NumberOfManifestFilesDeleted");
    m_numberOfManifestFilesDeletedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfManifestListsDeleted"))
  {
    m_numberOfManifestListsDeleted = jsonValue.GetInt64("NumberOfManifestListsDeleted");
    m_numberOfManifestListsDeletedHasBeenSet = true;
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

JsonValue IcebergRetentionMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfDataFilesDeletedHasBeenSet)
  {
   payload.WithInt64("NumberOfDataFilesDeleted", m_numberOfDataFilesDeleted);

  }

  if(m_numberOfManifestFilesDeletedHasBeenSet)
  {
   payload.WithInt64("NumberOfManifestFilesDeleted", m_numberOfManifestFilesDeleted);

  }

  if(m_numberOfManifestListsDeletedHasBeenSet)
  {
   payload.WithInt64("NumberOfManifestListsDeleted", m_numberOfManifestListsDeleted);

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
