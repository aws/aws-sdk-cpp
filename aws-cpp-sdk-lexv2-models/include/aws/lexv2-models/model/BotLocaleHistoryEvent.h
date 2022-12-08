/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides information about an event that occurred affecting the bot
   * locale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleHistoryEvent">AWS
   * API Reference</a></p>
   */
  class BotLocaleHistoryEvent
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent();
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the event that occurred.</p>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline BotLocaleHistoryEvent& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline BotLocaleHistoryEvent& WithEvent(Aws::String&& value) { SetEvent(std::move(value)); return *this;}

    /**
     * <p>A description of the event that occurred.</p>
     */
    inline BotLocaleHistoryEvent& WithEvent(const char* value) { SetEvent(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventDate() const{ return m_eventDate; }

    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline bool EventDateHasBeenSet() const { return m_eventDateHasBeenSet; }

    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline void SetEventDate(const Aws::Utils::DateTime& value) { m_eventDateHasBeenSet = true; m_eventDate = value; }

    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline void SetEventDate(Aws::Utils::DateTime&& value) { m_eventDateHasBeenSet = true; m_eventDate = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline BotLocaleHistoryEvent& WithEventDate(const Aws::Utils::DateTime& value) { SetEventDate(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline BotLocaleHistoryEvent& WithEventDate(Aws::Utils::DateTime&& value) { SetEventDate(std::move(value)); return *this;}

  private:

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::Utils::DateTime m_eventDate;
    bool m_eventDateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
