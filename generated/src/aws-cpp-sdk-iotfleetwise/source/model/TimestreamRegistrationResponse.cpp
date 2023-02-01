/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimestreamRegistrationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

TimestreamRegistrationResponse::TimestreamRegistrationResponse() : 
    m_timestreamDatabaseNameHasBeenSet(false),
    m_timestreamTableNameHasBeenSet(false),
    m_timestreamDatabaseArnHasBeenSet(false),
    m_timestreamTableArnHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

TimestreamRegistrationResponse::TimestreamRegistrationResponse(JsonView jsonValue) : 
    m_timestreamDatabaseNameHasBeenSet(false),
    m_timestreamTableNameHasBeenSet(false),
    m_timestreamDatabaseArnHasBeenSet(false),
    m_timestreamTableArnHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamRegistrationResponse& TimestreamRegistrationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestreamDatabaseName"))
  {
    m_timestreamDatabaseName = jsonValue.GetString("timestreamDatabaseName");

    m_timestreamDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestreamTableName"))
  {
    m_timestreamTableName = jsonValue.GetString("timestreamTableName");

    m_timestreamTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestreamDatabaseArn"))
  {
    m_timestreamDatabaseArn = jsonValue.GetString("timestreamDatabaseArn");

    m_timestreamDatabaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestreamTableArn"))
  {
    m_timestreamTableArn = jsonValue.GetString("timestreamTableArn");

    m_timestreamTableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("registrationStatus"));

    m_registrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestreamRegistrationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_timestreamDatabaseNameHasBeenSet)
  {
   payload.WithString("timestreamDatabaseName", m_timestreamDatabaseName);

  }

  if(m_timestreamTableNameHasBeenSet)
  {
   payload.WithString("timestreamTableName", m_timestreamTableName);

  }

  if(m_timestreamDatabaseArnHasBeenSet)
  {
   payload.WithString("timestreamDatabaseArn", m_timestreamDatabaseArn);

  }

  if(m_timestreamTableArnHasBeenSet)
  {
   payload.WithString("timestreamTableArn", m_timestreamTableArn);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
