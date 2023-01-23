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
   * <p>Provides settings for a message that is sent periodically to the user while a
   * fulfillment Lambda function is running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FulfillmentUpdateResponseSpecification">AWS
   * API Reference</a></p>
   */
  class FulfillmentUpdateResponseSpecification
  {
  public:
    AWS_LEXMODELSV2_API FulfillmentUpdateResponseSpecification();
    AWS_LEXMODELSV2_API FulfillmentUpdateResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentUpdateResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The frequency that a message is sent to the user. When the period ends,
     * Amazon Lex chooses a message from the message groups and plays it to the user.
     * If the fulfillment Lambda returns before the first period ends, an update
     * message is not played to the user.</p>
     */
    inline int GetFrequencyInSeconds() const{ return m_frequencyInSeconds; }

    /**
     * <p>The frequency that a message is sent to the user. When the period ends,
     * Amazon Lex chooses a message from the message groups and plays it to the user.
     * If the fulfillment Lambda returns before the first period ends, an update
     * message is not played to the user.</p>
     */
    inline bool FrequencyInSecondsHasBeenSet() const { return m_frequencyInSecondsHasBeenSet; }

    /**
     * <p>The frequency that a message is sent to the user. When the period ends,
     * Amazon Lex chooses a message from the message groups and plays it to the user.
     * If the fulfillment Lambda returns before the first period ends, an update
     * message is not played to the user.</p>
     */
    inline void SetFrequencyInSeconds(int value) { m_frequencyInSecondsHasBeenSet = true; m_frequencyInSeconds = value; }

    /**
     * <p>The frequency that a message is sent to the user. When the period ends,
     * Amazon Lex chooses a message from the message groups and plays it to the user.
     * If the fulfillment Lambda returns before the first period ends, an update
     * message is not played to the user.</p>
     */
    inline FulfillmentUpdateResponseSpecification& WithFrequencyInSeconds(int value) { SetFrequencyInSeconds(value); return *this;}


    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentUpdateResponseSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentUpdateResponseSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentUpdateResponseSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }

    /**
     * <p>One to 5 message groups that contain update messages. Amazon Lex chooses one
     * of the messages to play to the user.</p>
     */
    inline FulfillmentUpdateResponseSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines whether the user can interrupt an update message while it is
     * playing.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }

    /**
     * <p>Determines whether the user can interrupt an update message while it is
     * playing.</p>
     */
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }

    /**
     * <p>Determines whether the user can interrupt an update message while it is
     * playing.</p>
     */
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }

    /**
     * <p>Determines whether the user can interrupt an update message while it is
     * playing.</p>
     */
    inline FulfillmentUpdateResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}

  private:

    int m_frequencyInSeconds;
    bool m_frequencyInSecondsHasBeenSet = false;

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
