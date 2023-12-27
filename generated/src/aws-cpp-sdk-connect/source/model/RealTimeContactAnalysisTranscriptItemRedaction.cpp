/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemRedaction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RealTimeContactAnalysisTranscriptItemRedaction::RealTimeContactAnalysisTranscriptItemRedaction() : 
    m_characterOffsetsHasBeenSet(false)
{
}

RealTimeContactAnalysisTranscriptItemRedaction::RealTimeContactAnalysisTranscriptItemRedaction(JsonView jsonValue) : 
    m_characterOffsetsHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisTranscriptItemRedaction& RealTimeContactAnalysisTranscriptItemRedaction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CharacterOffsets"))
  {
    Aws::Utils::Array<JsonView> characterOffsetsJsonList = jsonValue.GetArray("CharacterOffsets");
    for(unsigned characterOffsetsIndex = 0; characterOffsetsIndex < characterOffsetsJsonList.GetLength(); ++characterOffsetsIndex)
    {
      m_characterOffsets.push_back(characterOffsetsJsonList[characterOffsetsIndex].AsObject());
    }
    m_characterOffsetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisTranscriptItemRedaction::Jsonize() const
{
  JsonValue payload;

  if(m_characterOffsetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> characterOffsetsJsonList(m_characterOffsets.size());
   for(unsigned characterOffsetsIndex = 0; characterOffsetsIndex < characterOffsetsJsonList.GetLength(); ++characterOffsetsIndex)
   {
     characterOffsetsJsonList[characterOffsetsIndex].AsObject(m_characterOffsets[characterOffsetsIndex].Jsonize());
   }
   payload.WithArray("CharacterOffsets", std::move(characterOffsetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
