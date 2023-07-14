/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/FederationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

FederationParameters::FederationParameters() : 
    m_samlMetadataDocumentHasBeenSet(false),
    m_samlMetadataURLHasBeenSet(false),
    m_applicationCallBackURLHasBeenSet(false),
    m_federationURNHasBeenSet(false),
    m_federationProviderNameHasBeenSet(false),
    m_attributeMapHasBeenSet(false)
{
}

FederationParameters::FederationParameters(JsonView jsonValue) : 
    m_samlMetadataDocumentHasBeenSet(false),
    m_samlMetadataURLHasBeenSet(false),
    m_applicationCallBackURLHasBeenSet(false),
    m_federationURNHasBeenSet(false),
    m_federationProviderNameHasBeenSet(false),
    m_attributeMapHasBeenSet(false)
{
  *this = jsonValue;
}

FederationParameters& FederationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("samlMetadataDocument"))
  {
    m_samlMetadataDocument = jsonValue.GetString("samlMetadataDocument");

    m_samlMetadataDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("samlMetadataURL"))
  {
    m_samlMetadataURL = jsonValue.GetString("samlMetadataURL");

    m_samlMetadataURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationCallBackURL"))
  {
    m_applicationCallBackURL = jsonValue.GetString("applicationCallBackURL");

    m_applicationCallBackURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("federationURN"))
  {
    m_federationURN = jsonValue.GetString("federationURN");

    m_federationURNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("federationProviderName"))
  {
    m_federationProviderName = jsonValue.GetString("federationProviderName");

    m_federationProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributeMap"))
  {
    Aws::Map<Aws::String, JsonView> attributeMapJsonMap = jsonValue.GetObject("attributeMap").GetAllObjects();
    for(auto& attributeMapItem : attributeMapJsonMap)
    {
      m_attributeMap[attributeMapItem.first] = attributeMapItem.second.AsString();
    }
    m_attributeMapHasBeenSet = true;
  }

  return *this;
}

JsonValue FederationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_samlMetadataDocumentHasBeenSet)
  {
   payload.WithString("samlMetadataDocument", m_samlMetadataDocument);

  }

  if(m_samlMetadataURLHasBeenSet)
  {
   payload.WithString("samlMetadataURL", m_samlMetadataURL);

  }

  if(m_applicationCallBackURLHasBeenSet)
  {
   payload.WithString("applicationCallBackURL", m_applicationCallBackURL);

  }

  if(m_federationURNHasBeenSet)
  {
   payload.WithString("federationURN", m_federationURN);

  }

  if(m_federationProviderNameHasBeenSet)
  {
   payload.WithString("federationProviderName", m_federationProviderName);

  }

  if(m_attributeMapHasBeenSet)
  {
   JsonValue attributeMapJsonMap;
   for(auto& attributeMapItem : m_attributeMap)
   {
     attributeMapJsonMap.WithString(attributeMapItem.first, attributeMapItem.second);
   }
   payload.WithObject("attributeMap", std::move(attributeMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
