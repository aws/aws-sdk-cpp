/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendStoragePermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendStoragePermissions::BackendStoragePermissions() : 
    m_authenticatedHasBeenSet(false),
    m_unAuthenticatedHasBeenSet(false)
{
}

BackendStoragePermissions::BackendStoragePermissions(JsonView jsonValue) : 
    m_authenticatedHasBeenSet(false),
    m_unAuthenticatedHasBeenSet(false)
{
  *this = jsonValue;
}

BackendStoragePermissions& BackendStoragePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticated"))
  {
    Aws::Utils::Array<JsonView> authenticatedJsonList = jsonValue.GetArray("authenticated");
    for(unsigned authenticatedIndex = 0; authenticatedIndex < authenticatedJsonList.GetLength(); ++authenticatedIndex)
    {
      m_authenticated.push_back(AuthenticatedElementMapper::GetAuthenticatedElementForName(authenticatedJsonList[authenticatedIndex].AsString()));
    }
    m_authenticatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unAuthenticated"))
  {
    Aws::Utils::Array<JsonView> unAuthenticatedJsonList = jsonValue.GetArray("unAuthenticated");
    for(unsigned unAuthenticatedIndex = 0; unAuthenticatedIndex < unAuthenticatedJsonList.GetLength(); ++unAuthenticatedIndex)
    {
      m_unAuthenticated.push_back(UnAuthenticatedElementMapper::GetUnAuthenticatedElementForName(unAuthenticatedJsonList[unAuthenticatedIndex].AsString()));
    }
    m_unAuthenticatedHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendStoragePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_authenticatedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authenticatedJsonList(m_authenticated.size());
   for(unsigned authenticatedIndex = 0; authenticatedIndex < authenticatedJsonList.GetLength(); ++authenticatedIndex)
   {
     authenticatedJsonList[authenticatedIndex].AsString(AuthenticatedElementMapper::GetNameForAuthenticatedElement(m_authenticated[authenticatedIndex]));
   }
   payload.WithArray("authenticated", std::move(authenticatedJsonList));

  }

  if(m_unAuthenticatedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unAuthenticatedJsonList(m_unAuthenticated.size());
   for(unsigned unAuthenticatedIndex = 0; unAuthenticatedIndex < unAuthenticatedJsonList.GetLength(); ++unAuthenticatedIndex)
   {
     unAuthenticatedJsonList[unAuthenticatedIndex].AsString(UnAuthenticatedElementMapper::GetNameForUnAuthenticatedElement(m_unAuthenticated[unAuthenticatedIndex]));
   }
   payload.WithArray("unAuthenticated", std::move(unAuthenticatedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
