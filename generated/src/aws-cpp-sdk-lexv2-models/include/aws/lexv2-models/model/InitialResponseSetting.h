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
    AWS_LEXMODELSV2_API InitialResponseSetting() = default;
    AWS_LEXMODELSV2_API InitialResponseSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API InitialResponseSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResponseSpecification& GetInitialResponse() const { return m_initialResponse; }
    inline bool InitialResponseHasBeenSet() const { return m_initialResponseHasBeenSet; }
    template<typename InitialResponseT = ResponseSpecification>
    void SetInitialResponse(InitialResponseT&& value) { m_initialResponseHasBeenSet = true; m_initialResponse = std::forward<InitialResponseT>(value); }
    template<typename InitialResponseT = ResponseSpecification>
    InitialResponseSetting& WithInitialResponse(InitialResponseT&& value) { SetInitialResponse(std::forward<InitialResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const { return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    template<typename NextStepT = DialogState>
    void SetNextStep(NextStepT&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::forward<NextStepT>(value); }
    template<typename NextStepT = DialogState>
    InitialResponseSetting& WithNextStep(NextStepT&& value) { SetNextStep(std::forward<NextStepT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConditionalSpecification& GetConditional() const { return m_conditional; }
    inline bool ConditionalHasBeenSet() const { return m_conditionalHasBeenSet; }
    template<typename ConditionalT = ConditionalSpecification>
    void SetConditional(ConditionalT&& value) { m_conditionalHasBeenSet = true; m_conditional = std::forward<ConditionalT>(value); }
    template<typename ConditionalT = ConditionalSpecification>
    InitialResponseSetting& WithConditional(ConditionalT&& value) { SetConditional(std::forward<ConditionalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DialogCodeHookInvocationSetting& GetCodeHook() const { return m_codeHook; }
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }
    template<typename CodeHookT = DialogCodeHookInvocationSetting>
    void SetCodeHook(CodeHookT&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::forward<CodeHookT>(value); }
    template<typename CodeHookT = DialogCodeHookInvocationSetting>
    InitialResponseSetting& WithCodeHook(CodeHookT&& value) { SetCodeHook(std::forward<CodeHookT>(value)); return *this;}
    ///@}
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
