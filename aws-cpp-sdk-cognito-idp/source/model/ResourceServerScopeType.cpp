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

#include <aws/cognito-idp/model/ResourceServerScopeType.h>
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

ResourceServerScopeType::ResourceServerScopeType() : 
    m_scopeNameHasBeenSet(false),
    m_scopeDescriptionHasBeenSet(false)
{
}

ResourceServerScopeType::ResourceServerScopeType(const JsonValue& jsonValue) : 
    m_scopeNameHasBeenSet(false),
    m_scopeDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceServerScopeType& ResourceServerScopeType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ScopeName"))
  {
    m_scopeName = jsonValue.GetString("ScopeName");

    m_scopeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScopeDescription"))
  {
    m_scopeDescription = jsonValue.GetString("ScopeDescription");

    m_scopeDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceServerScopeType::Jsonize() const
{
  JsonValue payload;

  if(m_scopeNameHasBeenSet)
  {
   payload.WithString("ScopeName", m_scopeName);

  }

  if(m_scopeDescriptionHasBeenSet)
  {
   payload.WithString("ScopeDescription", m_scopeDescription);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
