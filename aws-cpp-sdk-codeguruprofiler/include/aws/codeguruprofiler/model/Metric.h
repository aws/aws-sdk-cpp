/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/MetricType.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Details about the metric that the analysis used when it detected the
   * anomaly. The metric what is analyzed to create recommendations. It includes the
   * name of the frame that was analyzed and the type and thread states used to
   * derive the metric value for that frame. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Metric">AWS
   * API Reference</a></p>
   */
  class Metric
  {
  public:
    AWS_CODEGURUPROFILER_API Metric();
    AWS_CODEGURUPROFILER_API Metric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Metric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline const Aws::String& GetFrameName() const{ return m_frameName; }

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline bool FrameNameHasBeenSet() const { return m_frameNameHasBeenSet; }

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline void SetFrameName(const Aws::String& value) { m_frameNameHasBeenSet = true; m_frameName = value; }

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline void SetFrameName(Aws::String&& value) { m_frameNameHasBeenSet = true; m_frameName = std::move(value); }

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline void SetFrameName(const char* value) { m_frameNameHasBeenSet = true; m_frameName.assign(value); }

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline Metric& WithFrameName(const Aws::String& value) { SetFrameName(value); return *this;}

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline Metric& WithFrameName(Aws::String&& value) { SetFrameName(std::move(value)); return *this;}

    /**
     * <p> The name of the method that appears as a frame in any stack in a profile.
     * </p>
     */
    inline Metric& WithFrameName(const char* value) { SetFrameName(value); return *this;}


    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline const Aws::Vector<Aws::String>& GetThreadStates() const{ return m_threadStates; }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline bool ThreadStatesHasBeenSet() const { return m_threadStatesHasBeenSet; }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline void SetThreadStates(const Aws::Vector<Aws::String>& value) { m_threadStatesHasBeenSet = true; m_threadStates = value; }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline void SetThreadStates(Aws::Vector<Aws::String>&& value) { m_threadStatesHasBeenSet = true; m_threadStates = std::move(value); }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline Metric& WithThreadStates(const Aws::Vector<Aws::String>& value) { SetThreadStates(value); return *this;}

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline Metric& WithThreadStates(Aws::Vector<Aws::String>&& value) { SetThreadStates(std::move(value)); return *this;}

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline Metric& AddThreadStates(const Aws::String& value) { m_threadStatesHasBeenSet = true; m_threadStates.push_back(value); return *this; }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline Metric& AddThreadStates(Aws::String&& value) { m_threadStatesHasBeenSet = true; m_threadStates.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of application runtime thread states that is used to calculate the
     * metric value for the frame. </p>
     */
    inline Metric& AddThreadStates(const char* value) { m_threadStatesHasBeenSet = true; m_threadStates.push_back(value); return *this; }


    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline const MetricType& GetType() const{ return m_type; }

    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline void SetType(const MetricType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline void SetType(MetricType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline Metric& WithType(const MetricType& value) { SetType(value); return *this;}

    /**
     * <p> A type that specifies how a metric for a frame is analyzed. The supported
     * value <code>AggregatedRelativeTotalTime</code> is an aggregation of the metric
     * value for one frame that is calculated across the occurences of all frames in a
     * profile.</p>
     */
    inline Metric& WithType(MetricType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_frameName;
    bool m_frameNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_threadStates;
    bool m_threadStatesHasBeenSet = false;

    MetricType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
