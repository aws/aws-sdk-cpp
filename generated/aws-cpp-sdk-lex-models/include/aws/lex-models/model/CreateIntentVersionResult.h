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
#include <aws/lex-models/model/FollowUpPrompt.h>
#include <aws/lex-models/model/CodeHook.h>
#include <aws/lex-models/model/FulfillmentActivity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/KendraConfiguration.h>
#include <aws/lex-models/model/Slot.h>
#include <aws/lex-models/model/InputContext.h>
#include <aws/lex-models/model/OutputContext.h>
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
  class AWS_LEXMODELBUILDINGSERVICE_API CreateIntentVersionResult
  {
  public:
    CreateIntentVersionResult();
    CreateIntentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateIntentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline CreateIntentVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline CreateIntentVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline CreateIntentVersionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the intent.</p>
     */
    inline CreateIntentVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the intent.</p>
     */
    inline CreateIntentVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the intent.</p>
     */
    inline CreateIntentVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const{ return m_slots; }

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline void SetSlots(const Aws::Vector<Slot>& value) { m_slots = value; }

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline void SetSlots(Aws::Vector<Slot>&& value) { m_slots = std::move(value); }

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline CreateIntentVersionResult& WithSlots(const Aws::Vector<Slot>& value) { SetSlots(value); return *this;}

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline CreateIntentVersionResult& WithSlots(Aws::Vector<Slot>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline CreateIntentVersionResult& AddSlots(const Slot& value) { m_slots.push_back(value); return *this; }

    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline CreateIntentVersionResult& AddSlots(Slot&& value) { m_slots.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterances = value; }

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterances = std::move(value); }

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline CreateIntentVersionResult& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline CreateIntentVersionResult& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline CreateIntentVersionResult& AddSampleUtterances(const Aws::String& value) { m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline CreateIntentVersionResult& AddSampleUtterances(Aws::String&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline CreateIntentVersionResult& AddSampleUtterances(const char* value) { m_sampleUtterances.push_back(value); return *this; }


    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline const Prompt& GetConfirmationPrompt() const{ return m_confirmationPrompt; }

    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline void SetConfirmationPrompt(const Prompt& value) { m_confirmationPrompt = value; }

    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline void SetConfirmationPrompt(Prompt&& value) { m_confirmationPrompt = std::move(value); }

    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline CreateIntentVersionResult& WithConfirmationPrompt(const Prompt& value) { SetConfirmationPrompt(value); return *this;}

    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline CreateIntentVersionResult& WithConfirmationPrompt(Prompt&& value) { SetConfirmationPrompt(std::move(value)); return *this;}


    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }

    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatement = value; }

    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatement = std::move(value); }

    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline CreateIntentVersionResult& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}

    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline CreateIntentVersionResult& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}


    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline const FollowUpPrompt& GetFollowUpPrompt() const{ return m_followUpPrompt; }

    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline void SetFollowUpPrompt(const FollowUpPrompt& value) { m_followUpPrompt = value; }

    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline void SetFollowUpPrompt(FollowUpPrompt&& value) { m_followUpPrompt = std::move(value); }

    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline CreateIntentVersionResult& WithFollowUpPrompt(const FollowUpPrompt& value) { SetFollowUpPrompt(value); return *this;}

    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline CreateIntentVersionResult& WithFollowUpPrompt(FollowUpPrompt&& value) { SetFollowUpPrompt(std::move(value)); return *this;}


    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline const Statement& GetConclusionStatement() const{ return m_conclusionStatement; }

    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline void SetConclusionStatement(const Statement& value) { m_conclusionStatement = value; }

    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline void SetConclusionStatement(Statement&& value) { m_conclusionStatement = std::move(value); }

    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline CreateIntentVersionResult& WithConclusionStatement(const Statement& value) { SetConclusionStatement(value); return *this;}

    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline CreateIntentVersionResult& WithConclusionStatement(Statement&& value) { SetConclusionStatement(std::move(value)); return *this;}


    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline const CodeHook& GetDialogCodeHook() const{ return m_dialogCodeHook; }

    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline void SetDialogCodeHook(const CodeHook& value) { m_dialogCodeHook = value; }

    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline void SetDialogCodeHook(CodeHook&& value) { m_dialogCodeHook = std::move(value); }

    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline CreateIntentVersionResult& WithDialogCodeHook(const CodeHook& value) { SetDialogCodeHook(value); return *this;}

    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline CreateIntentVersionResult& WithDialogCodeHook(CodeHook&& value) { SetDialogCodeHook(std::move(value)); return *this;}


    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline const FulfillmentActivity& GetFulfillmentActivity() const{ return m_fulfillmentActivity; }

    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline void SetFulfillmentActivity(const FulfillmentActivity& value) { m_fulfillmentActivity = value; }

    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline void SetFulfillmentActivity(FulfillmentActivity&& value) { m_fulfillmentActivity = std::move(value); }

    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline CreateIntentVersionResult& WithFulfillmentActivity(const FulfillmentActivity& value) { SetFulfillmentActivity(value); return *this;}

    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline CreateIntentVersionResult& WithFulfillmentActivity(FulfillmentActivity&& value) { SetFulfillmentActivity(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignature = value; }

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignature = std::move(value); }

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignature.assign(value); }

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline CreateIntentVersionResult& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline CreateIntentVersionResult& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline CreateIntentVersionResult& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>The date that the intent was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date that the intent was updated. </p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date that the intent was updated. </p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date that the intent was updated. </p>
     */
    inline CreateIntentVersionResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date that the intent was updated. </p>
     */
    inline CreateIntentVersionResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the intent was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the intent was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the intent was created.</p>
     */
    inline CreateIntentVersionResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the intent was created.</p>
     */
    inline CreateIntentVersionResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline CreateIntentVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline CreateIntentVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline CreateIntentVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline CreateIntentVersionResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline CreateIntentVersionResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline CreateIntentVersionResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }

    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfiguration = value; }

    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfiguration = std::move(value); }

    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline CreateIntentVersionResult& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}

    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline CreateIntentVersionResult& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}


    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContexts = value; }

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContexts = std::move(value); }

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline CreateIntentVersionResult& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline CreateIntentVersionResult& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline CreateIntentVersionResult& AddInputContexts(const InputContext& value) { m_inputContexts.push_back(value); return *this; }

    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline CreateIntentVersionResult& AddInputContexts(InputContext&& value) { m_inputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContexts = value; }

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContexts = std::move(value); }

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline CreateIntentVersionResult& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline CreateIntentVersionResult& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline CreateIntentVersionResult& AddOutputContexts(const OutputContext& value) { m_outputContexts.push_back(value); return *this; }

    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline CreateIntentVersionResult& AddOutputContexts(OutputContext&& value) { m_outputContexts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<Slot> m_slots;

    Aws::Vector<Aws::String> m_sampleUtterances;

    Prompt m_confirmationPrompt;

    Statement m_rejectionStatement;

    FollowUpPrompt m_followUpPrompt;

    Statement m_conclusionStatement;

    CodeHook m_dialogCodeHook;

    FulfillmentActivity m_fulfillmentActivity;

    Aws::String m_parentIntentSignature;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_version;

    Aws::String m_checksum;

    KendraConfiguration m_kendraConfiguration;

    Aws::Vector<InputContext> m_inputContexts;

    Aws::Vector<OutputContext> m_outputContexts;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
