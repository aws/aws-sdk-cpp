/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Action::Action() : 
    m_nameHasBeenSet(false),
    m_crossRegionCopyHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_crossRegionCopyHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossRegionCopy"))
  {
    Aws::Utils::Array<JsonView> crossRegionCopyJsonList = jsonValue.GetArray("CrossRegionCopy");
    for(unsigned crossRegionCopyIndex = 0; crossRegionCopyIndex < crossRegionCopyJsonList.GetLength(); ++crossRegionCopyIndex)
    {
      m_crossRegionCopy.push_back(crossRegionCopyJsonList[crossRegionCopyIndex].AsObject());
    }
    m_crossRegionCopyHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_crossRegionCopyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossRegionCopyJsonList(m_crossRegionCopy.size());
   for(unsigned crossRegionCopyIndex = 0; crossRegionCopyIndex < crossRegionCopyJsonList.GetLength(); ++crossRegionCopyIndex)
   {
     crossRegionCopyJsonList[crossRegionCopyIndex].AsObject(m_crossRegionCopy[crossRegionCopyIndex].Jsonize());
   }
   payload.WithArray("CrossRegionCopy", std::move(crossRegionCopyJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
