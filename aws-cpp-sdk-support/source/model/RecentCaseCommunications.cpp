/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/model/RecentCaseCommunications.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

RecentCaseCommunications::RecentCaseCommunications() : 
    m_communicationsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

RecentCaseCommunications::RecentCaseCommunications(const JsonValue& jsonValue) : 
    m_communicationsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

RecentCaseCommunications& RecentCaseCommunications::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("communications"))
  {
    Array<JsonValue> communicationsJsonList = jsonValue.GetArray("communications");
    for(unsigned communicationsIndex = 0; communicationsIndex < communicationsJsonList.GetLength(); ++communicationsIndex)
    {
      m_communications.push_back(communicationsJsonList[communicationsIndex].AsObject());
    }
    m_communicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue RecentCaseCommunications::Jsonize() const
{
  JsonValue payload;

  if(m_communicationsHasBeenSet)
  {
   Array<JsonValue> communicationsJsonList(m_communications.size());
   for(unsigned communicationsIndex = 0; communicationsIndex < communicationsJsonList.GetLength(); ++communicationsIndex)
   {
     communicationsJsonList[communicationsIndex].AsObject(m_communications[communicationsIndex].Jsonize());
   }
   payload.WithArray("communications", std::move(communicationsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws