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
    m_isSandboxEnvironmentHasBeenSet(false),
    m_usePrivateLinkForMetadataAndAuthorization(false),
    m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet(false)
{
}

SalesforceConnectorProfileProperties::SalesforceConnectorProfileProperties(JsonView jsonValue) : 
    m_instanceUrlHasBeenSet(false),
    m_isSandboxEnvironment(false),
    m_isSandboxEnvironmentHasBeenSet(false),
    m_usePrivateLinkForMetadataAndAuthorization(false),
    m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet(false)
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

  if(jsonValue.ValueExists("usePrivateLinkForMetadataAndAuthorization"))
  {
    m_usePrivateLinkForMetadataAndAuthorization = jsonValue.GetBool("usePrivateLinkForMetadataAndAuthorization");

    m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet = true;
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

  if(m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet)
  {
   payload.WithBool("usePrivateLinkForMetadataAndAuthorization", m_usePrivateLinkForMetadataAndAuthorization);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
