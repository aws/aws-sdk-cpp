/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Rule::Rule() : 
    m_nonTalkTimeFilterHasBeenSet(false),
    m_interruptionFilterHasBeenSet(false),
    m_transcriptFilterHasBeenSet(false),
    m_sentimentFilterHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_nonTalkTimeFilterHasBeenSet(false),
    m_interruptionFilterHasBeenSet(false),
    m_transcriptFilterHasBeenSet(false),
    m_sentimentFilterHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NonTalkTimeFilter"))
  {
    m_nonTalkTimeFilter = jsonValue.GetObject("NonTalkTimeFilter");

    m_nonTalkTimeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InterruptionFilter"))
  {
    m_interruptionFilter = jsonValue.GetObject("InterruptionFilter");

    m_interruptionFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptFilter"))
  {
    m_transcriptFilter = jsonValue.GetObject("TranscriptFilter");

    m_transcriptFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SentimentFilter"))
  {
    m_sentimentFilter = jsonValue.GetObject("SentimentFilter");

    m_sentimentFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_nonTalkTimeFilterHasBeenSet)
  {
   payload.WithObject("NonTalkTimeFilter", m_nonTalkTimeFilter.Jsonize());

  }

  if(m_interruptionFilterHasBeenSet)
  {
   payload.WithObject("InterruptionFilter", m_interruptionFilter.Jsonize());

  }

  if(m_transcriptFilterHasBeenSet)
  {
   payload.WithObject("TranscriptFilter", m_transcriptFilter.Jsonize());

  }

  if(m_sentimentFilterHasBeenSet)
  {
   payload.WithObject("SentimentFilter", m_sentimentFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
