/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LEXMODELBUILDINGSERVICE_API Prompt
  {
  public:
    Prompt();
    Prompt(Aws::Utils::Json::JsonView jsonValue);
    Prompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline Prompt& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline Prompt& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline Prompt& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>An array of objects, each of which provides a message string and its type.
     * You can specify the message string in plain text or in Speech Synthesis Markup
     * Language (SSML).</p>
     */
    inline Prompt& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of times to prompt the user for information.</p>
     */
    inline int GetMaxAttempts() const{ return m_maxAttempts; }

    /**
     * <p>The number of times to prompt the user for information.</p>
     */
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }

    /**
     * <p>The number of times to prompt the user for information.</p>
     */
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }

    /**
     * <p>The number of times to prompt the user for information.</p>
     */
    inline Prompt& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}


    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline const Aws::String& GetResponseCard() const{ return m_responseCard; }

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline void SetResponseCard(const Aws::String& value) { m_responseCardHasBeenSet = true; m_responseCard = value; }

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline void SetResponseCard(Aws::String&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::move(value); }

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline void SetResponseCard(const char* value) { m_responseCardHasBeenSet = true; m_responseCard.assign(value); }

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline Prompt& WithResponseCard(const Aws::String& value) { SetResponseCard(value); return *this;}

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline Prompt& WithResponseCard(Aws::String&& value) { SetResponseCard(std::move(value)); return *this;}

    /**
     * <p>A response card. Amazon Lex uses this prompt at runtime, in the
     * <code>PostText</code> API response. It substitutes session attributes and slot
     * values for placeholders in the response card. For more information, see
     * <a>ex-resp-card</a>. </p>
     */
    inline Prompt& WithResponseCard(const char* value) { SetResponseCard(value); return *this;}

  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet;

    int m_maxAttempts;
    bool m_maxAttemptsHasBeenSet;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
