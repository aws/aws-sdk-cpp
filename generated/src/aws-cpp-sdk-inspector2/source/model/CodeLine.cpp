/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeLine.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeLine::CodeLine() : 
    m_contentHasBeenSet(false),
    m_lineNumber(0),
    m_lineNumberHasBeenSet(false)
{
}

CodeLine::CodeLine(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_lineNumber(0),
    m_lineNumberHasBeenSet(false)
{
  *this = jsonValue;
}

CodeLine& CodeLine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lineNumber"))
  {
    m_lineNumber = jsonValue.GetInteger("lineNumber");

    m_lineNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeLine::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_lineNumberHasBeenSet)
  {
   payload.WithInteger("lineNumber", m_lineNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
