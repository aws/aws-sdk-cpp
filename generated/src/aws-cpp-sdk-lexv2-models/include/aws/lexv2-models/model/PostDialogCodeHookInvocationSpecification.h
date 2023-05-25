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
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification();
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PostDialogCodeHookInvocationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResponseSpecification& GetSuccessResponse() const{ return m_successResponse; }

    
    inline bool SuccessResponseHasBeenSet() const { return m_successResponseHasBeenSet; }

    
    inline void SetSuccessResponse(const ResponseSpecification& value) { m_successResponseHasBeenSet = true; m_successResponse = value; }

    
    inline void SetSuccessResponse(ResponseSpecification&& value) { m_successResponseHasBeenSet = true; m_successResponse = std::move(value); }

    
    inline PostDialogCodeHookInvocationSpecification& WithSuccessResponse(const ResponseSpecification& value) { SetSuccessResponse(value); return *this;}

    
    inline PostDialogCodeHookInvocationSpecification& WithSuccessResponse(ResponseSpecification&& value) { SetSuccessResponse(std::move(value)); return *this;}


    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline const DialogState& GetSuccessNextStep() const{ return m_successNextStep; }

    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline bool SuccessNextStepHasBeenSet() const { return m_successNextStepHasBeenSet; }

    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline void SetSuccessNextStep(const DialogState& value) { m_successNextStepHasBeenSet = true; m_successNextStep = value; }

    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline void SetSuccessNextStep(DialogState&& value) { m_successNextStepHasBeenSet = true; m_successNextStep = std::move(value); }

    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithSuccessNextStep(const DialogState& value) { SetSuccessNextStep(value); return *this;}

    /**
     * <p>Specifics the next step the bot runs after the dialog code hook finishes
     * successfully. </p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithSuccessNextStep(DialogState&& value) { SetSuccessNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline const ConditionalSpecification& GetSuccessConditional() const{ return m_successConditional; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline bool SuccessConditionalHasBeenSet() const { return m_successConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline void SetSuccessConditional(const ConditionalSpecification& value) { m_successConditionalHasBeenSet = true; m_successConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline void SetSuccessConditional(ConditionalSpecification&& value) { m_successConditionalHasBeenSet = true; m_successConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithSuccessConditional(const ConditionalSpecification& value) { SetSuccessConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook
     * finishes successfully.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithSuccessConditional(ConditionalSpecification&& value) { SetSuccessConditional(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetFailureResponse() const{ return m_failureResponse; }

    
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }

    
    inline void SetFailureResponse(const ResponseSpecification& value) { m_failureResponseHasBeenSet = true; m_failureResponse = value; }

    
    inline void SetFailureResponse(ResponseSpecification&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::move(value); }

    
    inline PostDialogCodeHookInvocationSpecification& WithFailureResponse(const ResponseSpecification& value) { SetFailureResponse(value); return *this;}

    
    inline PostDialogCodeHookInvocationSpecification& WithFailureResponse(ResponseSpecification&& value) { SetFailureResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline const DialogState& GetFailureNextStep() const{ return m_failureNextStep; }

    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline bool FailureNextStepHasBeenSet() const { return m_failureNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline void SetFailureNextStep(const DialogState& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = value; }

    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline void SetFailureNextStep(DialogState&& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = std::move(value); }

    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithFailureNextStep(const DialogState& value) { SetFailureNextStep(value); return *this;}

    /**
     * <p>Specifies the next step the bot runs after the dialog code hook throws an
     * exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithFailureNextStep(DialogState&& value) { SetFailureNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline const ConditionalSpecification& GetFailureConditional() const{ return m_failureConditional; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline bool FailureConditionalHasBeenSet() const { return m_failureConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline void SetFailureConditional(const ConditionalSpecification& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline void SetFailureConditional(ConditionalSpecification&& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithFailureConditional(const ConditionalSpecification& value) { SetFailureConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate after the dialog code hook throws
     * an exception or returns with the <code>State</code> field of the
     * <code>Intent</code> object set to <code>Failed</code>.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithFailureConditional(ConditionalSpecification&& value) { SetFailureConditional(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetTimeoutResponse() const{ return m_timeoutResponse; }

    
    inline bool TimeoutResponseHasBeenSet() const { return m_timeoutResponseHasBeenSet; }

    
    inline void SetTimeoutResponse(const ResponseSpecification& value) { m_timeoutResponseHasBeenSet = true; m_timeoutResponse = value; }

    
    inline void SetTimeoutResponse(ResponseSpecification&& value) { m_timeoutResponseHasBeenSet = true; m_timeoutResponse = std::move(value); }

    
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutResponse(const ResponseSpecification& value) { SetTimeoutResponse(value); return *this;}

    
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutResponse(ResponseSpecification&& value) { SetTimeoutResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline const DialogState& GetTimeoutNextStep() const{ return m_timeoutNextStep; }

    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline bool TimeoutNextStepHasBeenSet() const { return m_timeoutNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline void SetTimeoutNextStep(const DialogState& value) { m_timeoutNextStepHasBeenSet = true; m_timeoutNextStep = value; }

    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline void SetTimeoutNextStep(DialogState&& value) { m_timeoutNextStepHasBeenSet = true; m_timeoutNextStep = std::move(value); }

    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutNextStep(const DialogState& value) { SetTimeoutNextStep(value); return *this;}

    /**
     * <p>Specifies the next step that the bot runs when the code hook times out.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutNextStep(DialogState&& value) { SetTimeoutNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline const ConditionalSpecification& GetTimeoutConditional() const{ return m_timeoutConditional; }

    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline bool TimeoutConditionalHasBeenSet() const { return m_timeoutConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline void SetTimeoutConditional(const ConditionalSpecification& value) { m_timeoutConditionalHasBeenSet = true; m_timeoutConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline void SetTimeoutConditional(ConditionalSpecification&& value) { m_timeoutConditionalHasBeenSet = true; m_timeoutConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutConditional(const ConditionalSpecification& value) { SetTimeoutConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate if the code hook times out.</p>
     */
    inline PostDialogCodeHookInvocationSpecification& WithTimeoutConditional(ConditionalSpecification&& value) { SetTimeoutConditional(std::move(value)); return *this;}

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
