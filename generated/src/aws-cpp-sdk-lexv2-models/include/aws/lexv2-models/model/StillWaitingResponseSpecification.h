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
   * <p>Defines the messages that Amazon Lex sends to a user to remind them that the
   * bot is waiting for a response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StillWaitingResponseSpecification">AWS
   * API Reference</a></p>
   */
  class StillWaitingResponseSpecification
  {
  public:
    AWS_LEXMODELSV2_API StillWaitingResponseSpecification();
    AWS_LEXMODELSV2_API StillWaitingResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API StillWaitingResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline StillWaitingResponseSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline StillWaitingResponseSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline StillWaitingResponseSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }

    /**
     * <p>One or more message groups, each containing one or more messages, that define
     * the prompts that Amazon Lex sends to the user.</p>
     */
    inline StillWaitingResponseSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>How often a message should be sent to the user. Minimum of 1 second, maximum
     * of 5 minutes.</p>
     */
    inline int GetFrequencyInSeconds() const{ return m_frequencyInSeconds; }

    /**
     * <p>How often a message should be sent to the user. Minimum of 1 second, maximum
     * of 5 minutes.</p>
     */
    inline bool FrequencyInSecondsHasBeenSet() const { return m_frequencyInSecondsHasBeenSet; }

    /**
     * <p>How often a message should be sent to the user. Minimum of 1 second, maximum
     * of 5 minutes.</p>
     */
    inline void SetFrequencyInSeconds(int value) { m_frequencyInSecondsHasBeenSet = true; m_frequencyInSeconds = value; }

    /**
     * <p>How often a message should be sent to the user. Minimum of 1 second, maximum
     * of 5 minutes.</p>
     */
    inline StillWaitingResponseSpecification& WithFrequencyInSeconds(int value) { SetFrequencyInSeconds(value); return *this;}


    /**
     * <p>If Amazon Lex waits longer than this length of time for a response, it will
     * stop sending messages.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>If Amazon Lex waits longer than this length of time for a response, it will
     * stop sending messages.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>If Amazon Lex waits longer than this length of time for a response, it will
     * stop sending messages.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>If Amazon Lex waits longer than this length of time for a response, it will
     * stop sending messages.</p>
     */
    inline StillWaitingResponseSpecification& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>Indicates that the user can interrupt the response by speaking while the
     * message is being played.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }

    /**
     * <p>Indicates that the user can interrupt the response by speaking while the
     * message is being played.</p>
     */
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }

    /**
     * <p>Indicates that the user can interrupt the response by speaking while the
     * message is being played.</p>
     */
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }

    /**
     * <p>Indicates that the user can interrupt the response by speaking while the
     * message is being played.</p>
     */
    inline StillWaitingResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}

  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    int m_frequencyInSeconds;
    bool m_frequencyInSecondsHasBeenSet = false;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
