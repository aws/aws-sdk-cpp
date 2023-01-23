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
#include <aws/lex-models/model/ProcessBehavior.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/Intent.h>
#include <aws/lex-models/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class PutBotRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBot"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline const Aws::Vector<Intent>& GetIntents() const{ return m_intents; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline bool IntentsHasBeenSet() const { return m_intentsHasBeenSet; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline void SetIntents(const Aws::Vector<Intent>& value) { m_intentsHasBeenSet = true; m_intents = value; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline void SetIntents(Aws::Vector<Intent>&& value) { m_intentsHasBeenSet = true; m_intents = std::move(value); }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& WithIntents(const Aws::Vector<Intent>& value) { SetIntents(value); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& WithIntents(Aws::Vector<Intent>&& value) { SetIntents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& AddIntents(const Intent& value) { m_intentsHasBeenSet = true; m_intents.push_back(value); return *this; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& AddIntents(Intent&& value) { m_intentsHasBeenSet = true; m_intents.push_back(std::move(value)); return *this; }


    /**
     * <p>Set to <code>true</code> to enable access to natural language understanding
     * improvements. </p> <p>When you set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> you can use the
     * <code>nluIntentConfidenceThreshold</code> parameter to configure confidence
     * scores. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/confidence-scores.html">Confidence
     * Scores</a>.</p> <p>You can only set the <code>enableModelImprovements</code>
     * parameter in certain Regions. If you set the parameter to <code>true</code>,
     * your bot has access to accuracy improvements.</p> <p>The Regions where you can
     * set the <code>enableModelImprovements</code> parameter to <code>true</code>
     * are:</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default. In these Regions setting the parameter to
     * <code>false</code> throws a <code>ValidationException</code> exception.</p>
     */
    inline bool GetEnableModelImprovements() const{ return m_enableModelImprovements; }

    /**
     * <p>Set to <code>true</code> to enable access to natural language understanding
     * improvements. </p> <p>When you set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> you can use the
     * <code>nluIntentConfidenceThreshold</code> parameter to configure confidence
     * scores. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/confidence-scores.html">Confidence
     * Scores</a>.</p> <p>You can only set the <code>enableModelImprovements</code>
     * parameter in certain Regions. If you set the parameter to <code>true</code>,
     * your bot has access to accuracy improvements.</p> <p>The Regions where you can
     * set the <code>enableModelImprovements</code> parameter to <code>true</code>
     * are:</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default. In these Regions setting the parameter to
     * <code>false</code> throws a <code>ValidationException</code> exception.</p>
     */
    inline bool EnableModelImprovementsHasBeenSet() const { return m_enableModelImprovementsHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to enable access to natural language understanding
     * improvements. </p> <p>When you set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> you can use the
     * <code>nluIntentConfidenceThreshold</code> parameter to configure confidence
     * scores. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/confidence-scores.html">Confidence
     * Scores</a>.</p> <p>You can only set the <code>enableModelImprovements</code>
     * parameter in certain Regions. If you set the parameter to <code>true</code>,
     * your bot has access to accuracy improvements.</p> <p>The Regions where you can
     * set the <code>enableModelImprovements</code> parameter to <code>true</code>
     * are:</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default. In these Regions setting the parameter to
     * <code>false</code> throws a <code>ValidationException</code> exception.</p>
     */
    inline void SetEnableModelImprovements(bool value) { m_enableModelImprovementsHasBeenSet = true; m_enableModelImprovements = value; }

    /**
     * <p>Set to <code>true</code> to enable access to natural language understanding
     * improvements. </p> <p>When you set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> you can use the
     * <code>nluIntentConfidenceThreshold</code> parameter to configure confidence
     * scores. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/confidence-scores.html">Confidence
     * Scores</a>.</p> <p>You can only set the <code>enableModelImprovements</code>
     * parameter in certain Regions. If you set the parameter to <code>true</code>,
     * your bot has access to accuracy improvements.</p> <p>The Regions where you can
     * set the <code>enableModelImprovements</code> parameter to <code>true</code>
     * are:</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default. In these Regions setting the parameter to
     * <code>false</code> throws a <code>ValidationException</code> exception.</p>
     */
    inline PutBotRequest& WithEnableModelImprovements(bool value) { SetEnableModelImprovements(value); return *this;}


    /**
     * <p>Determines the threshold where Amazon Lex will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * response. <code>AMAZON.FallbackIntent</code> and
     * <code>AMAZON.KendraSearchIntent</code> are only inserted if they are configured
     * for the bot.</p> <p>You must set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> to use confidence scores in the following
     * regions.</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default.</p> <p>For example, suppose a bot is configured
     * with the confidence threshold of 0.80 and the
     * <code>AMAZON.FallbackIntent</code>. Amazon Lex returns three alternative intents
     * with the following confidence scores: IntentA (0.70), IntentB (0.60), IntentC
     * (0.50). The response from the <code>PostText</code> operation would be:</p> <ul>
     * <li> <p>AMAZON.FallbackIntent</p> </li> <li> <p>IntentA</p> </li> <li>
     * <p>IntentB</p> </li> <li> <p>IntentC</p> </li> </ul>
     */
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }

    /**
     * <p>Determines the threshold where Amazon Lex will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * response. <code>AMAZON.FallbackIntent</code> and
     * <code>AMAZON.KendraSearchIntent</code> are only inserted if they are configured
     * for the bot.</p> <p>You must set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> to use confidence scores in the following
     * regions.</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default.</p> <p>For example, suppose a bot is configured
     * with the confidence threshold of 0.80 and the
     * <code>AMAZON.FallbackIntent</code>. Amazon Lex returns three alternative intents
     * with the following confidence scores: IntentA (0.70), IntentB (0.60), IntentC
     * (0.50). The response from the <code>PostText</code> operation would be:</p> <ul>
     * <li> <p>AMAZON.FallbackIntent</p> </li> <li> <p>IntentA</p> </li> <li>
     * <p>IntentB</p> </li> <li> <p>IntentC</p> </li> </ul>
     */
    inline bool NluIntentConfidenceThresholdHasBeenSet() const { return m_nluIntentConfidenceThresholdHasBeenSet; }

    /**
     * <p>Determines the threshold where Amazon Lex will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * response. <code>AMAZON.FallbackIntent</code> and
     * <code>AMAZON.KendraSearchIntent</code> are only inserted if they are configured
     * for the bot.</p> <p>You must set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> to use confidence scores in the following
     * regions.</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default.</p> <p>For example, suppose a bot is configured
     * with the confidence threshold of 0.80 and the
     * <code>AMAZON.FallbackIntent</code>. Amazon Lex returns three alternative intents
     * with the following confidence scores: IntentA (0.70), IntentB (0.60), IntentC
     * (0.50). The response from the <code>PostText</code> operation would be:</p> <ul>
     * <li> <p>AMAZON.FallbackIntent</p> </li> <li> <p>IntentA</p> </li> <li>
     * <p>IntentB</p> </li> <li> <p>IntentC</p> </li> </ul>
     */
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }

    /**
     * <p>Determines the threshold where Amazon Lex will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * response. <code>AMAZON.FallbackIntent</code> and
     * <code>AMAZON.KendraSearchIntent</code> are only inserted if they are configured
     * for the bot.</p> <p>You must set the <code>enableModelImprovements</code>
     * parameter to <code>true</code> to use confidence scores in the following
     * regions.</p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p> </li> <li> <p>US
     * West (Oregon) (us-west-2)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (ap-southeast-2)</p> </li> <li> <p>EU (Ireland) (eu-west-1)</p> </li> </ul>
     * <p>In other Regions, the <code>enableModelImprovements</code> parameter is set
     * to <code>true</code> by default.</p> <p>For example, suppose a bot is configured
     * with the confidence threshold of 0.80 and the
     * <code>AMAZON.FallbackIntent</code>. Amazon Lex returns three alternative intents
     * with the following confidence scores: IntentA (0.70), IntentB (0.60), IntentC
     * (0.50). The response from the <code>PostText</code> operation would be:</p> <ul>
     * <li> <p>AMAZON.FallbackIntent</p> </li> <li> <p>IntentA</p> </li> <li>
     * <p>IntentB</p> </li> <li> <p>IntentC</p> </li> </ul>
     */
    inline PutBotRequest& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}


    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline const Prompt& GetClarificationPrompt() const{ return m_clarificationPrompt; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline bool ClarificationPromptHasBeenSet() const { return m_clarificationPromptHasBeenSet; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline void SetClarificationPrompt(const Prompt& value) { m_clarificationPromptHasBeenSet = true; m_clarificationPrompt = value; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline void SetClarificationPrompt(Prompt&& value) { m_clarificationPromptHasBeenSet = true; m_clarificationPrompt = std::move(value); }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline PutBotRequest& WithClarificationPrompt(const Prompt& value) { SetClarificationPrompt(value); return *this;}

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeat the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p> <p>If you have defined a fallback intent, it will be
     * invoked if the clarification prompt is repeated the number of times defined in
     * the <code>maxAttempts</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p> <p>If you don't define a clarification prompt, at
     * runtime Amazon Lex will return a 400 Bad Request exception in three cases: </p>
     * <ul> <li> <p>Follow-up prompt - When the user responds to a follow-up prompt but
     * does not provide an intent. For example, in response to a follow-up prompt that
     * says "Would you like anything else today?" the user says "Yes." Amazon Lex will
     * return a 400 Bad Request exception because it does not have a clarification
     * prompt to send to the user to get an intent.</p> </li> <li> <p>Lambda function -
     * When using a Lambda function, you return an <code>ElicitIntent</code> dialog
     * type. Since Amazon Lex does not have a clarification prompt to get an intent
     * from the user, it returns a 400 Bad Request exception.</p> </li> <li>
     * <p>PutSession operation - When using the <code>PutSession</code> operation, you
     * send an <code>ElicitIntent</code> dialog type. Since Amazon Lex does not have a
     * clarification prompt to get an intent from the user, it returns a 400 Bad
     * Request exception.</p> </li> </ul>
     */
    inline PutBotRequest& WithClarificationPrompt(Prompt&& value) { SetClarificationPrompt(std::move(value)); return *this;}


    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline const Statement& GetAbortStatement() const{ return m_abortStatement; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline bool AbortStatementHasBeenSet() const { return m_abortStatementHasBeenSet; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline void SetAbortStatement(const Statement& value) { m_abortStatementHasBeenSet = true; m_abortStatement = value; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline void SetAbortStatement(Statement&& value) { m_abortStatementHasBeenSet = true; m_abortStatement = std::move(value); }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline PutBotRequest& WithAbortStatement(const Statement& value) { SetAbortStatement(value); return *this;}

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then cancels the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p> <p>If you have defined a fallback intent the
     * cancel statement will not be sent to the user, the fallback intent is used
     * instead. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/built-in-intent-fallback.html">
     * AMAZON.FallbackIntent</a>.</p>
     */
    inline PutBotRequest& WithAbortStatement(Statement&& value) { SetAbortStatement(std::move(value)); return *this;}


    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline PutBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Voices in
     * Amazon Polly</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}


    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline const ProcessBehavior& GetProcessBehavior() const{ return m_processBehavior; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline bool ProcessBehaviorHasBeenSet() const { return m_processBehaviorHasBeenSet; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline void SetProcessBehavior(const ProcessBehavior& value) { m_processBehaviorHasBeenSet = true; m_processBehavior = value; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline void SetProcessBehavior(ProcessBehavior&& value) { m_processBehaviorHasBeenSet = true; m_processBehavior = std::move(value); }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline PutBotRequest& WithProcessBehavior(const ProcessBehavior& value) { SetProcessBehavior(value); return *this;}

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline PutBotRequest& WithProcessBehavior(ProcessBehavior&& value) { SetProcessBehavior(std::move(value)); return *this;}


    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline PutBotRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline PutBotRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


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
    inline bool ChildDirectedHasBeenSet() const { return m_childDirectedHasBeenSet; }

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
    inline void SetChildDirected(bool value) { m_childDirectedHasBeenSet = true; m_childDirected = value; }

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
    inline PutBotRequest& WithChildDirected(bool value) { SetChildDirected(value); return *this;}


    /**
     * <p>When set to <code>true</code> user utterances are sent to Amazon Comprehend
     * for sentiment analysis. If you don't specify <code>detectSentiment</code>, the
     * default is <code>false</code>.</p>
     */
    inline bool GetDetectSentiment() const{ return m_detectSentiment; }

    /**
     * <p>When set to <code>true</code> user utterances are sent to Amazon Comprehend
     * for sentiment analysis. If you don't specify <code>detectSentiment</code>, the
     * default is <code>false</code>.</p>
     */
    inline bool DetectSentimentHasBeenSet() const { return m_detectSentimentHasBeenSet; }

    /**
     * <p>When set to <code>true</code> user utterances are sent to Amazon Comprehend
     * for sentiment analysis. If you don't specify <code>detectSentiment</code>, the
     * default is <code>false</code>.</p>
     */
    inline void SetDetectSentiment(bool value) { m_detectSentimentHasBeenSet = true; m_detectSentiment = value; }

    /**
     * <p>When set to <code>true</code> user utterances are sent to Amazon Comprehend
     * for sentiment analysis. If you don't specify <code>detectSentiment</code>, the
     * default is <code>false</code>.</p>
     */
    inline PutBotRequest& WithDetectSentiment(bool value) { SetDetectSentiment(value); return *this;}


    /**
     * <p>When set to <code>true</code> a new numbered version of the bot is created.
     * This is the same as calling the <code>CreateBotVersion</code> operation. If you
     * don't specify <code>createVersion</code>, the default is <code>false</code>.</p>
     */
    inline bool GetCreateVersion() const{ return m_createVersion; }

    /**
     * <p>When set to <code>true</code> a new numbered version of the bot is created.
     * This is the same as calling the <code>CreateBotVersion</code> operation. If you
     * don't specify <code>createVersion</code>, the default is <code>false</code>.</p>
     */
    inline bool CreateVersionHasBeenSet() const { return m_createVersionHasBeenSet; }

    /**
     * <p>When set to <code>true</code> a new numbered version of the bot is created.
     * This is the same as calling the <code>CreateBotVersion</code> operation. If you
     * don't specify <code>createVersion</code>, the default is <code>false</code>.</p>
     */
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }

    /**
     * <p>When set to <code>true</code> a new numbered version of the bot is created.
     * This is the same as calling the <code>CreateBotVersion</code> operation. If you
     * don't specify <code>createVersion</code>, the default is <code>false</code>.</p>
     */
    inline PutBotRequest& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}


    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline PutBotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline PutBotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline PutBotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot, you can't use the <code>PutBot</code> operation to update the tags on a
     * bot. To update tags, use the <code>TagResource</code> operation.</p>
     */
    inline PutBotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Intent> m_intents;
    bool m_intentsHasBeenSet = false;

    bool m_enableModelImprovements;
    bool m_enableModelImprovementsHasBeenSet = false;

    double m_nluIntentConfidenceThreshold;
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    Prompt m_clarificationPrompt;
    bool m_clarificationPromptHasBeenSet = false;

    Statement m_abortStatement;
    bool m_abortStatementHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ProcessBehavior m_processBehavior;
    bool m_processBehaviorHasBeenSet = false;

    Locale m_locale;
    bool m_localeHasBeenSet = false;

    bool m_childDirected;
    bool m_childDirectedHasBeenSet = false;

    bool m_detectSentiment;
    bool m_detectSentimentHasBeenSet = false;

    bool m_createVersion;
    bool m_createVersionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
