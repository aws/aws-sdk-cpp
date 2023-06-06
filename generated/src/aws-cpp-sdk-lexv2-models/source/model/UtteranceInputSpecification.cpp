/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceInputSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

UtteranceInputSpecification::UtteranceInputSpecification() : 
    m_textInputHasBeenSet(false),
    m_audioInputHasBeenSet(false)
{
}

UtteranceInputSpecification::UtteranceInputSpecification(JsonView jsonValue) : 
    m_textInputHasBeenSet(false),
    m_audioInputHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceInputSpecification& UtteranceInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textInput"))
  {
    m_textInput = jsonValue.GetString("textInput");

    m_textInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioInput"))
  {
    m_audioInput = jsonValue.GetObject("audioInput");

    m_audioInputHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_textInputHasBeenSet)
  {
   payload.WithString("textInput", m_textInput);

  }

  if(m_audioInputHasBeenSet)
  {
   payload.WithObject("audioInput", m_audioInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
