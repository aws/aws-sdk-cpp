/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Position.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Position::Position() : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
}

Position::Position(JsonView jsonValue) : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
  *this = jsonValue;
}

Position& Position::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetInteger("offset");

    m_offsetHasBeenSet = true;
  }

  return *this;
}

JsonValue Position::Jsonize() const
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

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("offset", m_offset);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
