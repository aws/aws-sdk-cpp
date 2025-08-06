/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStepContext.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionElement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStepMessage.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a single step in the policy build process, containing context
   * about what was being processed and any messages or results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildStep">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildStep
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStep() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contextual information about what was being processed during this build step,
     * such as the type of operation or the source material being analyzed.</p>
     */
    inline const AutomatedReasoningPolicyBuildStepContext& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = AutomatedReasoningPolicyBuildStepContext>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = AutomatedReasoningPolicyBuildStepContext>
    AutomatedReasoningPolicyBuildStep& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the previous element or step in the build process, helping to
     * trace the sequence of operations.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionElement& GetPriorElement() const { return m_priorElement; }
    inline bool PriorElementHasBeenSet() const { return m_priorElementHasBeenSet; }
    template<typename PriorElementT = AutomatedReasoningPolicyDefinitionElement>
    void SetPriorElement(PriorElementT&& value) { m_priorElementHasBeenSet = true; m_priorElement = std::forward<PriorElementT>(value); }
    template<typename PriorElementT = AutomatedReasoningPolicyDefinitionElement>
    AutomatedReasoningPolicyBuildStep& WithPriorElement(PriorElementT&& value) { SetPriorElement(std::forward<PriorElementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of messages generated during this build step, including informational
     * messages, warnings, and error details.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyBuildStepMessage>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<AutomatedReasoningPolicyBuildStepMessage>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<AutomatedReasoningPolicyBuildStepMessage>>
    AutomatedReasoningPolicyBuildStep& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = AutomatedReasoningPolicyBuildStepMessage>
    AutomatedReasoningPolicyBuildStep& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}
  private:

    AutomatedReasoningPolicyBuildStepContext m_context;
    bool m_contextHasBeenSet = false;

    AutomatedReasoningPolicyDefinitionElement m_priorElement;
    bool m_priorElementHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyBuildStepMessage> m_messages;
    bool m_messagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
