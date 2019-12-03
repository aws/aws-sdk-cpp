/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
