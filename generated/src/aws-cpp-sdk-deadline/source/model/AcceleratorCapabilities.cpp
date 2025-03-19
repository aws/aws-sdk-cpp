/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AcceleratorCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AcceleratorCapabilities::AcceleratorCapabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

AcceleratorCapabilities& AcceleratorCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selections"))
  {
    Aws::Utils::Array<JsonView> selectionsJsonList = jsonValue.GetArray("selections");
    for(unsigned selectionsIndex = 0; selectionsIndex < selectionsJsonList.GetLength(); ++selectionsIndex)
    {
      m_selections.push_back(selectionsJsonList[selectionsIndex].AsObject());
    }
    m_selectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetObject("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceleratorCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_selectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectionsJsonList(m_selections.size());
   for(unsigned selectionsIndex = 0; selectionsIndex < selectionsJsonList.GetLength(); ++selectionsIndex)
   {
     selectionsJsonList[selectionsIndex].AsObject(m_selections[selectionsIndex].Jsonize());
   }
   payload.WithArray("selections", std::move(selectionsJsonList));

  }

  if(m_countHasBeenSet)
  {
   payload.WithObject("count", m_count.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
