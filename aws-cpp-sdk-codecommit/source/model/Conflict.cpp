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

#include <aws/codecommit/model/Conflict.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

Conflict::Conflict() : 
    m_conflictMetadataHasBeenSet(false),
    m_mergeHunksHasBeenSet(false)
{
}

Conflict::Conflict(JsonView jsonValue) : 
    m_conflictMetadataHasBeenSet(false),
    m_mergeHunksHasBeenSet(false)
{
  *this = jsonValue;
}

Conflict& Conflict::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conflictMetadata"))
  {
    m_conflictMetadata = jsonValue.GetObject("conflictMetadata");

    m_conflictMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeHunks"))
  {
    Array<JsonView> mergeHunksJsonList = jsonValue.GetArray("mergeHunks");
    for(unsigned mergeHunksIndex = 0; mergeHunksIndex < mergeHunksJsonList.GetLength(); ++mergeHunksIndex)
    {
      m_mergeHunks.push_back(mergeHunksJsonList[mergeHunksIndex].AsObject());
    }
    m_mergeHunksHasBeenSet = true;
  }

  return *this;
}

JsonValue Conflict::Jsonize() const
{
  JsonValue payload;

  if(m_conflictMetadataHasBeenSet)
  {
   payload.WithObject("conflictMetadata", m_conflictMetadata.Jsonize());

  }

  if(m_mergeHunksHasBeenSet)
  {
   Array<JsonValue> mergeHunksJsonList(m_mergeHunks.size());
   for(unsigned mergeHunksIndex = 0; mergeHunksIndex < mergeHunksJsonList.GetLength(); ++mergeHunksIndex)
   {
     mergeHunksJsonList[mergeHunksIndex].AsObject(m_mergeHunks[mergeHunksIndex].Jsonize());
   }
   payload.WithArray("mergeHunks", std::move(mergeHunksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
