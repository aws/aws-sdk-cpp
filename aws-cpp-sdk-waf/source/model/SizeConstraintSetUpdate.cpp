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
#include <aws/waf/model/SizeConstraintSetUpdate.h>
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

SizeConstraintSetUpdate::SizeConstraintSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sizeConstraintHasBeenSet(false)
{
}

SizeConstraintSetUpdate::SizeConstraintSetUpdate(const JsonValue& jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sizeConstraintHasBeenSet(false)
{
  *this = jsonValue;
}

SizeConstraintSetUpdate& SizeConstraintSetUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeConstraint"))
  {
    m_sizeConstraint = jsonValue.GetObject("SizeConstraint");

    m_sizeConstraintHasBeenSet = true;
  }

  return *this;
}

JsonValue SizeConstraintSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_sizeConstraintHasBeenSet)
  {
   payload.WithObject("SizeConstraint", m_sizeConstraint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws