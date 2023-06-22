/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/StandardMessages.h>
#include <aws/chime-sdk-identity/model/TargetedMessages.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>Specifies the type of message that triggers a bot.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/InvokedBy">AWS
   * API Reference</a></p>
   */
  class InvokedBy
  {
  public:
    AWS_CHIMESDKIDENTITY_API InvokedBy();
    AWS_CHIMESDKIDENTITY_API InvokedBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API InvokedBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline const StandardMessages& GetStandardMessages() const{ return m_standardMessages; }

    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline bool StandardMessagesHasBeenSet() const { return m_standardMessagesHasBeenSet; }

    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline void SetStandardMessages(const StandardMessages& value) { m_standardMessagesHasBeenSet = true; m_standardMessages = value; }

    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline void SetStandardMessages(StandardMessages&& value) { m_standardMessagesHasBeenSet = true; m_standardMessages = std::move(value); }

    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline InvokedBy& WithStandardMessages(const StandardMessages& value) { SetStandardMessages(value); return *this;}

    /**
     * <p>Sets standard messages as the bot trigger. For standard messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all standard messages.</p> </li>
     * <li> <p> <code>AUTO</code>: The bot responds to ALL messages when the channel
     * has one other non-hidden member, and responds to MENTIONS when the channel has
     * more than one other non-hidden member.</p> </li> <li> <p> <code>MENTIONS</code>:
     * The bot processes all standard messages that have a message attribute with
     * <code>CHIME.mentions</code> and a value of the bot ARN.</p> </li> <li> <p>
     * <code>NONE</code>: The bot processes no standard messages.</p> </li> </ul>
     */
    inline InvokedBy& WithStandardMessages(StandardMessages&& value) { SetStandardMessages(std::move(value)); return *this;}


    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline const TargetedMessages& GetTargetedMessages() const{ return m_targetedMessages; }

    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline bool TargetedMessagesHasBeenSet() const { return m_targetedMessagesHasBeenSet; }

    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline void SetTargetedMessages(const TargetedMessages& value) { m_targetedMessagesHasBeenSet = true; m_targetedMessages = value; }

    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline void SetTargetedMessages(TargetedMessages&& value) { m_targetedMessagesHasBeenSet = true; m_targetedMessages = std::move(value); }

    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline InvokedBy& WithTargetedMessages(const TargetedMessages& value) { SetTargetedMessages(value); return *this;}

    /**
     * <p>Sets targeted messages as the bot trigger. For targeted messages:</p> <ul>
     * <li> <p> <code>ALL</code>: The bot processes all <code>TargetedMessages</code>
     * sent to it. The bot then responds with a targeted message back to the sender.
     * </p> </li> <li> <p> <code>NONE</code>: The bot processes no targeted
     * messages.</p> </li> </ul>
     */
    inline InvokedBy& WithTargetedMessages(TargetedMessages&& value) { SetTargetedMessages(std::move(value)); return *this;}

  private:

    StandardMessages m_standardMessages;
    bool m_standardMessagesHasBeenSet = false;

    TargetedMessages m_targetedMessages;
    bool m_targetedMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
