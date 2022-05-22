/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class AWS_IVSCHAT_API UpdateRoomRequest : public IvschatRequest
  {
  public:
    UpdateRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoom"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline UpdateRoomRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline UpdateRoomRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline UpdateRoomRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The maximum number of characters in a single message. Messages are expected
     * to be UTF-8 encoded and this limit applies specifically to rune/code-point
     * count, not number of bytes. Default: 500.</p>
     */
    inline int GetMaximumMessageLength() const{ return m_maximumMessageLength; }

    /**
     * <p>The maximum number of characters in a single message. Messages are expected
     * to be UTF-8 encoded and this limit applies specifically to rune/code-point
     * count, not number of bytes. Default: 500.</p>
     */
    inline bool MaximumMessageLengthHasBeenSet() const { return m_maximumMessageLengthHasBeenSet; }

    /**
     * <p>The maximum number of characters in a single message. Messages are expected
     * to be UTF-8 encoded and this limit applies specifically to rune/code-point
     * count, not number of bytes. Default: 500.</p>
     */
    inline void SetMaximumMessageLength(int value) { m_maximumMessageLengthHasBeenSet = true; m_maximumMessageLength = value; }

    /**
     * <p>The maximum number of characters in a single message. Messages are expected
     * to be UTF-8 encoded and this limit applies specifically to rune/code-point
     * count, not number of bytes. Default: 500.</p>
     */
    inline UpdateRoomRequest& WithMaximumMessageLength(int value) { SetMaximumMessageLength(value); return *this;}


    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline int GetMaximumMessageRatePerSecond() const{ return m_maximumMessageRatePerSecond; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline bool MaximumMessageRatePerSecondHasBeenSet() const { return m_maximumMessageRatePerSecondHasBeenSet; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline void SetMaximumMessageRatePerSecond(int value) { m_maximumMessageRatePerSecondHasBeenSet = true; m_maximumMessageRatePerSecond = value; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline UpdateRoomRequest& WithMaximumMessageRatePerSecond(int value) { SetMaximumMessageRatePerSecond(value); return *this;}


    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const{ return m_messageReviewHandler; }

    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }

    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline void SetMessageReviewHandler(const MessageReviewHandler& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = value; }

    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline void SetMessageReviewHandler(MessageReviewHandler&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::move(value); }

    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline UpdateRoomRequest& WithMessageReviewHandler(const MessageReviewHandler& value) { SetMessageReviewHandler(value); return *this;}

    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline UpdateRoomRequest& WithMessageReviewHandler(MessageReviewHandler&& value) { SetMessageReviewHandler(std::move(value)); return *this;}


    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline UpdateRoomRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline UpdateRoomRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline UpdateRoomRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet;

    int m_maximumMessageLength;
    bool m_maximumMessageLengthHasBeenSet;

    int m_maximumMessageRatePerSecond;
    bool m_maximumMessageRatePerSecondHasBeenSet;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
