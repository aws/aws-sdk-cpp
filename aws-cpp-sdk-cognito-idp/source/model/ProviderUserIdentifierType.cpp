/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ProviderUserIdentifierType::ProviderUserIdentifierType(const JsonValue& jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_providerAttributeNameHasBeenSet(false),
    m_providerAttributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderUserIdentifierType& ProviderUserIdentifierType::operator =(const JsonValue& jsonValue)
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
