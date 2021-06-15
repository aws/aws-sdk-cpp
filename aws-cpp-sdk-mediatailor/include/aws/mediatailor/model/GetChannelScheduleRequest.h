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
  class AWS_MEDIATAILOR_API GetChannelScheduleRequest : public MediaTailorRequest
  {
  public:
    GetChannelScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannelSchedule"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline GetChannelScheduleRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline const Aws::String& GetDurationMinutes() const{ return m_durationMinutes; }

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline void SetDurationMinutes(const Aws::String& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline void SetDurationMinutes(Aws::String&& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = std::move(value); }

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline void SetDurationMinutes(const char* value) { m_durationMinutesHasBeenSet = true; m_durationMinutes.assign(value); }

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(const Aws::String& value) { SetDurationMinutes(value); return *this;}

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(Aws::String&& value) { SetDurationMinutes(std::move(value)); return *this;}

    /**
     * <p>The schedule duration in minutes. The maximum duration is 4320 minutes (three
     * days).</p>
     */
    inline GetChannelScheduleRequest& WithDurationMinutes(const char* value) { SetDurationMinutes(value); return *this;}


    /**
     * <p>Upper bound on number of records to return. The maximum number of results is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Upper bound on number of records to return. The maximum number of results is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Upper bound on number of records to return. The maximum number of results is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Upper bound on number of records to return. The maximum number of results is
     * 100.</p>
     */
    inline GetChannelScheduleRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token from the GET list request. Use the token to fetch the next
     * page of results.</p>
     */
    inline GetChannelScheduleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::String m_durationMinutes;
    bool m_durationMinutesHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
