/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ProviderDescription.h>
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

ProviderDescription::ProviderDescription() : 
    m_providerNameHasBeenSet(false),
    m_providerType(IdentityProviderTypeType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

ProviderDescription::ProviderDescription(JsonView jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_providerType(IdentityProviderTypeType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderDescription& ProviderDescription::operator =(JsonView jsonValue)
{
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

JsonValue ProviderDescription::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", IdentityProviderTypeTypeMapper::GetNameForIdentityProviderTypeType(m_providerType));
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
