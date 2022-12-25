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
   * <p>A DTMF character sent from the client application. DTMF characters are
   * typically sent from a phone keypad to represent numbers. For example, you can
   * have Amazon Lex V2 process a credit card number input from a
   * phone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/DTMFInputEvent">AWS
   * API Reference</a></p>
   */
  class DTMFInputEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API DTMFInputEvent();
    AWS_LEXRUNTIMEV2_API DTMFInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API DTMFInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline const Aws::String& GetInputCharacter() const{ return m_inputCharacter; }

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline bool InputCharacterHasBeenSet() const { return m_inputCharacterHasBeenSet; }

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline void SetInputCharacter(const Aws::String& value) { m_inputCharacterHasBeenSet = true; m_inputCharacter = value; }

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline void SetInputCharacter(Aws::String&& value) { m_inputCharacterHasBeenSet = true; m_inputCharacter = std::move(value); }

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline void SetInputCharacter(const char* value) { m_inputCharacterHasBeenSet = true; m_inputCharacter.assign(value); }

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline DTMFInputEvent& WithInputCharacter(const Aws::String& value) { SetInputCharacter(value); return *this;}

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline DTMFInputEvent& WithInputCharacter(Aws::String&& value) { SetInputCharacter(std::move(value)); return *this;}

    /**
     * <p>The DTMF character that the user pressed. The allowed characters are A - D, 0
     * - 9, # and *.</p>
     */
    inline DTMFInputEvent& WithInputCharacter(const char* value) { SetInputCharacter(value); return *this;}


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
    inline DTMFInputEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline DTMFInputEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline DTMFInputEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


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
    inline DTMFInputEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}

  private:

    Aws::String m_inputCharacter;
    bool m_inputCharacterHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis;
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
