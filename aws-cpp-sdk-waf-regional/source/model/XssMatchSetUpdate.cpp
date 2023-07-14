/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/XssMatchSetUpdate.h>
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

XssMatchSetUpdate::XssMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_xssMatchTupleHasBeenSet(false)
{
}

XssMatchSetUpdate::XssMatchSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_xssMatchTupleHasBeenSet(false)
{
  *this = jsonValue;
}

XssMatchSetUpdate& XssMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XssMatchTuple"))
  {
    m_xssMatchTuple = jsonValue.GetObject("XssMatchTuple");

    m_xssMatchTupleHasBeenSet = true;
  }

  return *this;
}

JsonValue XssMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_xssMatchTupleHasBeenSet)
  {
   payload.WithObject("XssMatchTuple", m_xssMatchTuple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
