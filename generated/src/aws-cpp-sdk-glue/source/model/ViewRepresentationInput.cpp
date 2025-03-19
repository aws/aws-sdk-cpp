/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ViewRepresentationInput.h>
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

ViewRepresentationInput::ViewRepresentationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ViewRepresentationInput& ViewRepresentationInput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ValidationConnection"))
  {
    m_validationConnection = jsonValue.GetString("ValidationConnection");
    m_validationConnectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewExpandedText"))
  {
    m_viewExpandedText = jsonValue.GetString("ViewExpandedText");
    m_viewExpandedTextHasBeenSet = true;
  }
  return *this;
}

JsonValue ViewRepresentationInput::Jsonize() const
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

  if(m_validationConnectionHasBeenSet)
  {
   payload.WithString("ValidationConnection", m_validationConnection);

  }

  if(m_viewExpandedTextHasBeenSet)
  {
   payload.WithString("ViewExpandedText", m_viewExpandedText);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
