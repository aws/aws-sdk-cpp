/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

User::User() : 
    m_idHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserTypeMapper::GetNameForUserType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
