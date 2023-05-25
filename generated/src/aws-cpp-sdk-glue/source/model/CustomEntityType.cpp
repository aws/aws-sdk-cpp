/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CustomEntityType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CustomEntityType::CustomEntityType() : 
    m_nameHasBeenSet(false),
    m_regexStringHasBeenSet(false),
    m_contextWordsHasBeenSet(false)
{
}

CustomEntityType::CustomEntityType(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_regexStringHasBeenSet(false),
    m_contextWordsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomEntityType& CustomEntityType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexString"))
  {
    m_regexString = jsonValue.GetString("RegexString");

    m_regexStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextWords"))
  {
    Aws::Utils::Array<JsonView> contextWordsJsonList = jsonValue.GetArray("ContextWords");
    for(unsigned contextWordsIndex = 0; contextWordsIndex < contextWordsJsonList.GetLength(); ++contextWordsIndex)
    {
      m_contextWords.push_back(contextWordsJsonList[contextWordsIndex].AsString());
    }
    m_contextWordsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomEntityType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexStringHasBeenSet)
  {
   payload.WithString("RegexString", m_regexString);

  }

  if(m_contextWordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextWordsJsonList(m_contextWords.size());
   for(unsigned contextWordsIndex = 0; contextWordsIndex < contextWordsJsonList.GetLength(); ++contextWordsIndex)
   {
     contextWordsJsonList[contextWordsIndex].AsString(m_contextWords[contextWordsIndex]);
   }
   payload.WithArray("ContextWords", std::move(contextWordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
