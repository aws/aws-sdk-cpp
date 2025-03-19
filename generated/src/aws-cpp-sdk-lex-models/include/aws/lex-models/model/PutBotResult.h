/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
#include <aws/lex-models/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/Intent.h>
#include <aws/lex-models/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{
  class PutBotResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutBotResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutBotResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline const Aws::Vector<Intent>& GetIntents() const { return m_intents; }
    template<typename IntentsT = Aws::Vector<Intent>>
    void SetIntents(IntentsT&& value) { m_intentsHasBeenSet = true; m_intents = std::forward<IntentsT>(value); }
    template<typename IntentsT = Aws::Vector<Intent>>
    PutBotResult& WithIntents(IntentsT&& value) { SetIntents(std::forward<IntentsT>(value)); return *this;}
    template<typename IntentsT = Intent>
    PutBotResult& AddIntents(IntentsT&& value) { m_intentsHasBeenSet = true; m_intents.emplace_back(std::forward<IntentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bot uses accuracy improvements. <code>true</code>
     * indicates that the bot is using the improvements, otherwise,
     * <code>false</code>.</p>
     */
    inline bool GetEnableModelImprovements() const { return m_enableModelImprovements; }
    inline void SetEnableModelImprovements(bool value) { m_enableModelImprovementsHasBeenSet = true; m_enableModelImprovements = value; }
    inline PutBotResult& WithEnableModelImprovements(bool value) { SetEnableModelImprovements(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The score that determines where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * response. <code>AMAZON.FallbackIntent</code> is inserted if the confidence score
     * for all intents is below this value. <code>AMAZON.KendraSearchIntent</code> is
     * only inserted if it is configured for the bot.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const { return m_nluIntentConfidenceThreshold; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }
    inline PutBotResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline const Prompt& GetClarificationPrompt() const { return m_clarificationPrompt; }
    template<typename ClarificationPromptT = Prompt>
    void SetClarificationPrompt(ClarificationPromptT&& value) { m_clarificationPromptHasBeenSet = true; m_clarificationPrompt = std::forward<ClarificationPromptT>(value); }
    template<typename ClarificationPromptT = Prompt>
    PutBotResult& WithClarificationPrompt(ClarificationPromptT&& value) { SetClarificationPrompt(std::forward<ClarificationPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that Amazon Lex uses to cancel a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline const Statement& GetAbortStatement() const { return m_abortStatement; }
    template<typename AbortStatementT = Statement>
    void SetAbortStatement(AbortStatementT&& value) { m_abortStatementHasBeenSet = true; m_abortStatement = std::forward<AbortStatementT>(value); }
    template<typename AbortStatementT = Statement>
    PutBotResult& WithAbortStatement(AbortStatementT&& value) { SetAbortStatement(std::forward<AbortStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>.</p> <p>In the <code>READY_BASIC_TESTING</code>
     * state you can test the bot with user inputs that exactly match the utterances
     * configured for the bot's intents and values in the slot types.</p> <p>If Amazon
     * Lex can't build the bot, Amazon Lex sets <code>status</code> to
     * <code>FAILED</code>. Amazon Lex returns the reason for the failure in the
     * <code>failureReason</code> response element. </p> <p>When you set
     * <code>processBehavior</code> to <code>SAVE</code>, Amazon Lex sets the status
     * code to <code>NOT BUILT</code>.</p> <p>When the bot is in the <code>READY</code>
     * state you can test and publish the bot.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline PutBotResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    PutBotResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    PutBotResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    PutBotResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of time that Amazon Lex retains the data gathered in a
     * conversation. For more information, see <a>PutBot</a>.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline PutBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const { return m_voiceId; }
    template<typename VoiceIdT = Aws::String>
    void SetVoiceId(VoiceIdT&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::forward<VoiceIdT>(value); }
    template<typename VoiceIdT = Aws::String>
    PutBotResult& WithVoiceId(VoiceIdT&& value) { SetVoiceId(std::forward<VoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    PutBotResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PutBotResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target locale for the bot. </p>
     */
    inline Locale GetLocale() const { return m_locale; }
    inline void SetLocale(Locale value) { m_localeHasBeenSet = true; m_locale = value; }
    inline PutBotResult& WithLocale(Locale value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For each Amazon Lex bot created with the Amazon Lex Model Building Service,
     * you must specify whether your use of Amazon Lex is related to a website,
     * program, or other application that is directed or targeted, in whole or in part,
     * to children under age 13 and subject to the Children's Online Privacy Protection
     * Act (COPPA) by specifying <code>true</code> or <code>false</code> in the
     * <code>childDirected</code> field. By specifying <code>true</code> in the
     * <code>childDirected</code> field, you confirm that your use of Amazon Lex
     * <b>is</b> related to a website, program, or other application that is directed
     * or targeted, in whole or in part, to children under age 13 and subject to COPPA.
     * By specifying <code>false</code> in the <code>childDirected</code> field, you
     * confirm that your use of Amazon Lex <b>is not</b> related to a website, program,
     * or other application that is directed or targeted, in whole or in part, to
     * children under age 13 and subject to COPPA. You may not specify a default value
     * for the <code>childDirected</code> field that does not accurately reflect
     * whether your use of Amazon Lex is related to a website, program, or other
     * application that is directed or targeted, in whole or in part, to children under
     * age 13 and subject to COPPA.</p> <p>If your use of Amazon Lex relates to a
     * website, program, or other application that is directed in whole or in part, to
     * children under age 13, you must obtain any required verifiable parental consent
     * under COPPA. For information regarding the use of Amazon Lex in connection with
     * websites, programs, or other applications that are directed or targeted, in
     * whole or in part, to children under age 13, see the <a
     * href="https://aws.amazon.com/lex/faqs#data-security">Amazon Lex FAQ.</a> </p>
     */
    inline bool GetChildDirected() const { return m_childDirected; }
    inline void SetChildDirected(bool value) { m_childDirectedHasBeenSet = true; m_childDirected = value; }
    inline PutBotResult& WithChildDirected(bool value) { SetChildDirected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if a new version of the bot was created. If the
     * <code>createVersion</code> field was not specified in the request, the
     * <code>createVersion</code> field is set to false in the response.</p>
     */
    inline bool GetCreateVersion() const { return m_createVersion; }
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }
    inline PutBotResult& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>true</code> if the bot is configured to send user utterances to Amazon
     * Comprehend for sentiment analysis. If the <code>detectSentiment</code> field was
     * not specified in the request, the <code>detectSentiment</code> field is
     * <code>false</code> in the response.</p>
     */
    inline bool GetDetectSentiment() const { return m_detectSentiment; }
    inline void SetDetectSentiment(bool value) { m_detectSentimentHasBeenSet = true; m_detectSentiment = value; }
    inline PutBotResult& WithDetectSentiment(bool value) { SetDetectSentiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutBotResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutBotResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutBotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Intent> m_intents;
    bool m_intentsHasBeenSet = false;

    bool m_enableModelImprovements{false};
    bool m_enableModelImprovementsHasBeenSet = false;

    double m_nluIntentConfidenceThreshold{0.0};
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    Prompt m_clarificationPrompt;
    bool m_clarificationPromptHasBeenSet = false;

    Statement m_abortStatement;
    bool m_abortStatementHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Locale m_locale{Locale::NOT_SET};
    bool m_localeHasBeenSet = false;

    bool m_childDirected{false};
    bool m_childDirectedHasBeenSet = false;

    bool m_createVersion{false};
    bool m_createVersionHasBeenSet = false;

    bool m_detectSentiment{false};
    bool m_detectSentimentHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
