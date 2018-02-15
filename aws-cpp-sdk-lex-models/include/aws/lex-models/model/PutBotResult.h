/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LEXMODELBUILDINGSERVICE_API PutBotResult
  {
  public:
    PutBotResult();
    PutBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline const Aws::Vector<Intent>& GetIntents() const{ return m_intents; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline void SetIntents(const Aws::Vector<Intent>& value) { m_intents = value; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline void SetIntents(Aws::Vector<Intent>&& value) { m_intents = std::move(value); }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithIntents(const Aws::Vector<Intent>& value) { SetIntents(value); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithIntents(Aws::Vector<Intent>&& value) { SetIntents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline PutBotResult& AddIntents(const Intent& value) { m_intents.push_back(value); return *this; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline PutBotResult& AddIntents(Intent&& value) { m_intents.push_back(std::move(value)); return *this; }


    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline const Prompt& GetClarificationPrompt() const{ return m_clarificationPrompt; }

    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline void SetClarificationPrompt(const Prompt& value) { m_clarificationPrompt = value; }

    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline void SetClarificationPrompt(Prompt&& value) { m_clarificationPrompt = std::move(value); }

    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline PutBotResult& WithClarificationPrompt(const Prompt& value) { SetClarificationPrompt(value); return *this;}

    /**
     * <p> The prompts that Amazon Lex uses when it doesn't understand the user's
     * intent. For more information, see <a>PutBot</a>. </p>
     */
    inline PutBotResult& WithClarificationPrompt(Prompt&& value) { SetClarificationPrompt(std::move(value)); return *this;}


    /**
     * <p>The message that Amazon Lex uses to abort a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline const Statement& GetAbortStatement() const{ return m_abortStatement; }

    /**
     * <p>The message that Amazon Lex uses to abort a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline void SetAbortStatement(const Statement& value) { m_abortStatement = value; }

    /**
     * <p>The message that Amazon Lex uses to abort a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline void SetAbortStatement(Statement&& value) { m_abortStatement = std::move(value); }

    /**
     * <p>The message that Amazon Lex uses to abort a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithAbortStatement(const Statement& value) { SetAbortStatement(value); return *this;}

    /**
     * <p>The message that Amazon Lex uses to abort a conversation. For more
     * information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithAbortStatement(Statement&& value) { SetAbortStatement(std::move(value)); return *this;}


    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>. After Amazon Lex builds the bot, it sets
     * <code>status</code> to <code>READY</code>. If Amazon Lex can't build the bot,
     * Amazon Lex sets <code>status</code> to <code>FAILED</code>. Amazon Lex returns
     * the reason for the failure in the <code>failureReason</code> response element.
     * </p> <p>When you set <code>processBehavior</code>to <code>SAVE</code>, Amazon
     * Lex sets the status code to <code>NOT BUILT</code>.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>. After Amazon Lex builds the bot, it sets
     * <code>status</code> to <code>READY</code>. If Amazon Lex can't build the bot,
     * Amazon Lex sets <code>status</code> to <code>FAILED</code>. Amazon Lex returns
     * the reason for the failure in the <code>failureReason</code> response element.
     * </p> <p>When you set <code>processBehavior</code>to <code>SAVE</code>, Amazon
     * Lex sets the status code to <code>NOT BUILT</code>.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>. After Amazon Lex builds the bot, it sets
     * <code>status</code> to <code>READY</code>. If Amazon Lex can't build the bot,
     * Amazon Lex sets <code>status</code> to <code>FAILED</code>. Amazon Lex returns
     * the reason for the failure in the <code>failureReason</code> response element.
     * </p> <p>When you set <code>processBehavior</code>to <code>SAVE</code>, Amazon
     * Lex sets the status code to <code>NOT BUILT</code>.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>. After Amazon Lex builds the bot, it sets
     * <code>status</code> to <code>READY</code>. If Amazon Lex can't build the bot,
     * Amazon Lex sets <code>status</code> to <code>FAILED</code>. Amazon Lex returns
     * the reason for the failure in the <code>failureReason</code> response element.
     * </p> <p>When you set <code>processBehavior</code>to <code>SAVE</code>, Amazon
     * Lex sets the status code to <code>NOT BUILT</code>.</p>
     */
    inline PutBotResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p> When you send a request to create a bot with <code>processBehavior</code>
     * set to <code>BUILD</code>, Amazon Lex sets the <code>status</code> response
     * element to <code>BUILDING</code>. After Amazon Lex builds the bot, it sets
     * <code>status</code> to <code>READY</code>. If Amazon Lex can't build the bot,
     * Amazon Lex sets <code>status</code> to <code>FAILED</code>. Amazon Lex returns
     * the reason for the failure in the <code>failureReason</code> response element.
     * </p> <p>When you set <code>processBehavior</code>to <code>SAVE</code>, Amazon
     * Lex sets the status code to <code>NOT BUILT</code>.</p>
     */
    inline PutBotResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline PutBotResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline PutBotResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to build the bot.</p>
     */
    inline PutBotResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline PutBotResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date that the bot was updated. When you create a resource, the creation
     * date and last updated date are the same.</p>
     */
    inline PutBotResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the bot was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the bot was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the bot was created.</p>
     */
    inline PutBotResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the bot was created.</p>
     */
    inline PutBotResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The maximum length of time that Amazon Lex retains the data gathered in a
     * conversation. For more information, see <a>PutBot</a>.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The maximum length of time that Amazon Lex retains the data gathered in a
     * conversation. For more information, see <a>PutBot</a>.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The maximum length of time that Amazon Lex retains the data gathered in a
     * conversation. For more information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline void SetVoiceId(const Aws::String& value) { m_voiceId = value; }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline void SetVoiceId(Aws::String&& value) { m_voiceId = std::move(value); }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline void SetVoiceId(const char* value) { m_voiceId.assign(value); }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user. For more information, see <a>PutBot</a>.</p>
     */
    inline PutBotResult& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}


    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline PutBotResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline PutBotResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Checksum of the bot that you created.</p>
     */
    inline PutBotResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline PutBotResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline PutBotResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot. For a new bot, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline PutBotResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p> The target locale for the bot. </p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p> The target locale for the bot. </p>
     */
    inline void SetLocale(const Locale& value) { m_locale = value; }

    /**
     * <p> The target locale for the bot. </p>
     */
    inline void SetLocale(Locale&& value) { m_locale = std::move(value); }

    /**
     * <p> The target locale for the bot. </p>
     */
    inline PutBotResult& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p> The target locale for the bot. </p>
     */
    inline PutBotResult& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


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
    inline void SetChildDirected(bool value) { m_childDirected = value; }

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
    inline PutBotResult& WithChildDirected(bool value) { SetChildDirected(value); return *this;}


    
    inline bool GetCreateVersion() const{ return m_createVersion; }

    
    inline void SetCreateVersion(bool value) { m_createVersion = value; }

    
    inline PutBotResult& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<Intent> m_intents;

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
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
