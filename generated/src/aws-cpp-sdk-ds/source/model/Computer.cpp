/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/Computer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

Computer::Computer() : 
    m_computerIdHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_computerAttributesHasBeenSet(false)
{
}

Computer::Computer(JsonView jsonValue) : 
    m_computerIdHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_computerAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Computer& Computer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputerId"))
  {
    m_computerId = jsonValue.GetString("ComputerId");

    m_computerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");

    m_computerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerAttributes"))
  {
    Aws::Utils::Array<JsonView> computerAttributesJsonList = jsonValue.GetArray("ComputerAttributes");
    for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
    {
      m_computerAttributes.push_back(computerAttributesJsonList[computerAttributesIndex].AsObject());
    }
    m_computerAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Computer::Jsonize() const
{
  JsonValue payload;

  if(m_computerIdHasBeenSet)
  {
   payload.WithString("ComputerId", m_computerId);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_computerAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computerAttributesJsonList(m_computerAttributes.size());
   for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
   {
     computerAttributesJsonList[computerAttributesIndex].AsObject(m_computerAttributes[computerAttributesIndex].Jsonize());
   }
   payload.WithArray("ComputerAttributes", std::move(computerAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
