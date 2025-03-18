/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/RegistryAlias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

RegistryAlias::RegistryAlias(JsonView jsonValue)
{
  *this = jsonValue;
}

RegistryAlias& RegistryAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = RegistryAliasStatusMapper::GetRegistryAliasStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("primaryRegistryAlias"))
  {
    m_primaryRegistryAlias = jsonValue.GetBool("primaryRegistryAlias");
    m_primaryRegistryAliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultRegistryAlias"))
  {
    m_defaultRegistryAlias = jsonValue.GetBool("defaultRegistryAlias");
    m_defaultRegistryAliasHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryAlias::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RegistryAliasStatusMapper::GetNameForRegistryAliasStatus(m_status));
  }

  if(m_primaryRegistryAliasHasBeenSet)
  {
   payload.WithBool("primaryRegistryAlias", m_primaryRegistryAlias);

  }

  if(m_defaultRegistryAliasHasBeenSet)
  {
   payload.WithBool("defaultRegistryAlias", m_defaultRegistryAlias);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
