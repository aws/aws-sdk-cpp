/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AuthenticationSummary.h>
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

AuthenticationSummary::AuthenticationSummary() : 
    m_providersHasBeenSet(false),
    m_samlConfigurationStatus(SamlConfigurationStatus::NOT_SET),
    m_samlConfigurationStatusHasBeenSet(false)
{
}

AuthenticationSummary::AuthenticationSummary(JsonView jsonValue) : 
    m_providersHasBeenSet(false),
    m_samlConfigurationStatus(SamlConfigurationStatus::NOT_SET),
    m_samlConfigurationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationSummary& AuthenticationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providers"))
  {
    Aws::Utils::Array<JsonView> providersJsonList = jsonValue.GetArray("providers");
    for(unsigned providersIndex = 0; providersIndex < providersJsonList.GetLength(); ++providersIndex)
    {
      m_providers.push_back(AuthenticationProviderTypesMapper::GetAuthenticationProviderTypesForName(providersJsonList[providersIndex].AsString()));
    }
    m_providersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("samlConfigurationStatus"))
  {
    m_samlConfigurationStatus = SamlConfigurationStatusMapper::GetSamlConfigurationStatusForName(jsonValue.GetString("samlConfigurationStatus"));

    m_samlConfigurationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_providersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> providersJsonList(m_providers.size());
   for(unsigned providersIndex = 0; providersIndex < providersJsonList.GetLength(); ++providersIndex)
   {
     providersJsonList[providersIndex].AsString(AuthenticationProviderTypesMapper::GetNameForAuthenticationProviderTypes(m_providers[providersIndex]));
   }
   payload.WithArray("providers", std::move(providersJsonList));

  }

  if(m_samlConfigurationStatusHasBeenSet)
  {
   payload.WithString("samlConfigurationStatus", SamlConfigurationStatusMapper::GetNameForSamlConfigurationStatus(m_samlConfigurationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
