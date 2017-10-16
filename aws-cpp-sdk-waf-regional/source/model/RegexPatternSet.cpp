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

#include <aws/waf-regional/model/RegexPatternSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RegexPatternSet::RegexPatternSet() : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexPatternStringsHasBeenSet(false)
{
}

RegexPatternSet::RegexPatternSet(const JsonValue& jsonValue) : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexPatternStringsHasBeenSet(false)
{
  *this = jsonValue;
}

RegexPatternSet& RegexPatternSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RegexPatternSetId"))
  {
    m_regexPatternSetId = jsonValue.GetString("RegexPatternSetId");

    m_regexPatternSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexPatternStrings"))
  {
    Array<JsonValue> regexPatternStringsJsonList = jsonValue.GetArray("RegexPatternStrings");
    for(unsigned regexPatternStringsIndex = 0; regexPatternStringsIndex < regexPatternStringsJsonList.GetLength(); ++regexPatternStringsIndex)
    {
      m_regexPatternStrings.push_back(regexPatternStringsJsonList[regexPatternStringsIndex].AsString());
    }
    m_regexPatternStringsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexPatternSet::Jsonize() const
{
  JsonValue payload;

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexPatternStringsHasBeenSet)
  {
   Array<JsonValue> regexPatternStringsJsonList(m_regexPatternStrings.size());
   for(unsigned regexPatternStringsIndex = 0; regexPatternStringsIndex < regexPatternStringsJsonList.GetLength(); ++regexPatternStringsIndex)
   {
     regexPatternStringsJsonList[regexPatternStringsIndex].AsString(m_regexPatternStrings[regexPatternStringsIndex]);
   }
   payload.WithArray("RegexPatternStrings", std::move(regexPatternStringsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
