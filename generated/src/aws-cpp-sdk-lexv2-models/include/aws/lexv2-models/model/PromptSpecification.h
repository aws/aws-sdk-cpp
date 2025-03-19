/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/MessageSelectionStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/MessageGroup.h>
#include <aws/lexv2-models/model/PromptAttempt.h>
#include <aws/lexv2-models/model/PromptAttemptSpecification.h>
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
   * <p>Specifies a list of message groups that Amazon Lex sends to a user to elicit
   * a response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PromptSpecification">AWS
   * API Reference</a></p>
   */
  class PromptSpecification
  {
  public:
    AWS_LEXMODELSV2_API PromptSpecification() = default;
    AWS_LEXMODELSV2_API PromptSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PromptSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const { return m_messageGroups; }
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    void SetMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::forward<MessageGroupsT>(value); }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    PromptSpecification& WithMessageGroups(MessageGroupsT&& value) { SetMessageGroups(std::forward<MessageGroupsT>(value)); return *this;}
    template<typename MessageGroupsT = MessageGroup>
    PromptSpecification& AddMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.emplace_back(std::forward<MessageGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of times the bot tries to elicit a response from the user
     * using this prompt.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline PromptSpecification& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline bool GetAllowInterrupt() const { return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline PromptSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how a message is selected from a message group among retries.</p>
     */
    inline MessageSelectionStrategy GetMessageSelectionStrategy() const { return m_messageSelectionStrategy; }
    inline bool MessageSelectionStrategyHasBeenSet() const { return m_messageSelectionStrategyHasBeenSet; }
    inline void SetMessageSelectionStrategy(MessageSelectionStrategy value) { m_messageSelectionStrategyHasBeenSet = true; m_messageSelectionStrategy = value; }
    inline PromptSpecification& WithMessageSelectionStrategy(MessageSelectionStrategy value) { SetMessageSelectionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the advanced settings on each attempt of the prompt.</p>
     */
    inline const Aws::Map<PromptAttempt, PromptAttemptSpecification>& GetPromptAttemptsSpecification() const { return m_promptAttemptsSpecification; }
    inline bool PromptAttemptsSpecificationHasBeenSet() const { return m_promptAttemptsSpecificationHasBeenSet; }
    template<typename PromptAttemptsSpecificationT = Aws::Map<PromptAttempt, PromptAttemptSpecification>>
    void SetPromptAttemptsSpecification(PromptAttemptsSpecificationT&& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification = std::forward<PromptAttemptsSpecificationT>(value); }
    template<typename PromptAttemptsSpecificationT = Aws::Map<PromptAttempt, PromptAttemptSpecification>>
    PromptSpecification& WithPromptAttemptsSpecification(PromptAttemptsSpecificationT&& value) { SetPromptAttemptsSpecification(std::forward<PromptAttemptsSpecificationT>(value)); return *this;}
    inline PromptSpecification& AddPromptAttemptsSpecification(PromptAttempt key, PromptAttemptSpecification value) {
      m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    int m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;

    bool m_allowInterrupt{false};
    bool m_allowInterruptHasBeenSet = false;

    MessageSelectionStrategy m_messageSelectionStrategy{MessageSelectionStrategy::NOT_SET};
    bool m_messageSelectionStrategyHasBeenSet = false;

    Aws::Map<PromptAttempt, PromptAttemptSpecification> m_promptAttemptsSpecification;
    bool m_promptAttemptsSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
