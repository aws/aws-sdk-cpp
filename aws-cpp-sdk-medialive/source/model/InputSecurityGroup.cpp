/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_tagsHasBeenSet(false),
    m_whitelistRulesHasBeenSet(false)
{
}

InputSecurityGroup::InputSecurityGroup(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_state(InputSecurityGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
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
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitelistRules"))
  {
    Aws::Utils::Array<JsonView> whitelistRulesJsonList = jsonValue.GetArray("whitelistRules");
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
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_whitelistRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whitelistRulesJsonList(m_whitelistRules.size());
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
