/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AuthenticationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

AuthenticationDescription::AuthenticationDescription() : 
    m_awsSsoHasBeenSet(false),
    m_providersHasBeenSet(false),
    m_samlHasBeenSet(false)
{
}

AuthenticationDescription::AuthenticationDescription(JsonView jsonValue) : 
    m_awsSsoHasBeenSet(false),
    m_providersHasBeenSet(false),
    m_samlHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationDescription& AuthenticationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsSso"))
  {
    m_awsSso = jsonValue.GetObject("awsSso");

    m_awsSsoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providers"))
  {
    Aws::Utils::Array<JsonView> providersJsonList = jsonValue.GetArray("providers");
    for(unsigned providersIndex = 0; providersIndex < providersJsonList.GetLength(); ++providersIndex)
    {
      m_providers.push_back(AuthenticationProviderTypesMapper::GetAuthenticationProviderTypesForName(providersJsonList[providersIndex].AsString()));
    }
    m_providersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("saml"))
  {
    m_saml = jsonValue.GetObject("saml");

    m_samlHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_awsSsoHasBeenSet)
  {
   payload.WithObject("awsSso", m_awsSso.Jsonize());

  }

  if(m_providersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> providersJsonList(m_providers.size());
   for(unsigned providersIndex = 0; providersIndex < providersJsonList.GetLength(); ++providersIndex)
   {
     providersJsonList[providersIndex].AsString(AuthenticationProviderTypesMapper::GetNameForAuthenticationProviderTypes(m_providers[providersIndex]));
   }
   payload.WithArray("providers", std::move(providersJsonList));

  }

  if(m_samlHasBeenSet)
  {
   payload.WithObject("saml", m_saml.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
