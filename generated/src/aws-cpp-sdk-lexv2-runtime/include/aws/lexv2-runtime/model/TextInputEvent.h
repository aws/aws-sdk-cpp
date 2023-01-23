/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The event sent from your client application to Amazon Lex V2 with text input
   * from the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/TextInputEvent">AWS
   * API Reference</a></p>
   */
  class TextInputEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API TextInputEvent();
    AWS_LEXRUNTIMEV2_API TextInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API TextInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline TextInputEvent& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline TextInputEvent& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text from the user. Amazon Lex V2 processes this as a complete
     * statement.</p>
     */
    inline TextInputEvent& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline TextInputEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline TextInputEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline TextInputEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline long long GetClientTimestampMillis() const{ return m_clientTimestampMillis; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline bool ClientTimestampMillisHasBeenSet() const { return m_clientTimestampMillisHasBeenSet; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline void SetClientTimestampMillis(long long value) { m_clientTimestampMillisHasBeenSet = true; m_clientTimestampMillis = value; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline TextInputEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis;
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
