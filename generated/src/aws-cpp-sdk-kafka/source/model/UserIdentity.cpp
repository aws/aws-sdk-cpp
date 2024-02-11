/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UserIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

UserIdentity::UserIdentity() : 
    m_type(UserIdentityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

UserIdentity::UserIdentity(JsonView jsonValue) : 
    m_type(UserIdentityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentity& UserIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = UserIdentityTypeMapper::GetUserIdentityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserIdentityTypeMapper::GetNameForUserIdentityType(m_type));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
