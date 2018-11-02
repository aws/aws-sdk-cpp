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

#include <aws/clouddirectory/model/BatchListObjectParentsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListObjectParentsResponse::BatchListObjectParentsResponse() : 
    m_parentLinksHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectParentsResponse::BatchListObjectParentsResponse(JsonView jsonValue) : 
    m_parentLinksHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectParentsResponse& BatchListObjectParentsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentLinks"))
  {
    Array<JsonView> parentLinksJsonList = jsonValue.GetArray("ParentLinks");
    for(unsigned parentLinksIndex = 0; parentLinksIndex < parentLinksJsonList.GetLength(); ++parentLinksIndex)
    {
      m_parentLinks.push_back(parentLinksJsonList[parentLinksIndex].AsObject());
    }
    m_parentLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectParentsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_parentLinksHasBeenSet)
  {
   Array<JsonValue> parentLinksJsonList(m_parentLinks.size());
   for(unsigned parentLinksIndex = 0; parentLinksIndex < parentLinksJsonList.GetLength(); ++parentLinksIndex)
   {
     parentLinksJsonList[parentLinksIndex].AsObject(m_parentLinks[parentLinksIndex].Jsonize());
   }
   payload.WithArray("ParentLinks", std::move(parentLinksJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
