/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
#include <aws/lex-models/model/FollowUpPrompt.h>
#include <aws/lex-models/model/CodeHook.h>
#include <aws/lex-models/model/FulfillmentActivity.h>
#include <aws/lex-models/model/KendraConfiguration.h>
#include <aws/lex-models/model/Slot.h>
#include <aws/lex-models/model/InputContext.h>
#include <aws/lex-models/model/OutputContext.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class PutIntentRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutIntentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntent"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutIntentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutIntentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutIntentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * <a>how-it-works</a>. </p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const{ return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    inline void SetSlots(const Aws::Vector<Slot>& value) { m_slotsHasBeenSet = true; m_slots = value; }
    inline void SetSlots(Aws::Vector<Slot>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }
    inline PutIntentRequest& WithSlots(const Aws::Vector<Slot>& value) { SetSlots(value); return *this;}
    inline PutIntentRequest& WithSlots(Aws::Vector<Slot>&& value) { SetSlots(std::move(value)); return *this;}
    inline PutIntentRequest& AddSlots(const Slot& value) { m_slotsHasBeenSet = true; m_slots.push_back(value); return *this; }
    inline PutIntentRequest& AddSlots(Slot&& value) { m_slotsHasBeenSet = true; m_slots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }
    inline PutIntentRequest& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}
    inline PutIntentRequest& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}
    inline PutIntentRequest& AddSampleUtterances(const Aws::String& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }
    inline PutIntentRequest& AddSampleUtterances(Aws::String&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }
    inline PutIntentRequest& AddSampleUtterances(const char* value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>  <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> 
     */
    inline const Prompt& GetConfirmationPrompt() const{ return m_confirmationPrompt; }
    inline bool ConfirmationPromptHasBeenSet() const { return m_confirmationPromptHasBeenSet; }
    inline void SetConfirmationPrompt(const Prompt& value) { m_confirmationPromptHasBeenSet = true; m_confirmationPrompt = value; }
    inline void SetConfirmationPrompt(Prompt&& value) { m_confirmationPromptHasBeenSet = true; m_confirmationPrompt = std::move(value); }
    inline PutIntentRequest& WithConfirmationPrompt(const Prompt& value) { SetConfirmationPrompt(value); return *this;}
    inline PutIntentRequest& WithConfirmationPrompt(Prompt&& value) { SetConfirmationPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p>  <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> 
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }
    inline bool RejectionStatementHasBeenSet() const { return m_rejectionStatementHasBeenSet; }
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = value; }
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = std::move(value); }
    inline PutIntentRequest& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}
    inline PutIntentRequest& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Lex uses this prompt to solicit additional activity after fulfilling
     * an intent. For example, after the <code>OrderPizza</code> intent is fulfilled,
     * you might prompt the user to order a drink.</p> <p>The action that Amazon Lex
     * takes depends on the user's response, as follows:</p> <ul> <li> <p>If the user
     * says "Yes" it responds with the clarification prompt that is configured for the
     * bot.</p> </li> <li> <p>if the user says "Yes" and continues with an utterance
     * that triggers an intent it starts a conversation for the intent.</p> </li> <li>
     * <p>If the user says "No" it responds with the rejection statement configured for
     * the the follow-up prompt.</p> </li> <li> <p>If it doesn't recognize the
     * utterance it repeats the follow-up prompt again.</p> </li> </ul> <p>The
     * <code>followUpPrompt</code> field and the <code>conclusionStatement</code> field
     * are mutually exclusive. You can specify only one. </p>
     */
    inline const FollowUpPrompt& GetFollowUpPrompt() const{ return m_followUpPrompt; }
    inline bool FollowUpPromptHasBeenSet() const { return m_followUpPromptHasBeenSet; }
    inline void SetFollowUpPrompt(const FollowUpPrompt& value) { m_followUpPromptHasBeenSet = true; m_followUpPrompt = value; }
    inline void SetFollowUpPrompt(FollowUpPrompt&& value) { m_followUpPromptHasBeenSet = true; m_followUpPrompt = std::move(value); }
    inline PutIntentRequest& WithFollowUpPrompt(const FollowUpPrompt& value) { SetFollowUpPrompt(value); return *this;}
    inline PutIntentRequest& WithFollowUpPrompt(FollowUpPrompt&& value) { SetFollowUpPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p>  <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> 
     */
    inline const Statement& GetConclusionStatement() const{ return m_conclusionStatement; }
    inline bool ConclusionStatementHasBeenSet() const { return m_conclusionStatementHasBeenSet; }
    inline void SetConclusionStatement(const Statement& value) { m_conclusionStatementHasBeenSet = true; m_conclusionStatement = value; }
    inline void SetConclusionStatement(Statement&& value) { m_conclusionStatementHasBeenSet = true; m_conclusionStatement = std::move(value); }
    inline PutIntentRequest& WithConclusionStatement(const Statement& value) { SetConclusionStatement(value); return *this;}
    inline PutIntentRequest& WithConclusionStatement(Statement&& value) { SetConclusionStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline const CodeHook& GetDialogCodeHook() const{ return m_dialogCodeHook; }
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }
    inline void SetDialogCodeHook(const CodeHook& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }
    inline void SetDialogCodeHook(CodeHook&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }
    inline PutIntentRequest& WithDialogCodeHook(const CodeHook& value) { SetDialogCodeHook(value); return *this;}
    inline PutIntentRequest& WithDialogCodeHook(CodeHook&& value) { SetDialogCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. Describes how the intent is fulfilled. For example, after a user
     * provides all of the information for a pizza order,
     * <code>fulfillmentActivity</code> defines how the bot places an order with a
     * local pizza store. </p> <p> You might configure Amazon Lex to return all of the
     * intent information to the client application, or direct it to invoke a Lambda
     * function that can process the intent (for example, place an order with a
     * pizzeria). </p>
     */
    inline const FulfillmentActivity& GetFulfillmentActivity() const{ return m_fulfillmentActivity; }
    inline bool FulfillmentActivityHasBeenSet() const { return m_fulfillmentActivityHasBeenSet; }
    inline void SetFulfillmentActivity(const FulfillmentActivity& value) { m_fulfillmentActivityHasBeenSet = true; m_fulfillmentActivity = value; }
    inline void SetFulfillmentActivity(FulfillmentActivity&& value) { m_fulfillmentActivityHasBeenSet = true; m_fulfillmentActivity = std::move(value); }
    inline PutIntentRequest& WithFulfillmentActivity(const FulfillmentActivity& value) { SetFulfillmentActivity(value); return *this;}
    inline PutIntentRequest& WithFulfillmentActivity(FulfillmentActivity&& value) { SetFulfillmentActivity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }
    inline PutIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}
    inline PutIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}
    inline PutIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline PutIntentRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline PutIntentRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline PutIntentRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code> a new numbered version of the intent is
     * created. This is the same as calling the <code>CreateIntentVersion</code>
     * operation. If you do not specify <code>createVersion</code>, the default is
     * <code>false</code>.</p>
     */
    inline bool GetCreateVersion() const{ return m_createVersion; }
    inline bool CreateVersionHasBeenSet() const { return m_createVersionHasBeenSet; }
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }
    inline PutIntentRequest& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/built-in-intent-kendra-search.html">
     * AMAZON.KendraSearchIntent</a>.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = value; }
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::move(value); }
    inline PutIntentRequest& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}
    inline PutIntentRequest& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>InputContext</code> objects that lists the contexts that
     * must be active for Amazon Lex to choose the intent in a conversation with the
     * user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }
    inline PutIntentRequest& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}
    inline PutIntentRequest& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}
    inline PutIntentRequest& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }
    inline PutIntentRequest& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>OutputContext</code> objects that lists the contexts that
     * the intent activates when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }
    inline PutIntentRequest& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}
    inline PutIntentRequest& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}
    inline PutIntentRequest& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }
    inline PutIntentRequest& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }
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

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    bool m_createVersion;
    bool m_createVersionHasBeenSet = false;

    KendraConfiguration m_kendraConfiguration;
    bool m_kendraConfigurationHasBeenSet = false;

    Aws::Vector<InputContext> m_inputContexts;
    bool m_inputContextsHasBeenSet = false;

    Aws::Vector<OutputContext> m_outputContexts;
    bool m_outputContextsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
