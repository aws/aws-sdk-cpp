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
    AWS_CONNECTCONTACTLENS_API Transcript();
    AWS_CONNECTCONTACTLENS_API Transcript(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Transcript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the transcript.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline Transcript& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline Transcript& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the transcript.</p>
     */
    inline Transcript& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the participant.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>The identifier of the participant.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>The identifier of the participant.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>The identifier of the participant.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>The identifier of the participant.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>The identifier of the participant.</p>
     */
    inline Transcript& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>The identifier of the participant.</p>
     */
    inline Transcript& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the participant.</p>
     */
    inline Transcript& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline const Aws::String& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline void SetParticipantRole(const Aws::String& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline void SetParticipantRole(Aws::String&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline void SetParticipantRole(const char* value) { m_participantRoleHasBeenSet = true; m_participantRole.assign(value); }

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline Transcript& WithParticipantRole(const Aws::String& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline Transcript& WithParticipantRole(Aws::String&& value) { SetParticipantRole(std::move(value)); return *this;}

    /**
     * <p>The role of participant. For example, is it a customer, agent, or system.</p>
     */
    inline Transcript& WithParticipantRole(const char* value) { SetParticipantRole(value); return *this;}


    /**
     * <p>The content of the transcript.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the transcript.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the transcript.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the transcript.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the transcript.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the transcript.</p>
     */
    inline Transcript& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the transcript.</p>
     */
    inline Transcript& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the transcript.</p>
     */
    inline Transcript& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The beginning offset in the contact for this transcript.</p>
     */
    inline int GetBeginOffsetMillis() const{ return m_beginOffsetMillis; }

    /**
     * <p>The beginning offset in the contact for this transcript.</p>
     */
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }

    /**
     * <p>The beginning offset in the contact for this transcript.</p>
     */
    inline void SetBeginOffsetMillis(int value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }

    /**
     * <p>The beginning offset in the contact for this transcript.</p>
     */
    inline Transcript& WithBeginOffsetMillis(int value) { SetBeginOffsetMillis(value); return *this;}


    /**
     * <p>The end offset in the contact for this transcript.</p>
     */
    inline int GetEndOffsetMillis() const{ return m_endOffsetMillis; }

    /**
     * <p>The end offset in the contact for this transcript.</p>
     */
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }

    /**
     * <p>The end offset in the contact for this transcript.</p>
     */
    inline void SetEndOffsetMillis(int value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }

    /**
     * <p>The end offset in the contact for this transcript.</p>
     */
    inline Transcript& WithEndOffsetMillis(int value) { SetEndOffsetMillis(value); return *this;}


    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline const SentimentValue& GetSentiment() const{ return m_sentiment; }

    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }

    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline void SetSentiment(const SentimentValue& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }

    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline void SetSentiment(SentimentValue&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }

    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline Transcript& WithSentiment(const SentimentValue& value) { SetSentiment(value); return *this;}

    /**
     * <p>The sentiment of the detected for this piece of transcript.</p>
     */
    inline Transcript& WithSentiment(SentimentValue&& value) { SetSentiment(std::move(value)); return *this;}


    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline const Aws::Vector<IssueDetected>& GetIssuesDetected() const{ return m_issuesDetected; }

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline bool IssuesDetectedHasBeenSet() const { return m_issuesDetectedHasBeenSet; }

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline void SetIssuesDetected(const Aws::Vector<IssueDetected>& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = value; }

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline void SetIssuesDetected(Aws::Vector<IssueDetected>&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = std::move(value); }

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline Transcript& WithIssuesDetected(const Aws::Vector<IssueDetected>& value) { SetIssuesDetected(value); return *this;}

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline Transcript& WithIssuesDetected(Aws::Vector<IssueDetected>&& value) { SetIssuesDetected(std::move(value)); return *this;}

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline Transcript& AddIssuesDetected(const IssueDetected& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.push_back(value); return *this; }

    /**
     * <p>List of positions where issues were detected on the transcript.</p>
     */
    inline Transcript& AddIssuesDetected(IssueDetected&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_beginOffsetMillis;
    bool m_beginOffsetMillisHasBeenSet = false;

    int m_endOffsetMillis;
    bool m_endOffsetMillisHasBeenSet = false;

    SentimentValue m_sentiment;
    bool m_sentimentHasBeenSet = false;

    Aws::Vector<IssueDetected> m_issuesDetected;
    bool m_issuesDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
