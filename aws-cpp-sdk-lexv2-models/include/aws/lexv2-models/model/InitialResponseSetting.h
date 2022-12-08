/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ConditionalSpecification.h>
#include <aws/lexv2-models/model/DialogCodeHookInvocationSetting.h>
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
   * <p>Configuration setting for a response sent to the user before Amazon Lex
   * starts eliciting slots.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/InitialResponseSetting">AWS
   * API Reference</a></p>
   */
  class InitialResponseSetting
  {
  public:
    AWS_LEXMODELSV2_API InitialResponseSetting();
    AWS_LEXMODELSV2_API InitialResponseSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API InitialResponseSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResponseSpecification& GetInitialResponse() const{ return m_initialResponse; }

    
    inline bool InitialResponseHasBeenSet() const { return m_initialResponseHasBeenSet; }

    
    inline void SetInitialResponse(const ResponseSpecification& value) { m_initialResponseHasBeenSet = true; m_initialResponse = value; }

    
    inline void SetInitialResponse(ResponseSpecification&& value) { m_initialResponseHasBeenSet = true; m_initialResponse = std::move(value); }

    
    inline InitialResponseSetting& WithInitialResponse(const ResponseSpecification& value) { SetInitialResponse(value); return *this;}

    
    inline InitialResponseSetting& WithInitialResponse(ResponseSpecification&& value) { SetInitialResponse(std::move(value)); return *this;}


    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const{ return m_nextStep; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(const DialogState& value) { m_nextStepHasBeenSet = true; m_nextStep = value; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(DialogState&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::move(value); }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline InitialResponseSetting& WithNextStep(const DialogState& value) { SetNextStep(value); return *this;}

    /**
     * <p>The next step in the conversation.</p>
     */
    inline InitialResponseSetting& WithNextStep(DialogState&& value) { SetNextStep(std::move(value)); return *this;}


    
    inline const ConditionalSpecification& GetConditional() const{ return m_conditional; }

    
    inline bool ConditionalHasBeenSet() const { return m_conditionalHasBeenSet; }

    
    inline void SetConditional(const ConditionalSpecification& value) { m_conditionalHasBeenSet = true; m_conditional = value; }

    
    inline void SetConditional(ConditionalSpecification&& value) { m_conditionalHasBeenSet = true; m_conditional = std::move(value); }

    
    inline InitialResponseSetting& WithConditional(const ConditionalSpecification& value) { SetConditional(value); return *this;}

    
    inline InitialResponseSetting& WithConditional(ConditionalSpecification&& value) { SetConditional(std::move(value)); return *this;}


    
    inline const DialogCodeHookInvocationSetting& GetCodeHook() const{ return m_codeHook; }

    
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }

    
    inline void SetCodeHook(const DialogCodeHookInvocationSetting& value) { m_codeHookHasBeenSet = true; m_codeHook = value; }

    
    inline void SetCodeHook(DialogCodeHookInvocationSetting&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::move(value); }

    
    inline InitialResponseSetting& WithCodeHook(const DialogCodeHookInvocationSetting& value) { SetCodeHook(value); return *this;}

    
    inline InitialResponseSetting& WithCodeHook(DialogCodeHookInvocationSetting&& value) { SetCodeHook(std::move(value)); return *this;}

  private:

    ResponseSpecification m_initialResponse;
    bool m_initialResponseHasBeenSet = false;

    DialogState m_nextStep;
    bool m_nextStepHasBeenSet = false;

    ConditionalSpecification m_conditional;
    bool m_conditionalHasBeenSet = false;

    DialogCodeHookInvocationSetting m_codeHook;
    bool m_codeHookHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
