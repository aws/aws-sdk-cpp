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
   * <p>Request for GetProfile operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfileRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API GetProfileRequest : public CodeGuruProfilerRequest
  {
  public:
    GetProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfile"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline GetProfileRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline GetProfileRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The format of the profile to return. Supports application/json or
     * application/x-amzn-ion. Defaults to application/x-amzn-ion.</p>
     */
    inline GetProfileRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline GetProfileRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the profile to get. Either period or endTime must be
     * specified. Must be greater than start and the overall time range to be in the
     * past and not larger than a week.</p>
     */
    inline GetProfileRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline int GetMaxDepth() const{ return m_maxDepth; }

    
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }

    
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }

    
    inline GetProfileRequest& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}


    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline const Aws::String& GetPeriod() const{ return m_period; }

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline void SetPeriod(const Aws::String& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline void SetPeriod(Aws::String&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline void SetPeriod(const char* value) { m_periodHasBeenSet = true; m_period.assign(value); }

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline GetProfileRequest& WithPeriod(const Aws::String& value) { SetPeriod(value); return *this;}

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline GetProfileRequest& WithPeriod(Aws::String&& value) { SetPeriod(std::move(value)); return *this;}

    /**
     * <p>The period of the profile to get. Exactly two of <code>startTime</code>,
     * <code>period</code> and <code>endTime</code> must be specified. Must be positive
     * and the overall time range to be in the past and not larger than a week.</p>
     */
    inline GetProfileRequest& WithPeriod(const char* value) { SetPeriod(value); return *this;}


    
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    
    inline GetProfileRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    
    inline GetProfileRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    
    inline GetProfileRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The start time of the profile to get.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the profile to get.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the profile to get.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the profile to get.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the profile to get.</p>
     */
    inline GetProfileRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the profile to get.</p>
     */
    inline GetProfileRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_accept;
    bool m_acceptHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    int m_maxDepth;
    bool m_maxDepthHasBeenSet;

    Aws::String m_period;
    bool m_periodHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
