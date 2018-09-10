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

#include <aws/medialive/model/InputSecurityGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputSecurityGroup::InputSecurityGroup() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_state(InputSecurityGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_whitelistRulesHasBeenSet(false)
{
}

InputSecurityGroup::InputSecurityGroup(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_state(InputSecurityGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_whitelistRulesHasBeenSet(false)
{
  *this = jsonValue;
}

InputSecurityGroup& InputSecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputs"))
  {
    Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InputSecurityGroupStateMapper::GetInputSecurityGroupStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitelistRules"))
  {
    Array<JsonView> whitelistRulesJsonList = jsonValue.GetArray("whitelistRules");
    for(unsigned whitelistRulesIndex = 0; whitelistRulesIndex < whitelistRulesJsonList.GetLength(); ++whitelistRulesIndex)
    {
      m_whitelistRules.push_back(whitelistRulesJsonList[whitelistRulesIndex].AsObject());
    }
    m_whitelistRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_inputsHasBeenSet)
  {
   Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("inputs", std::move(inputsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InputSecurityGroupStateMapper::GetNameForInputSecurityGroupState(m_state));
  }

  if(m_whitelistRulesHasBeenSet)
  {
   Array<JsonValue> whitelistRulesJsonList(m_whitelistRules.size());
   for(unsigned whitelistRulesIndex = 0; whitelistRulesIndex < whitelistRulesJsonList.GetLength(); ++whitelistRulesIndex)
   {
     whitelistRulesJsonList[whitelistRulesIndex].AsObject(m_whitelistRules[whitelistRulesIndex].Jsonize());
   }
   payload.WithArray("whitelistRules", std::move(whitelistRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
