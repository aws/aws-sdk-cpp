/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>

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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Contains information about a timestamp.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/TimestampValue">AWS
   * API Reference</a></p>
   */
  class TimestampValue
  {
  public:
    AWS_IOTEVENTSDATA_API TimestampValue();
    AWS_IOTEVENTSDATA_API TimestampValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API TimestampValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the timestamp, in the Unix epoch format.</p>
     */
    inline long long GetTimeInMillis() const{ return m_timeInMillis; }

    /**
     * <p>The value of the timestamp, in the Unix epoch format.</p>
     */
    inline bool TimeInMillisHasBeenSet() const { return m_timeInMillisHasBeenSet; }

    /**
     * <p>The value of the timestamp, in the Unix epoch format.</p>
     */
    inline void SetTimeInMillis(long long value) { m_timeInMillisHasBeenSet = true; m_timeInMillis = value; }

    /**
     * <p>The value of the timestamp, in the Unix epoch format.</p>
     */
    inline TimestampValue& WithTimeInMillis(long long value) { SetTimeInMillis(value); return *this;}

  private:

    long long m_timeInMillis;
    bool m_timeInMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
