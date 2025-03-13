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
    AWS_IOT_API FleetMetricNameAndArn() = default;
    AWS_IOT_API FleetMetricNameAndArn(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API FleetMetricNameAndArn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fleet metric name.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    FleetMetricNameAndArn& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet metric ARN.</p>
     */
    inline const Aws::String& GetMetricArn() const { return m_metricArn; }
    inline bool MetricArnHasBeenSet() const { return m_metricArnHasBeenSet; }
    template<typename MetricArnT = Aws::String>
    void SetMetricArn(MetricArnT&& value) { m_metricArnHasBeenSet = true; m_metricArn = std::forward<MetricArnT>(value); }
    template<typename MetricArnT = Aws::String>
    FleetMetricNameAndArn& WithMetricArn(MetricArnT&& value) { SetMetricArn(std::forward<MetricArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricArn;
    bool m_metricArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
