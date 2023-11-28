/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemWithCharacterOffsets.h>
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

RealTimeContactAnalysisTranscriptItemWithCharacterOffsets::RealTimeContactAnalysisTranscriptItemWithCharacterOffsets() : 
    m_idHasBeenSet(false),
    m_characterOffsetsHasBeenSet(false)
{
}

RealTimeContactAnalysisTranscriptItemWithCharacterOffsets::RealTimeContactAnalysisTranscriptItemWithCharacterOffsets(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_characterOffsetsHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& RealTimeContactAnalysisTranscriptItemWithCharacterOffsets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CharacterOffsets"))
  {
    m_characterOffsets = jsonValue.GetObject("CharacterOffsets");

    m_characterOffsetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisTranscriptItemWithCharacterOffsets::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_characterOffsetsHasBeenSet)
  {
   payload.WithObject("CharacterOffsets", m_characterOffsets.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
