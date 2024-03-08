/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemWithContent.h>
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

RealTimeContactAnalysisTranscriptItemWithContent::RealTimeContactAnalysisTranscriptItemWithContent() : 
    m_contentHasBeenSet(false),
    m_idHasBeenSet(false),
    m_characterOffsetsHasBeenSet(false)
{
}

RealTimeContactAnalysisTranscriptItemWithContent::RealTimeContactAnalysisTranscriptItemWithContent(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_idHasBeenSet(false),
    m_characterOffsetsHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisTranscriptItemWithContent& RealTimeContactAnalysisTranscriptItemWithContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

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

JsonValue RealTimeContactAnalysisTranscriptItemWithContent::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

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
