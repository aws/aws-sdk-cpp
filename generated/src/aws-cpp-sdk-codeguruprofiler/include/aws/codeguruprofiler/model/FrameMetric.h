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
   * <p> The frame name, metric type, and thread states. These are used to derive the
   * value of the metric for the frame.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/FrameMetric">AWS
   * API Reference</a></p>
   */
  class FrameMetric
  {
  public:
    AWS_CODEGURUPROFILER_API FrameMetric() = default;
    AWS_CODEGURUPROFILER_API FrameMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API FrameMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the method common across the multiple occurrences of a frame in an
     * application profile.</p>
     */
    inline const Aws::String& GetFrameName() const { return m_frameName; }
    inline bool FrameNameHasBeenSet() const { return m_frameNameHasBeenSet; }
    template<typename FrameNameT = Aws::String>
    void SetFrameName(FrameNameT&& value) { m_frameNameHasBeenSet = true; m_frameName = std::forward<FrameNameT>(value); }
    template<typename FrameNameT = Aws::String>
    FrameMetric& WithFrameName(FrameNameT&& value) { SetFrameName(std::forward<FrameNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of application runtime thread states used to get the counts for a frame
     * a derive a metric value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThreadStates() const { return m_threadStates; }
    inline bool ThreadStatesHasBeenSet() const { return m_threadStatesHasBeenSet; }
    template<typename ThreadStatesT = Aws::Vector<Aws::String>>
    void SetThreadStates(ThreadStatesT&& value) { m_threadStatesHasBeenSet = true; m_threadStates = std::forward<ThreadStatesT>(value); }
    template<typename ThreadStatesT = Aws::Vector<Aws::String>>
    FrameMetric& WithThreadStates(ThreadStatesT&& value) { SetThreadStates(std::forward<ThreadStatesT>(value)); return *this;}
    template<typename ThreadStatesT = Aws::String>
    FrameMetric& AddThreadStates(ThreadStatesT&& value) { m_threadStatesHasBeenSet = true; m_threadStates.emplace_back(std::forward<ThreadStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A type of aggregation that specifies how a metric for a frame is analyzed.
     * The supported value <code>AggregatedRelativeTotalTime</code> is an aggregation
     * of the metric value for one frame that is calculated across the occurrences of
     * all frames in a profile. </p>
     */
    inline MetricType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MetricType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FrameMetric& WithType(MetricType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_frameName;
    bool m_frameNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_threadStates;
    bool m_threadStatesHasBeenSet = false;

    MetricType m_type{MetricType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
