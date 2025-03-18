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
  class PutIntentResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutIntentResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API PutIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API PutIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutIntentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutIntentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of intent slots that are configured for the intent.</p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const { return m_slots; }
    template<typename SlotsT = Aws::Vector<Slot>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Vector<Slot>>
    PutIntentResult& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsT = Slot>
    PutIntentResult& AddSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots.emplace_back(std::forward<SlotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of sample utterances that are configured for the intent. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const { return m_sampleUtterances; }
    template<typename SampleUtterancesT = Aws::Vector<Aws::String>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<Aws::String>>
    PutIntentResult& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = Aws::String>
    PutIntentResult& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If defined in the intent, Amazon Lex prompts the user to confirm the intent
     * before fulfilling it.</p>
     */
    inline const Prompt& GetConfirmationPrompt() const { return m_confirmationPrompt; }
    template<typename ConfirmationPromptT = Prompt>
    void SetConfirmationPrompt(ConfirmationPromptT&& value) { m_confirmationPromptHasBeenSet = true; m_confirmationPrompt = std::forward<ConfirmationPromptT>(value); }
    template<typename ConfirmationPromptT = Prompt>
    PutIntentResult& WithConfirmationPrompt(ConfirmationPromptT&& value) { SetConfirmationPrompt(std::forward<ConfirmationPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the user answers "no" to the question defined in
     * <code>confirmationPrompt</code> Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>
     */
    inline const Statement& GetRejectionStatement() const { return m_rejectionStatement; }
    template<typename RejectionStatementT = Statement>
    void SetRejectionStatement(RejectionStatementT&& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = std::forward<RejectionStatementT>(value); }
    template<typename RejectionStatementT = Statement>
    PutIntentResult& WithRejectionStatement(RejectionStatementT&& value) { SetRejectionStatement(std::forward<RejectionStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined in the intent, Amazon Lex uses this prompt to solicit additional
     * user activity after the intent is fulfilled.</p>
     */
    inline const FollowUpPrompt& GetFollowUpPrompt() const { return m_followUpPrompt; }
    template<typename FollowUpPromptT = FollowUpPrompt>
    void SetFollowUpPrompt(FollowUpPromptT&& value) { m_followUpPromptHasBeenSet = true; m_followUpPrompt = std::forward<FollowUpPromptT>(value); }
    template<typename FollowUpPromptT = FollowUpPrompt>
    PutIntentResult& WithFollowUpPrompt(FollowUpPromptT&& value) { SetFollowUpPrompt(std::forward<FollowUpPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>After the Lambda function specified in
     * the<code>fulfillmentActivity</code>intent fulfills the intent, Amazon Lex
     * conveys this statement to the user.</p>
     */
    inline const Statement& GetConclusionStatement() const { return m_conclusionStatement; }
    template<typename ConclusionStatementT = Statement>
    void SetConclusionStatement(ConclusionStatementT&& value) { m_conclusionStatementHasBeenSet = true; m_conclusionStatement = std::forward<ConclusionStatementT>(value); }
    template<typename ConclusionStatementT = Statement>
    PutIntentResult& WithConclusionStatement(ConclusionStatementT&& value) { SetConclusionStatement(std::forward<ConclusionStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined in the intent, Amazon Lex invokes this Lambda function for each
     * user input.</p>
     */
    inline const CodeHook& GetDialogCodeHook() const { return m_dialogCodeHook; }
    template<typename DialogCodeHookT = CodeHook>
    void SetDialogCodeHook(DialogCodeHookT&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::forward<DialogCodeHookT>(value); }
    template<typename DialogCodeHookT = CodeHook>
    PutIntentResult& WithDialogCodeHook(DialogCodeHookT&& value) { SetDialogCodeHook(std::forward<DialogCodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined in the intent, Amazon Lex invokes this Lambda function to fulfill
     * the intent after the user provides all of the information required by the
     * intent.</p>
     */
    inline const FulfillmentActivity& GetFulfillmentActivity() const { return m_fulfillmentActivity; }
    template<typename FulfillmentActivityT = FulfillmentActivity>
    void SetFulfillmentActivity(FulfillmentActivityT&& value) { m_fulfillmentActivityHasBeenSet = true; m_fulfillmentActivity = std::forward<FulfillmentActivityT>(value); }
    template<typename FulfillmentActivityT = FulfillmentActivity>
    PutIntentResult& WithFulfillmentActivity(FulfillmentActivityT&& value) { SetFulfillmentActivity(std::forward<FulfillmentActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the built-in intent that this intent is based on.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const { return m_parentIntentSignature; }
    template<typename ParentIntentSignatureT = Aws::String>
    void SetParentIntentSignature(ParentIntentSignatureT&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::forward<ParentIntentSignatureT>(value); }
    template<typename ParentIntentSignatureT = Aws::String>
    PutIntentResult& WithParentIntentSignature(ParentIntentSignatureT&& value) { SetParentIntentSignature(std::forward<ParentIntentSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the intent was updated. When you create a resource, the
     * creation date and last update dates are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    PutIntentResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    PutIntentResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the intent. For a new intent, the version is always
     * <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PutIntentResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the <code>$LATEST</code>version of the intent created or
     * updated.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    PutIntentResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if a new version of the intent was created. If the
     * <code>createVersion</code> field was not specified in the request, the
     * <code>createVersion</code> field is set to false in the response.</p>
     */
    inline bool GetCreateVersion() const { return m_createVersion; }
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }
    inline PutIntentResult& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information, if any, required to connect to an Amazon Kendra
     * index and use the <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const { return m_kendraConfiguration; }
    template<typename KendraConfigurationT = KendraConfiguration>
    void SetKendraConfiguration(KendraConfigurationT&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::forward<KendraConfigurationT>(value); }
    template<typename KendraConfigurationT = KendraConfiguration>
    PutIntentResult& WithKendraConfiguration(KendraConfigurationT&& value) { SetKendraConfiguration(std::forward<KendraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const { return m_inputContexts; }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    void SetInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::forward<InputContextsT>(value); }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    PutIntentResult& WithInputContexts(InputContextsT&& value) { SetInputContexts(std::forward<InputContextsT>(value)); return *this;}
    template<typename InputContextsT = InputContext>
    PutIntentResult& AddInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.emplace_back(std::forward<InputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const { return m_outputContexts; }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    void SetOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::forward<OutputContextsT>(value); }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    PutIntentResult& WithOutputContexts(OutputContextsT&& value) { SetOutputContexts(std::forward<OutputContextsT>(value)); return *this;}
    template<typename OutputContextsT = OutputContext>
    PutIntentResult& AddOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.emplace_back(std::forward<OutputContextsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutIntentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Slot> m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    Prompt m_confirmationPrompt;
    bool m_confirmationPromptHasBeenSet = false;

    Statement m_rejectionStatement;
    bool m_rejectionStatementHasBeenSet = false;

    FollowUpPrompt m_followUpPrompt;
    bool m_followUpPromptHasBeenSet = false;

    Statement m_conclusionStatement;
    bool m_conclusionStatementHasBeenSet = false;

    CodeHook m_dialogCodeHook;
    bool m_dialogCodeHookHasBeenSet = false;

    FulfillmentActivity m_fulfillmentActivity;
    bool m_fulfillmentActivityHasBeenSet = false;

    Aws::String m_parentIntentSignature;
    bool m_parentIntentSignatureHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    bool m_createVersion{false};
    bool m_createVersionHasBeenSet = false;

    KendraConfiguration m_kendraConfiguration;
    bool m_kendraConfigurationHasBeenSet = false;

    Aws::Vector<InputContext> m_inputContexts;
    bool m_inputContextsHasBeenSet = false;

    Aws::Vector<OutputContext> m_outputContexts;
    bool m_outputContextsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
