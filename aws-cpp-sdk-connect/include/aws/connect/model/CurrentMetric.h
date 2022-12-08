/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CurrentMetricName.h>
#include <aws/connect/model/Unit.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a real-time metric. For a description of each
   * metric, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
   * Metrics Definitions</a> in the <i>Amazon Connect Administrator
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetric">AWS
   * API Reference</a></p>
   */
  class CurrentMetric
  {
  public:
    AWS_CONNECT_API CurrentMetric();
    AWS_CONNECT_API CurrentMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CurrentMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const CurrentMetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const CurrentMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(CurrentMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline CurrentMetric& WithName(const CurrentMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CurrentMetric& WithName(CurrentMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric.</p>
     */
    inline CurrentMetric& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline CurrentMetric& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    CurrentMetricName m_name;
    bool m_nameHasBeenSet = false;

    Unit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
