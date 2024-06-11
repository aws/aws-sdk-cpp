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
  class CreateIntentVersionResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CreateIntentVersionResult();
    AWS_LEXMODELBUILDINGSERVICE_API CreateIntentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API CreateIntentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateIntentVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateIntentVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateIntentVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIntentVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of slot types that defines the information required to fulfill the
     * intent.</p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const{ return m_slots; }
    inline void SetSlots(const Aws::Vector<Slot>& value) { m_slots = value; }
    inline void SetSlots(Aws::Vector<Slot>&& value) { m_slots = std::move(value); }
    inline CreateIntentVersionResult& WithSlots(const Aws::Vector<Slot>& value) { SetSlots(value); return *this;}
    inline CreateIntentVersionResult& WithSlots(Aws::Vector<Slot>&& value) { SetSlots(std::move(value)); return *this;}
    inline CreateIntentVersionResult& AddSlots(const Slot& value) { m_slots.push_back(value); return *this; }
    inline CreateIntentVersionResult& AddSlots(Slot&& value) { m_slots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of sample utterances configured for the intent. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterances = value; }
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterances = std::move(value); }
    inline CreateIntentVersionResult& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}
    inline CreateIntentVersionResult& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}
    inline CreateIntentVersionResult& AddSampleUtterances(const Aws::String& value) { m_sampleUtterances.push_back(value); return *this; }
    inline CreateIntentVersionResult& AddSampleUtterances(Aws::String&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }
    inline CreateIntentVersionResult& AddSampleUtterances(const char* value) { m_sampleUtterances.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If defined, the prompt that Amazon Lex uses to confirm the user's intent
     * before fulfilling it. </p>
     */
    inline const Prompt& GetConfirmationPrompt() const{ return m_confirmationPrompt; }
    inline void SetConfirmationPrompt(const Prompt& value) { m_confirmationPrompt = value; }
    inline void SetConfirmationPrompt(Prompt&& value) { m_confirmationPrompt = std::move(value); }
    inline CreateIntentVersionResult& WithConfirmationPrompt(const Prompt& value) { SetConfirmationPrompt(value); return *this;}
    inline CreateIntentVersionResult& WithConfirmationPrompt(Prompt&& value) { SetConfirmationPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatement = value; }
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatement = std::move(value); }
    inline CreateIntentVersionResult& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}
    inline CreateIntentVersionResult& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined, Amazon Lex uses this prompt to solicit additional user activity
     * after the intent is fulfilled. </p>
     */
    inline const FollowUpPrompt& GetFollowUpPrompt() const{ return m_followUpPrompt; }
    inline void SetFollowUpPrompt(const FollowUpPrompt& value) { m_followUpPrompt = value; }
    inline void SetFollowUpPrompt(FollowUpPrompt&& value) { m_followUpPrompt = std::move(value); }
    inline CreateIntentVersionResult& WithFollowUpPrompt(const FollowUpPrompt& value) { SetFollowUpPrompt(value); return *this;}
    inline CreateIntentVersionResult& WithFollowUpPrompt(FollowUpPrompt&& value) { SetFollowUpPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>After the Lambda function specified in the <code>fulfillmentActivity</code>
     * field fulfills the intent, Amazon Lex conveys this statement to the user. </p>
     */
    inline const Statement& GetConclusionStatement() const{ return m_conclusionStatement; }
    inline void SetConclusionStatement(const Statement& value) { m_conclusionStatement = value; }
    inline void SetConclusionStatement(Statement&& value) { m_conclusionStatement = std::move(value); }
    inline CreateIntentVersionResult& WithConclusionStatement(const Statement& value) { SetConclusionStatement(value); return *this;}
    inline CreateIntentVersionResult& WithConclusionStatement(Statement&& value) { SetConclusionStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined, Amazon Lex invokes this Lambda function for each user input.</p>
     */
    inline const CodeHook& GetDialogCodeHook() const{ return m_dialogCodeHook; }
    inline void SetDialogCodeHook(const CodeHook& value) { m_dialogCodeHook = value; }
    inline void SetDialogCodeHook(CodeHook&& value) { m_dialogCodeHook = std::move(value); }
    inline CreateIntentVersionResult& WithDialogCodeHook(const CodeHook& value) { SetDialogCodeHook(value); return *this;}
    inline CreateIntentVersionResult& WithDialogCodeHook(CodeHook&& value) { SetDialogCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes how the intent is fulfilled. </p>
     */
    inline const FulfillmentActivity& GetFulfillmentActivity() const{ return m_fulfillmentActivity; }
    inline void SetFulfillmentActivity(const FulfillmentActivity& value) { m_fulfillmentActivity = value; }
    inline void SetFulfillmentActivity(FulfillmentActivity&& value) { m_fulfillmentActivity = std::move(value); }
    inline CreateIntentVersionResult& WithFulfillmentActivity(const FulfillmentActivity& value) { SetFulfillmentActivity(value); return *this;}
    inline CreateIntentVersionResult& WithFulfillmentActivity(FulfillmentActivity&& value) { SetFulfillmentActivity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a built-in intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignature = value; }
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignature = std::move(value); }
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignature.assign(value); }
    inline CreateIntentVersionResult& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}
    inline CreateIntentVersionResult& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the intent was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline CreateIntentVersionResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline CreateIntentVersionResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreateIntentVersionResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreateIntentVersionResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number assigned to the new version of the intent.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateIntentVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateIntentVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the intent version created.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline CreateIntentVersionResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline CreateIntentVersionResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information, if any, for connecting an Amazon Kendra index with
     * the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfiguration = value; }
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfiguration = std::move(value); }
    inline CreateIntentVersionResult& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}
    inline CreateIntentVersionResult& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContexts = value; }
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContexts = std::move(value); }
    inline CreateIntentVersionResult& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}
    inline CreateIntentVersionResult& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}
    inline CreateIntentVersionResult& AddInputContexts(const InputContext& value) { m_inputContexts.push_back(value); return *this; }
    inline CreateIntentVersionResult& AddInputContexts(InputContext&& value) { m_inputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContexts = value; }
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContexts = std::move(value); }
    inline CreateIntentVersionResult& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}
    inline CreateIntentVersionResult& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}
    inline CreateIntentVersionResult& AddOutputContexts(const OutputContext& value) { m_outputContexts.push_back(value); return *this; }
    inline CreateIntentVersionResult& AddOutputContexts(OutputContext&& value) { m_outputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIntentVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIntentVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIntentVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
