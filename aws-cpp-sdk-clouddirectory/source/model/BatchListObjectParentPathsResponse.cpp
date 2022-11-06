/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchListObjectParentPathsResponse::BatchListObjectParentPathsResponse(JsonView jsonValue) : 
    m_pathToObjectIdentifiersListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectParentPathsResponse& BatchListObjectParentPathsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PathToObjectIdentifiersList"))
  {
    Aws::Utils::Array<JsonView> pathToObjectIdentifiersListJsonList = jsonValue.GetArray("PathToObjectIdentifiersList");
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
   Aws::Utils::Array<JsonValue> pathToObjectIdentifiersListJsonList(m_pathToObjectIdentifiersList.size());
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
