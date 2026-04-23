/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>In a <a>GetSampledRequests</a> request, the <code>StartTime</code> and
   * <code>EndTime</code> objects specify the time range for which you want AWS WAF
   * to return a sample of web requests.</p> <p>In a <a>GetSampledRequests</a>
   * response, the <code>StartTime</code> and <code>EndTime</code> objects specify
   * the time range for which AWS WAF actually returned a sample of web requests. AWS
   * WAF gets the specified number of requests from among the first 5,000 requests
   * that your AWS resource receives during the specified time period. If your
   * resource receives more than 5,000 requests during that period, AWS WAF stops
   * sampling after the 5,000th request. In that case, <code>EndTime</code> is the
   * time that AWS WAF received the 5,000th request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/TimeWindow">AWS API
   * Reference</a></p>
   */
  class AWS_WAF_API TimeWindow
  {
  public:
    TimeWindow();
    TimeWindow(Aws::Utils::Json::JsonView jsonValue);
    TimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline TimeWindow& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your AWS
     * resource received. Specify the date and time in the following format:
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline TimeWindow& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline TimeWindow& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your AWS resource received. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline TimeWindow& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
