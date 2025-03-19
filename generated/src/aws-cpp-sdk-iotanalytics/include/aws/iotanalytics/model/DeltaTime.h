/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeltaTime
  {
  public:
    AWS_IOTANALYTICS_API DeltaTime() = default;
    AWS_IOTANALYTICS_API DeltaTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DeltaTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds of estimated in-flight lag time of message data. When
     * you create dataset contents using message data from a specified timeframe, some
     * message data might still be in flight when processing begins, and so do not
     * arrive in time to be processed. Use this field to make allowances for the in
     * flight time of your message data, so that data not processed from a previous
     * timeframe is included with the next timeframe. Otherwise, missed message data
     * would be excluded from processing during the next timeframe too, because its
     * timestamp places it within the previous timeframe.</p>
     */
    inline int GetOffsetSeconds() const { return m_offsetSeconds; }
    inline bool OffsetSecondsHasBeenSet() const { return m_offsetSecondsHasBeenSet; }
    inline void SetOffsetSeconds(int value) { m_offsetSecondsHasBeenSet = true; m_offsetSeconds = value; }
    inline DeltaTime& WithOffsetSeconds(int value) { SetOffsetSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression by which the time of the message data might be determined. This
     * can be the name of a timestamp field or a SQL expression that is used to derive
     * the time the message data was generated.</p>
     */
    inline const Aws::String& GetTimeExpression() const { return m_timeExpression; }
    inline bool TimeExpressionHasBeenSet() const { return m_timeExpressionHasBeenSet; }
    template<typename TimeExpressionT = Aws::String>
    void SetTimeExpression(TimeExpressionT&& value) { m_timeExpressionHasBeenSet = true; m_timeExpression = std::forward<TimeExpressionT>(value); }
    template<typename TimeExpressionT = Aws::String>
    DeltaTime& WithTimeExpression(TimeExpressionT&& value) { SetTimeExpression(std::forward<TimeExpressionT>(value)); return *this;}
    ///@}
  private:

    int m_offsetSeconds{0};
    bool m_offsetSecondsHasBeenSet = false;

    Aws::String m_timeExpression;
    bool m_timeExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
