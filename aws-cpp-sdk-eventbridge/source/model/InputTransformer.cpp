/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/InputTransformer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

InputTransformer::InputTransformer() : 
    m_inputPathsMapHasBeenSet(false),
    m_inputTemplateHasBeenSet(false)
{
}

InputTransformer::InputTransformer(JsonView jsonValue) : 
    m_inputPathsMapHasBeenSet(false),
    m_inputTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

InputTransformer& InputTransformer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputPathsMap"))
  {
    Aws::Map<Aws::String, JsonView> inputPathsMapJsonMap = jsonValue.GetObject("InputPathsMap").GetAllObjects();
    for(auto& inputPathsMapItem : inputPathsMapJsonMap)
    {
      m_inputPathsMap[inputPathsMapItem.first] = inputPathsMapItem.second.AsString();
    }
    m_inputPathsMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputTemplate"))
  {
    m_inputTemplate = jsonValue.GetString("InputTemplate");

    m_inputTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue InputTransformer::Jsonize() const
{
  JsonValue payload;

  if(m_inputPathsMapHasBeenSet)
  {
   JsonValue inputPathsMapJsonMap;
   for(auto& inputPathsMapItem : m_inputPathsMap)
   {
     inputPathsMapJsonMap.WithString(inputPathsMapItem.first, inputPathsMapItem.second);
   }
   payload.WithObject("InputPathsMap", std::move(inputPathsMapJsonMap));

  }

  if(m_inputTemplateHasBeenSet)
  {
   payload.WithString("InputTemplate", m_inputTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
