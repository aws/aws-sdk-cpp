/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/TableReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

TableReference::TableReference(JsonView jsonValue)
{
  *this = jsonValue;
}

TableReference& TableReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glue"))
  {
    m_glue = jsonValue.GetObject("glue");
    m_glueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("snowflake"))
  {
    m_snowflake = jsonValue.GetObject("snowflake");
    m_snowflakeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("athena"))
  {
    m_athena = jsonValue.GetObject("athena");
    m_athenaHasBeenSet = true;
  }
  return *this;
}

JsonValue TableReference::Jsonize() const
{
  JsonValue payload;

  if(m_glueHasBeenSet)
  {
   payload.WithObject("glue", m_glue.Jsonize());

  }

  if(m_snowflakeHasBeenSet)
  {
   payload.WithObject("snowflake", m_snowflake.Jsonize());

  }

  if(m_athenaHasBeenSet)
  {
   payload.WithObject("athena", m_athena.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
