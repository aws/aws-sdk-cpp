/**
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
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript() = default;
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the transcript.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RealTimeContactAnalysisSegmentTranscript& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the participant.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    RealTimeContactAnalysisSegmentTranscript& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant. For example, is it a customer, agent, or
     * system.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline RealTimeContactAnalysisSegmentTranscript& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the participant.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    RealTimeContactAnalysisSegmentTranscript& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the transcript. Can be redacted.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    RealTimeContactAnalysisSegmentTranscript& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content of the item. For example, <code>text/plain</code>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    RealTimeContactAnalysisSegmentTranscript& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field describing the time of the event. It can have different representations
     * of time.</p>
     */
    inline const RealTimeContactAnalysisTimeData& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = RealTimeContactAnalysisTimeData>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = RealTimeContactAnalysisTimeData>
    RealTimeContactAnalysisSegmentTranscript& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object describing redaction that was applied to the transcript. If transcript
     * has the field it means part of the transcript was redacted.</p>
     */
    inline const RealTimeContactAnalysisTranscriptItemRedaction& GetRedaction() const { return m_redaction; }
    inline bool RedactionHasBeenSet() const { return m_redactionHasBeenSet; }
    template<typename RedactionT = RealTimeContactAnalysisTranscriptItemRedaction>
    void SetRedaction(RedactionT&& value) { m_redactionHasBeenSet = true; m_redaction = std::forward<RedactionT>(value); }
    template<typename RedactionT = RealTimeContactAnalysisTranscriptItemRedaction>
    RealTimeContactAnalysisSegmentTranscript& WithRedaction(RedactionT&& value) { SetRedaction(std::forward<RedactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment detected for this piece of transcript.</p>
     */
    inline RealTimeContactAnalysisSentimentLabel GetSentiment() const { return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(RealTimeContactAnalysisSentimentLabel value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline RealTimeContactAnalysisSegmentTranscript& WithSentiment(RealTimeContactAnalysisSentimentLabel value) { SetSentiment(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
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

    RealTimeContactAnalysisSentimentLabel m_sentiment{RealTimeContactAnalysisSentimentLabel::NOT_SET};
    bool m_sentimentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
