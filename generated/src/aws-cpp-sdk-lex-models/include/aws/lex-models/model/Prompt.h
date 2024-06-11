﻿/**
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
   * <p>Obtains information from the user. To define a prompt, provide one or more
   * messages and specify the number of attempts to get information from the user. If
   * you provide more than one message, Amazon Lex chooses one of the messages to use
   * to prompt the user. For more information, see <a>how-it-works</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Prompt">AWS
   * API Reference</a></p>
   */
  class Prompt
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API Prompt();
    AWS_LEXMODELBUILDINGSERVICE_API Prompt(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Prompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }
    inline Prompt& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}
    inline Prompt& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}
    inline Prompt& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }
    inline Prompt& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of times to prompt the user for information.</p>
     */
    inline int GetMaxAttempts() const{ return m_maxAttempts; }
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }
    inline Prompt& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline const Aws::String& GetResponseCard() const{ return m_responseCard; }
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }
    inline void SetResponseCard(const Aws::String& value) { m_responseCardHasBeenSet = true; m_responseCard = value; }
    inline void SetResponseCard(Aws::String&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::move(value); }
    inline void SetResponseCard(const char* value) { m_responseCardHasBeenSet = true; m_responseCard.assign(value); }
    inline Prompt& WithResponseCard(const Aws::String& value) { SetResponseCard(value); return *this;}
    inline Prompt& WithResponseCard(Aws::String&& value) { SetResponseCard(std::move(value)); return *this;}
    inline Prompt& WithResponseCard(const char* value) { SetResponseCard(value); return *this;}
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    int m_maxAttempts;
    bool m_maxAttemptsHasBeenSet = false;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
