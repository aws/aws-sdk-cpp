/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetMetadata::DatasetMetadata() : 
    m_creationTimestampHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusMessageCode(DatasetStatusMessageCode::NOT_SET),
    m_statusMessageCodeHasBeenSet(false)
{
}

DatasetMetadata::DatasetMetadata(JsonView jsonValue) : 
    m_creationTimestampHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusMessageCode(DatasetStatusMessageCode::NOT_SET),
    m_statusMessageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetMetadata& DatasetMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("DatasetType"));

    m_datasetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("StatusMessageCode"))
  {
    m_statusMessageCode = DatasetStatusMessageCodeMapper::GetDatasetStatusMessageCodeForName(jsonValue.GetString("StatusMessageCode"));

    m_statusMessageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_statusMessageCodeHasBeenSet)
  {
   payload.WithString("StatusMessageCode", DatasetStatusMessageCodeMapper::GetNameForDatasetStatusMessageCode(m_statusMessageCode));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
