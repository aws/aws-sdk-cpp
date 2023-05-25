/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelSummary.h>
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

FlywheelSummary::FlywheelSummary() : 
    m_flywheelArnHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataLakeS3UriHasBeenSet(false),
    m_status(FlywheelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_modelType(ModelType::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_latestFlywheelIterationHasBeenSet(false)
{
}

FlywheelSummary::FlywheelSummary(JsonView jsonValue) : 
    m_flywheelArnHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataLakeS3UriHasBeenSet(false),
    m_status(FlywheelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_modelType(ModelType::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_latestFlywheelIterationHasBeenSet(false)
{
  *this = jsonValue;
}

FlywheelSummary& FlywheelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlywheelArn"))
  {
    m_flywheelArn = jsonValue.GetString("FlywheelArn");

    m_flywheelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveModelArn"))
  {
    m_activeModelArn = jsonValue.GetString("ActiveModelArn");

    m_activeModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLakeS3Uri"))
  {
    m_dataLakeS3Uri = jsonValue.GetString("DataLakeS3Uri");

    m_dataLakeS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FlywheelStatusMapper::GetFlywheelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelType"))
  {
    m_modelType = ModelTypeMapper::GetModelTypeForName(jsonValue.GetString("ModelType"));

    m_modelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestFlywheelIteration"))
  {
    m_latestFlywheelIteration = jsonValue.GetString("LatestFlywheelIteration");

    m_latestFlywheelIterationHasBeenSet = true;
  }

  return *this;
}

JsonValue FlywheelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  if(m_activeModelArnHasBeenSet)
  {
   payload.WithString("ActiveModelArn", m_activeModelArn);

  }

  if(m_dataLakeS3UriHasBeenSet)
  {
   payload.WithString("DataLakeS3Uri", m_dataLakeS3Uri);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FlywheelStatusMapper::GetNameForFlywheelStatus(m_status));
  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("ModelType", ModelTypeMapper::GetNameForModelType(m_modelType));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_latestFlywheelIterationHasBeenSet)
  {
   payload.WithString("LatestFlywheelIteration", m_latestFlywheelIteration);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
