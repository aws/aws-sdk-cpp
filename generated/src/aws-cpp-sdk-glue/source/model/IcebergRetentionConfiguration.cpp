/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergRetentionConfiguration.h>
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

IcebergRetentionConfiguration::IcebergRetentionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergRetentionConfiguration& IcebergRetentionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snapshotRetentionPeriodInDays"))
  {
    m_snapshotRetentionPeriodInDays = jsonValue.GetInteger("snapshotRetentionPeriodInDays");
    m_snapshotRetentionPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfSnapshotsToRetain"))
  {
    m_numberOfSnapshotsToRetain = jsonValue.GetInteger("numberOfSnapshotsToRetain");
    m_numberOfSnapshotsToRetainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cleanExpiredFiles"))
  {
    m_cleanExpiredFiles = jsonValue.GetBool("cleanExpiredFiles");
    m_cleanExpiredFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runRateInHours"))
  {
    m_runRateInHours = jsonValue.GetInteger("runRateInHours");
    m_runRateInHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergRetentionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("snapshotRetentionPeriodInDays", m_snapshotRetentionPeriodInDays);

  }

  if(m_numberOfSnapshotsToRetainHasBeenSet)
  {
   payload.WithInteger("numberOfSnapshotsToRetain", m_numberOfSnapshotsToRetain);

  }

  if(m_cleanExpiredFilesHasBeenSet)
  {
   payload.WithBool("cleanExpiredFiles", m_cleanExpiredFiles);

  }

  if(m_runRateInHoursHasBeenSet)
  {
   payload.WithInteger("runRateInHours", m_runRateInHours);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
