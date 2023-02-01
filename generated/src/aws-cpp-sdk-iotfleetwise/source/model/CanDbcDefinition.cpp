/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CanDbcDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CanDbcDefinition::CanDbcDefinition() : 
    m_networkInterfaceHasBeenSet(false),
    m_canDbcFilesHasBeenSet(false),
    m_signalsMapHasBeenSet(false)
{
}

CanDbcDefinition::CanDbcDefinition(JsonView jsonValue) : 
    m_networkInterfaceHasBeenSet(false),
    m_canDbcFilesHasBeenSet(false),
    m_signalsMapHasBeenSet(false)
{
  *this = jsonValue;
}

CanDbcDefinition& CanDbcDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkInterface"))
  {
    m_networkInterface = jsonValue.GetString("networkInterface");

    m_networkInterfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canDbcFiles"))
  {
    Aws::Utils::Array<JsonView> canDbcFilesJsonList = jsonValue.GetArray("canDbcFiles");
    for(unsigned canDbcFilesIndex = 0; canDbcFilesIndex < canDbcFilesJsonList.GetLength(); ++canDbcFilesIndex)
    {
      m_canDbcFiles.push_back(HashingUtils::Base64Decode(canDbcFilesJsonList[canDbcFilesIndex].AsString()));
    }
    m_canDbcFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalsMap"))
  {
    Aws::Map<Aws::String, JsonView> signalsMapJsonMap = jsonValue.GetObject("signalsMap").GetAllObjects();
    for(auto& signalsMapItem : signalsMapJsonMap)
    {
      m_signalsMap[signalsMapItem.first] = signalsMapItem.second.AsString();
    }
    m_signalsMapHasBeenSet = true;
  }

  return *this;
}

JsonValue CanDbcDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_networkInterfaceHasBeenSet)
  {
   payload.WithString("networkInterface", m_networkInterface);

  }

  if(m_canDbcFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> canDbcFilesJsonList(m_canDbcFiles.size());
   for(unsigned canDbcFilesIndex = 0; canDbcFilesIndex < canDbcFilesJsonList.GetLength(); ++canDbcFilesIndex)
   {
     canDbcFilesJsonList[canDbcFilesIndex].AsString(HashingUtils::Base64Encode(m_canDbcFiles[canDbcFilesIndex]));
   }
   payload.WithArray("canDbcFiles", std::move(canDbcFilesJsonList));

  }

  if(m_signalsMapHasBeenSet)
  {
   JsonValue signalsMapJsonMap;
   for(auto& signalsMapItem : m_signalsMap)
   {
     signalsMapJsonMap.WithString(signalsMapItem.first, signalsMapItem.second);
   }
   payload.WithObject("signalsMap", std::move(signalsMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
