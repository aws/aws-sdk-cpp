/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EndpointProperties.h>
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

EndpointProperties::EndpointProperties() : 
    m_endpointArnHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_desiredModelArnHasBeenSet(false),
    m_desiredInferenceUnits(0),
    m_desiredInferenceUnitsHasBeenSet(false),
    m_currentInferenceUnits(0),
    m_currentInferenceUnitsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_desiredDataAccessRoleArnHasBeenSet(false),
    m_flywheelArnHasBeenSet(false)
{
}

EndpointProperties::EndpointProperties(JsonView jsonValue) : 
    m_endpointArnHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_desiredModelArnHasBeenSet(false),
    m_desiredInferenceUnits(0),
    m_desiredInferenceUnitsHasBeenSet(false),
    m_currentInferenceUnits(0),
    m_currentInferenceUnitsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_desiredDataAccessRoleArnHasBeenSet(false),
    m_flywheelArnHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointProperties& EndpointProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredModelArn"))
  {
    m_desiredModelArn = jsonValue.GetString("DesiredModelArn");

    m_desiredModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredInferenceUnits"))
  {
    m_desiredInferenceUnits = jsonValue.GetInteger("DesiredInferenceUnits");

    m_desiredInferenceUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentInferenceUnits"))
  {
    m_currentInferenceUnits = jsonValue.GetInteger("CurrentInferenceUnits");

    m_currentInferenceUnitsHasBeenSet = true;
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

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredDataAccessRoleArn"))
  {
    m_desiredDataAccessRoleArn = jsonValue.GetString("DesiredDataAccessRoleArn");

    m_desiredDataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlywheelArn"))
  {
    m_flywheelArn = jsonValue.GetString("FlywheelArn");

    m_flywheelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointProperties::Jsonize() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EndpointStatusMapper::GetNameForEndpointStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_desiredModelArnHasBeenSet)
  {
   payload.WithString("DesiredModelArn", m_desiredModelArn);

  }

  if(m_desiredInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("DesiredInferenceUnits", m_desiredInferenceUnits);

  }

  if(m_currentInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("CurrentInferenceUnits", m_currentInferenceUnits);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_desiredDataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DesiredDataAccessRoleArn", m_desiredDataAccessRoleArn);

  }

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
