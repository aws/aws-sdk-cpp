﻿/**
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
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult();
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API PutBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline PutBotResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutBotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutBotResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline PutBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline const Aws::Vector<Intent>& GetIntents() const{ return m_intents; }
    inline void SetIntents(const Aws::Vector<Intent>& value) { m_intents = value; }
    inline void SetIntents(Aws::Vector<Intent>&& value) { m_intents = std::move(value); }
    inline PutBotResult& WithIntents(const Aws::Vector<Intent>& value) { SetIntents(value); return *this;}
    inline PutBotResult& WithIntents(Aws::Vector<Intent>&& value) { SetIntents(std::move(value)); return *this;}
    inline PutBotResult& AddIntents(const Intent& value) { m_intents.push_back(value); return *this; }
    inline PutBotResult& AddIntents(Intent&& value) { m_intents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bot uses accuracy improvements. <code>true</code>
     * indicates that the bot is using the improvements, otherwise,
     * <code>false</code>.</p>
     */
    inline bool GetEnableModelImprovements() const{ return m_enableModelImprovements; }
    inline void SetEnableModelImprovements(bool value) { m_enableModelImprovements = value; }
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
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThreshold = value; }
    inline PutBotResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline const Prompt& GetClarificationPrompt() const{ return m_clarificationPrompt; }
    inline void SetClarificationPrompt(const Prompt& value) { m_clarificationPrompt = value; }
    inline void SetClarificationPrompt(Prompt&& value) { m_clarificationPrompt = std::move(value); }
    inline PutBotResult& WithClarificationPrompt(const Prompt& value) { SetClarificationPrompt(value); return *this;}
    inline PutBotResult& WithClarificationPrompt(Prompt&& value) { SetClarificationPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that Amazon Lex uses to cancel a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline const Statement& GetAbortStatement() const{ return m_abortStatement; }
    inline void SetAbortStatement(const Statement& value) { m_abortStatement = value; }
    inline void SetAbortStatement(Statement&& value) { m_abortStatement = std::move(value); }
    inline PutBotResult& WithAbortStatement(const Statement& value) { SetAbortStatement(value); return *this;}
    inline PutBotResult& WithAbortStatement(Statement&& value) { SetAbortStatement(std::move(value)); return *this;}
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
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline PutBotResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline PutBotResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline PutBotResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline PutBotResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline PutBotResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline PutBotResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline PutBotResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline PutBotResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline PutBotResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of time that Amazon Lex retains the data gathered in a
     * conversation. For more information, see <a>PutBot</a>.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }
    inline PutBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }
    inline void SetVoiceId(const Aws::String& value) { m_voiceId = value; }
    inline void SetVoiceId(Aws::String&& value) { m_voiceId = std::move(value); }
    inline void SetVoiceId(const char* value) { m_voiceId.assign(value); }
    inline PutBotResult& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}
    inline PutBotResult& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}
    inline PutBotResult& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline PutBotResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline PutBotResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline PutBotResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline PutBotResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PutBotResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PutBotResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target locale for the bot. </p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }
    inline void SetLocale(const Locale& value) { m_locale = value; }
    inline void SetLocale(Locale&& value) { m_locale = std::move(value); }
    inline PutBotResult& WithLocale(const Locale& value) { SetLocale(value); return *this;}
    inline PutBotResult& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}
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
    inline bool GetChildDirected() const{ return m_childDirected; }
    inline void SetChildDirected(bool value) { m_childDirected = value; }
    inline PutBotResult& WithChildDirected(bool value) { SetChildDirected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if a new version of the bot was created. If the
     * <code>createVersion</code> field was not specified in the request, the
     * <code>createVersion</code> field is set to false in the response.</p>
     */
    inline bool GetCreateVersion() const{ return m_createVersion; }
    inline void SetCreateVersion(bool value) { m_createVersion = value; }
    inline PutBotResult& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>true</code> if the bot is configured to send user utterances to Amazon
     * Comprehend for sentiment analysis. If the <code>detectSentiment</code> field was
     * not specified in the request, the <code>detectSentiment</code> field is
     * <code>false</code> in the response.</p>
     */
    inline bool GetDetectSentiment() const{ return m_detectSentiment; }
    inline void SetDetectSentiment(bool value) { m_detectSentiment = value; }
    inline PutBotResult& WithDetectSentiment(bool value) { SetDetectSentiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline PutBotResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutBotResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutBotResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline PutBotResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutBotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutBotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutBotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<Intent> m_intents;

    bool m_enableModelImprovements;

    double m_nluIntentConfidenceThreshold;

    Prompt m_clarificationPrompt;

    Statement m_abortStatement;

    Status m_status;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    int m_idleSessionTTLInSeconds;

    Aws::String m_voiceId;

    Aws::String m_checksum;

    Aws::String m_version;

    Locale m_locale;

    bool m_childDirected;

    bool m_createVersion;

    bool m_detectSentiment;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
