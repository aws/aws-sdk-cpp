/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/IdentityProviderType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

IdentityProviderType::IdentityProviderType() : 
    m_userPoolIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_providerType(IdentityProviderTypeType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_providerDetailsHasBeenSet(false),
    m_attributeMappingHasBeenSet(false),
    m_idpIdentifiersHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

IdentityProviderType::IdentityProviderType(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_providerType(IdentityProviderTypeType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_providerDetailsHasBeenSet(false),
    m_attributeMappingHasBeenSet(false),
    m_idpIdentifiersHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderType& IdentityProviderType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderName"))
  {
    m_providerName = jsonValue.GetString("ProviderName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = IdentityProviderTypeTypeMapper::GetIdentityProviderTypeTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderDetails"))
  {
    Aws::Map<Aws::String, JsonView> providerDetailsJsonMap = jsonValue.GetObject("ProviderDetails").GetAllObjects();
    for(auto& providerDetailsItem : providerDetailsJsonMap)
    {
      m_providerDetails[providerDetailsItem.first] = providerDetailsItem.second.AsString();
    }
    m_providerDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeMapping"))
  {
    Aws::Map<Aws::String, JsonView> attributeMappingJsonMap = jsonValue.GetObject("AttributeMapping").GetAllObjects();
    for(auto& attributeMappingItem : attributeMappingJsonMap)
    {
      m_attributeMapping[attributeMappingItem.first] = attributeMappingItem.second.AsString();
    }
    m_attributeMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdpIdentifiers"))
  {
    Aws::Utils::Array<JsonView> idpIdentifiersJsonList = jsonValue.GetArray("IdpIdentifiers");
    for(unsigned idpIdentifiersIndex = 0; idpIdentifiersIndex < idpIdentifiersJsonList.GetLength(); ++idpIdentifiersIndex)
    {
      m_idpIdentifiers.push_back(idpIdentifiersJsonList[idpIdentifiersIndex].AsString());
    }
    m_idpIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", IdentityProviderTypeTypeMapper::GetNameForIdentityProviderTypeType(m_providerType));
  }

  if(m_providerDetailsHasBeenSet)
  {
   JsonValue providerDetailsJsonMap;
   for(auto& providerDetailsItem : m_providerDetails)
   {
     providerDetailsJsonMap.WithString(providerDetailsItem.first, providerDetailsItem.second);
   }
   payload.WithObject("ProviderDetails", std::move(providerDetailsJsonMap));

  }

  if(m_attributeMappingHasBeenSet)
  {
   JsonValue attributeMappingJsonMap;
   for(auto& attributeMappingItem : m_attributeMapping)
   {
     attributeMappingJsonMap.WithString(attributeMappingItem.first, attributeMappingItem.second);
   }
   payload.WithObject("AttributeMapping", std::move(attributeMappingJsonMap));

  }

  if(m_idpIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idpIdentifiersJsonList(m_idpIdentifiers.size());
   for(unsigned idpIdentifiersIndex = 0; idpIdentifiersIndex < idpIdentifiersJsonList.GetLength(); ++idpIdentifiersIndex)
   {
     idpIdentifiersJsonList[idpIdentifiersIndex].AsString(m_idpIdentifiers[idpIdentifiersIndex]);
   }
   payload.WithArray("IdpIdentifiers", std::move(idpIdentifiersJsonList));

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
