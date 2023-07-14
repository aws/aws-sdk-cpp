/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ShareResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

ShareResult::ShareResult() : 
    m_principalIdHasBeenSet(false),
    m_inviteePrincipalIdHasBeenSet(false),
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false),
    m_status(ShareStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareIdHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ShareResult::ShareResult(JsonView jsonValue) : 
    m_principalIdHasBeenSet(false),
    m_inviteePrincipalIdHasBeenSet(false),
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false),
    m_status(ShareStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareIdHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ShareResult& ShareResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InviteePrincipalId"))
  {
    m_inviteePrincipalId = jsonValue.GetString("InviteePrincipalId");

    m_inviteePrincipalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusTypeMapper::GetShareStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareId"))
  {
    m_shareId = jsonValue.GetString("ShareId");

    m_shareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareResult::Jsonize() const
{
  JsonValue payload;

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_inviteePrincipalIdHasBeenSet)
  {
   payload.WithString("InviteePrincipalId", m_inviteePrincipalId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoleTypeMapper::GetNameForRoleType(m_role));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ShareStatusTypeMapper::GetNameForShareStatusType(m_status));
  }

  if(m_shareIdHasBeenSet)
  {
   payload.WithString("ShareId", m_shareId);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
