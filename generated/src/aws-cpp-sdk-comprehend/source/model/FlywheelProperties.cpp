/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelProperties.h>
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

FlywheelProperties::FlywheelProperties() : 
    m_flywheelArnHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_taskConfigHasBeenSet(false),
    m_dataLakeS3UriHasBeenSet(false),
    m_dataSecurityConfigHasBeenSet(false),
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

FlywheelProperties::FlywheelProperties(JsonView jsonValue) : 
    m_flywheelArnHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_taskConfigHasBeenSet(false),
    m_dataLakeS3UriHasBeenSet(false),
    m_dataSecurityConfigHasBeenSet(false),
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

FlywheelProperties& FlywheelProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskConfig"))
  {
    m_taskConfig = jsonValue.GetObject("TaskConfig");

    m_taskConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLakeS3Uri"))
  {
    m_dataLakeS3Uri = jsonValue.GetString("DataLakeS3Uri");

    m_dataLakeS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSecurityConfig"))
  {
    m_dataSecurityConfig = jsonValue.GetObject("DataSecurityConfig");

    m_dataSecurityConfigHasBeenSet = true;
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

JsonValue FlywheelProperties::Jsonize() const
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

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_taskConfigHasBeenSet)
  {
   payload.WithObject("TaskConfig", m_taskConfig.Jsonize());

  }

  if(m_dataLakeS3UriHasBeenSet)
  {
   payload.WithString("DataLakeS3Uri", m_dataLakeS3Uri);

  }

  if(m_dataSecurityConfigHasBeenSet)
  {
   payload.WithObject("DataSecurityConfig", m_dataSecurityConfig.Jsonize());

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
