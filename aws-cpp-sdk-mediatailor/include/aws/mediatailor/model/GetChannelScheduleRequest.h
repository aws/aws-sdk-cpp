/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class GetChannelScheduleRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API GetChannelScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannelSchedule"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

    AWS_MEDIATAILOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline const Aws::String& GetDurationMinutes() const{ return m_durationMinutes; }

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline void SetDurationMinutes(const Aws::String& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline void SetDurationMinutes(Aws::String&& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = std::move(value); }

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline void SetDurationMinutes(const char* value) { m_durationMinutesHasBeenSet = true; m_durationMinutes.assign(value); }

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(const Aws::String& value) { SetDurationMinutes(value); return *this;}

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(Aws::String&& value) { SetDurationMinutes(std::move(value)); return *this;}

    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(const char* value) { SetDurationMinutes(value); return *this;}


    /**
     * <p>The maximum number of channel schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> channel schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channel schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> channel schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channel schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> channel schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channel schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> channel schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline GetChannelScheduleRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_durationMinutes;
    bool m_durationMinutesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
