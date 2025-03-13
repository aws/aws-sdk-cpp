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
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification() = default;
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentStartResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delay between when the Lambda fulfillment function starts running and the
     * start message is played. If the Lambda function returns before the delay is
     * over, the start message isn't played.</p>
     */
    inline int GetDelayInSeconds() const { return m_delayInSeconds; }
    inline bool DelayInSecondsHasBeenSet() const { return m_delayInSecondsHasBeenSet; }
    inline void SetDelayInSeconds(int value) { m_delayInSecondsHasBeenSet = true; m_delayInSeconds = value; }
    inline FulfillmentStartResponseSpecification& WithDelayInSeconds(int value) { SetDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>1 - 5 message groups that contain start messages. Amazon Lex chooses one of
     * the messages to play to the user.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const { return m_messageGroups; }
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    void SetMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::forward<MessageGroupsT>(value); }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    FulfillmentStartResponseSpecification& WithMessageGroups(MessageGroupsT&& value) { SetMessageGroups(std::forward<MessageGroupsT>(value)); return *this;}
    template<typename MessageGroupsT = MessageGroup>
    FulfillmentStartResponseSpecification& AddMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.emplace_back(std::forward<MessageGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether the user can interrupt the start message while it is
     * playing.</p>
     */
    inline bool GetAllowInterrupt() const { return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline FulfillmentStartResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}
  private:

    int m_delayInSeconds{0};
    bool m_delayInSecondsHasBeenSet = false;

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    bool m_allowInterrupt{false};
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
