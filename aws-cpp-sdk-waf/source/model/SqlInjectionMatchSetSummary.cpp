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
#include <aws/waf/model/SqlInjectionMatchSetSummary.h>
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

SqlInjectionMatchSetSummary::SqlInjectionMatchSetSummary() : 
    m_sqlInjectionMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

SqlInjectionMatchSetSummary::SqlInjectionMatchSetSummary(const JsonValue& jsonValue) : 
    m_sqlInjectionMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

SqlInjectionMatchSetSummary& SqlInjectionMatchSetSummary::operator =(const JsonValue& jsonValue)
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

  return *this;
}

JsonValue SqlInjectionMatchSetSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws