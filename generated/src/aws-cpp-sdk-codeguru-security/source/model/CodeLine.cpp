/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CodeLine.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

CodeLine::CodeLine() : 
    m_contentHasBeenSet(false),
    m_number(0),
    m_numberHasBeenSet(false)
{
}

CodeLine::CodeLine(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_number(0),
    m_numberHasBeenSet(false)
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

  if(jsonValue.ValueExists("number"))
  {
    m_number = jsonValue.GetInteger("number");

    m_numberHasBeenSet = true;
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

  if(m_numberHasBeenSet)
  {
   payload.WithInteger("number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
