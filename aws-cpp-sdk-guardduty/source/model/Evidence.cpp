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

#include <aws/guardduty/model/Evidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Evidence::Evidence() : 
    m_threatIntelligenceDetailsHasBeenSet(false)
{
}

Evidence::Evidence(JsonView jsonValue) : 
    m_threatIntelligenceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Evidence& Evidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threatIntelligenceDetails"))
  {
    Array<JsonView> threatIntelligenceDetailsJsonList = jsonValue.GetArray("threatIntelligenceDetails");
    for(unsigned threatIntelligenceDetailsIndex = 0; threatIntelligenceDetailsIndex < threatIntelligenceDetailsJsonList.GetLength(); ++threatIntelligenceDetailsIndex)
    {
      m_threatIntelligenceDetails.push_back(threatIntelligenceDetailsJsonList[threatIntelligenceDetailsIndex].AsObject());
    }
    m_threatIntelligenceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Evidence::Jsonize() const
{
  JsonValue payload;

  if(m_threatIntelligenceDetailsHasBeenSet)
  {
   Array<JsonValue> threatIntelligenceDetailsJsonList(m_threatIntelligenceDetails.size());
   for(unsigned threatIntelligenceDetailsIndex = 0; threatIntelligenceDetailsIndex < threatIntelligenceDetailsJsonList.GetLength(); ++threatIntelligenceDetailsIndex)
   {
     threatIntelligenceDetailsJsonList[threatIntelligenceDetailsIndex].AsObject(m_threatIntelligenceDetails[threatIntelligenceDetailsIndex].Jsonize());
   }
   payload.WithArray("threatIntelligenceDetails", std::move(threatIntelligenceDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
