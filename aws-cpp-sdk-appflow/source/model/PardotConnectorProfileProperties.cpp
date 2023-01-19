/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PardotConnectorProfileProperties.h>
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

PardotConnectorProfileProperties::PardotConnectorProfileProperties() : 
    m_instanceUrlHasBeenSet(false),
    m_isSandboxEnvironment(false),
    m_isSandboxEnvironmentHasBeenSet(false),
    m_businessUnitIdHasBeenSet(false)
{
}

PardotConnectorProfileProperties::PardotConnectorProfileProperties(JsonView jsonValue) : 
    m_instanceUrlHasBeenSet(false),
    m_isSandboxEnvironment(false),
    m_isSandboxEnvironmentHasBeenSet(false),
    m_businessUnitIdHasBeenSet(false)
{
  *this = jsonValue;
}

PardotConnectorProfileProperties& PardotConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceUrl"))
  {
    m_instanceUrl = jsonValue.GetString("instanceUrl");

    m_instanceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSandboxEnvironment"))
  {
    m_isSandboxEnvironment = jsonValue.GetBool("isSandboxEnvironment");

    m_isSandboxEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("businessUnitId"))
  {
    m_businessUnitId = jsonValue.GetString("businessUnitId");

    m_businessUnitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PardotConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_instanceUrlHasBeenSet)
  {
   payload.WithString("instanceUrl", m_instanceUrl);

  }

  if(m_isSandboxEnvironmentHasBeenSet)
  {
   payload.WithBool("isSandboxEnvironment", m_isSandboxEnvironment);

  }

  if(m_businessUnitIdHasBeenSet)
  {
   payload.WithString("businessUnitId", m_businessUnitId);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
