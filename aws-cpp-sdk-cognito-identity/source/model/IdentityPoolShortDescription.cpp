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
#include <aws/cognito-identity/model/IdentityPoolShortDescription.h>
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

IdentityPoolShortDescription::IdentityPoolShortDescription() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityPoolNameHasBeenSet(false)
{
}

IdentityPoolShortDescription::IdentityPoolShortDescription(const JsonValue& jsonValue) : 
    m_identityPoolIdHasBeenSet(false),
    m_identityPoolNameHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityPoolShortDescription& IdentityPoolShortDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

    m_identityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityPoolName"))
  {
    m_identityPoolName = jsonValue.GetString("IdentityPoolName");

    m_identityPoolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityPoolShortDescription::Jsonize() const
{
  JsonValue payload;

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_identityPoolNameHasBeenSet)
  {
   payload.WithString("IdentityPoolName", m_identityPoolName);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws