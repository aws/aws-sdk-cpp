/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Application::Application() : 
    m_namespaceHasBeenSet(false),
    m_applicationPermissionsHasBeenSet(false)
{
}

Application::Application(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_applicationPermissionsHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationPermissions"))
  {
    Aws::Utils::Array<JsonView> applicationPermissionsJsonList = jsonValue.GetArray("ApplicationPermissions");
    for(unsigned applicationPermissionsIndex = 0; applicationPermissionsIndex < applicationPermissionsJsonList.GetLength(); ++applicationPermissionsIndex)
    {
      m_applicationPermissions.push_back(applicationPermissionsJsonList[applicationPermissionsIndex].AsString());
    }
    m_applicationPermissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_applicationPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationPermissionsJsonList(m_applicationPermissions.size());
   for(unsigned applicationPermissionsIndex = 0; applicationPermissionsIndex < applicationPermissionsJsonList.GetLength(); ++applicationPermissionsIndex)
   {
     applicationPermissionsJsonList[applicationPermissionsIndex].AsString(m_applicationPermissions[applicationPermissionsIndex]);
   }
   payload.WithArray("ApplicationPermissions", std::move(applicationPermissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
