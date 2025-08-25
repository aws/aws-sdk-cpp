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

CodeLine::CodeLine(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeLine& CodeLine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("number"))
  {
    m_number = jsonValue.GetInteger("number");
    m_numberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeLine::Jsonize() const
{
  JsonValue payload;

  if(m_numberHasBeenSet)
  {
   payload.WithInteger("number", m_number);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
