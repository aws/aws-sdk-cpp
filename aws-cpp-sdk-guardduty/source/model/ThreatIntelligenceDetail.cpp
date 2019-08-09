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

#include <aws/guardduty/model/ThreatIntelligenceDetail.h>
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

ThreatIntelligenceDetail::ThreatIntelligenceDetail() : 
    m_threatListNameHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
}

ThreatIntelligenceDetail::ThreatIntelligenceDetail(JsonView jsonValue) : 
    m_threatListNameHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ThreatIntelligenceDetail& ThreatIntelligenceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threatListName"))
  {
    m_threatListName = jsonValue.GetString("threatListName");

    m_threatListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatNames"))
  {
    Array<JsonView> threatNamesJsonList = jsonValue.GetArray("threatNames");
    for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
    {
      m_threatNames.push_back(threatNamesJsonList[threatNamesIndex].AsString());
    }
    m_threatNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThreatIntelligenceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_threatListNameHasBeenSet)
  {
   payload.WithString("threatListName", m_threatListName);

  }

  if(m_threatNamesHasBeenSet)
  {
   Array<JsonValue> threatNamesJsonList(m_threatNames.size());
   for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
   {
     threatNamesJsonList[threatNamesIndex].AsString(m_threatNames[threatNamesIndex]);
   }
   payload.WithArray("threatNames", std::move(threatNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
