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
   * <p>Provides settings for a message that is sent to the user when a fulfillment
   * Lambda function starts running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FulfillmentStartResponseSpecification">AWS
   * API Reference</a></p>
   */
  class FulfillmentStartResponseSpecification
  {
  public:
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification();
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The delay between when the Lambda fulfillment function starts running and the
     * start message is played. If the Lambda function returns before the delay is
     * over, the start message isn't played.</p>
     */
    inline int GetDelayInSeconds() const{ return m_delayInSeconds; }

    /**
     * <p>The delay between when the Lambda fulfillment function starts running and the
     * start message is played. If the Lambda function returns before the delay is
     * over, the start message isn't played.</p>
     */
    inline bool DelayInSecondsHasBeenSet() const { return m_delayInSecondsHasBeenSet; }

    /**
     * <p>The delay between when the Lambda fulfillment function starts running and the
     * start message is played. If the Lambda function returns before the delay is
     * over, the start message isn't played.</p>
     */
    inline void SetDelayInSeconds(int value) { m_delayInSecondsHasBeenSet = true; m_delayInSeconds = value; }

    /**
     * <p>The delay between when the Lambda fulfillment function starts running and the
     * start message is played. If the Lambda function returns before the delay is
     * over, the start message isn't played.</p>
     */
    inline FulfillmentStartResponseSpecification& WithDelayInSeconds(int value) { SetDelayInSeconds(value); return *this;}


    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentStartResponseSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentStartResponseSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentStartResponseSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }

    /**
     * <p>One to 5 message groups that contain start messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentStartResponseSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines whether the user can interrupt the start message while it is
     * playing.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }

    /**
     * <p>Determines whether the user can interrupt the start message while it is
     * playing.</p>
     */
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }

    /**
     * <p>Determines whether the user can interrupt the start message while it is
     * playing.</p>
     */
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }

    /**
     * <p>Determines whether the user can interrupt the start message while it is
     * playing.</p>
     */
    inline FulfillmentStartResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}

  private:

    int m_delayInSeconds;
    bool m_delayInSecondsHasBeenSet = false;

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
