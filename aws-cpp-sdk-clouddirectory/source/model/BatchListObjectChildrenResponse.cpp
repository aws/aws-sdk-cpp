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
#include <aws/clouddirectory/model/BatchListObjectChildrenResponse.h>
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

BatchListObjectChildrenResponse::BatchListObjectChildrenResponse() : 
    m_childrenHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectChildrenResponse::BatchListObjectChildrenResponse(const JsonValue& jsonValue) : 
    m_childrenHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectChildrenResponse& BatchListObjectChildrenResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Children"))
  {
    Aws::Map<Aws::String, JsonValue> childrenJsonMap = jsonValue.GetObject("Children").GetAllObjects();
    for(auto& childrenItem : childrenJsonMap)
    {
      m_children[childrenItem.first] = childrenItem.second.AsString();
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectChildrenResponse::Jsonize() const
{
  JsonValue payload;

  if(m_childrenHasBeenSet)
  {
   JsonValue childrenJsonMap;
   for(auto& childrenItem : m_children)
   {
     childrenJsonMap.WithString(childrenItem.first, childrenItem.second);
   }
   payload.WithObject("Children", std::move(childrenJsonMap));

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