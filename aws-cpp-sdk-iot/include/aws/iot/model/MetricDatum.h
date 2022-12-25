/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/MetricValue.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricDatum">AWS API
   * Reference</a></p>
   */
  class MetricDatum
  {
  public:
    AWS_IOT_API MetricDatum();
    AWS_IOT_API MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the metric value was reported.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the metric value was reported.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the metric value was reported.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the metric value was reported.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time the metric value was reported.</p>
     */
    inline MetricDatum& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time the metric value was reported.</p>
     */
    inline MetricDatum& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The value reported for the metric.</p>
     */
    inline const MetricValue& GetValue() const{ return m_value; }

    /**
     * <p>The value reported for the metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value reported for the metric.</p>
     */
    inline void SetValue(const MetricValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value reported for the metric.</p>
     */
    inline void SetValue(MetricValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value reported for the metric.</p>
     */
    inline MetricDatum& WithValue(const MetricValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value reported for the metric.</p>
     */
    inline MetricDatum& WithValue(MetricValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    MetricValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
