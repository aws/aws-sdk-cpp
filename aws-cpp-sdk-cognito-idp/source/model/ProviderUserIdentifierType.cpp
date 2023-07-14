/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ProviderUserIdentifierType.h>
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

ProviderUserIdentifierType::ProviderUserIdentifierType() : 
    m_providerNameHasBeenSet(false),
    m_providerAttributeNameHasBeenSet(false),
    m_providerAttributeValueHasBeenSet(false)
{
}

ProviderUserIdentifierType::ProviderUserIdentifierType(JsonView jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_providerAttributeNameHasBeenSet(false),
    m_providerAttributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderUserIdentifierType& ProviderUserIdentifierType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProviderName"))
  {
    m_providerName = jsonValue.GetString("ProviderName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderAttributeName"))
  {
    m_providerAttributeName = jsonValue.GetString("ProviderAttributeName");

    m_providerAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderAttributeValue"))
  {
    m_providerAttributeValue = jsonValue.GetString("ProviderAttributeValue");

    m_providerAttributeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ProviderUserIdentifierType::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_providerAttributeNameHasBeenSet)
  {
   payload.WithString("ProviderAttributeName", m_providerAttributeName);

  }

  if(m_providerAttributeValueHasBeenSet)
  {
   payload.WithString("ProviderAttributeValue", m_providerAttributeValue);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
