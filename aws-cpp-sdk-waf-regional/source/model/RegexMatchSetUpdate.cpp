/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RegexMatchSetUpdate.h>
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

RegexMatchSetUpdate::RegexMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_regexMatchTupleHasBeenSet(false)
{
}

RegexMatchSetUpdate::RegexMatchSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_regexMatchTupleHasBeenSet(false)
{
  *this = jsonValue;
}

RegexMatchSetUpdate& RegexMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexMatchTuple"))
  {
    m_regexMatchTuple = jsonValue.GetObject("RegexMatchTuple");

    m_regexMatchTupleHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_regexMatchTupleHasBeenSet)
  {
   payload.WithObject("RegexMatchTuple", m_regexMatchTuple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
