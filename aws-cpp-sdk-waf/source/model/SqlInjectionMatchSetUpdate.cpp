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
#include <aws/waf/model/SqlInjectionMatchSetUpdate.h>
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

SqlInjectionMatchSetUpdate::SqlInjectionMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sqlInjectionMatchTupleHasBeenSet(false)
{
}

SqlInjectionMatchSetUpdate::SqlInjectionMatchSetUpdate(const JsonValue& jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sqlInjectionMatchTupleHasBeenSet(false)
{
  *this = jsonValue;
}

SqlInjectionMatchSetUpdate& SqlInjectionMatchSetUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlInjectionMatchTuple"))
  {
    m_sqlInjectionMatchTuple = jsonValue.GetObject("SqlInjectionMatchTuple");

    m_sqlInjectionMatchTupleHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlInjectionMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_sqlInjectionMatchTupleHasBeenSet)
  {
   payload.WithObject("SqlInjectionMatchTuple", m_sqlInjectionMatchTuple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws