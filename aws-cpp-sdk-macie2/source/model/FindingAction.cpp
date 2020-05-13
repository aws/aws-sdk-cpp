/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/macie2/model/FindingAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

FindingAction::FindingAction() : 
    m_actionType(FindingActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_apiCallDetailsHasBeenSet(false)
{
}

FindingAction::FindingAction(JsonView jsonValue) : 
    m_actionType(FindingActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_apiCallDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

FindingAction& FindingAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = FindingActionTypeMapper::GetFindingActionTypeForName(jsonValue.GetString("actionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiCallDetails"))
  {
    m_apiCallDetails = jsonValue.GetObject("apiCallDetails");

    m_apiCallDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", FindingActionTypeMapper::GetNameForFindingActionType(m_actionType));
  }

  if(m_apiCallDetailsHasBeenSet)
  {
   payload.WithObject("apiCallDetails", m_apiCallDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
