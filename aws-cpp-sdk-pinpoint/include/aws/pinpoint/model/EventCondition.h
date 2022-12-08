/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventDimensions.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the conditions to evaluate for an event that applies to an activity
   * in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventCondition">AWS
   * API Reference</a></p>
   */
  class EventCondition
  {
  public:
    AWS_PINPOINT_API EventCondition();
    AWS_PINPOINT_API EventCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline const EventDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline void SetDimensions(const EventDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline void SetDimensions(EventDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline EventCondition& WithDimensions(const EventDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline EventCondition& WithDimensions(EventDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline const Aws::String& GetMessageActivity() const{ return m_messageActivity; }

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline bool MessageActivityHasBeenSet() const { return m_messageActivityHasBeenSet; }

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline void SetMessageActivity(const Aws::String& value) { m_messageActivityHasBeenSet = true; m_messageActivity = value; }

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline void SetMessageActivity(Aws::String&& value) { m_messageActivityHasBeenSet = true; m_messageActivity = std::move(value); }

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline void SetMessageActivity(const char* value) { m_messageActivityHasBeenSet = true; m_messageActivity.assign(value); }

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline EventCondition& WithMessageActivity(const Aws::String& value) { SetMessageActivity(value); return *this;}

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline EventCondition& WithMessageActivity(Aws::String&& value) { SetMessageActivity(std::move(value)); return *this;}

    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline EventCondition& WithMessageActivity(const char* value) { SetMessageActivity(value); return *this;}

  private:

    EventDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_messageActivity;
    bool m_messageActivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
