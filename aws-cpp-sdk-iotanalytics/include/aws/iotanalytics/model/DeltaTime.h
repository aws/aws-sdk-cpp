/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Used to limit data to that which has arrived since the last execution of the
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeltaTime">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DeltaTime
  {
  public:
    DeltaTime();
    DeltaTime(Aws::Utils::Json::JsonView jsonValue);
    DeltaTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds of estimated "in flight" lag time of message data. When
     * you create data set contents using message data from a specified time frame,
     * some message data may still be "in flight" when processing begins, and so will
     * not arrive in time to be processed. Use this field to make allowances for the
     * "in flight" time of your message data, so that data not processed from a
     * previous time frame will be included with the next time frame. Without this,
     * missed message data would be excluded from processing during the next time frame
     * as well, because its timestamp places it within the previous time frame.</p>
     */
    inline int GetOffsetSeconds() const{ return m_offsetSeconds; }

    /**
     * <p>The number of seconds of estimated "in flight" lag time of message data. When
     * you create data set contents using message data from a specified time frame,
     * some message data may still be "in flight" when processing begins, and so will
     * not arrive in time to be processed. Use this field to make allowances for the
     * "in flight" time of your message data, so that data not processed from a
     * previous time frame will be included with the next time frame. Without this,
     * missed message data would be excluded from processing during the next time frame
     * as well, because its timestamp places it within the previous time frame.</p>
     */
    inline bool OffsetSecondsHasBeenSet() const { return m_offsetSecondsHasBeenSet; }

    /**
     * <p>The number of seconds of estimated "in flight" lag time of message data. When
     * you create data set contents using message data from a specified time frame,
     * some message data may still be "in flight" when processing begins, and so will
     * not arrive in time to be processed. Use this field to make allowances for the
     * "in flight" time of your message data, so that data not processed from a
     * previous time frame will be included with the next time frame. Without this,
     * missed message data would be excluded from processing during the next time frame
     * as well, because its timestamp places it within the previous time frame.</p>
     */
    inline void SetOffsetSeconds(int value) { m_offsetSecondsHasBeenSet = true; m_offsetSeconds = value; }

    /**
     * <p>The number of seconds of estimated "in flight" lag time of message data. When
     * you create data set contents using message data from a specified time frame,
     * some message data may still be "in flight" when processing begins, and so will
     * not arrive in time to be processed. Use this field to make allowances for the
     * "in flight" time of your message data, so that data not processed from a
     * previous time frame will be included with the next time frame. Without this,
     * missed message data would be excluded from processing during the next time frame
     * as well, because its timestamp places it within the previous time frame.</p>
     */
    inline DeltaTime& WithOffsetSeconds(int value) { SetOffsetSeconds(value); return *this;}


    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline const Aws::String& GetTimeExpression() const{ return m_timeExpression; }

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline bool TimeExpressionHasBeenSet() const { return m_timeExpressionHasBeenSet; }

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline void SetTimeExpression(const Aws::String& value) { m_timeExpressionHasBeenSet = true; m_timeExpression = value; }

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline void SetTimeExpression(Aws::String&& value) { m_timeExpressionHasBeenSet = true; m_timeExpression = std::move(value); }

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline void SetTimeExpression(const char* value) { m_timeExpressionHasBeenSet = true; m_timeExpression.assign(value); }

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline DeltaTime& WithTimeExpression(const Aws::String& value) { SetTimeExpression(value); return *this;}

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline DeltaTime& WithTimeExpression(Aws::String&& value) { SetTimeExpression(std::move(value)); return *this;}

    /**
     * <p>An expression by which the time of the message data may be determined. This
     * may be the name of a timestamp field, or a SQL expression which is used to
     * derive the time the message data was generated.</p>
     */
    inline DeltaTime& WithTimeExpression(const char* value) { SetTimeExpression(value); return *this;}

  private:

    int m_offsetSeconds;
    bool m_offsetSecondsHasBeenSet;

    Aws::String m_timeExpression;
    bool m_timeExpressionHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
