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
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class ListPrefetchSchedulesRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ListPrefetchSchedulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrefetchSchedules"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of prefetch schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> prefetch schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of prefetch schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> prefetch schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of prefetch schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> prefetch schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of prefetch schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> prefetch schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline ListPrefetchSchedulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline ListPrefetchSchedulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline ListPrefetchSchedulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline ListPrefetchSchedulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline ListPrefetchSchedulesRequest& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline ListPrefetchSchedulesRequest& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline ListPrefetchSchedulesRequest& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}


    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline ListPrefetchSchedulesRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline ListPrefetchSchedulesRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline ListPrefetchSchedulesRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
