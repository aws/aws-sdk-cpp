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
    AWS_LEXMODELSV2_API AgentTurnResult();
    AWS_LEXMODELSV2_API AgentTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AgentTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expected agent prompt for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetExpectedAgentPrompt() const{ return m_expectedAgentPrompt; }
    inline bool ExpectedAgentPromptHasBeenSet() const { return m_expectedAgentPromptHasBeenSet; }
    inline void SetExpectedAgentPrompt(const Aws::String& value) { m_expectedAgentPromptHasBeenSet = true; m_expectedAgentPrompt = value; }
    inline void SetExpectedAgentPrompt(Aws::String&& value) { m_expectedAgentPromptHasBeenSet = true; m_expectedAgentPrompt = std::move(value); }
    inline void SetExpectedAgentPrompt(const char* value) { m_expectedAgentPromptHasBeenSet = true; m_expectedAgentPrompt.assign(value); }
    inline AgentTurnResult& WithExpectedAgentPrompt(const Aws::String& value) { SetExpectedAgentPrompt(value); return *this;}
    inline AgentTurnResult& WithExpectedAgentPrompt(Aws::String&& value) { SetExpectedAgentPrompt(std::move(value)); return *this;}
    inline AgentTurnResult& WithExpectedAgentPrompt(const char* value) { SetExpectedAgentPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual agent prompt for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualAgentPrompt() const{ return m_actualAgentPrompt; }
    inline bool ActualAgentPromptHasBeenSet() const { return m_actualAgentPromptHasBeenSet; }
    inline void SetActualAgentPrompt(const Aws::String& value) { m_actualAgentPromptHasBeenSet = true; m_actualAgentPrompt = value; }
    inline void SetActualAgentPrompt(Aws::String&& value) { m_actualAgentPromptHasBeenSet = true; m_actualAgentPrompt = std::move(value); }
    inline void SetActualAgentPrompt(const char* value) { m_actualAgentPromptHasBeenSet = true; m_actualAgentPrompt.assign(value); }
    inline AgentTurnResult& WithActualAgentPrompt(const Aws::String& value) { SetActualAgentPrompt(value); return *this;}
    inline AgentTurnResult& WithActualAgentPrompt(Aws::String&& value) { SetActualAgentPrompt(std::move(value)); return *this;}
    inline AgentTurnResult& WithActualAgentPrompt(const char* value) { SetActualAgentPrompt(value); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ExecutionErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ExecutionErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline AgentTurnResult& WithErrorDetails(const ExecutionErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline AgentTurnResult& WithErrorDetails(ExecutionErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual elicited slot for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualElicitedSlot() const{ return m_actualElicitedSlot; }
    inline bool ActualElicitedSlotHasBeenSet() const { return m_actualElicitedSlotHasBeenSet; }
    inline void SetActualElicitedSlot(const Aws::String& value) { m_actualElicitedSlotHasBeenSet = true; m_actualElicitedSlot = value; }
    inline void SetActualElicitedSlot(Aws::String&& value) { m_actualElicitedSlotHasBeenSet = true; m_actualElicitedSlot = std::move(value); }
    inline void SetActualElicitedSlot(const char* value) { m_actualElicitedSlotHasBeenSet = true; m_actualElicitedSlot.assign(value); }
    inline AgentTurnResult& WithActualElicitedSlot(const Aws::String& value) { SetActualElicitedSlot(value); return *this;}
    inline AgentTurnResult& WithActualElicitedSlot(Aws::String&& value) { SetActualElicitedSlot(std::move(value)); return *this;}
    inline AgentTurnResult& WithActualElicitedSlot(const char* value) { SetActualElicitedSlot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual intent for the agent turn in a test set execution.</p>
     */
    inline const Aws::String& GetActualIntent() const{ return m_actualIntent; }
    inline bool ActualIntentHasBeenSet() const { return m_actualIntentHasBeenSet; }
    inline void SetActualIntent(const Aws::String& value) { m_actualIntentHasBeenSet = true; m_actualIntent = value; }
    inline void SetActualIntent(Aws::String&& value) { m_actualIntentHasBeenSet = true; m_actualIntent = std::move(value); }
    inline void SetActualIntent(const char* value) { m_actualIntentHasBeenSet = true; m_actualIntent.assign(value); }
    inline AgentTurnResult& WithActualIntent(const Aws::String& value) { SetActualIntent(value); return *this;}
    inline AgentTurnResult& WithActualIntent(Aws::String&& value) { SetActualIntent(std::move(value)); return *this;}
    inline AgentTurnResult& WithActualIntent(const char* value) { SetActualIntent(value); return *this;}
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
