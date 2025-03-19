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
    AWS_IVSCHAT_API UpdateRoomRequest() = default;

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
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateRoomRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateRoomRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10.</p>
     */
    inline int GetMaximumMessageRatePerSecond() const { return m_maximumMessageRatePerSecond; }
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
    inline int GetMaximumMessageLength() const { return m_maximumMessageLength; }
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
    inline const MessageReviewHandler& GetMessageReviewHandler() const { return m_messageReviewHandler; }
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }
    template<typename MessageReviewHandlerT = MessageReviewHandler>
    void SetMessageReviewHandler(MessageReviewHandlerT&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::forward<MessageReviewHandlerT>(value); }
    template<typename MessageReviewHandlerT = MessageReviewHandler>
    UpdateRoomRequest& WithMessageReviewHandler(MessageReviewHandlerT&& value) { SetMessageReviewHandler(std::forward<MessageReviewHandlerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoggingConfigurationIdentifiers() const { return m_loggingConfigurationIdentifiers; }
    inline bool LoggingConfigurationIdentifiersHasBeenSet() const { return m_loggingConfigurationIdentifiersHasBeenSet; }
    template<typename LoggingConfigurationIdentifiersT = Aws::Vector<Aws::String>>
    void SetLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = std::forward<LoggingConfigurationIdentifiersT>(value); }
    template<typename LoggingConfigurationIdentifiersT = Aws::Vector<Aws::String>>
    UpdateRoomRequest& WithLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { SetLoggingConfigurationIdentifiers(std::forward<LoggingConfigurationIdentifiersT>(value)); return *this;}
    template<typename LoggingConfigurationIdentifiersT = Aws::String>
    UpdateRoomRequest& AddLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.emplace_back(std::forward<LoggingConfigurationIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maximumMessageRatePerSecond{0};
    bool m_maximumMessageRatePerSecondHasBeenSet = false;

    int m_maximumMessageLength{0};
    bool m_maximumMessageLengthHasBeenSet = false;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet = false;

    Aws::Vector<Aws::String> m_loggingConfigurationIdentifiers;
    bool m_loggingConfigurationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
