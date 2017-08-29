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

#include <aws/clouddirectory/model/BatchListObjectParentPathsResponse.h>
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

BatchListObjectParentPathsResponse::BatchListObjectParentPathsResponse() : 
    m_pathToObjectIdentifiersListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectParentPathsResponse::BatchListObjectParentPathsResponse(const JsonValue& jsonValue) : 
    m_pathToObjectIdentifiersListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectParentPathsResponse& BatchListObjectParentPathsResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PathToObjectIdentifiersList"))
  {
    Array<JsonValue> pathToObjectIdentifiersListJsonList = jsonValue.GetArray("PathToObjectIdentifiersList");
    for(unsigned pathToObjectIdentifiersListIndex = 0; pathToObjectIdentifiersListIndex < pathToObjectIdentifiersListJsonList.GetLength(); ++pathToObjectIdentifiersListIndex)
    {
      m_pathToObjectIdentifiersList.push_back(pathToObjectIdentifiersListJsonList[pathToObjectIdentifiersListIndex].AsObject());
    }
    m_pathToObjectIdentifiersListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectParentPathsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_pathToObjectIdentifiersListHasBeenSet)
  {
   Array<JsonValue> pathToObjectIdentifiersListJsonList(m_pathToObjectIdentifiersList.size());
   for(unsigned pathToObjectIdentifiersListIndex = 0; pathToObjectIdentifiersListIndex < pathToObjectIdentifiersListJsonList.GetLength(); ++pathToObjectIdentifiersListIndex)
   {
     pathToObjectIdentifiersListJsonList[pathToObjectIdentifiersListIndex].AsObject(m_pathToObjectIdentifiersList[pathToObjectIdentifiersListIndex].Jsonize());
   }
   payload.WithArray("PathToObjectIdentifiersList", std::move(pathToObjectIdentifiersListJsonList));

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
