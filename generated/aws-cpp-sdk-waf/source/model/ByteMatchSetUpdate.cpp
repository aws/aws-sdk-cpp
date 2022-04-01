/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ByteMatchSetUpdate.h>
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

ByteMatchSetUpdate::ByteMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_byteMatchTupleHasBeenSet(false)
{
}

ByteMatchSetUpdate::ByteMatchSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_byteMatchTupleHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchSetUpdate& ByteMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ByteMatchTuple"))
  {
    m_byteMatchTuple = jsonValue.GetObject("ByteMatchTuple");

    m_byteMatchTupleHasBeenSet = true;
  }

  return *this;
}

JsonValue ByteMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_byteMatchTupleHasBeenSet)
  {
   payload.WithObject("ByteMatchTuple", m_byteMatchTuple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
