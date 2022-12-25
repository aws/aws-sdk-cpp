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
    AWS_CODEGURUPROFILER_API GetProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfile"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CODEGURUPROFILER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline const Aws::String& GetAccept() const{ return m_accept; }

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
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

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
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

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
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

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
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

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
    inline GetProfileRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

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
    inline GetProfileRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

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
    inline GetProfileRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline GetProfileRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the requested profile. Specify using the ISO 8601 format.
     * For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p> <p> If you specify <code>endTime</code>, then you must also
     * specify <code>period</code> or <code>startTime</code>, but not both. </p>
     */
    inline GetProfileRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The maximum depth of the stacks in the code that is represented in the
     * aggregated profile. For example, if CodeGuru Profiler finds a method
     * <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the aggregated profile contains
     * representations of methods <code>A</code> and <code>B</code>. </p>
     */
    inline int GetMaxDepth() const{ return m_maxDepth; }

    /**
     * <p> The maximum depth of the stacks in the code that is represented in the
     * aggregated profile. For example, if CodeGuru Profiler finds a method
     * <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the aggregated profile contains
     * representations of methods <code>A</code> and <code>B</code>. </p>
     */
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }

    /**
     * <p> The maximum depth of the stacks in the code that is represented in the
     * aggregated profile. For example, if CodeGuru Profiler finds a method
     * <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the aggregated profile contains
     * representations of methods <code>A</code> and <code>B</code>. </p>
     */
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }

    /**
     * <p> The maximum depth of the stacks in the code that is represented in the
     * aggregated profile. For example, if CodeGuru Profiler finds a method
     * <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the aggregated profile contains
     * representations of methods <code>A</code> and <code>B</code>. </p>
     */
    inline GetProfileRequest& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}


    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetPeriod() const{ return m_period; }

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetPeriod(const Aws::String& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetPeriod(Aws::String&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetPeriod(const char* value) { m_periodHasBeenSet = true; m_period.assign(value); }

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline GetProfileRequest& WithPeriod(const Aws::String& value) { SetPeriod(value); return *this;}

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline GetProfileRequest& WithPeriod(Aws::String&& value) { SetPeriod(std::move(value)); return *this;}

    /**
     * <p> Used with <code>startTime</code> or <code>endTime</code> to specify the time
     * range for the returned aggregated profile. Specify using the ISO 8601 format.
     * For example, <code>P1DT1H1M1S</code>. </p> <pre><code> &lt;p&gt; To get the
     * latest aggregated profile, specify only &lt;code&gt;period&lt;/code&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline GetProfileRequest& WithPeriod(const char* value) { SetPeriod(value); return *this;}


    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline GetProfileRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline GetProfileRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group to get.</p>
     */
    inline GetProfileRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline GetProfileRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the profile to get. Specify using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p> <pre><code> &lt;p&gt; If you specify
     * &lt;code&gt;startTime&lt;/code&gt;, then you must also specify
     * &lt;code&gt;period&lt;/code&gt; or &lt;code&gt;endTime&lt;/code&gt;, but not
     * both. &lt;/p&gt; </code></pre>
     */
    inline GetProfileRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxDepth;
    bool m_maxDepthHasBeenSet = false;

    Aws::String m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
