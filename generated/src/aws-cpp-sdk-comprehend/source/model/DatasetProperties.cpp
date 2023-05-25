/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DatasetProperties::DatasetProperties() : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_datasetS3UriHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_numberOfDocuments(0),
    m_numberOfDocumentsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

DatasetProperties::DatasetProperties(JsonView jsonValue) : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_datasetS3UriHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_numberOfDocuments(0),
    m_numberOfDocumentsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetProperties& DatasetProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("DatasetType"));

    m_datasetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetS3Uri"))
  {
    m_datasetS3Uri = jsonValue.GetString("DatasetS3Uri");

    m_datasetS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDocuments"))
  {
    m_numberOfDocuments = jsonValue.GetInt64("NumberOfDocuments");

    m_numberOfDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetProperties::Jsonize() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_datasetS3UriHasBeenSet)
  {
   payload.WithString("DatasetS3Uri", m_datasetS3Uri);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_numberOfDocumentsHasBeenSet)
  {
   payload.WithInt64("NumberOfDocuments", m_numberOfDocuments);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
