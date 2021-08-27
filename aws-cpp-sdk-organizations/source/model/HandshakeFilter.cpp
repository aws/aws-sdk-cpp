/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/HandshakeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

HandshakeFilter::HandshakeFilter() : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_parentHandshakeIdHasBeenSet(false)
{
}

HandshakeFilter::HandshakeFilter(JsonView jsonValue) : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_parentHandshakeIdHasBeenSet(false)
{
  *this = jsonValue;
}

HandshakeFilter& HandshakeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentHandshakeId"))
  {
    m_parentHandshakeId = jsonValue.GetString("ParentHandshakeId");

    m_parentHandshakeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue HandshakeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if(m_parentHandshakeIdHasBeenSet)
  {
   payload.WithString("ParentHandshakeId", m_parentHandshakeId);

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
