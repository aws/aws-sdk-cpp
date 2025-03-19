/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect-contact-lens/model/SentimentValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect-contact-lens/model/IssueDetected.h>
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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>A list of messages in the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/Transcript">AWS
   * API Reference</a></p>
   */
  class Transcript
  {
  public:
    AWS_CONNECTCONTACTLENS_API Transcript() = default;
    AWS_CONNECTCONTACTLENS_API Transcript(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Transcript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the transcript.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Transcript& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the participant. Valid values are CUSTOMER or AGENT.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    Transcript& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline const Aws::String& GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    template<typename ParticipantRoleT = Aws::String>
    void SetParticipantRole(ParticipantRoleT&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::forward<ParticipantRoleT>(value); }
    template<typename ParticipantRoleT = Aws::String>
    Transcript& WithParticipantRole(ParticipantRoleT&& value) { SetParticipantRole(std::forward<ParticipantRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the transcript.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Transcript& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning offset in the contact for this transcript.</p>
     */
    inline int GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(int value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline Transcript& WithBeginOffsetMillis(int value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end offset in the contact for this transcript.</p>
     */
    inline int GetEndOffsetMillis() const { return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(int value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline Transcript& WithEndOffsetMillis(int value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment detected for this piece of transcript.</p>
     */
    inline SentimentValue GetSentiment() const { return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(SentimentValue value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline Transcript& WithSentiment(SentimentValue value) { SetSentiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline const Aws::Vector<IssueDetected>& GetIssuesDetected() const { return m_issuesDetected; }
    inline bool IssuesDetectedHasBeenSet() const { return m_issuesDetectedHasBeenSet; }
    template<typename IssuesDetectedT = Aws::Vector<IssueDetected>>
    void SetIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = std::forward<IssuesDetectedT>(value); }
    template<typename IssuesDetectedT = Aws::Vector<IssueDetected>>
    Transcript& WithIssuesDetected(IssuesDetectedT&& value) { SetIssuesDetected(std::forward<IssuesDetectedT>(value)); return *this;}
    template<typename IssuesDetectedT = IssueDetected>
    Transcript& AddIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.emplace_back(std::forward<IssuesDetectedT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_beginOffsetMillis{0};
    bool m_beginOffsetMillisHasBeenSet = false;

    int m_endOffsetMillis{0};
    bool m_endOffsetMillisHasBeenSet = false;

    SentimentValue m_sentiment{SentimentValue::NOT_SET};
    bool m_sentimentHasBeenSet = false;

    Aws::Vector<IssueDetected> m_issuesDetected;
    bool m_issuesDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
