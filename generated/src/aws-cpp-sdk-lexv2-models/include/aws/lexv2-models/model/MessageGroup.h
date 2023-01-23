/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/Message.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides one or more messages that Amazon Lex should send to the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/MessageGroup">AWS
   * API Reference</a></p>
   */
  class MessageGroup
  {
  public:
    AWS_LEXMODELSV2_API MessageGroup();
    AWS_LEXMODELSV2_API MessageGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API MessageGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline const Message& GetMessage() const{ return m_message; }

    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline void SetMessage(const Message& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline void SetMessage(Message&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline MessageGroup& WithMessage(const Message& value) { SetMessage(value); return *this;}

    /**
     * <p>The primary message that Amazon Lex should send to the user.</p>
     */
    inline MessageGroup& WithMessage(Message&& value) { SetMessage(std::move(value)); return *this;}


    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline const Aws::Vector<Message>& GetVariations() const{ return m_variations; }

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline bool VariationsHasBeenSet() const { return m_variationsHasBeenSet; }

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline void SetVariations(const Aws::Vector<Message>& value) { m_variationsHasBeenSet = true; m_variations = value; }

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline void SetVariations(Aws::Vector<Message>&& value) { m_variationsHasBeenSet = true; m_variations = std::move(value); }

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline MessageGroup& WithVariations(const Aws::Vector<Message>& value) { SetVariations(value); return *this;}

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline MessageGroup& WithVariations(Aws::Vector<Message>&& value) { SetVariations(std::move(value)); return *this;}

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline MessageGroup& AddVariations(const Message& value) { m_variationsHasBeenSet = true; m_variations.push_back(value); return *this; }

    /**
     * <p>Message variations to send to the user. When variations are defined, Amazon
     * Lex chooses the primary message or one of the variations to send to the
     * user.</p>
     */
    inline MessageGroup& AddVariations(Message&& value) { m_variationsHasBeenSet = true; m_variations.push_back(std::move(value)); return *this; }

  private:

    Message m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Message> m_variations;
    bool m_variationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
