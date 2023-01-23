/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DatasetMetadata.h>
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

DatasetMetadata::DatasetMetadata() : 
    m_datasetTypeHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

DatasetMetadata::DatasetMetadata(JsonView jsonValue) : 
    m_datasetTypeHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetMetadata& DatasetMetadata::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue DatasetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", m_datasetType);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
