/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/model/CognitoIdentityProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

CognitoIdentityProvider::CognitoIdentityProvider() : 
    m_providerNameHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

CognitoIdentityProvider::CognitoIdentityProvider(const JsonValue& jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoIdentityProvider& CognitoIdentityProvider::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ProviderName"))
  {
    m_providerName = jsonValue.GetString("ProviderName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoIdentityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws