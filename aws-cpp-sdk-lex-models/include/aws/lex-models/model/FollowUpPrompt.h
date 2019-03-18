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
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>A prompt for additional activity after an intent is fulfilled. For example,
   * after the <code>OrderPizza</code> intent is fulfilled, you might prompt the user
   * to find out whether the user wants to order drinks.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/FollowUpPrompt">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API FollowUpPrompt
  {
  public:
    FollowUpPrompt();
    FollowUpPrompt(Aws::Utils::Json::JsonView jsonValue);
    FollowUpPrompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Prompts for information from the user. </p>
     */
    inline const Prompt& GetPrompt() const{ return m_prompt; }

    /**
     * <p>Prompts for information from the user. </p>
     */
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }

    /**
     * <p>Prompts for information from the user. </p>
     */
    inline void SetPrompt(const Prompt& value) { m_promptHasBeenSet = true; m_prompt = value; }

    /**
     * <p>Prompts for information from the user. </p>
     */
    inline void SetPrompt(Prompt&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }

    /**
     * <p>Prompts for information from the user. </p>
     */
    inline FollowUpPrompt& WithPrompt(const Prompt& value) { SetPrompt(value); return *this;}

    /**
     * <p>Prompts for information from the user. </p>
     */
    inline FollowUpPrompt& WithPrompt(Prompt&& value) { SetPrompt(std::move(value)); return *this;}


    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }

    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline bool RejectionStatementHasBeenSet() const { return m_rejectionStatementHasBeenSet; }

    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = value; }

    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = std::move(value); }

    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline FollowUpPrompt& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}

    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline FollowUpPrompt& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}

  private:

    Prompt m_prompt;
    bool m_promptHasBeenSet;

    Statement m_rejectionStatement;
    bool m_rejectionStatementHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
