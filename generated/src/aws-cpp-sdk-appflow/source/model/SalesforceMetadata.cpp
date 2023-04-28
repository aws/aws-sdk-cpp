/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceMetadata.h>
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

SalesforceMetadata::SalesforceMetadata() : 
    m_oAuthScopesHasBeenSet(false),
    m_dataTransferApisHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false)
{
}

SalesforceMetadata::SalesforceMetadata(JsonView jsonValue) : 
    m_oAuthScopesHasBeenSet(false),
    m_dataTransferApisHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceMetadata& SalesforceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuthScopes"))
  {
    Aws::Utils::Array<JsonView> oAuthScopesJsonList = jsonValue.GetArray("oAuthScopes");
    for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
    {
      m_oAuthScopes.push_back(oAuthScopesJsonList[oAuthScopesIndex].AsString());
    }
    m_oAuthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTransferApis"))
  {
    Aws::Utils::Array<JsonView> dataTransferApisJsonList = jsonValue.GetArray("dataTransferApis");
    for(unsigned dataTransferApisIndex = 0; dataTransferApisIndex < dataTransferApisJsonList.GetLength(); ++dataTransferApisIndex)
    {
      m_dataTransferApis.push_back(SalesforceDataTransferApiMapper::GetSalesforceDataTransferApiForName(dataTransferApisJsonList[dataTransferApisIndex].AsString()));
    }
    m_dataTransferApisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oauth2GrantTypesSupported"))
  {
    Aws::Utils::Array<JsonView> oauth2GrantTypesSupportedJsonList = jsonValue.GetArray("oauth2GrantTypesSupported");
    for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
    {
      m_oauth2GrantTypesSupported.push_back(OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString()));
    }
    m_oauth2GrantTypesSupportedHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oAuthScopesJsonList(m_oAuthScopes.size());
   for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
   {
     oAuthScopesJsonList[oAuthScopesIndex].AsString(m_oAuthScopes[oAuthScopesIndex]);
   }
   payload.WithArray("oAuthScopes", std::move(oAuthScopesJsonList));

  }

  if(m_dataTransferApisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataTransferApisJsonList(m_dataTransferApis.size());
   for(unsigned dataTransferApisIndex = 0; dataTransferApisIndex < dataTransferApisJsonList.GetLength(); ++dataTransferApisIndex)
   {
     dataTransferApisJsonList[dataTransferApisIndex].AsString(SalesforceDataTransferApiMapper::GetNameForSalesforceDataTransferApi(m_dataTransferApis[dataTransferApisIndex]));
   }
   payload.WithArray("dataTransferApis", std::move(dataTransferApisJsonList));

  }

  if(m_oauth2GrantTypesSupportedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oauth2GrantTypesSupportedJsonList(m_oauth2GrantTypesSupported.size());
   for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
   {
     oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString(OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oauth2GrantTypesSupported[oauth2GrantTypesSupportedIndex]));
   }
   payload.WithArray("oauth2GrantTypesSupported", std::move(oauth2GrantTypesSupportedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
