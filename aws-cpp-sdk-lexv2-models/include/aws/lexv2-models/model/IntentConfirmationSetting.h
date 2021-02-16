/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/PromptSpecification.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a prompt for making sure that the user is ready for the intent to be
   * fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentConfirmationSetting">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API IntentConfirmationSetting
  {
  public:
    IntentConfirmationSetting();
    IntentConfirmationSetting(Aws::Utils::Json::JsonView jsonValue);
    IntentConfirmationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline const PromptSpecification& GetPromptSpecification() const{ return m_promptSpecification; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline void SetPromptSpecification(const PromptSpecification& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = value; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline void SetPromptSpecification(PromptSpecification&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::move(value); }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline IntentConfirmationSetting& WithPromptSpecification(const PromptSpecification& value) { SetPromptSpecification(value); return *this;}

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline IntentConfirmationSetting& WithPromptSpecification(PromptSpecification&& value) { SetPromptSpecification(std::move(value)); return *this;}


    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline const ResponseSpecification& GetDeclinationResponse() const{ return m_declinationResponse; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline bool DeclinationResponseHasBeenSet() const { return m_declinationResponseHasBeenSet; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetDeclinationResponse(const ResponseSpecification& value) { m_declinationResponseHasBeenSet = true; m_declinationResponse = value; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetDeclinationResponse(ResponseSpecification&& value) { m_declinationResponseHasBeenSet = true; m_declinationResponse = std::move(value); }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline IntentConfirmationSetting& WithDeclinationResponse(const ResponseSpecification& value) { SetDeclinationResponse(value); return *this;}

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline IntentConfirmationSetting& WithDeclinationResponse(ResponseSpecification&& value) { SetDeclinationResponse(std::move(value)); return *this;}

  private:

    PromptSpecification m_promptSpecification;
    bool m_promptSpecificationHasBeenSet;

    ResponseSpecification m_declinationResponse;
    bool m_declinationResponseHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
