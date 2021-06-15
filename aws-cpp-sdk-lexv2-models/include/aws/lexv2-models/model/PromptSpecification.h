/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/MessageGroup.h>
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
  class AWS_LEXMODELSV2_API PromptSpecification
  {
  public:
    PromptSpecification();
    PromptSpecification(Aws::Utils::Json::JsonView jsonValue);
    PromptSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline PromptSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline PromptSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline PromptSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }

    /**
     * <p>A collection of messages that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual message to send at runtime.</p>
     */
    inline PromptSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of times the bot tries to elicit a resonse from the user
     * using this prompt.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times the bot tries to elicit a resonse from the user
     * using this prompt.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times the bot tries to elicit a resonse from the user
     * using this prompt.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times the bot tries to elicit a resonse from the user
     * using this prompt.</p>
     */
    inline PromptSpecification& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }

    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }

    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }

    /**
     * <p>Indicates whether the user can interrupt a speech prompt from the bot.</p>
     */
    inline PromptSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}

  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
