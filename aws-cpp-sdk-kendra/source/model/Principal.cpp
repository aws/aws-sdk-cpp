/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Principal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Principal::Principal() : 
    m_nameHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_access(ReadAccessType::NOT_SET),
    m_accessHasBeenSet(false)
{
}

Principal::Principal(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_access(ReadAccessType::NOT_SET),
    m_accessHasBeenSet(false)
{
  *this = jsonValue;
}

Principal& Principal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Access"))
  {
    m_access = ReadAccessTypeMapper::GetReadAccessTypeForName(jsonValue.GetString("Access"));

    m_accessHasBeenSet = true;
  }

  return *this;
}

JsonValue Principal::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PrincipalTypeMapper::GetNameForPrincipalType(m_type));
  }

  if(m_accessHasBeenSet)
  {
   payload.WithString("Access", ReadAccessTypeMapper::GetNameForReadAccessType(m_access));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
