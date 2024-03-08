/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SingleSignOn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SingleSignOn::SingleSignOn() : 
    m_type(AuthType::NOT_SET),
    m_typeHasBeenSet(false),
    m_userAssignment(UserAssignment::NOT_SET),
    m_userAssignmentHasBeenSet(false)
{
}

SingleSignOn::SingleSignOn(JsonView jsonValue) : 
    m_type(AuthType::NOT_SET),
    m_typeHasBeenSet(false),
    m_userAssignment(UserAssignment::NOT_SET),
    m_userAssignmentHasBeenSet(false)
{
  *this = jsonValue;
}

SingleSignOn& SingleSignOn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAssignment"))
  {
    m_userAssignment = UserAssignmentMapper::GetUserAssignmentForName(jsonValue.GetString("userAssignment"));

    m_userAssignmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleSignOn::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AuthTypeMapper::GetNameForAuthType(m_type));
  }

  if(m_userAssignmentHasBeenSet)
  {
   payload.WithString("userAssignment", UserAssignmentMapper::GetNameForUserAssignment(m_userAssignment));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
