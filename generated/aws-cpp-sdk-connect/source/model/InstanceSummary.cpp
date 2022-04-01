/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceSummary.h>
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

InstanceSummary::InstanceSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_identityManagementType(DirectoryType::NOT_SET),
    m_identityManagementTypeHasBeenSet(false),
    m_instanceAliasHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_instanceStatus(InstanceStatus::NOT_SET),
    m_instanceStatusHasBeenSet(false),
    m_inboundCallsEnabled(false),
    m_inboundCallsEnabledHasBeenSet(false),
    m_outboundCallsEnabled(false),
    m_outboundCallsEnabledHasBeenSet(false)
{
}

InstanceSummary::InstanceSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_identityManagementType(DirectoryType::NOT_SET),
    m_identityManagementTypeHasBeenSet(false),
    m_instanceAliasHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_instanceStatus(InstanceStatus::NOT_SET),
    m_instanceStatusHasBeenSet(false),
    m_inboundCallsEnabled(false),
    m_inboundCallsEnabledHasBeenSet(false),
    m_outboundCallsEnabled(false),
    m_outboundCallsEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSummary& InstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityManagementType"))
  {
    m_identityManagementType = DirectoryTypeMapper::GetDirectoryTypeForName(jsonValue.GetString("IdentityManagementType"));

    m_identityManagementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceAlias"))
  {
    m_instanceAlias = jsonValue.GetString("InstanceAlias");

    m_instanceAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceStatus"))
  {
    m_instanceStatus = InstanceStatusMapper::GetInstanceStatusForName(jsonValue.GetString("InstanceStatus"));

    m_instanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboundCallsEnabled"))
  {
    m_inboundCallsEnabled = jsonValue.GetBool("InboundCallsEnabled");

    m_inboundCallsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundCallsEnabled"))
  {
    m_outboundCallsEnabled = jsonValue.GetBool("OutboundCallsEnabled");

    m_outboundCallsEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_identityManagementTypeHasBeenSet)
  {
   payload.WithString("IdentityManagementType", DirectoryTypeMapper::GetNameForDirectoryType(m_identityManagementType));
  }

  if(m_instanceAliasHasBeenSet)
  {
   payload.WithString("InstanceAlias", m_instanceAlias);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_instanceStatusHasBeenSet)
  {
   payload.WithString("InstanceStatus", InstanceStatusMapper::GetNameForInstanceStatus(m_instanceStatus));
  }

  if(m_inboundCallsEnabledHasBeenSet)
  {
   payload.WithBool("InboundCallsEnabled", m_inboundCallsEnabled);

  }

  if(m_outboundCallsEnabledHasBeenSet)
  {
   payload.WithBool("OutboundCallsEnabled", m_outboundCallsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
