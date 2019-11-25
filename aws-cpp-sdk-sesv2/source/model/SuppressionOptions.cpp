/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sesv2/model/SuppressionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SuppressionOptions::SuppressionOptions() : 
    m_suppressedReasonsHasBeenSet(false)
{
}

SuppressionOptions::SuppressionOptions(JsonView jsonValue) : 
    m_suppressedReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressionOptions& SuppressionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuppressedReasons"))
  {
    Array<JsonView> suppressedReasonsJsonList = jsonValue.GetArray("SuppressedReasons");
    for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
    {
      m_suppressedReasons.push_back(SuppressionListReasonMapper::GetSuppressionListReasonForName(suppressedReasonsJsonList[suppressedReasonsIndex].AsString()));
    }
    m_suppressedReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_suppressedReasonsHasBeenSet)
  {
   Array<JsonValue> suppressedReasonsJsonList(m_suppressedReasons.size());
   for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
   {
     suppressedReasonsJsonList[suppressedReasonsIndex].AsString(SuppressionListReasonMapper::GetNameForSuppressionListReason(m_suppressedReasons[suppressedReasonsIndex]));
   }
   payload.WithArray("SuppressedReasons", std::move(suppressedReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
