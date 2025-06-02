/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/Record.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

Record::Record(JsonView jsonValue)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputSourceARN"))
  {
    m_inputSourceARN = jsonValue.GetString("inputSourceARN");
    m_inputSourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uniqueId"))
  {
    m_uniqueId = jsonValue.GetString("uniqueId");
    m_uniqueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordAttributeMap"))
  {
    Aws::Map<Aws::String, JsonView> recordAttributeMapJsonMap = jsonValue.GetObject("recordAttributeMap").GetAllObjects();
    for(auto& recordAttributeMapItem : recordAttributeMapJsonMap)
    {
      m_recordAttributeMap[recordAttributeMapItem.first] = recordAttributeMapItem.second.AsString();
    }
    m_recordAttributeMapHasBeenSet = true;
  }
  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_inputSourceARNHasBeenSet)
  {
   payload.WithString("inputSourceARN", m_inputSourceARN);

  }

  if(m_uniqueIdHasBeenSet)
  {
   payload.WithString("uniqueId", m_uniqueId);

  }

  if(m_recordAttributeMapHasBeenSet)
  {
   JsonValue recordAttributeMapJsonMap;
   for(auto& recordAttributeMapItem : m_recordAttributeMap)
   {
     recordAttributeMapJsonMap.WithString(recordAttributeMapItem.first, recordAttributeMapItem.second);
   }
   payload.WithObject("recordAttributeMap", std::move(recordAttributeMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
