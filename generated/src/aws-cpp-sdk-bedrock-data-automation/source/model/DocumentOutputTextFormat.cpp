﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentOutputTextFormat.h>
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

DocumentOutputTextFormat::DocumentOutputTextFormat() : 
    m_typesHasBeenSet(false)
{
}

DocumentOutputTextFormat::DocumentOutputTextFormat(JsonView jsonValue)
  : DocumentOutputTextFormat()
{
  *this = jsonValue;
}

DocumentOutputTextFormat& DocumentOutputTextFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(DocumentOutputTextFormatTypeMapper::GetDocumentOutputTextFormatTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentOutputTextFormat::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(DocumentOutputTextFormatTypeMapper::GetNameForDocumentOutputTextFormatType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
