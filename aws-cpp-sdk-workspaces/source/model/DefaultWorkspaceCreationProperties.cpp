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
#include <aws/workspaces/model/DefaultWorkspaceCreationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

DefaultWorkspaceCreationProperties::DefaultWorkspaceCreationProperties() : 
    m_enableWorkDocs(false),
    m_enableWorkDocsHasBeenSet(false),
    m_enableInternetAccess(false),
    m_enableInternetAccessHasBeenSet(false),
    m_defaultOuHasBeenSet(false),
    m_customSecurityGroupIdHasBeenSet(false),
    m_userEnabledAsLocalAdministrator(false),
    m_userEnabledAsLocalAdministratorHasBeenSet(false)
{
}

DefaultWorkspaceCreationProperties::DefaultWorkspaceCreationProperties(const JsonValue& jsonValue) : 
    m_enableWorkDocs(false),
    m_enableWorkDocsHasBeenSet(false),
    m_enableInternetAccess(false),
    m_enableInternetAccessHasBeenSet(false),
    m_defaultOuHasBeenSet(false),
    m_customSecurityGroupIdHasBeenSet(false),
    m_userEnabledAsLocalAdministrator(false),
    m_userEnabledAsLocalAdministratorHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultWorkspaceCreationProperties& DefaultWorkspaceCreationProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EnableWorkDocs"))
  {
    m_enableWorkDocs = jsonValue.GetBool("EnableWorkDocs");

    m_enableWorkDocsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableInternetAccess"))
  {
    m_enableInternetAccess = jsonValue.GetBool("EnableInternetAccess");

    m_enableInternetAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultOu"))
  {
    m_defaultOu = jsonValue.GetString("DefaultOu");

    m_defaultOuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomSecurityGroupId"))
  {
    m_customSecurityGroupId = jsonValue.GetString("CustomSecurityGroupId");

    m_customSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserEnabledAsLocalAdministrator"))
  {
    m_userEnabledAsLocalAdministrator = jsonValue.GetBool("UserEnabledAsLocalAdministrator");

    m_userEnabledAsLocalAdministratorHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultWorkspaceCreationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_enableWorkDocsHasBeenSet)
  {
   payload.WithBool("EnableWorkDocs", m_enableWorkDocs);

  }

  if(m_enableInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableInternetAccess", m_enableInternetAccess);

  }

  if(m_defaultOuHasBeenSet)
  {
   payload.WithString("DefaultOu", m_defaultOu);

  }

  if(m_customSecurityGroupIdHasBeenSet)
  {
   payload.WithString("CustomSecurityGroupId", m_customSecurityGroupId);

  }

  if(m_userEnabledAsLocalAdministratorHasBeenSet)
  {
   payload.WithBool("UserEnabledAsLocalAdministrator", m_userEnabledAsLocalAdministrator);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws