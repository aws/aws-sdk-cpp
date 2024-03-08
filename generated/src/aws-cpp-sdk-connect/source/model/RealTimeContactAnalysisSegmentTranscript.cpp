/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentTranscript.h>
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

RealTimeContactAnalysisSegmentTranscript::RealTimeContactAnalysisSegmentTranscript() : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_redactionHasBeenSet(false),
    m_sentiment(RealTimeContactAnalysisSentimentLabel::NOT_SET),
    m_sentimentHasBeenSet(false)
{
}

RealTimeContactAnalysisSegmentTranscript::RealTimeContactAnalysisSegmentTranscript(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_redactionHasBeenSet(false),
    m_sentiment(RealTimeContactAnalysisSentimentLabel::NOT_SET),
    m_sentimentHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisSegmentTranscript& RealTimeContactAnalysisSegmentTranscript::operator =(JsonView jsonValue)
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
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Redaction"))
  {
    m_redaction = jsonValue.GetObject("Redaction");

    m_redactionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sentiment"))
  {
    m_sentiment = RealTimeContactAnalysisSentimentLabelMapper::GetRealTimeContactAnalysisSentimentLabelForName(jsonValue.GetString("Sentiment"));

    m_sentimentHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisSegmentTranscript::Jsonize() const
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
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  if(m_redactionHasBeenSet)
  {
   payload.WithObject("Redaction", m_redaction.Jsonize());

  }

  if(m_sentimentHasBeenSet)
  {
   payload.WithString("Sentiment", RealTimeContactAnalysisSentimentLabelMapper::GetNameForRealTimeContactAnalysisSentimentLabel(m_sentiment));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
