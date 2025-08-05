/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckTranslationOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningCheckTranslationOption::AutomatedReasoningCheckTranslationOption(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckTranslationOption& AutomatedReasoningCheckTranslationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("translations"))
  {
    Aws::Utils::Array<JsonView> translationsJsonList = jsonValue.GetArray("translations");
    for(unsigned translationsIndex = 0; translationsIndex < translationsJsonList.GetLength(); ++translationsIndex)
    {
      m_translations.push_back(translationsJsonList[translationsIndex].AsObject());
    }
    m_translationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningCheckTranslationOption::Jsonize() const
{
  JsonValue payload;

  if(m_translationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> translationsJsonList(m_translations.size());
   for(unsigned translationsIndex = 0; translationsIndex < translationsJsonList.GetLength(); ++translationsIndex)
   {
     translationsJsonList[translationsIndex].AsObject(m_translations[translationsIndex].Jsonize());
   }
   payload.WithArray("translations", std::move(translationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
