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
    AWS_LEXMODELSV2_API PromptSpecification();
    AWS_LEXMODELSV2_API PromptSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PromptSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }
    inline PromptSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}
    inline PromptSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}
    inline PromptSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }
    inline PromptSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of times the bot tries to elicit a response from the user
     * using this prompt.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline PromptSpecification& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline PromptSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how a message is selected from a message group among retries.</p>
     */
    inline const MessageSelectionStrategy& GetMessageSelectionStrategy() const{ return m_messageSelectionStrategy; }
    inline bool MessageSelectionStrategyHasBeenSet() const { return m_messageSelectionStrategyHasBeenSet; }
    inline void SetMessageSelectionStrategy(const MessageSelectionStrategy& value) { m_messageSelectionStrategyHasBeenSet = true; m_messageSelectionStrategy = value; }
    inline void SetMessageSelectionStrategy(MessageSelectionStrategy&& value) { m_messageSelectionStrategyHasBeenSet = true; m_messageSelectionStrategy = std::move(value); }
    inline PromptSpecification& WithMessageSelectionStrategy(const MessageSelectionStrategy& value) { SetMessageSelectionStrategy(value); return *this;}
    inline PromptSpecification& WithMessageSelectionStrategy(MessageSelectionStrategy&& value) { SetMessageSelectionStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the advanced settings on each attempt of the prompt.</p>
     */
    inline const Aws::Map<PromptAttempt, PromptAttemptSpecification>& GetPromptAttemptsSpecification() const{ return m_promptAttemptsSpecification; }
    inline bool PromptAttemptsSpecificationHasBeenSet() const { return m_promptAttemptsSpecificationHasBeenSet; }
    inline void SetPromptAttemptsSpecification(const Aws::Map<PromptAttempt, PromptAttemptSpecification>& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification = value; }
    inline void SetPromptAttemptsSpecification(Aws::Map<PromptAttempt, PromptAttemptSpecification>&& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification = std::move(value); }
    inline PromptSpecification& WithPromptAttemptsSpecification(const Aws::Map<PromptAttempt, PromptAttemptSpecification>& value) { SetPromptAttemptsSpecification(value); return *this;}
    inline PromptSpecification& WithPromptAttemptsSpecification(Aws::Map<PromptAttempt, PromptAttemptSpecification>&& value) { SetPromptAttemptsSpecification(std::move(value)); return *this;}
    inline PromptSpecification& AddPromptAttemptsSpecification(const PromptAttempt& key, const PromptAttemptSpecification& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification.emplace(key, value); return *this; }
    inline PromptSpecification& AddPromptAttemptsSpecification(PromptAttempt&& key, const PromptAttemptSpecification& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification.emplace(std::move(key), value); return *this; }
    inline PromptSpecification& AddPromptAttemptsSpecification(const PromptAttempt& key, PromptAttemptSpecification&& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification.emplace(key, std::move(value)); return *this; }
    inline PromptSpecification& AddPromptAttemptsSpecification(PromptAttempt&& key, PromptAttemptSpecification&& value) { m_promptAttemptsSpecificationHasBeenSet = true; m_promptAttemptsSpecification.emplace(std::move(key), std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet = false;

    MessageSelectionStrategy m_messageSelectionStrategy;
    bool m_messageSelectionStrategyHasBeenSet = false;

    Aws::Map<PromptAttempt, PromptAttemptSpecification> m_promptAttemptsSpecification;
    bool m_promptAttemptsSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
