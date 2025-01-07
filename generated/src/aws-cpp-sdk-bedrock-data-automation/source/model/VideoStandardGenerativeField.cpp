﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VideoStandardGenerativeField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

VideoStandardGenerativeField::VideoStandardGenerativeField() : 
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_typesHasBeenSet(false)
{
}

VideoStandardGenerativeField::VideoStandardGenerativeField(JsonView jsonValue)
  : VideoStandardGenerativeField()
{
  *this = jsonValue;
}

VideoStandardGenerativeField& VideoStandardGenerativeField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(VideoStandardGenerativeFieldTypeMapper::GetVideoStandardGenerativeFieldTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoStandardGenerativeField::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(VideoStandardGenerativeFieldTypeMapper::GetNameForVideoStandardGenerativeFieldType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
