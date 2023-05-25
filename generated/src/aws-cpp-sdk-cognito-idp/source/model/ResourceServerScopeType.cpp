/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ResourceServerScopeType::ResourceServerScopeType(JsonView jsonValue) : 
    m_scopeNameHasBeenSet(false),
    m_scopeDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceServerScopeType& ResourceServerScopeType::operator =(JsonView jsonValue)
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
