/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSetSummary::DataSetSummary() : 
    m_arnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_importMode(DataSetImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_rowLevelPermissionDataSetHasBeenSet(false),
    m_columnLevelPermissionRulesApplied(false),
    m_columnLevelPermissionRulesAppliedHasBeenSet(false)
{
}

DataSetSummary::DataSetSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_importMode(DataSetImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_rowLevelPermissionDataSetHasBeenSet(false),
    m_columnLevelPermissionRulesApplied(false),
    m_columnLevelPermissionRulesAppliedHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetSummary& DataSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportMode"))
  {
    m_importMode = DataSetImportModeMapper::GetDataSetImportModeForName(jsonValue.GetString("ImportMode"));

    m_importModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowLevelPermissionDataSet"))
  {
    m_rowLevelPermissionDataSet = jsonValue.GetObject("RowLevelPermissionDataSet");

    m_rowLevelPermissionDataSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnLevelPermissionRulesApplied"))
  {
    m_columnLevelPermissionRulesApplied = jsonValue.GetBool("ColumnLevelPermissionRulesApplied");

    m_columnLevelPermissionRulesAppliedHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_importModeHasBeenSet)
  {
   payload.WithString("ImportMode", DataSetImportModeMapper::GetNameForDataSetImportMode(m_importMode));
  }

  if(m_rowLevelPermissionDataSetHasBeenSet)
  {
   payload.WithObject("RowLevelPermissionDataSet", m_rowLevelPermissionDataSet.Jsonize());

  }

  if(m_columnLevelPermissionRulesAppliedHasBeenSet)
  {
   payload.WithBool("ColumnLevelPermissionRulesApplied", m_columnLevelPermissionRulesApplied);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
