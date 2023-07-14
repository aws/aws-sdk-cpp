/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SuggestionValue.h>
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

SuggestionValue::SuggestionValue() : 
    m_textHasBeenSet(false)
{
}

SuggestionValue::SuggestionValue(JsonView jsonValue) : 
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestionValue& SuggestionValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetObject("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestionValue::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithObject("Text", m_text.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
