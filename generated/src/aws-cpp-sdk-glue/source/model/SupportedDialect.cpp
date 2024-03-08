/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SupportedDialect.h>
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

SupportedDialect::SupportedDialect() : 
    m_dialect(ViewDialect::NOT_SET),
    m_dialectHasBeenSet(false),
    m_dialectVersionHasBeenSet(false)
{
}

SupportedDialect::SupportedDialect(JsonView jsonValue) : 
    m_dialect(ViewDialect::NOT_SET),
    m_dialectHasBeenSet(false),
    m_dialectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedDialect& SupportedDialect::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dialect"))
  {
    m_dialect = ViewDialectMapper::GetViewDialectForName(jsonValue.GetString("Dialect"));

    m_dialectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DialectVersion"))
  {
    m_dialectVersion = jsonValue.GetString("DialectVersion");

    m_dialectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedDialect::Jsonize() const
{
  JsonValue payload;

  if(m_dialectHasBeenSet)
  {
   payload.WithString("Dialect", ViewDialectMapper::GetNameForViewDialect(m_dialect));
  }

  if(m_dialectVersionHasBeenSet)
  {
   payload.WithString("DialectVersion", m_dialectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
