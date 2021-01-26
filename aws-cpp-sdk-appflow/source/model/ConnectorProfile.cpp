/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorProfile::ConnectorProfile() : 
    m_connectorProfileArnHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_connectorProfilePropertiesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

ConnectorProfile::ConnectorProfile(JsonView jsonValue) : 
    m_connectorProfileArnHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_connectorProfilePropertiesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorProfile& ConnectorProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorProfileArn"))
  {
    m_connectorProfileArn = jsonValue.GetString("connectorProfileArn");

    m_connectorProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProfileName"))
  {
    m_connectorProfileName = jsonValue.GetString("connectorProfileName");

    m_connectorProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorType"))
  {
    m_connectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("connectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionMode"))
  {
    m_connectionMode = ConnectionModeMapper::GetConnectionModeForName(jsonValue.GetString("connectionMode"));

    m_connectionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsArn"))
  {
    m_credentialsArn = jsonValue.GetString("credentialsArn");

    m_credentialsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProfileProperties"))
  {
    m_connectorProfileProperties = jsonValue.GetObject("connectorProfileProperties");

    m_connectorProfilePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorProfile::Jsonize() const
{
  JsonValue payload;

  if(m_connectorProfileArnHasBeenSet)
  {
   payload.WithString("connectorProfileArn", m_connectorProfileArn);

  }

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectionModeHasBeenSet)
  {
   payload.WithString("connectionMode", ConnectionModeMapper::GetNameForConnectionMode(m_connectionMode));
  }

  if(m_credentialsArnHasBeenSet)
  {
   payload.WithString("credentialsArn", m_credentialsArn);

  }

  if(m_connectorProfilePropertiesHasBeenSet)
  {
   payload.WithObject("connectorProfileProperties", m_connectorProfileProperties.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
