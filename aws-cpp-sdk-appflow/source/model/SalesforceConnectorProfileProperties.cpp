/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceConnectorProfileProperties.h>
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

SalesforceConnectorProfileProperties::SalesforceConnectorProfileProperties() : 
    m_instanceUrlHasBeenSet(false),
    m_isSandboxEnvironment(false),
    m_isSandboxEnvironmentHasBeenSet(false)
{
}

SalesforceConnectorProfileProperties::SalesforceConnectorProfileProperties(JsonView jsonValue) : 
    m_instanceUrlHasBeenSet(false),
    m_isSandboxEnvironment(false),
    m_isSandboxEnvironmentHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceConnectorProfileProperties& SalesforceConnectorProfileProperties::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SalesforceConnectorProfileProperties::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
