/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/Delegate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

Delegate::Delegate() : 
    m_idHasBeenSet(false),
    m_type(MemberType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Delegate::Delegate(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(MemberType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Delegate& Delegate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Delegate::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MemberTypeMapper::GetNameForMemberType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
