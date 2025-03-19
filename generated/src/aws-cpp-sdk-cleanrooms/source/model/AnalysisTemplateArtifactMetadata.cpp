/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisTemplateArtifactMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisTemplateArtifactMetadata::AnalysisTemplateArtifactMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisTemplateArtifactMetadata& AnalysisTemplateArtifactMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryPointHash"))
  {
    m_entryPointHash = jsonValue.GetObject("entryPointHash");
    m_entryPointHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalArtifactHashes"))
  {
    Aws::Utils::Array<JsonView> additionalArtifactHashesJsonList = jsonValue.GetArray("additionalArtifactHashes");
    for(unsigned additionalArtifactHashesIndex = 0; additionalArtifactHashesIndex < additionalArtifactHashesJsonList.GetLength(); ++additionalArtifactHashesIndex)
    {
      m_additionalArtifactHashes.push_back(additionalArtifactHashesJsonList[additionalArtifactHashesIndex].AsObject());
    }
    m_additionalArtifactHashesHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisTemplateArtifactMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_entryPointHashHasBeenSet)
  {
   payload.WithObject("entryPointHash", m_entryPointHash.Jsonize());

  }

  if(m_additionalArtifactHashesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalArtifactHashesJsonList(m_additionalArtifactHashes.size());
   for(unsigned additionalArtifactHashesIndex = 0; additionalArtifactHashesIndex < additionalArtifactHashesJsonList.GetLength(); ++additionalArtifactHashesIndex)
   {
     additionalArtifactHashesJsonList[additionalArtifactHashesIndex].AsObject(m_additionalArtifactHashes[additionalArtifactHashesIndex].Jsonize());
   }
   payload.WithArray("additionalArtifactHashes", std::move(additionalArtifactHashesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
