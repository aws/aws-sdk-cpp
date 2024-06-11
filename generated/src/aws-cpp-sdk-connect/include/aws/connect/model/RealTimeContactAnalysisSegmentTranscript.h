﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantRole.h>
#include <aws/connect/model/RealTimeContactAnalysisTimeData.h>
#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemRedaction.h>
#include <aws/connect/model/RealTimeContactAnalysisSentimentLabel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The analyzed transcript segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentTranscript">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentTranscript
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript();
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the transcript.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the participant.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant. For example, is it a customer, agent, or
     * system.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the participant.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the transcript. Can be redacted.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content of the item. For example, <code>text/plain</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field describing the time of the event. It can have different representations
     * of time.</p>
     */
    inline const RealTimeContactAnalysisTimeData& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const RealTimeContactAnalysisTimeData& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(RealTimeContactAnalysisTimeData&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithTime(const RealTimeContactAnalysisTimeData& value) { SetTime(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithTime(RealTimeContactAnalysisTimeData&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object describing redaction that was applied to the transcript. If transcript
     * has the field it means part of the transcript was redacted.</p>
     */
    inline const RealTimeContactAnalysisTranscriptItemRedaction& GetRedaction() const{ return m_redaction; }
    inline bool RedactionHasBeenSet() const { return m_redactionHasBeenSet; }
    inline void SetRedaction(const RealTimeContactAnalysisTranscriptItemRedaction& value) { m_redactionHasBeenSet = true; m_redaction = value; }
    inline void SetRedaction(RealTimeContactAnalysisTranscriptItemRedaction&& value) { m_redactionHasBeenSet = true; m_redaction = std::move(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithRedaction(const RealTimeContactAnalysisTranscriptItemRedaction& value) { SetRedaction(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithRedaction(RealTimeContactAnalysisTranscriptItemRedaction&& value) { SetRedaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment detected for this piece of transcript.</p>
     */
    inline const RealTimeContactAnalysisSentimentLabel& GetSentiment() const{ return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(const RealTimeContactAnalysisSentimentLabel& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline void SetSentiment(RealTimeContactAnalysisSentimentLabel&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }
    inline RealTimeContactAnalysisSegmentTranscript& WithSentiment(const RealTimeContactAnalysisSentimentLabel& value) { SetSentiment(value); return *this;}
    inline RealTimeContactAnalysisSegmentTranscript& WithSentiment(RealTimeContactAnalysisSentimentLabel&& value) { SetSentiment(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    RealTimeContactAnalysisTimeData m_time;
    bool m_timeHasBeenSet = false;

    RealTimeContactAnalysisTranscriptItemRedaction m_redaction;
    bool m_redactionHasBeenSet = false;

    RealTimeContactAnalysisSentimentLabel m_sentiment;
    bool m_sentimentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
