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

#include <aws/iot/model/AwsJobAbortConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AwsJobAbortConfig::AwsJobAbortConfig() : 
    m_abortCriteriaListHasBeenSet(false)
{
}

AwsJobAbortConfig::AwsJobAbortConfig(JsonView jsonValue) : 
    m_abortCriteriaListHasBeenSet(false)
{
  *this = jsonValue;
}

AwsJobAbortConfig& AwsJobAbortConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("abortCriteriaList"))
  {
    Array<JsonView> abortCriteriaListJsonList = jsonValue.GetArray("abortCriteriaList");
    for(unsigned abortCriteriaListIndex = 0; abortCriteriaListIndex < abortCriteriaListJsonList.GetLength(); ++abortCriteriaListIndex)
    {
      m_abortCriteriaList.push_back(abortCriteriaListJsonList[abortCriteriaListIndex].AsObject());
    }
    m_abortCriteriaListHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsJobAbortConfig::Jsonize() const
{
  JsonValue payload;

  if(m_abortCriteriaListHasBeenSet)
  {
   Array<JsonValue> abortCriteriaListJsonList(m_abortCriteriaList.size());
   for(unsigned abortCriteriaListIndex = 0; abortCriteriaListIndex < abortCriteriaListJsonList.GetLength(); ++abortCriteriaListIndex)
   {
     abortCriteriaListJsonList[abortCriteriaListIndex].AsObject(m_abortCriteriaList[abortCriteriaListIndex].Jsonize());
   }
   payload.WithArray("abortCriteriaList", std::move(abortCriteriaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
