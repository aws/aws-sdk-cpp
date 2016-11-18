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
#include <aws/waf/model/SqlInjectionMatchSet.h>
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

SqlInjectionMatchSet::SqlInjectionMatchSet() : 
    m_sqlInjectionMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sqlInjectionMatchTuplesHasBeenSet(false)
{
}

SqlInjectionMatchSet::SqlInjectionMatchSet(const JsonValue& jsonValue) : 
    m_sqlInjectionMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sqlInjectionMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

SqlInjectionMatchSet& SqlInjectionMatchSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SqlInjectionMatchSetId"))
  {
    m_sqlInjectionMatchSetId = jsonValue.GetString("SqlInjectionMatchSetId");

    m_sqlInjectionMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlInjectionMatchTuples"))
  {
    Array<JsonValue> sqlInjectionMatchTuplesJsonList = jsonValue.GetArray("SqlInjectionMatchTuples");
    for(unsigned sqlInjectionMatchTuplesIndex = 0; sqlInjectionMatchTuplesIndex < sqlInjectionMatchTuplesJsonList.GetLength(); ++sqlInjectionMatchTuplesIndex)
    {
      m_sqlInjectionMatchTuples.push_back(sqlInjectionMatchTuplesJsonList[sqlInjectionMatchTuplesIndex].AsObject());
    }
    m_sqlInjectionMatchTuplesHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlInjectionMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_sqlInjectionMatchSetIdHasBeenSet)
  {
   payload.WithString("SqlInjectionMatchSetId", m_sqlInjectionMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sqlInjectionMatchTuplesHasBeenSet)
  {
   Array<JsonValue> sqlInjectionMatchTuplesJsonList(m_sqlInjectionMatchTuples.size());
   for(unsigned sqlInjectionMatchTuplesIndex = 0; sqlInjectionMatchTuplesIndex < sqlInjectionMatchTuplesJsonList.GetLength(); ++sqlInjectionMatchTuplesIndex)
   {
     sqlInjectionMatchTuplesJsonList[sqlInjectionMatchTuplesIndex].AsObject(m_sqlInjectionMatchTuples[sqlInjectionMatchTuplesIndex].Jsonize());
   }
   payload.WithArray("SqlInjectionMatchTuples", std::move(sqlInjectionMatchTuplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws