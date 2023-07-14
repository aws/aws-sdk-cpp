/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AdditionalResultAttributeValue.h>
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

AdditionalResultAttributeValue::AdditionalResultAttributeValue() : 
    m_textWithHighlightsValueHasBeenSet(false)
{
}

AdditionalResultAttributeValue::AdditionalResultAttributeValue(JsonView jsonValue) : 
    m_textWithHighlightsValueHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalResultAttributeValue& AdditionalResultAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextWithHighlightsValue"))
  {
    m_textWithHighlightsValue = jsonValue.GetObject("TextWithHighlightsValue");

    m_textWithHighlightsValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalResultAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_textWithHighlightsValueHasBeenSet)
  {
   payload.WithObject("TextWithHighlightsValue", m_textWithHighlightsValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
