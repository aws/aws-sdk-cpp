/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/JobEventType.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Details about the type and time events occurred related to the Amazon Braket
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/JobEventDetails">AWS
   * API Reference</a></p>
   */
  class JobEventDetails
  {
  public:
    AWS_BRAKET_API JobEventDetails();
    AWS_BRAKET_API JobEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API JobEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event that occurred related to the Amazon Braket job.</p>
     */
    inline const JobEventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const JobEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(JobEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline JobEventDetails& WithEventType(const JobEventType& value) { SetEventType(value); return *this;}
    inline JobEventDetails& WithEventType(JobEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the event that occurred related to the Amazon Braket
     * job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline JobEventDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline JobEventDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline JobEventDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event that occurred related to the Amazon Braket job.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOfEvent() const{ return m_timeOfEvent; }
    inline bool TimeOfEventHasBeenSet() const { return m_timeOfEventHasBeenSet; }
    inline void SetTimeOfEvent(const Aws::Utils::DateTime& value) { m_timeOfEventHasBeenSet = true; m_timeOfEvent = value; }
    inline void SetTimeOfEvent(Aws::Utils::DateTime&& value) { m_timeOfEventHasBeenSet = true; m_timeOfEvent = std::move(value); }
    inline JobEventDetails& WithTimeOfEvent(const Aws::Utils::DateTime& value) { SetTimeOfEvent(value); return *this;}
    inline JobEventDetails& WithTimeOfEvent(Aws::Utils::DateTime&& value) { SetTimeOfEvent(std::move(value)); return *this;}
    ///@}
  private:

    JobEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_timeOfEvent;
    bool m_timeOfEventHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
