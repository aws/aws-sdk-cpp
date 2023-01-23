/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorProfileConfig.h>
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

ConnectorProfileConfig::ConnectorProfileConfig() : 
    m_connectorProfilePropertiesHasBeenSet(false),
    m_connectorProfileCredentialsHasBeenSet(false)
{
}

ConnectorProfileConfig::ConnectorProfileConfig(JsonView jsonValue) : 
    m_connectorProfilePropertiesHasBeenSet(false),
    m_connectorProfileCredentialsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorProfileConfig& ConnectorProfileConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorProfileProperties"))
  {
    m_connectorProfileProperties = jsonValue.GetObject("connectorProfileProperties");

    m_connectorProfilePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProfileCredentials"))
  {
    m_connectorProfileCredentials = jsonValue.GetObject("connectorProfileCredentials");

    m_connectorProfileCredentialsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorProfileConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectorProfilePropertiesHasBeenSet)
  {
   payload.WithObject("connectorProfileProperties", m_connectorProfileProperties.Jsonize());

  }

  if(m_connectorProfileCredentialsHasBeenSet)
  {
   payload.WithObject("connectorProfileCredentials", m_connectorProfileCredentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
