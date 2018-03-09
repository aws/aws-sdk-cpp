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

#include <aws/workspaces/model/ModificationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ModificationState::ModificationState() : 
    m_resource(ModificationResourceEnum::NOT_SET),
    m_resourceHasBeenSet(false),
    m_state(ModificationStateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ModificationState::ModificationState(const JsonValue& jsonValue) : 
    m_resource(ModificationResourceEnum::NOT_SET),
    m_resourceHasBeenSet(false),
    m_state(ModificationStateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ModificationState& ModificationState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = ModificationResourceEnumMapper::GetModificationResourceEnumForName(jsonValue.GetString("Resource"));

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ModificationStateEnumMapper::GetModificationStateEnumForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ModificationState::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", ModificationResourceEnumMapper::GetNameForModificationResourceEnum(m_resource));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ModificationStateEnumMapper::GetNameForModificationStateEnum(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
