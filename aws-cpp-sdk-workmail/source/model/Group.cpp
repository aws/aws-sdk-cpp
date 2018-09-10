﻿/*
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

#include <aws/workmail/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

Group::Group() : 
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false),
    m_enabledDateHasBeenSet(false),
    m_disabledDateHasBeenSet(false)
{
}

Group::Group(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false),
    m_enabledDateHasBeenSet(false),
    m_disabledDateHasBeenSet(false)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");

    m_enabledDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");

    m_disabledDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EntityStateMapper::GetNameForEntityState(m_state));
  }

  if(m_enabledDateHasBeenSet)
  {
   payload.WithDouble("EnabledDate", m_enabledDate.SecondsWithMSPrecision());
  }

  if(m_disabledDateHasBeenSet)
  {
   payload.WithDouble("DisabledDate", m_disabledDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
