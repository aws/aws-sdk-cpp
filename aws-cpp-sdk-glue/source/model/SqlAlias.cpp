/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SqlAlias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SqlAlias::SqlAlias() : 
    m_fromHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

SqlAlias::SqlAlias(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
  *this = jsonValue;
}

SqlAlias& SqlAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlAlias::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
