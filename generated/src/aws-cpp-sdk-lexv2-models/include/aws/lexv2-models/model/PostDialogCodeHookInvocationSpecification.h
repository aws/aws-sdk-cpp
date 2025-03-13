/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ConditionalSpecification.h>
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
   * <p>Specifies next steps to run after the dialog code hook
   * finishes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PostDialogCodeHookInvocationSpecification">AWS
   * API Reference</a></p>
   */
  class PostDialogCodeHookInvocationSpecification
  {
  public:
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification() = default;
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResponseSpecification& GetSuccessResponse() const { return m_successResponse; }
    inline bool SuccessResponseHasBeenSet() const { return m_successResponseHasBeenSet; }
    template<typename SuccessResponseT = ResponseSpecification>
    void SetSuccessResponse(SuccessResponseT&& value) { m_successResponseHasBeenSet = true; m_successResponse = std::forward<SuccessResponseT>(value); }
    template<typename SuccessResponseT = ResponseSpecification>
    PostDialogCodeHookInvocationSpecification& WithSuccessResponse(SuccessResponseT&& value) { SetSuccessResponse(std::forward<SuccessResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline const DialogState& GetSuccessNextStep() const { return m_successNextStep; }
    inline bool SuccessNextStepHasBeenSet() const { return m_successNextStepHasBeenSet; }
    template<typename SuccessNextStepT = DialogState>
    void SetSuccessNextStep(SuccessNextStepT&& value) { m_successNextStepHasBeenSet = true; m_successNextStep = std::forward<SuccessNextStepT>(value); }
    template<typename SuccessNextStepT = DialogState>
    PostDialogCodeHookInvocationSpecification& WithSuccessNextStep(SuccessNextStepT&& value) { SetSuccessNextStep(std::forward<SuccessNextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline const ConditionalSpecification& GetSuccessConditional() const { return m_successConditional; }
    inline bool SuccessConditionalHasBeenSet() const { return m_successConditionalHasBeenSet; }
    template<typename SuccessConditionalT = ConditionalSpecification>
    void SetSuccessConditional(SuccessConditionalT&& value) { m_successConditionalHasBeenSet = true; m_successConditional = std::forward<SuccessConditionalT>(value); }
    template<typename SuccessConditionalT = ConditionalSpecification>
    PostDialogCodeHookInvocationSpecification& WithSuccessConditional(SuccessConditionalT&& value) { SetSuccessConditional(std::forward<SuccessConditionalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseSpecification& GetFailureResponse() const { return m_failureResponse; }
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }
    template<typename FailureResponseT = ResponseSpecification>
    void SetFailureResponse(FailureResponseT&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::forward<FailureResponseT>(value); }
    template<typename FailureResponseT = ResponseSpecification>
    PostDialogCodeHookInvocationSpecification& WithFailureResponse(FailureResponseT&& value) { SetFailureResponse(std::forward<FailureResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline const DialogState& GetFailureNextStep() const { return m_failureNextStep; }
    inline bool FailureNextStepHasBeenSet() const { return m_failureNextStepHasBeenSet; }
    template<typename FailureNextStepT = DialogState>
    void SetFailureNextStep(FailureNextStepT&& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = std::forward<FailureNextStepT>(value); }
    template<typename FailureNextStepT = DialogState>
    PostDialogCodeHookInvocationSpecification& WithFailureNextStep(FailureNextStepT&& value) { SetFailureNextStep(std::forward<FailureNextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline const ConditionalSpecification& GetFailureConditional() const { return m_failureConditional; }
    inline bool FailureConditionalHasBeenSet() const { return m_failureConditionalHasBeenSet; }
    template<typename FailureConditionalT = ConditionalSpecification>
    void SetFailureConditional(FailureConditionalT&& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = std::forward<FailureConditionalT>(value); }
    template<typename FailureConditionalT = ConditionalSpecification>
    PostDialogCodeHookInvocationSpecification& WithFailureConditional(FailureConditionalT&& value) { SetFailureConditional(std::forward<FailureConditionalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseSpecification& GetTimeoutResponse() const { return m_timeoutResponse; }
    inline bool TimeoutResponseHasBeenSet() const { return m_timeoutResponseHasBeenSet; }
    template<typename TimeoutResponseT = ResponseSpecification>
    void SetTimeoutResponse(TimeoutResponseT&& value) { m_timeoutResponseHasBeenSet = true; m_timeoutResponse = std::forward<TimeoutResponseT>(value); }
    template<typename TimeoutResponseT = ResponseSpecification>
    PostDialogCodeHookInvocationSpecification& WithTimeoutResponse(TimeoutResponseT&& value) { SetTimeoutResponse(std::forward<TimeoutResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline const DialogState& GetTimeoutNextStep() const { return m_timeoutNextStep; }
    inline bool TimeoutNextStepHasBeenSet() const { return m_timeoutNextStepHasBeenSet; }
    template<typename TimeoutNextStepT = DialogState>
    void SetTimeoutNextStep(TimeoutNextStepT&& value) { m_timeoutNextStepHasBeenSet = true; m_timeoutNextStep = std::forward<TimeoutNextStepT>(value); }
    template<typename TimeoutNextStepT = DialogState>
    PostDialogCodeHookInvocationSpecification& WithTimeoutNextStep(TimeoutNextStepT&& value) { SetTimeoutNextStep(std::forward<TimeoutNextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline const ConditionalSpecification& GetTimeoutConditional() const { return m_timeoutConditional; }
    inline bool TimeoutConditionalHasBeenSet() const { return m_timeoutConditionalHasBeenSet; }
    template<typename TimeoutConditionalT = ConditionalSpecification>
    void SetTimeoutConditional(TimeoutConditionalT&& value) { m_timeoutConditionalHasBeenSet = true; m_timeoutConditional = std::forward<TimeoutConditionalT>(value); }
    template<typename TimeoutConditionalT = ConditionalSpecification>
    PostDialogCodeHookInvocationSpecification& WithTimeoutConditional(TimeoutConditionalT&& value) { SetTimeoutConditional(std::forward<TimeoutConditionalT>(value)); return *this;}
    ///@}
  private:

    ResponseSpecification m_successResponse;
    bool m_successResponseHasBeenSet = false;

    DialogState m_successNextStep;
    bool m_successNextStepHasBeenSet = false;

    ConditionalSpecification m_successConditional;
    bool m_successConditionalHasBeenSet = false;

    ResponseSpecification m_failureResponse;
    bool m_failureResponseHasBeenSet = false;

    DialogState m_failureNextStep;
    bool m_failureNextStepHasBeenSet = false;

    ConditionalSpecification m_failureConditional;
    bool m_failureConditionalHasBeenSet = false;

    ResponseSpecification m_timeoutResponse;
    bool m_timeoutResponseHasBeenSet = false;

    DialogState m_timeoutNextStep;
    bool m_timeoutNextStepHasBeenSet = false;

    ConditionalSpecification m_timeoutConditional;
    bool m_timeoutConditionalHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
