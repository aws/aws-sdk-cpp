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
   * <p>A collection of messages that convey information to the user. At runtime,
   * Amazon Lex selects the message to convey. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Statement">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API Statement
  {
  public:
    Statement();
    Statement(Aws::Utils::Json::JsonView jsonValue);
    Statement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of message objects.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A collection of message objects.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>A collection of message objects.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>A collection of message objects.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>A collection of message objects.</p>
     */
    inline Statement& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A collection of message objects.</p>
     */
    inline Statement& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A collection of message objects.</p>
     */
    inline Statement& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>A collection of message objects.</p>
     */
    inline Statement& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline const Aws::String& GetResponseCard() const{ return m_responseCard; }

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline void SetResponseCard(const Aws::String& value) { m_responseCardHasBeenSet = true; m_responseCard = value; }

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline void SetResponseCard(Aws::String&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::move(value); }

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline void SetResponseCard(const char* value) { m_responseCardHasBeenSet = true; m_responseCard.assign(value); }

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline Statement& WithResponseCard(const Aws::String& value) { SetResponseCard(value); return *this;}

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline Statement& WithResponseCard(Aws::String&& value) { SetResponseCard(std::move(value)); return *this;}

    /**
     * <p> At runtime, if the client is using the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * API, Amazon Lex includes the response card in the response. It substitutes all
     * of the session attributes and slot values for placeholders in the response card.
     * </p>
     */
    inline Statement& WithResponseCard(const char* value) { SetResponseCard(value); return *this;}

  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
