﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StructuredMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleetwise/model/StructuredMessageListDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StructuredMessage::StructuredMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

StructuredMessage& StructuredMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("primitiveMessageDefinition"))
  {
    m_primitiveMessageDefinition = jsonValue.GetObject("primitiveMessageDefinition");
    m_primitiveMessageDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("structuredMessageListDefinition"))
  {
    m_structuredMessageListDefinition = Aws::MakeShared<StructuredMessageListDefinition>("StructuredMessage", jsonValue.GetObject("structuredMessageListDefinition"));
    m_structuredMessageListDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("structuredMessageDefinition"))
  {
    Aws::Utils::Array<JsonView> structuredMessageDefinitionJsonList = jsonValue.GetArray("structuredMessageDefinition");
    for(unsigned structuredMessageDefinitionIndex = 0; structuredMessageDefinitionIndex < structuredMessageDefinitionJsonList.GetLength(); ++structuredMessageDefinitionIndex)
    {
      m_structuredMessageDefinition.push_back(structuredMessageDefinitionJsonList[structuredMessageDefinitionIndex].AsObject());
    }
    m_structuredMessageDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue StructuredMessage::Jsonize() const
{
  JsonValue payload;

  if(m_primitiveMessageDefinitionHasBeenSet)
  {
   payload.WithObject("primitiveMessageDefinition", m_primitiveMessageDefinition.Jsonize());

  }

  if(m_structuredMessageListDefinitionHasBeenSet)
  {
   payload.WithObject("structuredMessageListDefinition", m_structuredMessageListDefinition->Jsonize());

  }

  if(m_structuredMessageDefinitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> structuredMessageDefinitionJsonList(m_structuredMessageDefinition.size());
   for(unsigned structuredMessageDefinitionIndex = 0; structuredMessageDefinitionIndex < structuredMessageDefinitionJsonList.GetLength(); ++structuredMessageDefinitionIndex)
   {
     structuredMessageDefinitionJsonList[structuredMessageDefinitionIndex].AsObject(m_structuredMessageDefinition[structuredMessageDefinitionIndex].Jsonize());
   }
   payload.WithArray("structuredMessageDefinition", std::move(structuredMessageDefinitionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
