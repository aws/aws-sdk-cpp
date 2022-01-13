/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RuntimeHintDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

RuntimeHintDetails::RuntimeHintDetails() : 
    m_runtimeHintValuesHasBeenSet(false)
{
}

RuntimeHintDetails::RuntimeHintDetails(JsonView jsonValue) : 
    m_runtimeHintValuesHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeHintDetails& RuntimeHintDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtimeHintValues"))
  {
    Array<JsonView> runtimeHintValuesJsonList = jsonValue.GetArray("runtimeHintValues");
    for(unsigned runtimeHintValuesIndex = 0; runtimeHintValuesIndex < runtimeHintValuesJsonList.GetLength(); ++runtimeHintValuesIndex)
    {
      m_runtimeHintValues.push_back(runtimeHintValuesJsonList[runtimeHintValuesIndex].AsObject());
    }
    m_runtimeHintValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeHintDetails::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeHintValuesHasBeenSet)
  {
   Array<JsonValue> runtimeHintValuesJsonList(m_runtimeHintValues.size());
   for(unsigned runtimeHintValuesIndex = 0; runtimeHintValuesIndex < runtimeHintValuesJsonList.GetLength(); ++runtimeHintValuesIndex)
   {
     runtimeHintValuesJsonList[runtimeHintValuesIndex].AsObject(m_runtimeHintValues[runtimeHintValuesIndex].Jsonize());
   }
   payload.WithArray("runtimeHintValues", std::move(runtimeHintValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
