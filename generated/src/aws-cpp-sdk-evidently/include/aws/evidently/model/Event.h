/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evidently/model/EventType.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains the information about one evaluation event or
   * custom event sent to Evidently. This is a JSON payload. If this event specifies
   * a pre-defined event type, the payload must follow the defined event
   * schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Event();
    AWS_CLOUDWATCHEVIDENTLY_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event data.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The event data.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The event data.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The event data.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The event data.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The event data.</p>
     */
    inline Event& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The event data.</p>
     */
    inline Event& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The event data.</p>
     */
    inline Event& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The timestamp of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline Event& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the event.</p>
     */
    inline Event& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline const EventType& GetType() const{ return m_type; }

    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline void SetType(const EventType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline void SetType(EventType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline Event& WithType(const EventType& value) { SetType(value); return *this;}

    /**
     * <p> <code>aws.evidently.evaluation</code> specifies an evaluation event, which
     * determines which feature variation that a user sees.
     * <code>aws.evidently.custom</code> specifies a custom event, which generates
     * metrics from user actions such as clicks and checkouts.</p>
     */
    inline Event& WithType(EventType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    EventType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
