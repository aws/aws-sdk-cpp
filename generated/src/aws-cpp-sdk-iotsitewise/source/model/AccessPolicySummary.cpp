/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
