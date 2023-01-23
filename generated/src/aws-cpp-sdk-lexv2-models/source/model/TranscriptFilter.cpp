/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TranscriptFilter.h>
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

TranscriptFilter::TranscriptFilter() : 
    m_lexTranscriptFilterHasBeenSet(false)
{
}

TranscriptFilter::TranscriptFilter(JsonView jsonValue) : 
    m_lexTranscriptFilterHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptFilter& TranscriptFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lexTranscriptFilter"))
  {
    m_lexTranscriptFilter = jsonValue.GetObject("lexTranscriptFilter");

    m_lexTranscriptFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptFilter::Jsonize() const
{
  JsonValue payload;

  if(m_lexTranscriptFilterHasBeenSet)
  {
   payload.WithObject("lexTranscriptFilter", m_lexTranscriptFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
