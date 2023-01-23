/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DatasetDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

DatasetDescription::DatasetDescription() : 
    m_projectNameHasBeenSet(false),
    m_datasetTypeHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_imageStatsHasBeenSet(false)
{
}

DatasetDescription::DatasetDescription(JsonView jsonValue) : 
    m_projectNameHasBeenSet(false),
    m_datasetTypeHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_imageStatsHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetDescription& DatasetDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = jsonValue.GetString("DatasetType");

    m_datasetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageStats"))
  {
    m_imageStats = jsonValue.GetObject("ImageStats");

    m_imageStatsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", m_datasetType);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_imageStatsHasBeenSet)
  {
   payload.WithObject("ImageStats", m_imageStats.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
