/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/ChangeDirectionEnum.h>
#include <aws/evidently/model/MetricDefinition.h>
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
   * <p>A structure that tells Evidently whether higher or lower values are desired
   * for a metric that is used in an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricGoal">AWS
   * API Reference</a></p>
   */
  class MetricGoal
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal();
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline const ChangeDirectionEnum& GetDesiredChange() const{ return m_desiredChange; }

    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline bool DesiredChangeHasBeenSet() const { return m_desiredChangeHasBeenSet; }

    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline void SetDesiredChange(const ChangeDirectionEnum& value) { m_desiredChangeHasBeenSet = true; m_desiredChange = value; }

    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline void SetDesiredChange(ChangeDirectionEnum&& value) { m_desiredChangeHasBeenSet = true; m_desiredChange = std::move(value); }

    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline MetricGoal& WithDesiredChange(const ChangeDirectionEnum& value) { SetDesiredChange(value); return *this;}

    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline MetricGoal& WithDesiredChange(ChangeDirectionEnum&& value) { SetDesiredChange(std::move(value)); return *this;}


    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline const MetricDefinition& GetMetricDefinition() const{ return m_metricDefinition; }

    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }

    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline void SetMetricDefinition(const MetricDefinition& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = value; }

    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline void SetMetricDefinition(MetricDefinition&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::move(value); }

    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline MetricGoal& WithMetricDefinition(const MetricDefinition& value) { SetMetricDefinition(value); return *this;}

    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline MetricGoal& WithMetricDefinition(MetricDefinition&& value) { SetMetricDefinition(std::move(value)); return *this;}

  private:

    ChangeDirectionEnum m_desiredChange;
    bool m_desiredChangeHasBeenSet = false;

    MetricDefinition m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
