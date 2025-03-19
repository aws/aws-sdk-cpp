/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/Message.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>A collection of messages that convey information to the user. At runtime,
   * Amazon Lex selects the message to convey. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Statement">AWS
   * API Reference</a></p>
   */
  class Statement
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API Statement() = default;
    AWS_LEXMODELBUILDINGSERVICE_API Statement(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Statement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of message objects.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    Statement& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    Statement& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline const Aws::String& GetResponseCard() const { return m_responseCard; }
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }
    template<typename ResponseCardT = Aws::String>
    void SetResponseCard(ResponseCardT&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::forward<ResponseCardT>(value); }
    template<typename ResponseCardT = Aws::String>
    Statement& WithResponseCard(ResponseCardT&& value) { SetResponseCard(std::forward<ResponseCardT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
