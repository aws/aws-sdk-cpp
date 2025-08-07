/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergOrphanFileDeletionConfiguration.h>
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

IcebergOrphanFileDeletionConfiguration::IcebergOrphanFileDeletionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergOrphanFileDeletionConfiguration& IcebergOrphanFileDeletionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("orphanFileRetentionPeriodInDays"))
  {
    m_orphanFileRetentionPeriodInDays = jsonValue.GetInteger("orphanFileRetentionPeriodInDays");
    m_orphanFileRetentionPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runRateInHours"))
  {
    m_runRateInHours = jsonValue.GetInteger("runRateInHours");
    m_runRateInHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergOrphanFileDeletionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_orphanFileRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("orphanFileRetentionPeriodInDays", m_orphanFileRetentionPeriodInDays);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

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
