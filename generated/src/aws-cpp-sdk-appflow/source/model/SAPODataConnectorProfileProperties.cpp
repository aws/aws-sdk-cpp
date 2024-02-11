/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataConnectorProfileProperties.h>
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

SAPODataConnectorProfileProperties::SAPODataConnectorProfileProperties() : 
    m_applicationHostUrlHasBeenSet(false),
    m_applicationServicePathHasBeenSet(false),
    m_portNumber(0),
    m_portNumberHasBeenSet(false),
    m_clientNumberHasBeenSet(false),
    m_logonLanguageHasBeenSet(false),
    m_privateLinkServiceNameHasBeenSet(false),
    m_oAuthPropertiesHasBeenSet(false),
    m_disableSSO(false),
    m_disableSSOHasBeenSet(false)
{
}

SAPODataConnectorProfileProperties::SAPODataConnectorProfileProperties(JsonView jsonValue) : 
    m_applicationHostUrlHasBeenSet(false),
    m_applicationServicePathHasBeenSet(false),
    m_portNumber(0),
    m_portNumberHasBeenSet(false),
    m_clientNumberHasBeenSet(false),
    m_logonLanguageHasBeenSet(false),
    m_privateLinkServiceNameHasBeenSet(false),
    m_oAuthPropertiesHasBeenSet(false),
    m_disableSSO(false),
    m_disableSSOHasBeenSet(false)
{
  *this = jsonValue;
}

SAPODataConnectorProfileProperties& SAPODataConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationHostUrl"))
  {
    m_applicationHostUrl = jsonValue.GetString("applicationHostUrl");

    m_applicationHostUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationServicePath"))
  {
    m_applicationServicePath = jsonValue.GetString("applicationServicePath");

    m_applicationServicePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portNumber"))
  {
    m_portNumber = jsonValue.GetInteger("portNumber");

    m_portNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientNumber"))
  {
    m_clientNumber = jsonValue.GetString("clientNumber");

    m_clientNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logonLanguage"))
  {
    m_logonLanguage = jsonValue.GetString("logonLanguage");

    m_logonLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateLinkServiceName"))
  {
    m_privateLinkServiceName = jsonValue.GetString("privateLinkServiceName");

    m_privateLinkServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuthProperties"))
  {
    m_oAuthProperties = jsonValue.GetObject("oAuthProperties");

    m_oAuthPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disableSSO"))
  {
    m_disableSSO = jsonValue.GetBool("disableSSO");

    m_disableSSOHasBeenSet = true;
  }

  return *this;
}

JsonValue SAPODataConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_applicationHostUrlHasBeenSet)
  {
   payload.WithString("applicationHostUrl", m_applicationHostUrl);

  }

  if(m_applicationServicePathHasBeenSet)
  {
   payload.WithString("applicationServicePath", m_applicationServicePath);

  }

  if(m_portNumberHasBeenSet)
  {
   payload.WithInteger("portNumber", m_portNumber);

  }

  if(m_clientNumberHasBeenSet)
  {
   payload.WithString("clientNumber", m_clientNumber);

  }

  if(m_logonLanguageHasBeenSet)
  {
   payload.WithString("logonLanguage", m_logonLanguage);

  }

  if(m_privateLinkServiceNameHasBeenSet)
  {
   payload.WithString("privateLinkServiceName", m_privateLinkServiceName);

  }

  if(m_oAuthPropertiesHasBeenSet)
  {
   payload.WithObject("oAuthProperties", m_oAuthProperties.Jsonize());

  }

  if(m_disableSSOHasBeenSet)
  {
   payload.WithBool("disableSSO", m_disableSSO);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
