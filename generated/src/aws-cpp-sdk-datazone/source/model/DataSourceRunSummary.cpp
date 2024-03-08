/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceRunSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DataSourceRunSummary::DataSourceRunSummary() : 
    m_createdAtHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_runStatisticsForAssetsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(DataSourceRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_type(DataSourceRunType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DataSourceRunSummary::DataSourceRunSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_runStatisticsForAssetsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(DataSourceRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_type(DataSourceRunType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceRunSummary& DataSourceRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetObject("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runStatisticsForAssets"))
  {
    m_runStatisticsForAssets = jsonValue.GetObject("runStatisticsForAssets");

    m_runStatisticsForAssetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceRunStatusMapper::GetDataSourceRunStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetString("stoppedAt");

    m_stoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceRunTypeMapper::GetDataSourceRunTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithObject("errorMessage", m_errorMessage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_runStatisticsForAssetsHasBeenSet)
  {
   payload.WithObject("runStatisticsForAssets", m_runStatisticsForAssets.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataSourceRunStatusMapper::GetNameForDataSourceRunStatus(m_status));
  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithString("stoppedAt", m_stoppedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceRunTypeMapper::GetNameForDataSourceRunType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
