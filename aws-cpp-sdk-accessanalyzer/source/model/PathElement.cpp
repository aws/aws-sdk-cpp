/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PathElement.h>
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

PathElement::PathElement() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_substringHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

PathElement::PathElement(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_substringHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PathElement& PathElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("substring"))
  {
    m_substring = jsonValue.GetObject("substring");

    m_substringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PathElement::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_substringHasBeenSet)
  {
   payload.WithObject("substring", m_substring.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
