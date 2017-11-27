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

#include <aws/mediaconvert/model/OutputGroupDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputGroupDetail::OutputGroupDetail() : 
    m_outputDetailsHasBeenSet(false)
{
}

OutputGroupDetail::OutputGroupDetail(const JsonValue& jsonValue) : 
    m_outputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroupDetail& OutputGroupDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("outputDetails"))
  {
    Array<JsonValue> outputDetailsJsonList = jsonValue.GetArray("outputDetails");
    for(unsigned outputDetailsIndex = 0; outputDetailsIndex < outputDetailsJsonList.GetLength(); ++outputDetailsIndex)
    {
      m_outputDetails.push_back(outputDetailsJsonList[outputDetailsIndex].AsObject());
    }
    m_outputDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroupDetail::Jsonize() const
{
  JsonValue payload;

  if(m_outputDetailsHasBeenSet)
  {
   Array<JsonValue> outputDetailsJsonList(m_outputDetails.size());
   for(unsigned outputDetailsIndex = 0; outputDetailsIndex < outputDetailsJsonList.GetLength(); ++outputDetailsIndex)
   {
     outputDetailsJsonList[outputDetailsIndex].AsObject(m_outputDetails[outputDetailsIndex].Jsonize());
   }
   payload.WithArray("outputDetails", std::move(outputDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
