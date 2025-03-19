/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ManagedLoginBrandingType.h>
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

ManagedLoginBrandingType::ManagedLoginBrandingType(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedLoginBrandingType& ManagedLoginBrandingType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManagedLoginBrandingId"))
  {
    m_managedLoginBrandingId = jsonValue.GetString("ManagedLoginBrandingId");
    m_managedLoginBrandingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");
    m_userPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseCognitoProvidedValues"))
  {
    m_useCognitoProvidedValues = jsonValue.GetBool("UseCognitoProvidedValues");
    m_useCognitoProvidedValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");
    m_settingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Assets"))
  {
    Aws::Utils::Array<JsonView> assetsJsonList = jsonValue.GetArray("Assets");
    for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
    {
      m_assets.push_back(assetsJsonList[assetsIndex].AsObject());
    }
    m_assetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedLoginBrandingType::Jsonize() const
{
  JsonValue payload;

  if(m_managedLoginBrandingIdHasBeenSet)
  {
   payload.WithString("ManagedLoginBrandingId", m_managedLoginBrandingId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_useCognitoProvidedValuesHasBeenSet)
  {
   payload.WithBool("UseCognitoProvidedValues", m_useCognitoProvidedValues);

  }

  if(m_settingsHasBeenSet)
  {
    if(!m_settings.View().IsNull())
    {
       payload.WithObject("Settings", JsonValue(m_settings.View()));
    }
  }

  if(m_assetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetsJsonList(m_assets.size());
   for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
   {
     assetsJsonList[assetsIndex].AsObject(m_assets[assetsIndex].Jsonize());
   }
   payload.WithArray("Assets", std::move(assetsJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
