/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AssociatedTranscript.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AssociatedTranscript::AssociatedTranscript() : 
    m_transcriptHasBeenSet(false)
{
}

AssociatedTranscript::AssociatedTranscript(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedTranscript& AssociatedTranscript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transcript"))
  {
    m_transcript = jsonValue.GetString("transcript");

    m_transcriptHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedTranscript::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithString("transcript", m_transcript);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
