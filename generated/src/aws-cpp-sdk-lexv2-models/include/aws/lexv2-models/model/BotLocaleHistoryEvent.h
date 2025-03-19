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
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent() = default;
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleHistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the event that occurred.</p>
     */
    inline const Aws::String& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = Aws::String>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = Aws::String>
    BotLocaleHistoryEvent& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventDate() const { return m_eventDate; }
    inline bool EventDateHasBeenSet() const { return m_eventDateHasBeenSet; }
    template<typename EventDateT = Aws::Utils::DateTime>
    void SetEventDate(EventDateT&& value) { m_eventDateHasBeenSet = true; m_eventDate = std::forward<EventDateT>(value); }
    template<typename EventDateT = Aws::Utils::DateTime>
    BotLocaleHistoryEvent& WithEventDate(EventDateT&& value) { SetEventDate(std::forward<EventDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::Utils::DateTime m_eventDate{};
    bool m_eventDateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
