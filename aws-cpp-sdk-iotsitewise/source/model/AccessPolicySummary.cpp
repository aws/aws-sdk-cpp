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

#include <aws/iotsitewise/model/AccessPolicySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AccessPolicySummary::AccessPolicySummary() : 
    m_idHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
}

AccessPolicySummary::AccessPolicySummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPolicySummary& AccessPolicySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetObject("identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permission"))
  {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("permission"));

    m_permissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

    m_lastUpdateDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPolicySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_identityHasBeenSet)
  {
   payload.WithObject("identity", m_identity.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdateDateHasBeenSet)
  {
   payload.WithDouble("lastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
