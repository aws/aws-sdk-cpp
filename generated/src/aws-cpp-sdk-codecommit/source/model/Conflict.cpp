/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> mergeHunksJsonList = jsonValue.GetArray("mergeHunks");
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
   Aws::Utils::Array<JsonValue> mergeHunksJsonList(m_mergeHunks.size());
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
