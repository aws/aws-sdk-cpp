/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceRunActivity.h>
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

DataSourceRunActivity::DataSourceRunActivity() : 
    m_createdAtHasBeenSet(false),
    m_dataAssetIdHasBeenSet(false),
    m_dataAssetStatus(DataAssetActivityStatus::NOT_SET),
    m_dataAssetStatusHasBeenSet(false),
    m_dataSourceRunIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_technicalDescriptionHasBeenSet(false),
    m_technicalNameHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DataSourceRunActivity::DataSourceRunActivity(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_dataAssetIdHasBeenSet(false),
    m_dataAssetStatus(DataAssetActivityStatus::NOT_SET),
    m_dataAssetStatusHasBeenSet(false),
    m_dataSourceRunIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_technicalDescriptionHasBeenSet(false),
    m_technicalNameHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceRunActivity& DataSourceRunActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataAssetId"))
  {
    m_dataAssetId = jsonValue.GetString("dataAssetId");

    m_dataAssetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataAssetStatus"))
  {
    m_dataAssetStatus = DataAssetActivityStatusMapper::GetDataAssetActivityStatusForName(jsonValue.GetString("dataAssetStatus"));

    m_dataAssetStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceRunId"))
  {
    m_dataSourceRunId = jsonValue.GetString("dataSourceRunId");

    m_dataSourceRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("database"))
  {
    m_database = jsonValue.GetString("database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetObject("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("technicalDescription"))
  {
    m_technicalDescription = jsonValue.GetString("technicalDescription");

    m_technicalDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("technicalName"))
  {
    m_technicalName = jsonValue.GetString("technicalName");

    m_technicalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceRunActivity::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataAssetIdHasBeenSet)
  {
   payload.WithString("dataAssetId", m_dataAssetId);

  }

  if(m_dataAssetStatusHasBeenSet)
  {
   payload.WithString("dataAssetStatus", DataAssetActivityStatusMapper::GetNameForDataAssetActivityStatus(m_dataAssetStatus));
  }

  if(m_dataSourceRunIdHasBeenSet)
  {
   payload.WithString("dataSourceRunId", m_dataSourceRunId);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithObject("errorMessage", m_errorMessage.Jsonize());

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_technicalDescriptionHasBeenSet)
  {
   payload.WithString("technicalDescription", m_technicalDescription);

  }

  if(m_technicalNameHasBeenSet)
  {
   payload.WithString("technicalName", m_technicalName);

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
