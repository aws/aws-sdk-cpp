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
   * <p>A notification from the client that it is disconnecting from Amazon Lex V2.
   * Sending a <code>DisconnectionEvent</code> event is optional, but can help
   * identify a conversation in logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/DisconnectionEvent">AWS
   * API Reference</a></p>
   */
  class DisconnectionEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API DisconnectionEvent();
    AWS_LEXRUNTIMEV2_API DisconnectionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API DisconnectionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DisconnectionEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline DisconnectionEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline DisconnectionEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


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
    inline DisconnectionEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis;
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
