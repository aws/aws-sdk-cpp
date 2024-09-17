/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class UpdateRoomRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API UpdateRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoom"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the room to be updated. Currently this must be an ARN.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateRoomRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateRoomRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateRoomRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRoomRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRoomRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRoomRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline int GetMaximumMessageRatePerSecond() const{ return m_maximumMessageRatePerSecond; }
    inline bool MaximumMessageRatePerSecondHasBeenSet() const { return m_maximumMessageRatePerSecondHasBeenSet; }
    inline void SetMaximumMessageRatePerSecond(int value) { m_maximumMessageRatePerSecondHasBeenSet = true; m_maximumMessageRatePerSecond = value; }
    inline UpdateRoomRequest& WithMaximumMessageRatePerSecond(int value) { SetMaximumMessageRatePerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of characters in a single message. Messages are expected
     * to be UTF-8 encoded and this limit applies specifically to rune/code-point
     * count, not number of bytes. Default: 500.</p>
     */
    inline int GetMaximumMessageLength() const{ return m_maximumMessageLength; }
    inline bool MaximumMessageLengthHasBeenSet() const { return m_maximumMessageLengthHasBeenSet; }
    inline void SetMaximumMessageLength(int value) { m_maximumMessageLengthHasBeenSet = true; m_maximumMessageLength = value; }
    inline UpdateRoomRequest& WithMaximumMessageLength(int value) { SetMaximumMessageLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for optional review of messages. Specify an empty
     * <code>uri</code> string to disassociate a message review handler from the
     * specified room.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const{ return m_messageReviewHandler; }
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }
    inline void SetMessageReviewHandler(const MessageReviewHandler& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = value; }
    inline void SetMessageReviewHandler(MessageReviewHandler&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::move(value); }
    inline UpdateRoomRequest& WithMessageReviewHandler(const MessageReviewHandler& value) { SetMessageReviewHandler(value); return *this;}
    inline UpdateRoomRequest& WithMessageReviewHandler(MessageReviewHandler&& value) { SetMessageReviewHandler(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoggingConfigurationIdentifiers() const{ return m_loggingConfigurationIdentifiers; }
    inline bool LoggingConfigurationIdentifiersHasBeenSet() const { return m_loggingConfigurationIdentifiersHasBeenSet; }
    inline void SetLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = value; }
    inline void SetLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = std::move(value); }
    inline UpdateRoomRequest& WithLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { SetLoggingConfigurationIdentifiers(value); return *this;}
    inline UpdateRoomRequest& WithLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { SetLoggingConfigurationIdentifiers(std::move(value)); return *this;}
    inline UpdateRoomRequest& AddLoggingConfigurationIdentifiers(const Aws::String& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(value); return *this; }
    inline UpdateRoomRequest& AddLoggingConfigurationIdentifiers(Aws::String&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(std::move(value)); return *this; }
    inline UpdateRoomRequest& AddLoggingConfigurationIdentifiers(const char* value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maximumMessageRatePerSecond;
    bool m_maximumMessageRatePerSecondHasBeenSet = false;

    int m_maximumMessageLength;
    bool m_maximumMessageLengthHasBeenSet = false;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet = false;

    Aws::Vector<Aws::String> m_loggingConfigurationIdentifiers;
    bool m_loggingConfigurationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
