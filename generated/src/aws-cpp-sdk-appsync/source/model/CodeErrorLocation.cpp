/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CodeErrorLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

CodeErrorLocation::CodeErrorLocation() : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_span(0),
    m_spanHasBeenSet(false)
{
}

CodeErrorLocation::CodeErrorLocation(JsonView jsonValue) : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_span(0),
    m_spanHasBeenSet(false)
{
  *this = jsonValue;
}

CodeErrorLocation& CodeErrorLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("line"))
  {
    m_line = jsonValue.GetInteger("line");

    m_lineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("column"))
  {
    m_column = jsonValue.GetInteger("column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("span"))
  {
    m_span = jsonValue.GetInteger("span");

    m_spanHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeErrorLocation::Jsonize() const
{
  JsonValue payload;

  if(m_lineHasBeenSet)
  {
   payload.WithInteger("line", m_line);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithInteger("column", m_column);

  }

  if(m_spanHasBeenSet)
  {
   payload.WithInteger("span", m_span);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
