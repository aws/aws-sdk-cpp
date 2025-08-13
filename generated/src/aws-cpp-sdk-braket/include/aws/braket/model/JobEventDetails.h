/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/JobEventType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Details about the type and time events that occurred related to the Amazon
   * Braket hybrid job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/JobEventDetails">AWS
   * API Reference</a></p>
   */
  class JobEventDetails
  {
  public:
    AWS_BRAKET_API JobEventDetails() = default;
    AWS_BRAKET_API JobEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API JobEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event that occurred related to the Amazon Braket hybrid job.</p>
     */
    inline JobEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(JobEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline JobEventDetails& WithEventType(JobEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the event that occurred related to the Amazon Braket hybrid
     * job.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOfEvent() const { return m_timeOfEvent; }
    inline bool TimeOfEventHasBeenSet() const { return m_timeOfEventHasBeenSet; }
    template<typename TimeOfEventT = Aws::Utils::DateTime>
    void SetTimeOfEvent(TimeOfEventT&& value) { m_timeOfEventHasBeenSet = true; m_timeOfEvent = std::forward<TimeOfEventT>(value); }
    template<typename TimeOfEventT = Aws::Utils::DateTime>
    JobEventDetails& WithTimeOfEvent(TimeOfEventT&& value) { SetTimeOfEvent(std::forward<TimeOfEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the event that occurred related to the Amazon Braket
     * hybrid job.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    JobEventDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    JobEventType m_eventType{JobEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timeOfEvent{};
    bool m_timeOfEventHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
