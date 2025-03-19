/**
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
  class ListSignalingChannelsRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API ListSignalingChannelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSignalingChannels"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of channels to return in the response. The default is
     * 500.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSignalingChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListSignalingChannels</code> operation is truncated, the call returns the
     * <code>NextToken</code> in the response. To get another batch of channels,
     * provide this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSignalingChannelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: Returns only the channels that satisfy a specific condition.</p>
     */
    inline const ChannelNameCondition& GetChannelNameCondition() const { return m_channelNameCondition; }
    inline bool ChannelNameConditionHasBeenSet() const { return m_channelNameConditionHasBeenSet; }
    template<typename ChannelNameConditionT = ChannelNameCondition>
    void SetChannelNameCondition(ChannelNameConditionT&& value) { m_channelNameConditionHasBeenSet = true; m_channelNameCondition = std::forward<ChannelNameConditionT>(value); }
    template<typename ChannelNameConditionT = ChannelNameCondition>
    ListSignalingChannelsRequest& WithChannelNameCondition(ChannelNameConditionT&& value) { SetChannelNameCondition(std::forward<ChannelNameConditionT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ChannelNameCondition m_channelNameCondition;
    bool m_channelNameConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
