/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ExecutionErrorDetails.h>
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
   * <p>The information about the agent turn in a test set execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AgentTurnResult">AWS
   * API Reference</a></p>
   */
  class AgentTurnResult
  {
  public:
    AWS_LEXMODELSV2_API AgentTurnResult() = default;
    AWS_LEXMODELSV2_API AgentTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AgentTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expected agent prompt for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetExpectedAgentPrompt() const { return m_expectedAgentPrompt; }
    inline bool ExpectedAgentPromptHasBeenSet() const { return m_expectedAgentPromptHasBeenSet; }
    template<typename ExpectedAgentPromptT = Aws::String>
    void SetExpectedAgentPrompt(ExpectedAgentPromptT&& value) { m_expectedAgentPromptHasBeenSet = true; m_expectedAgentPrompt = std::forward<ExpectedAgentPromptT>(value); }
    template<typename ExpectedAgentPromptT = Aws::String>
    AgentTurnResult& WithExpectedAgentPrompt(ExpectedAgentPromptT&& value) { SetExpectedAgentPrompt(std::forward<ExpectedAgentPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual agent prompt for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualAgentPrompt() const { return m_actualAgentPrompt; }
    inline bool ActualAgentPromptHasBeenSet() const { return m_actualAgentPromptHasBeenSet; }
    template<typename ActualAgentPromptT = Aws::String>
    void SetActualAgentPrompt(ActualAgentPromptT&& value) { m_actualAgentPromptHasBeenSet = true; m_actualAgentPrompt = std::forward<ActualAgentPromptT>(value); }
    template<typename ActualAgentPromptT = Aws::String>
    AgentTurnResult& WithActualAgentPrompt(ActualAgentPromptT&& value) { SetActualAgentPrompt(std::forward<ActualAgentPromptT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ExecutionErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ExecutionErrorDetails>
    AgentTurnResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual elicited slot for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualElicitedSlot() const { return m_actualElicitedSlot; }
    inline bool ActualElicitedSlotHasBeenSet() const { return m_actualElicitedSlotHasBeenSet; }
    template<typename ActualElicitedSlotT = Aws::String>
    void SetActualElicitedSlot(ActualElicitedSlotT&& value) { m_actualElicitedSlotHasBeenSet = true; m_actualElicitedSlot = std::forward<ActualElicitedSlotT>(value); }
    template<typename ActualElicitedSlotT = Aws::String>
    AgentTurnResult& WithActualElicitedSlot(ActualElicitedSlotT&& value) { SetActualElicitedSlot(std::forward<ActualElicitedSlotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual intent for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualIntent() const { return m_actualIntent; }
    inline bool ActualIntentHasBeenSet() const { return m_actualIntentHasBeenSet; }
    template<typename ActualIntentT = Aws::String>
    void SetActualIntent(ActualIntentT&& value) { m_actualIntentHasBeenSet = true; m_actualIntent = std::forward<ActualIntentT>(value); }
    template<typename ActualIntentT = Aws::String>
    AgentTurnResult& WithActualIntent(ActualIntentT&& value) { SetActualIntent(std::forward<ActualIntentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expectedAgentPrompt;
    bool m_expectedAgentPromptHasBeenSet = false;

    Aws::String m_actualAgentPrompt;
    bool m_actualAgentPromptHasBeenSet = false;

    ExecutionErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_actualElicitedSlot;
    bool m_actualElicitedSlotHasBeenSet = false;

    Aws::String m_actualIntent;
    bool m_actualIntentHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
