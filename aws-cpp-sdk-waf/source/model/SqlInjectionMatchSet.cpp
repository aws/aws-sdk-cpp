/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SqlInjectionMatchSet::SqlInjectionMatchSet(JsonView jsonValue) : 
    m_sqlInjectionMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sqlInjectionMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

SqlInjectionMatchSet& SqlInjectionMatchSet::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> sqlInjectionMatchTuplesJsonList = jsonValue.GetArray("SqlInjectionMatchTuples");
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
   Aws::Utils::Array<JsonValue> sqlInjectionMatchTuplesJsonList(m_sqlInjectionMatchTuples.size());
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
