/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the getProfileRequest.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfileRequest">AWS
   * API Reference</a></p>
   */
  class GetProfileRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API GetProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfile"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CODEGURUPROFILER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The format of the returned profiling data. The format maps to the
     * <code>Accept</code> and <code>Content-Type</code> headers of the HTTP request.
     * You can specify one of the following: or the default . </p> <pre><code>
     * &lt;ul&gt; &lt;li&gt; &lt;p&gt; &lt;code&gt;application/json&lt;/code&gt; —
     * standard JSON format &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;
     * &lt;code&gt;application/x-amzn-ion&lt;/code&gt; — the Amazon Ion data format.
     * For more information, see &lt;a
     * href=&quot;http://amzn.github.io/ion-docs/&quot;&gt;Amazon Ion&lt;/a&gt;.
     * &lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; </code></pre>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    GetProfileRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetProfileRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum depth of the stacks in the code that is represented in the
     * aggregated profile. For example, if CodeGuru Profiler finds a method
     * <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the aggregated profile contains
     * representations of methods <code>A</code> and <code>B</code>. </p>
     */
    inline int GetMaxDepth() const { return m_maxDepth; }
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }
    inline GetProfileRequest& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    template<typename PeriodT = Aws::String>
    void SetPeriod(PeriodT&& value) { m_periodHasBeenSet = true; m_period = std::forward<PeriodT>(value); }
    template<typename PeriodT = Aws::String>
    GetProfileRequest& WithPeriod(PeriodT&& value) { SetPeriod(std::forward<PeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    GetProfileRequest& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetProfileRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_maxDepth{0};
    bool m_maxDepthHasBeenSet = false;

    Aws::String m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
