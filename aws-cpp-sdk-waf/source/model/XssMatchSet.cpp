/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/XssMatchSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

XssMatchSet::XssMatchSet() : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_xssMatchTuplesHasBeenSet(false)
{
}

XssMatchSet::XssMatchSet(const JsonValue& jsonValue) : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_xssMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

XssMatchSet& XssMatchSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("XssMatchSetId"))
  {
    m_xssMatchSetId = jsonValue.GetString("XssMatchSetId");

    m_xssMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XssMatchTuples"))
  {
    Array<JsonValue> xssMatchTuplesJsonList = jsonValue.GetArray("XssMatchTuples");
    for(unsigned xssMatchTuplesIndex = 0; xssMatchTuplesIndex < xssMatchTuplesJsonList.GetLength(); ++xssMatchTuplesIndex)
    {
      m_xssMatchTuples.push_back(xssMatchTuplesJsonList[xssMatchTuplesIndex].AsObject());
    }
    m_xssMatchTuplesHasBeenSet = true;
  }

  return *this;
}

JsonValue XssMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_xssMatchSetIdHasBeenSet)
  {
   payload.WithString("XssMatchSetId", m_xssMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_xssMatchTuplesHasBeenSet)
  {
   Array<JsonValue> xssMatchTuplesJsonList(m_xssMatchTuples.size());
   for(unsigned xssMatchTuplesIndex = 0; xssMatchTuplesIndex < xssMatchTuplesJsonList.GetLength(); ++xssMatchTuplesIndex)
   {
     xssMatchTuplesJsonList[xssMatchTuplesIndex].AsObject(m_xssMatchTuples[xssMatchTuplesIndex].Jsonize());
   }
   payload.WithArray("XssMatchTuples", std::move(xssMatchTuplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws