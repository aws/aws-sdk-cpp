/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/CreateDelegationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

CreateDelegationRequest::CreateDelegationRequest() : 
    m_commentHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false)
{
}

CreateDelegationRequest::CreateDelegationRequest(JsonView jsonValue) : 
    m_commentHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CreateDelegationRequest& CreateDelegationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetId"))
  {
    m_controlSetId = jsonValue.GetString("controlSetId");

    m_controlSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleType"))
  {
    m_roleType = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("roleType"));

    m_roleTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateDelegationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_controlSetIdHasBeenSet)
  {
   payload.WithString("controlSetId", m_controlSetId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_roleTypeHasBeenSet)
  {
   payload.WithString("roleType", RoleTypeMapper::GetNameForRoleType(m_roleType));
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
