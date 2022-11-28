/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/TableCell.h>
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

TableCell::TableCell() : 
    m_valueHasBeenSet(false),
    m_topAnswer(false),
    m_topAnswerHasBeenSet(false),
    m_highlighted(false),
    m_highlightedHasBeenSet(false),
    m_header(false),
    m_headerHasBeenSet(false)
{
}

TableCell::TableCell(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_topAnswer(false),
    m_topAnswerHasBeenSet(false),
    m_highlighted(false),
    m_highlightedHasBeenSet(false),
    m_header(false),
    m_headerHasBeenSet(false)
{
  *this = jsonValue;
}

TableCell& TableCell::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopAnswer"))
  {
    m_topAnswer = jsonValue.GetBool("TopAnswer");

    m_topAnswerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Highlighted"))
  {
    m_highlighted = jsonValue.GetBool("Highlighted");

    m_highlightedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetBool("Header");

    m_headerHasBeenSet = true;
  }

  return *this;
}

JsonValue TableCell::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_topAnswerHasBeenSet)
  {
   payload.WithBool("TopAnswer", m_topAnswer);

  }

  if(m_highlightedHasBeenSet)
  {
   payload.WithBool("Highlighted", m_highlighted);

  }

  if(m_headerHasBeenSet)
  {
   payload.WithBool("Header", m_header);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
