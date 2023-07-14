﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ChannelNameCondition.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEO_API ListSignalingChannelsRequest : public KinesisVideoRequest
  {
  public:
    ListSignalingChannelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSignalingChannels"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of channels to return in the response. The default is
     * 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channels to return in the response. The default is
     * 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channels to return in the response. The default is
     * 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channels to return in the response. The default is
     * 500.</p>
     */
    inline ListSignalingChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline ListSignalingChannelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline ListSignalingChannelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline ListSignalingChannelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline const ChannelNameCondition& GetChannelNameCondition() const{ return m_channelNameCondition; }

    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline bool ChannelNameConditionHasBeenSet() const { return m_channelNameConditionHasBeenSet; }

    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline void SetChannelNameCondition(const ChannelNameCondition& value) { m_channelNameConditionHasBeenSet = true; m_channelNameCondition = value; }

    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline void SetChannelNameCondition(ChannelNameCondition&& value) { m_channelNameConditionHasBeenSet = true; m_channelNameCondition = std::move(value); }

    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline ListSignalingChannelsRequest& WithChannelNameCondition(const ChannelNameCondition& value) { SetChannelNameCondition(value); return *this;}

    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline ListSignalingChannelsRequest& WithChannelNameCondition(ChannelNameCondition&& value) { SetChannelNameCondition(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    ChannelNameCondition m_channelNameCondition;
    bool m_channelNameConditionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
