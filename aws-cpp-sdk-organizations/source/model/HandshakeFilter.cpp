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

HandshakeFilter::HandshakeFilter(const JsonValue& jsonValue) : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_parentHandshakeIdHasBeenSet(false)
{
  *this = jsonValue;
}

HandshakeFilter& HandshakeFilter::operator =(const JsonValue& jsonValue)
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