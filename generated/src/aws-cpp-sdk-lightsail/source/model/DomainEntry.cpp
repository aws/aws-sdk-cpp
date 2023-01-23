/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DomainEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DomainEntry::DomainEntry() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_isAlias(false),
    m_isAliasHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

DomainEntry::DomainEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_isAlias(false),
    m_isAliasHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DomainEntry& DomainEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAlias"))
  {
    m_isAlias = jsonValue.GetBool("isAlias");

    m_isAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_isAliasHasBeenSet)
  {
   payload.WithBool("isAlias", m_isAlias);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
