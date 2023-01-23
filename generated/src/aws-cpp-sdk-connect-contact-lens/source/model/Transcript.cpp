/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/Transcript.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{

Transcript::Transcript() : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRoleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_sentiment(SentimentValue::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_issuesDetectedHasBeenSet(false)
{
}

Transcript::Transcript(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRoleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_sentiment(SentimentValue::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_issuesDetectedHasBeenSet(false)
{
  *this = jsonValue;
}

Transcript& Transcript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantId"))
  {
    m_participantId = jsonValue.GetString("ParticipantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = jsonValue.GetString("ParticipantRole");

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeginOffsetMillis"))
  {
    m_beginOffsetMillis = jsonValue.GetInteger("BeginOffsetMillis");

    m_beginOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffsetMillis"))
  {
    m_endOffsetMillis = jsonValue.GetInteger("EndOffsetMillis");

    m_endOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sentiment"))
  {
    m_sentiment = SentimentValueMapper::GetSentimentValueForName(jsonValue.GetString("Sentiment"));

    m_sentimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssuesDetected"))
  {
    Aws::Utils::Array<JsonView> issuesDetectedJsonList = jsonValue.GetArray("IssuesDetected");
    for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
    {
      m_issuesDetected.push_back(issuesDetectedJsonList[issuesDetectedIndex].AsObject());
    }
    m_issuesDetectedHasBeenSet = true;
  }

  return *this;
}

JsonValue Transcript::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("ParticipantId", m_participantId);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", m_participantRole);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_beginOffsetMillisHasBeenSet)
  {
   payload.WithInteger("BeginOffsetMillis", m_beginOffsetMillis);

  }

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInteger("EndOffsetMillis", m_endOffsetMillis);

  }

  if(m_sentimentHasBeenSet)
  {
   payload.WithString("Sentiment", SentimentValueMapper::GetNameForSentimentValue(m_sentiment));
  }

  if(m_issuesDetectedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issuesDetectedJsonList(m_issuesDetected.size());
   for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
   {
     issuesDetectedJsonList[issuesDetectedIndex].AsObject(m_issuesDetected[issuesDetectedIndex].Jsonize());
   }
   payload.WithArray("IssuesDetected", std::move(issuesDetectedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
