/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ViewRepresentation.h>
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

ViewRepresentation::ViewRepresentation() : 
    m_dialect(ViewDialect::NOT_SET),
    m_dialectHasBeenSet(false),
    m_dialectVersionHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_isStale(false),
    m_isStaleHasBeenSet(false)
{
}

ViewRepresentation::ViewRepresentation(JsonView jsonValue) : 
    m_dialect(ViewDialect::NOT_SET),
    m_dialectHasBeenSet(false),
    m_dialectVersionHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_isStale(false),
    m_isStaleHasBeenSet(false)
{
  *this = jsonValue;
}

ViewRepresentation& ViewRepresentation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ViewOriginalText"))
  {
    m_viewOriginalText = jsonValue.GetString("ViewOriginalText");

    m_viewOriginalTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewExpandedText"))
  {
    m_viewExpandedText = jsonValue.GetString("ViewExpandedText");

    m_viewExpandedTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsStale"))
  {
    m_isStale = jsonValue.GetBool("IsStale");

    m_isStaleHasBeenSet = true;
  }

  return *this;
}

JsonValue ViewRepresentation::Jsonize() const
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

  if(m_viewOriginalTextHasBeenSet)
  {
   payload.WithString("ViewOriginalText", m_viewOriginalText);

  }

  if(m_viewExpandedTextHasBeenSet)
  {
   payload.WithString("ViewExpandedText", m_viewExpandedText);

  }

  if(m_isStaleHasBeenSet)
  {
   payload.WithBool("IsStale", m_isStale);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
