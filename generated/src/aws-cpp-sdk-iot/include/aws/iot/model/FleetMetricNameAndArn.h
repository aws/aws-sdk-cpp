/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The name and ARN of a fleet metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/FleetMetricNameAndArn">AWS
   * API Reference</a></p>
   */
  class FleetMetricNameAndArn
  {
  public:
    AWS_IOT_API FleetMetricNameAndArn();
    AWS_IOT_API FleetMetricNameAndArn(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API FleetMetricNameAndArn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fleet metric name.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The fleet metric name.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The fleet metric name.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The fleet metric name.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The fleet metric name.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The fleet metric name.</p>
     */
    inline FleetMetricNameAndArn& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The fleet metric name.</p>
     */
    inline FleetMetricNameAndArn& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The fleet metric name.</p>
     */
    inline FleetMetricNameAndArn& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The fleet metric ARN.</p>
     */
    inline const Aws::String& GetMetricArn() const{ return m_metricArn; }

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline bool MetricArnHasBeenSet() const { return m_metricArnHasBeenSet; }

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline void SetMetricArn(const Aws::String& value) { m_metricArnHasBeenSet = true; m_metricArn = value; }

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline void SetMetricArn(Aws::String&& value) { m_metricArnHasBeenSet = true; m_metricArn = std::move(value); }

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline void SetMetricArn(const char* value) { m_metricArnHasBeenSet = true; m_metricArn.assign(value); }

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline FleetMetricNameAndArn& WithMetricArn(const Aws::String& value) { SetMetricArn(value); return *this;}

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline FleetMetricNameAndArn& WithMetricArn(Aws::String&& value) { SetMetricArn(std::move(value)); return *this;}

    /**
     * <p>The fleet metric ARN.</p>
     */
    inline FleetMetricNameAndArn& WithMetricArn(const char* value) { SetMetricArn(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricArn;
    bool m_metricArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
