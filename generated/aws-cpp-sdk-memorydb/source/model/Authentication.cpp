/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Authentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Authentication::Authentication() : 
    m_type(AuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordCount(0),
    m_passwordCountHasBeenSet(false)
{
}

Authentication::Authentication(JsonView jsonValue) : 
    m_type(AuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordCount(0),
    m_passwordCountHasBeenSet(false)
{
  *this = jsonValue;
}

Authentication& Authentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PasswordCount"))
  {
    m_passwordCount = jsonValue.GetInteger("PasswordCount");

    m_passwordCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Authentication::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AuthenticationTypeMapper::GetNameForAuthenticationType(m_type));
  }

  if(m_passwordCountHasBeenSet)
  {
   payload.WithInteger("PasswordCount", m_passwordCount);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
